/*
 * A flexible rogue-like engine with easy-to-use mouse interface, editor,
 * solo, hotseat, network multiplayer and E-Mail game functionality in mind.
 * Copyright (C) 2013  Ryoga Unryu
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SAVE_MAP_H
#define SAVE_MAP_H

#include "Command/Backend/NotUndoable.h"
#include "Common/FileManager.h"

/** \addtogroup Commands
  * \{
  * \class SaveMap
  *
  * \brief Save a map. If it wasn't saved before, choose a place and file.
  *
  * \author RyogaU
  *
  * \version 0.5
  *
  * Contact: RyogaU@googlemail.com
  * \}
  */
class SaveMap : public NotUndoable
{
    Q_OBJECT

private:
    FileManager fileManager; ///< The file manager to save the map with.

public:
    SaveMap(QObject *parent = 0);

    virtual bool execute();

};

#endif // SAVE_MAP_H
