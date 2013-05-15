/*
 * marmazon - Qt4 common code library for MeeGo
 *
 * Copyright (c) 2010, Intel Corporation.
 *
 * Author: James Ausmus <james.ausmus@intel.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU Lesser General Public License,
 * version 2.1, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#ifndef STRINGUTILS_H
#define STRINGUTILS_H

#include <QtCore>
#include <QString>
#include <QList>
#include <QUrl>

namespace Marmazon {

    namespace Utils {

        QList<QUrl> GetURLsFromText(const QString &searchText);

    }

}

#endif
