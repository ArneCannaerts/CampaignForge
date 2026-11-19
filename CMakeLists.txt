cmake_minimum_required(VERSION 3.19)
project(dnd LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(dnd
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    campaign.h campaign.cpp
    map.h map.cpp
    poi.h poi.cpp
    forest.h forest.cpp
    city.h city.cpp
    biome.h biome.cpp
    castle.h castle.cpp
    mountains.h mountains.cpp
    location.h location.cpp
    character.h character.cpp
    playercharacter.h playercharacter.cpp
    enemy.h enemy.cpp
    npc.h npc.cpp
    player.h player.cpp
)

target_link_libraries(dnd
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS dnd
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET dnd
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
