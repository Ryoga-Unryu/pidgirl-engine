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

#ifndef TARGET_MOVE_STATE_H
#define TARGET_MOVE_STATE_H

#include "MainView/Model/MouseInput/MouseState.h"
#include "MainView/Model/StackModel.h"

/** \addtogroup State
  * \{
  * \class TargetMoveState
  *
  * \brief Move to the confirmed target.
  *
  * \author RyogaU
  *
  * \version 0.5
  *
  * Contact: RyogaU@googlemail.com
  * \}
  */
class TargetMoveState : public MouseState
{
public:
    TargetMoveState(Processor *processor, StackModel *target);
    virtual MouseState *nextState(MouseState::MouseEventType type, QMouseEvent *event, StackModel *targetStack, StackModel *fromStack = 0);
};

#endif // TARGET_MOVE_STATE_H
