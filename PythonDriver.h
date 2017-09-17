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
#pragma once

#include <string>
#include <Python/Python.h>

#include <EssexEngineCore/BaseDriver.h>
#include <EssexEngineCore/Context.h>
#include <EssexEngineScriptDaemon/IScriptDriver.h>

namespace EssexEngine{
namespace Drivers{
namespace Python{
    class PythonDriver:public Core::Drivers::Base::BaseDriver, public Daemons::Script::IScriptDriver
    {
        public:
            PythonDriver(WeakPointer<Context> _context);
            ~PythonDriver();
            
            //IDriver
            void Init() {
                if(GetContext()->HasDriver<Core::Logging::ILogDriver>()) {
                    GetContext()->GetDriver<Core::Logging::ILogDriver>()->LogLine(
                        "Loading Driver [%s] [%s]",
                        GetDriverName().c_str(),
                        GetDriverVersion().c_str()
                    );
                }
            }
                    
            //IScriptDriver
            void InitScripting();
            void ExecuteScript(std::string script);
            void DeinitScripting();
            
            //BaseDriver
            std::string GetDriverName() { return "Python Scripting Engine"; }
            std::string GetDriverVersion() { return ESSEX_ENGINE_VERSION; }
        private:
    };
}}};