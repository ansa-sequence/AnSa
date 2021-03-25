//------------------------------------------
// Author : Sakhil Kuliev
//------------------------------------------
// Internal including
#include "..\inc\server.h"
#include "..\inc\network.h"
#include "..\inc\client.h"
//------------------------------------------
// Standart Library Including
#include <iostream>
//------------------------------------------
// External Library including
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
//------------------------------------------
// namespace typedef`s
namespace net = boost::asio;
//------------------------------------------
int main() {
    /*net::io_service io;
    printer p(io);
    io.run();*/
    //Server_status s_stat; // Enum class of server status

    //std::cout << static_cast<int>(serv.serv_status_) << std::endl; ;// TEST

    server serv();

    user_data user
    {
        .name_ = {"Sakhil"},
        .id_ = 1,
        .email_ = {"ses@inbox.ru"},
        .addr_ = {"192.168.0.1" },
    };

    client demon(user);
    demon.show_information();
    
}
//------------------------------------------