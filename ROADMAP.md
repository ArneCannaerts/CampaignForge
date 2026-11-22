
# CampaignForge Roadmap

This roadmap tracks the development of CampaignForge. The project is being built incrementally: establish the core data model first, then add ruleset-driven progression and gameplay systems, and finally connect these systems to the campaign editor UI.

## 1. Core project structure

- [x] Establish the Qt/CMake project
- [x] Organize source files by domain
- [x] Create the initial character classes
- [x] Create the campaign and player classes
- [x] Create the world model (maps, locations and POIs)
- [x] Add character stats using an enum-indexed stat container
- [x] Add a dice utility using `<random>`

## 2. Inventory and item system

- [x] Create the `Item` base class
- [x] Create the `Inventory` class
- [x] Store polymorphic items by `ItemID`
- [x] Add the `Weapon` class
- [x] Add the `Armor` class
- [x] Add the `Consumable` class
- [x] Add the `Material` class
- [x] Add the `Equipment` class
- [x] Organize shared inventory enums
- [ ] Add validation for item properties and IDs
- [ ] Add automated tests for inventory ownership, insertion, lookup and removal

## 3. Character progression — next milestone

### Requirements

The progression foundation must let a character retain their progression state without embedding D&D-specific progression rules directly into the `Character` class.

#### Character data

- [ ] Store a character's name.
- [ ] Store the current character level.
- [ ] Store accumulated experience points (XP).
- [ ] Define safe default values for level and XP.
- [ ] Prevent invalid values, such as a level below the minimum or negative XP.

#### Health

- [ ] Store current health and maximum health.
- [ ] Provide getters and setters for current and maximum health.
- [ ] Add a damage method that reduces current health.
- [ ] Add a healing method that restores health without exceeding maximum health.
- [ ] Prevent health from dropping below zero or exceeding maximum health.
- [ ] Provide an alive-state check.

#### Stats and modifiers

- [ ] Keep the six ability scores in the existing `CharacterStat` class.
- [ ] Provide a way to request a stat modifier.
- [ ] Keep modifier calculation rules outside the core `Character` data class so different rulesets can calculate them differently.

#### Experience and level-ups

- [ ] Add experience to a character.
- [ ] Provide a way to check whether the character qualifies for a level-up.
- [ ] Add a level-up operation.
- [ ] Keep XP thresholds and level-up rewards configurable by the active ruleset.
- [ ] Avoid hardcoding the D&D 5e XP table into `Character`.

#### Completion criteria

- [ ] A character can be created with valid default progression values.
- [ ] Damage, healing and death-state behaviour work and respect health limits.
- [ ] XP can be added and level-up eligibility can be checked.
- [ ] The progression code does not require the core `Character` class to know D&D-specific rules.
- [ ] The project builds successfully after the progression changes.

## 4. Character equipment management

- [ ] Add character-side equipment slot management.
- [ ] Keep armor slots separate from general equipment slots.
- [ ] Allow armor and equipment to be worn simultaneously when their slot systems do not conflict (for example, a chestplate and a backpack).
- [ ] Ensure equipped-item references point to items owned by the character's inventory rather than storing duplicate item objects.
- [ ] Prevent two items from occupying the same slot within the same slot system.
- [ ] Handle unequipping and removing an equipped item from the inventory safely.

## 5. Combat system

- [ ] Define the basic attack flow.
- [ ] Connect weapons to dice-based damage.
- [ ] Apply damage types and armor resistances.
- [ ] Add armor and defensive calculations through the active ruleset.
- [ ] Add initiative and turn order.
- [ ] Add saving throws and other combat checks.

## 6. Ruleset system

- [ ] Define a ruleset interface or configuration model.
- [ ] Implement D&D 5e as the default ruleset.
- [ ] Move stat modifiers, XP thresholds, level-up rewards and combat calculations into ruleset logic.
- [ ] Allow campaigns to select a ruleset.
- [ ] Investigate support for custom rulesets without changing the core campaign data model.

## 7. Campaign editor and persistence

- [ ] Build the main campaign-management workflow.
- [ ] Connect the world model to the UI.
- [ ] Add character and NPC management screens.
- [ ] Add inventory and equipment views.
- [ ] Add campaign save/load functionality.
- [ ] Decide on a persistent data format and versioning strategy.

## 8. Later features

- [ ] Quest and objective management
- [ ] Dialogue and encounter management
- [ ] Spell and ability systems
- [ ] Crafting recipes and material requirements
- [ ] Campaign sharing and export
- [ ] Additional rulesets and customization tools

---

## Development principles

- Prefer small, focused feature branches created from `Development`.
- Keep restructuring commits separate from functionality changes.
- Keep core data separate from ruleset-specific behaviour.
- Add specialized subclasses only when they need distinct data or behaviour.
- Update this roadmap as milestones are completed or priorities change.
