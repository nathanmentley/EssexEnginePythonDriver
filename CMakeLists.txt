find_package(PythonLibs REQUIRED)

ee_setup_project("EssexEnginePythonDriver" "src/Drivers/PythonDriver/")
target_link_libraries(EssexEnginePythonDriver ${PYTHON_LIBRARIES})
target_link_libraries(EssexEnginePythonDriver EssexEngineCore)
target_link_libraries(EssexEnginePythonDriver EssexEngineScriptDaemon)
