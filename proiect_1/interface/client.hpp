#ifndef CLIENT_INTERFACE_CLIENTINTERFACE_HPP
#define CLIENT_INTERFACE_CLIENTINTERFACE_HPP

#include "../interface/basicheaders/basicLibraries.hpp"

namespace client {

    class Client;
    typedef std::unique_ptr<Client> ClientPtr;

    class Client {
        public:
            Client();

            Client(std::string clientName, std::string clientAdress);

            virtual ~Client();

            std::string getName();

            std::string getAdress();
            
        private:
            Client(Client&&) = delete;
            Client operator=(Client&) = delete;
            std::string name;
            std::string adress; 
    };

}

#endif