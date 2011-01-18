/*
Copyright_License {

  XCSoar Glide Computer - http://www.xcsoar.org/
  Copyright (C) 2000-2011 The XCSoar Project
  A detailed list of copyright holders can be found in the file "AUTHORS".

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
}
*/

#ifndef XCSOAR_FORM_PANEL_HPP
#define XCSOAR_FORM_PANEL_HPP

#include "Screen/ContainerWindow.hpp"

/**
 * The PanelControl class implements the simplest form of a ContainerControl
 */
class PanelControl : public ContainerWindow {
  Color background_color;

public:
  /**
   * Constructor of the PanelControl class
   * @param owner Parent ContainerControl
   * @param x x-Coordinate of the Control
   * @param y y-Coordinate of the Control
   * @param width Width of the Control
   * @param height Height of the Control
   */
  PanelControl(ContainerWindow &parent,
               int x, int y, unsigned width, unsigned height,
               Color _background_color,
               const WindowStyle style=WindowStyle());

protected:
  void on_paint(Canvas &canvas);
};

#endif
