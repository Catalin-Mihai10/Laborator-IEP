#include "client.hpp"

namespace client {

    Client::Client() : name(""), adress("") {}

    Client::Client(std::string clientName, std::string clientAdress) : name(clientName), adress(clientAdress) {}

    std::string Client::getName(){
        return name;
    }

    std::string Client::getAdress(){
        return adress;
    }
    
}