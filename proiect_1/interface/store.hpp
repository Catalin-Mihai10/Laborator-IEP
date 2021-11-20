#ifndef STORE_INTERFACE_STOREiNTERFACE_HPP
#define STORE_INTERFACE_STOREiNTERFACE_HPP

#include "basicLibraries.hpp"
#include "basicTypes.hpp"
#include "phone.hpp"
#include "client.hpp"


namespace store {

    class Store {
        public:
            Store();

            Store(storeTypes givenStoreType);

            virtual ~Store();

            Store operator=(Store&);

            void displayPhones();

            void checkPhoneStock();

            void buyPhone(client::Client client);

            void getPhoneSpecifications(Phone::Phone phone);

            void addPhonesStock();

        private:
            Store(Store&&) = delete;
            std::map<int, client::Client> clientsMap;
            std::map<int, Phone::Phone> phonesMap;
            std::map<Phone::Phone, int> phonesStock;
            storeTypes storeType;
    };
}

#endif