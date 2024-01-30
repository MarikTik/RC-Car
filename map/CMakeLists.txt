cmake_minimum_required(VERSION 3.22.1)
 
 
project(MAP)
 
include(CheckTypeSize)
 
 
add_subdirectory(src)
 
add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} 
    sfml-system 
    sfml-window 
    sfml-graphics 
    sfml-network 
    sfml-audio
)

set(CONFIG_DIR "${CMAKE_BINARY_DIR}/config")
set(ENV_PATH "${CONFIG_DIR}/env.h")

file(STRINGS ".env" ENVIRONMENT_VARIABLES)

# copy the contents from .env file to env.h

file(WRITE ${ENV_PATH} "// Auto-generated file\n")

foreach(ENV_VAR ${ENVIRONMENT_VARIABLES})
      string(REPLACE "=" ";" ENV_VAR_PARTS ${ENV_VAR})
      list(GET ENV_VAR_PARTS 0 ENV_VAR_NAME)
      list(GET ENV_VAR_PARTS 1 ENV_VAR_VALUE)
      string(TOUPPER ${ENV_VAR_NAME} ENV_VAR_NAME_UPPER)
      file(APPEND ${ENV_PATH} "#define ${ENV_VAR_NAME_UPPER} \"${ENV_VAR_VALUE}\"\n")
endforeach()

# Include the generated header in your target
include_directories(${CONFIG_DIR})