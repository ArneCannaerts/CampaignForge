
# CampaignForge

CampaignForge is a C++/Qt application for creating and managing tabletop RPG campaigns. It is designed as a general-purpose campaign builder, with D&D 5e serving as the initial/default ruleset. The long-term goal is to support custom rulesets without tying the core campaign and character data to one system.

## Current progress

The project is currently focused on building the core data model before expanding the user interface and gameplay systems.

### Core structure
- Character hierarchy: `Character`, `PlayerCharacter`, `NPC` and `Enemy`
- Campaign structure: `Campaign` and `Player`
- World structure: `Map`, `Location`, `POI`, `Biome`, `Forest`, `Mountains`, `City` and `Castle`
- Character stats stored through `CharacterStat` and `CharacterStats`
- Dice rolling using the C++ `<random>` library

### Inventory and items

The initial inventory system and item hierarchy are being established:
- `Item` as the polymorphic base class
- `Inventory` for storing items by `ItemID`
- `Weapon`, `Armor`, `Consumable`, `Material` and `Equipment` as specialized item classes
- Shared inventory enums, plus damage and character-stat enums where needed

The item classes currently provide their basic data and interfaces. More advanced behaviour, such as applying consumable effects, resolving damage and managing equipped slots on a character, will be developed in later systems.

### Next development focus: Character progression

The next milestone is the character progression foundation:
- Character identity, level and experience
- Current and maximum health, damage, healing and alive-state checks
- Stat modifier calculations through the active ruleset
- Experience thresholds and level-up handling

See [ROADMAP.md](ROADMAP.md) for the planned milestones and requirements.

## Technical stack

- **Language:** C++
- **Application framework:** Qt 6 (Core and Widgets)
- **Build system:** CMake
- **Random number generation:** C++ standard library `<random>`

## Project structure

The source code is grouped by domain:

```text
src/
├── campaign/       # Campaign and player data
├── character/      # Characters and character stats
├── inventory/      # Inventory, items and item types
├── mechanics/      # Game mechanics such as dice
└── world/          # Maps, locations and points of interest
```

## Design goals

- Keep campaign, world and character data separate from ruleset-specific calculations.
- Use composition where an object owns another domain object, such as a character owning an inventory.
- Use polymorphism for specialized items stored together in an inventory.
- Keep the core model extensible so additional rulesets and campaign types can be added later.

## Building

Open the project in Qt Creator with the root `CMakeLists.txt`, configure it with a Qt 6.5+ kit, and build the `dnd` target.

## Project status

CampaignForge is under active development. The current priority is the underlying class structure and game-data model; a complete campaign-building workflow and full ruleset implementation are not yet available.
