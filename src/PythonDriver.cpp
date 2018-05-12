/* 
 * Essex Engine
 * 
 * Copyright (C) 2018 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */

#include <EssexEnginePythonDriver/PythonDriver.h>

EssexEngine::Drivers::Python::PythonDriver::PythonDriver(WeakPointer<Context> _context): BaseDriver(_context) {}

EssexEngine::Drivers::Python::PythonDriver::~PythonDriver() { }

void EssexEngine::Drivers::Python::PythonDriver::InitScripting() {
    //Py_SetProgramName("GameEngine");  // optional but recommended
    //Py_Initialize();
    //PyRun_SimpleString("from time import time,ctime\n");
}
void EssexEngine::Drivers::Python::PythonDriver::ExecuteScript(std::string script) {
    //PyRun_SimpleString(script.c_str());
}
void EssexEngine::Drivers::Python::PythonDriver::DeinitScripting() {
    //Py_Finalize();
}
