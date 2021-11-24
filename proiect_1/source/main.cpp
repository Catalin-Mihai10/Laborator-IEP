#include<iostream>
#include "interfaceHeaders.hpp"

int main(){

    std::cout << std::endl;
    std::cout << "*********************************" << std::endl;
    std::cout << "*Create phone with no parameters*" << std::endl;
    phone::Phone phone1;

    std::cout << "*  Print phone specifications   *" << std::endl;
    std::cout << "*********************************" << std::endl;
    std::cout << std::endl;

    phone1.getPhoneSpecs();

    std::cout << "*******************************************************" << std::endl;
    std::cout << "*Create Samsung S21 Gray color with Qualcomm proccesor*" << std::endl;
    
    phone::Phone phone2(SAMSUNG_S21,GRAY,QUALCOMM);
    
    std::cout << "*               Memory storage: " << phone2.getInternalStorage()<<"                   *" << std::endl;
    std::cout << "*             Upgrade memmory to 256 GB               *" << std::endl;
    phone2.upgradeMemory(GB_256);
    std::cout << "*            Print phone specifications               *" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    phone2.getPhoneSpecs();
    
    std::cout << "*******************************************************" << std::endl;
    std::cout << "*        Create new phone with copy-constructor       *" << std::endl;

    phone::Phone phone3(phone2);

    std::cout << "*            Print phone specifications               *" << std::endl;
    std::cout << "*******************************************************" << std::endl;

    phone3.getPhoneSpecs();

    std::cout << "**********************************************************" << std::endl;
    std::cout << "*Create IPHONE PRO MAX GOLD color with Qualcomm proccesor*" << std::endl;
   
    phone::Phone phone4(IPHONE_12_PRO_MAX,GOLD,SNAPDRAGON);
    
    std::cout << "*                Memory storage:   " << phone4.getInternalStorage()<<"                   *" << std::endl;
    std::cout << "*              Upgrade memmory to 512 GB                 *" << std::endl;
    
    phone4.upgradeMemory(GB_512);
    
    std::cout << "*             Print phone specifications                 *" << std::endl;
    std::cout << "**********************************************************" << std::endl;
    
    phone4.getPhoneSpecs();

    store::Store store(IPHONE_STORE);

    phone::Phone phone5(IPHONE_12_PRO_MAX,GOLD,QUALCOMM);
    
    store.displayPhones();
    store.getPhoneSpecifications(phone5);

    store::Store store1;
    store1 = store;

    store1.displayPhones();
    store1.getPhoneSpecifications(phone5);
    return 0;
}