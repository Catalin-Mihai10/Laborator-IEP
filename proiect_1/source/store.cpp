#include "store.hpp"

namespace store {

    Store::Store() :  clientsMap{}, phonesMap{}, phonesStock{},
                      storeType(UNDEFINED) {}

    Store::Store(storeTypes givenStoreType) : clientsMap{}, phonesMap{}, phonesStock{},
                                              storeType(givenStoreType) {}
    
    Store::~Store(){}

    Store Store::operator=(Store& rhs){
        return;
    }

    void Store::displayPhones(){}

    void Store::checkPhoneStock(){}

    void Store::buyPhone(client::Client client){}

    void Store::getPhoneSpecifications(Phone::Phone phone){}

    void Store::addPhonesStock(){}
}