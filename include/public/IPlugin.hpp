/*  SPMod - SourcePawn Scripting Engine for Half-Life
 *  Copyright (C) 2018  SPMod Development Team
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.

 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.

 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#pragma once

#include <sp_vm_api.h>

namespace SPMod
{
    class IPlugin
    {
    public:
        virtual const char *getName() const = 0;
        virtual const char *getVersion() const = 0;
        virtual const char *getAuthor() const = 0;
        virtual const char *getUrl() const = 0;
        virtual const char *getIndentity() const = 0;
        virtual const char *getFileName() const = 0;
        virtual size_t getId() const = 0;
        virtual SourcePawn::IPluginRuntime *getRuntime() const = 0;

    protected:
        virtual ~IPlugin() {};
    };
}
