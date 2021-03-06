/*
 * This file is part of FBIde project
 *
 * FBIde is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * FBIde is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with FBIde.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Albert Varaksin <albeva@me.com>
 * Copyright (C) The FBIde development team
 */

#include "wx_pch.h"
#include "manager.h"
#include "uimanager.h"
#include "scriptmanager.h"
#include "variant.h"
#include "registry.h"

#include <wx/stdpaths.h>
#include <wx/apptrait.h>

using namespace fb;


/**
 * The application
 */
class FBIde : public wxApp
{

    /**
     * start up
     */
    virtual bool OnInit()
    {
        // load ui
        GET_UIMGR()->Load();

        /*if (argc > 1)
        {
            wxStandardPathsBase & sp = this->GetTraits()->GetStandardPaths();
            auto path = ::wxPathOnly(sp.GetExecutablePath());
            GET_SCRIPTMGR()->Execute(path + "/" + argv[1]);
        }*/

        return true;
    }


    /**
     * Called on exit
     */
    virtual int OnExit()
    {
        Manager::Release();
        return wxApp::OnExit();
    }

};
IMPLEMENT_APP(FBIde);
