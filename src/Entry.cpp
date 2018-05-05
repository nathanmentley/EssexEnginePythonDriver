/* 
 * Essex Engine
 * 
 * Copyright (C) 2017 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */

#include <EssexEnginePythonDriver/PythonDriver.h>

using EssexEngine::Context;
using EssexEngine::WeakPointer;

using EssexEngine::Drivers::Python::PythonDriver;
using EssexEngine::Daemons::Script::IScriptDriver;

extern "C" {
    void driver_init(WeakPointer<Context> context) {
        context->RegisterDriver<IScriptDriver>(
            WeakPointer<IScriptDriver>(new PythonDriver(context)) 
        );
    }
}
