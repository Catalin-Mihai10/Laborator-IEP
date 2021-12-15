#include "store.hpp"

namespace store {

    int Store::idClient = -1;   
    
    Store::Store() : storeType(UNDEFINED), phonesInStore{},
                     possibleColors{}, possbileIphoneModels{}, possbileSamsungModels{}{

    }

    Store::Store(storeTypes givenStoreType) : storeType(givenStoreType), phonesInStore{},
                     possibleColors{}, possbileIphoneModels{}, possbileSamsungModels{}{

        switch(givenStoreType){
            case IPHONE_STORE:
                 createIphoneStock();
                 break;
            case SAMSUNG_STORE:
                 createSamsungStock();
                 break;
            case MIXED_STORE:
                 createIphoneStock();
                 createSamsungStock();
                 break;
        }
    }

    Store::~Store() {}

    Store& Store::operator=(const Store& store){
        if(this==&store) return *this;

        phonesInStore = store.phonesInStore;
        possibleColors = store.possibleColors;
        possbileIphoneModels = store.possbileIphoneModels;
        possbileSamsungModels = store.possbileSamsungModels;
        storeType = store.storeType;
        return *this;
    }

    void Store::displayPhones(){
        
        std::cout << "Phones in store: " << std::endl;

        for(phone::PhonePtr phone : phonesInStore){
            phone->displayPhone();
        }

        std::cout << "End" << std::endl;

    }

    void Store::getPhoneSpecifications(phone::Phone phone){
        std::cout << "Getting specifications for: ";
        phone.displayPhone();

        bool foundInShop = false;

        for(phone::PhonePtr iPhone : phonesInStore){
            if(verifyPhoneExistence(iPhone, phone)){
                iPhone->getPhoneSpecs();
                foundInShop = true;
            }
        }

        if(foundInShop == false) std::cout << "ERROR: Phone does not exist in Store!" << std::endl;
    }

    void Store::createIphoneStock(){
        std::cout << "Creating Store stock" << std::endl;

        addPossibleIphonePhonesModels();
        addPossiblePhonesColors();

        for(PhoneTypes phoneType : possbileIphoneModels){
            for(colorTypes colorType : possibleColors){
                phone::PhonePtr auxPhone(new phone::Phone(phoneType, colorType, QUALCOMM));
                phonesInStore.push_back(auxPhone);
            }
        }

        std::cout << "Stock created succesfully!" << std::endl;
    }

    void Store::createSamsungStock(){
        std::cout << "Creating Store stock" << std::endl;

        addPossibleIphonePhonesModels();
        addPossiblePhonesColors();

        for(PhoneTypes phoneType : possbileSamsungModels){
            for(colorTypes colorType : possibleColors){
                phone::PhonePtr auxPhone(new phone::Phone(phoneType, colorType, SNAPDRAGON));
                phonesInStore.push_back(auxPhone);
            }
        }

        for(PhoneTypes phoneType : possbileSamsungModels){
            for(colorTypes colorType : possibleColors){
                phone::PhonePtr auxPhone(new phone::Phone(phoneType, colorType, EXYNOS));
                phonesInStore.push_back(auxPhone);
            }
        }

        std::cout << "Stock created succesfully!" << std::endl;
    }

    void Store::addPossiblePhonesColors(){
        possibleColors.push_back(BLACK);
        possibleColors.push_back(WHITE);
        possibleColors.push_back(RED);
        possibleColors.push_back(GREEN);
        possibleColors.push_back(SILVER);
        possibleColors.push_back(GOLD);
        possibleColors.push_back(TITANIUM);
        possibleColors.push_back(GRAY);
        possibleColors.push_back(VIOLET);
        possibleColors.push_back(BROWN);
        possibleColors.push_back(BLUE);
    }

    void Store::addPossibleIphonePhonesModels(){
        possbileIphoneModels.push_back(IPHONE_12_MINI);
        possbileIphoneModels.push_back(IPHONE_12);
        possbileIphoneModels.push_back(IPHONE_12_PRO);
        possbileIphoneModels.push_back(IPHONE_12_PRO_MAX);
    }

    void Store::addPossibleSamsungPhonesModels(){
        possbileSamsungModels.push_back(SAMSUNG_S21);
        possbileSamsungModels.push_back(SAMSUNG_S21_PLUS);
        possbileSamsungModels.push_back(SAMSUNG_S21_ULTRA);
    }

    void Store::addClientToStore(client::ClientPtr client){
        bool doesNotExist = false;

        if(clients.empty()) {
            incrementID();
            int id = getID();
            std::cout<< id << std::endl;
            clients.insert(std::map<int, std::string>::value_type(id, client->getName()));
            std::cout << "Utilizatorul: " << client->getName() << " adaugat cu succes" << std::endl;
            return;
        }

        for(std::map<int, std::string>::iterator id = clients.begin(); id != clients.end(); id++){
            if(id->second== client->getName()) doesNotExist = true;
        }

        if(!doesNotExist){
            incrementID();
            int id = getID();
            std::cout << id << std::endl;
            clients.insert(std::map<int, std::string>::value_type(id, client->getName()));
            std::cout << "Utilizatorul: " << client->getName() << " adaugat cu succes" << std::endl;
        }
    }

    bool Store::verifyPhoneExistence(phone::PhonePtr iterator, phone::Phone phone2){
        if((iterator->getPhoneType() == phone2.getPhoneType()) && (iterator->getPhoneColor() == phone2.getPhoneColor())
            && (iterator->getPhoneProccesor() == phone2.getPhoneProccesor())) return true;
        
        return false;
    }

    void Store::incrementID(){
        std::cout << "lock" << std::endl;
        lock.lock();
        std::cout << "increment" << std::endl;
        idClient++;
        std::cout << "apeleaza unlock" << std::endl;
        lock.unlock();
        std::cout << "unlock" << std::endl;
    }

    void Store::decrementID(){
        std::cout << "lock" << std::endl;
        lock.lock();
        std::cout << "decrement" << std::endl;
        idClient--;
        std::cout << "apeleaza unlock" << std::endl;
        lock.unlock();
        std::cout << "unlock" << std::endl;
    }

    int Store::getID(){
        return idClient;
    }
}   