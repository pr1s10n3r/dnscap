set(DNSCAP_TARGET_NAME dnscap)
set(DNSCAP_SOURCE_FILES Main.cpp)

add_executable(${DNSCAP_TARGET_NAME} ${DNSCAP_SOURCE_FILES})
target_link_libraries(${DNSCAP_TARGET_NAME} PRIVATE uv)
target_include_directories(${DNSCAP_TARGET_NAME} PRIVATE thirdparty/libuv/include)
set_target_properties(${DNSCAP_TARGET_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
