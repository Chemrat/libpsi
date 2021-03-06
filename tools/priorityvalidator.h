/*
 * priorityvalidator.h - XMPP priority validator
 * Copyright (C) 2010 Dmitriy.trt
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 */

#ifndef PRIORITYVALIDATOR_H
#define PRIORITYVALIDATOR_H

#include <QValidator>

class PriorityValidator : public QValidator
{
      Q_OBJECT
public:
      PriorityValidator(QObject* parent = 0) : QValidator(parent) { };
      virtual State validate(QString &input, int &pos) const;
};

#endif // PRIORITYVALIDATOR_H
