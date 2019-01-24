enable_testing()

if (WIN32)
    set(REDIRECT ${CMAKE_CURRENT_SOURCE_DIR}/redirect.cmd)
else()
    set(REDIRECT ${CMAKE_CURRENT_SOURCE_DIR}/redirect.sh)
endif()

add_executable(cmocka_test_bin cmocka_test.c)
target_link_libraries(cmocka_test_bin cmocka)
add_test(NAME cmocka_test COMMAND $<TARGET_FILE:cmocka_test_bin>)
set_tests_properties(cmocka_test PROPERTIES ENVIRONMENT "CMOCKA_MESSAGE_OUTPUT=xml;CMOCKA_XML_FILE=${CMAKE_CURRENT_BINARY_DIR}/cmocka_test.xml")


add_executable(criterion_test_bin criterion_test.c)
target_link_libraries(criterion_test_bin criterion)
add_test(NAME criterion_test COMMAND $<TARGET_FILE:criterion_test_bin> --xml=${CMAKE_CURRENT_BINARY_DIR}/criterion_test.xml)

add_executable(unity_test_bin unity_test.c)
target_link_libraries(unity_test_bin unity)
add_test(NAME unity_test COMMAND ${REDIRECT} $<TARGET_FILE:unity_test_bin> ${CMAKE_CURRENT_BINARY_DIR}/unity_test.log)