find_package(PythonLibs REQUIRED)

#files

file(GLOB EssexEnginePythonDriver_HEADERS
    "src/Drivers/PythonDriver/*.h"
)
file(GLOB EssexEnginePythonDriver_SRC
    ${EssexEnginePythonDriver_HEADERS}
    "src/Drivers/PythonDriver/*.cpp"
)

#setup headers

file(COPY ${EssexEnginePythonDriver_HEADERS} DESTINATION "${CMAKE_BINARY_DIR}/lib/include/EssexEnginePythonDriver/")

#setup build

add_library(EssexEnginePythonDriver SHARED ${EssexEnginePythonDriver_SRC})
target_link_libraries(EssexEnginePythonDriver ${PYTHON_LIBRARIES})
target_link_libraries(EssexEnginePythonDriver EssexEngineCore)
target_link_libraries(EssexEnginePythonDriver EssexEngineScriptDaemon)
