/*++
Copyright (c) Microsoft Corporation

Module Name:
- ConsoleInputThread.hpp

Abstract:
- OneCore implementation of the IConsoleInputThread interface.

Author(s):
- Hernan Gatta (HeGatta) 29-Mar-2017
--*/

#pragma once

#include "..\inc\IConsoleInputThread.hpp"
#include "ConIoSrvComm.hpp"

#pragma hdrstop

namespace Microsoft
{
    namespace Console
    {
        namespace Interactivity
        {
            namespace OneCore
            {
                class ConsoleInputThread sealed : public IConsoleInputThread
                {
                public:
                    HANDLE Start();

                    ConIoSrvComm *GetConIoSrvComm();
                
                private:
                    ConIoSrvComm *_pConIoSrvComm;
                };
            };
        };
    };
};