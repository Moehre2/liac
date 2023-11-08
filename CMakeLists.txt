cmake_minimum_required(VERSION 3.13)

# initialize pico-sdk from submodule
include(pico-sdk/pico_sdk_init.cmake)

project(liac)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

add_executable(liac main.c)

target_link_libraries(liac pico_stdlib pico_cyw43_arch_none)

pico_add_extra_outputs(liac)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/scripts/upload_uf2.sh DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
