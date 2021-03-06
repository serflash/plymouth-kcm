/*
 *  Copyright (C) 2016 Marco Martin <mart@kde.org>
 *  Copyright (C) 1998 Luca Montecchiani <m.luca@usa.net>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */
#ifndef PLYMOUTH_HELPER_H
#define PLYMOUTH_HELPER_H

#include <kauth.h>

using namespace KAuth;

class PlymouthHelper : public QObject
{
    Q_OBJECT

public Q_SLOTS:
    ActionReply save(const QVariantMap &map);
    ActionReply install(const QVariantMap &args);
    ActionReply uninstall(const QVariantMap &args);
};

#endif
