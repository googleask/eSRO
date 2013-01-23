/*********************************************************************************
 *
 * This file is part of eSRO.
 *
 * eSRO is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * eSRO is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright ⓒ 2013  Rafael Dominguez (npcdoom)
 *
 *********************************************************************************/

#include "guild_member.hpp"

bool GuildMember::CanJoin () const
{
    return Rights[GM_AUTHORITY_JOIN];
}

bool GuildMember::CanWithdraw () const
{
    return Rights[GM_AUTHORITY_WITHDRAW];
}

bool GuildMember::CanNotice () const
{
    return Rights[GM_AUTHORITY_NOTICE];
}

bool GuildMember::CanStore () const
{
    return Rights[GM_AUTHORITY_STORE];
}

bool GuildMember::CanUnion () const
{
    return Rights[GM_AUTHORITY_UNION];
}
