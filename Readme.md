# CampaignForge

**A modular Dungeons & Dragons campaign builder built with C++ and Qt.**

CampaignForge is a project aimed at creating a flexible environment for building, managing and running Dungeons & Dragons campaigns.

The goal is to support everything from individual one-shot adventures to larger, interconnected campaigns. The project will include tools for managing characters, NPCs, enemies, maps, locations, inventories, encounters and other campaign-related systems.

The application will include a preconfigured **SingleShot** campaign as its default starting point.

---

## Current Development Status

<sub>Early development – Core architecture</sub>

The project is currently focused on establishing its underlying class structure and building a modular foundation for future systems.

### Implemented / Under Development

| Component | Status | Description |
|---|---|---|
| Character | 🟡 In progress | Base class for all characters |
| PlayerCharacter | 🟡 In progress | Represents player-controlled characters |
| NPC | 🟡 In progress | Represents non-player characters |
| Enemy | 🟡 In progress | Represents hostile characters |
| CharacterStat | 🟡 In progress | Character attributes and statistics |
| Inventory | 🟡 In progress | Character inventory management |
| Campaign | 🟡 In progress | Campaign structure and management |
| Map | 🟡 In progress | Map structure and world organization |
| Location | 🟡 In progress | Coordinate-based locations |
| POI | 🟡 In progress | Points of interest |
| Biome | 🟡 In progress | Different environmental regions |

*The classes listed above are part of the current architecture; their functionality is still being developed.*

---

## Planned Features

The following systems are planned for future development.

### Character Systems
- Character attributes and statistics
- Character progression and leveling
- Ability checks and saving throws
- Character classes and subclasses
- Equipment and inventory management
- Health, armor and combat statistics

### Dice & Combat
- Dice rolling system
- Ability check calculations
- Combat initiative
- Damage calculations
- Enemy and encounter management

### Campaign Management
- Multiple campaign support
- Session management
- Quest and objective tracking
- NPC and enemy management
- Campaign notes and information

### World Building
- Interactive maps
- Locations and points of interest
- Biome management
- Encounter placement
- Connections between locations

### User Interface
- Campaign overview
- Character management interface
- Map editor
- Inventory interface
- Session management tools

---

## Project Architecture

CampaignForge is being developed with a modular object-oriented architecture.

The intention is to keep individual systems independent where possible, allowing new features to be added without unnecessarily modifying existing components.

The current architecture includes:

- **Characters:** A shared base class with specialized player, NPC and enemy classes.
- **World:** Maps, locations, points of interest and biomes.
- **Campaign:** A central structure for organizing campaign-related information.
- **Statistics:** A dedicated system for character attributes.
- **Inventory:** A separate system for managing character items.

---

## Technology Stack

- **Language:** C++
- **Framework:** Qt
- **Build system:** CMake
- **Version control:** Git

---

## Development Roadmap

- [x] Establish the initial project structure
- [x] Create the initial core class architecture
- [x] Establish character type hierarchy
- [x] Establish basic world and map classes
- [ ] Finish core class implementations
- [ ] Complete character statistics
- [ ] Implement dice system
- [ ] Implement character progression
- [ ] Implement inventory and equipment
- [ ] Implement ability checks and saving throws
- [ ] Develop campaign and session management
- [ ] Implement quests and encounters
- [ ] Develop interactive map functionality
- [ ] Build the graphical user interface

---

## Project Goals

The main goal is to create a flexible campaign-building tool rather than a program limited to a single D&D adventure.

Modularity and extensibility are important design considerations. Systems should be reusable across different campaigns, and the application should allow campaigns to define their own characters, worlds and rules where possible.

**CampaignForge is a work in progress.** Features and architecture are subject to change as development continues.