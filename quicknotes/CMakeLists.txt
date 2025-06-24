add_executable(quicknotes src/main.cpp)# Add your Source Files here
target_link_libraries(quicknotes PRIVATE libpqxx::pqxx)
target_link_libraries(quicknotes PRIVATE wx::core wx::base)
if(WIN32)
set_target_properties(quicknotes PROPERTIES
    WIN32_EXECUTABLE TRUE
)
endif()