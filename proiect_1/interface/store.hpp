#ifndef STORE_INTERFACE_STOREiNTERFACE_HPP
#define STORE_INTERFACE_STOREiNTERFACE_HPP

#include "basicLibraries.hpp"
#include "phone.hpp"
#include "client.hpp"

namespace store {

    class Store {
        public:
            Store();
            virtual ~Store();

        private:
            std::map<int, client::Client> clientsMap;
            std::map<int, Phone::Phone> phonesMap;
            std::map<Phone::Phone, int> phonesStock;
    };
}

#endif