cmake_minimum_required(VERSION 3.9)
project (game)

if(EMSCRIPTEN)
	set(EMSCRIPTEN_SHELL ${CMAKE_CURRENT_SOURCE_DIR}/emscripten/emscripten-shell.html)
endif()

if(JAMMACART)
	find_package(JAMMACART CONFIG REQUIRED PATHS ${JAMMAGAME_SDK})
else()
	find_package(JAMMAGAME CONFIG REQUIRED PATHS ${JAMMAGAME_SDK})
endif()

set(SOURCES
	src/main.cpp
	src/metadata.cpp
	emscripten/emscripten-shell.html
)

jammagame_executable (game ${SOURCES})

