cmake_minimum_required(VERSION 3.17)
project(Test)

set(CMAKE_CXX_STANDARD 14)

add_executable(TDCraft main.cpp
        Engine/Scene/Scene.h Engine/Scene/Scene.cpp
        Engine/Components/Actor/Actor.h Engine/Components/Actor/Actor.cpp
        Engine/Components/Camera/Camera.h Engine/Components/Camera/Camera.cpp
        Engine/Components/Character/Character.h Engine/Components/Character/Character.cpp
        Engine/Components/Object/Object.h Engine/Components/Object/Object.cpp
        )

include(FetchContent)
set(BUILD_SHARED_LIBS OFF)
FetchContent_Declare(
        SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 2.5.1
)
FetchContent_MakeAvailable(SFML)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

target_link_libraries(
        TDCraft
        sfml-graphics
)