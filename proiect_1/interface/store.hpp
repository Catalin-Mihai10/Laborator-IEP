#ifndef STORE_INTERFACE_STOREiNTERFACE_HPP
#define STORE_INTERFACE_STOREiNTERFACE_HPP

#include "basicheaders/basicHeaders.hpp"
#include "phone.hpp"
#include "Lock.hpp"
#include "client.hpp"

namespace store {

    class Store {
        public:
            Store();

            Store(storeTypes givenStoreType);

            virtual ~Store();

            Store& operator=(const Store&);

            void displayPhones();

            void getPhoneSpecifications(phone::Phone phone);

            void createIphoneStock();

            void createSamsungStock();

            void addPossiblePhonesColors();

            void addPossibleIphonePhonesModels();

            void addPossibleSamsungPhonesModels();

            void addClientToStore(client::ClientPtr client);

            void removeClientFromStore(std::string clientName);
        private:
            bool verifyPhoneExistence(phone::PhonePtr phone1, phone::Phone phone2);

            void incrementID();

            void decrementID();

            int getID();

            std::vector<phone::PhonePtr> phonesInStore;
            std::vector<colorTypes> possibleColors;
            std::vector<PhoneTypes> possbileIphoneModels;
            std::vector<PhoneTypes> possbileSamsungModels;
            std::map<int, std::string> clients;
            Lock::Lock lock;
            storeTypes storeType;
            static int idClient;
    };
}

#endif