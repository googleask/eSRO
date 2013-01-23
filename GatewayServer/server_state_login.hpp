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

#ifndef __GATEWAY_SERVER_STATE_LOGIN_HPP__
#define __GATEWAY_SERVER_STATE_LOGIN_HPP__

/// SRNL INCLUDES
#include <server_connection_state.hpp>

class Server;

namespace srv
{
    class Connection;
}

class StateLogin : public srv::ConnectionState
{
public:

    StateLogin (Server *srv, srv::Connection *conn);

    virtual ~StateLogin ();

    virtual void Close ();

private:

    int OnNews (IPacket &packet);

	int OnServers (IPacket &packet);

	int OnLogin (IPacket &packet);

private:

	Server *m_server;
};

#endif //__GATEWAY_SERVER_STATE_LOGIN_HPP__
