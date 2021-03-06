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

#ifndef ARTPROVIDER_H_INCLUDED
#define ARTPROVIDER_H_INCLUDED

namespace fb
{

    /**
     * This is a pure virtual class. Provides a base interface for
     * visual theming (icons, images, ...)
     */
    class DLLIMPORT IArtProvider
    {
        public :
            virtual wxBitmap GetIcon (const wxString & name, int size = IArtProvider::SMALL) = 0;
            virtual wxSize GetIconSize (int type = IArtProvider::SMALL) = 0;

            enum { SMALL, MEDIUM, LARGE };
    };

}

#endif // ARTPROVIDER_H_INCLUDED
