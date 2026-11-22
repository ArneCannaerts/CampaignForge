
cmake_minimum_required(VERSION 3.19)

project(dnd LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(dnd
    WIN32 MACOSX_BUNDLE

    # Main application
    src/main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui

    # Character
    src/character/character.cpp
    src/character/character.h
    src/character/playercharacter.cpp
    src/character/playercharacter.h
    src/character/characterstat.cpp
    src/character/characterstat.h
    src/character/character_enums.h
    src/character/npc.cpp
    src/character/npc.h
    src/character/enemy.cpp
    src/character/enemy.h

    # Campaign
    src/campaign/campaign.cpp
    src/campaign/campaign.h
    src/campaign/player.cpp
    src/campaign/player.h

    # World
    src/world/map.cpp
    src/world/map.h
    src/world/location.cpp
    src/world/location.h
    src/world/poi.cpp
    src/world/poi.h
    src/world/biome.cpp
    src/world/biome.h
    src/world/forest.cpp
    src/world/forest.h
    src/world/mountains.cpp
    src/world/mountains.h
    src/world/city.cpp
    src/world/city.h
    src/world/castle.cpp
    src/world/castle.h

    # Mechanics
    src/mechanics/dice/dice.cpp
    src/mechanics/dice/dice.h
    src/inventory/item.h src/inventory/item.cpp
    src/inventory/inventory.h src/inventory/inventory.cpp
    Readme.md
    src/inventory/weapon.h src/inventory/weapon.cpp
    src/inventory/armor.h src/inventory/armor.cpp
    src/combat/damage_enums.h
    src/inventory/consumable.h src/inventory/consumable.cpp
    src/inventory/material.h src/inventory/material.cpp


)

# Include directories
target_include_directories(dnd PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Qt libraries
target_link_libraries(dnd
    PRIVATE
        Qt::Core
        Qt::Widgets
)

# Installation
include(GNUInstallDirs)

install(TARGETS dnd
    BUNDLE DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET dnd
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)

install(SCRIPT ${deploy_script})
