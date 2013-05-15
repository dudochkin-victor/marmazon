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

#include "stringutils.h"

namespace Marmazon {

    namespace Utils {

        QList<QUrl> GetURLsFromText(const QString &searchText)
        {
            QList<QUrl> retList;
            QRegExp searchRX = QRegExp("\\b(?:http|https)://(?:[a-z0-9]\\.)?(?:[\\-\\.a-z0-9]+)*[a-z0-9]{2,}(?::[0-9]{1,5})?(?:/\\S*(?:\\.\\S+))*/*", Qt::CaseInsensitive);
            int pos = 0;
            while ((pos = searchRX.indexIn(searchText, pos)) != -1) {
                    retList.append(QUrl(searchRX.cap(0)));
                    pos += searchRX.matchedLength();
            }
            return retList;
        }
    }
}
