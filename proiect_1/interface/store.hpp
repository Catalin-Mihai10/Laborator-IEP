#ifndef STORE_INTERFACE_STOREiNTERFACE_HPP
#define STORE_INTERFACE_STOREiNTERFACE_HPP

#include "basicLibraries.hpp"
#include "basicTypes.hpp"
#include "phone.hpp"

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
        private:
            bool verifyPhoneExistence(phone::Phone phone1, phone::Phone phone2);

            std::vector<phone::Phone> phonesInStore;
            std::vector<colorTypes> possibleColors;
            std::vector<PhoneTypes> possbileIphoneModels;
            std::vector<PhoneTypes> possbileSamsungModels;
            storeTypes storeType;
    };
}

#endif