#include<iostream>
#include "interfaceHeaders.hpp"
#include "basicheaders/basicLibraries.hpp"
#include "client.hpp"

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

    client::ClientPtr client1(new client::Client("Catalin", "Sever Bocu"));
    client::ClientPtr client2(new client::Client("Mircea", "Aleea aleelor"));
    client::ClientPtr client3(new client::Client("Licea", "Bobocu bobocilor"));
    client::ClientPtr client4(new client::Client("Bucea", "Mafiotu mafiotilor"));
    client::ClientPtr client5(new client::Client("Gigi", "Aleea Becalilor"));
    client::ClientPtr client6(new client::Client("Bobo", "Strada strazii"));
    client::ClientPtr client7(new client::Client("Doru", "Ni ma la el"));
    client::ClientPtr client8(new client::Client("Lica", "Intre pomi"));

 
    std::thread thread1(&store::Store::addClientToStore, &store1, std::move(client1));
    std::thread thread2(&store::Store::addClientToStore, &store1, std::move(client2));
    std::thread thread3(&store::Store::addClientToStore, &store1, std::move(client3));
    std::thread thread4(&store::Store::addClientToStore, &store1, std::move(client4));
    std::thread thread5(&store::Store::addClientToStore, &store1, std::move(client5));
    std::thread thread6(&store::Store::addClientToStore, &store1, std::move(client6));
    std::thread thread7(&store::Store::addClientToStore, &store1, std::move(client7));
    std::thread thread8(&store::Store::addClientToStore, &store1, std::move(client8));

    thread1.join();
    thread2.join();
    thread3.join();
    thread4.join();
    thread5.join();
    thread6.join();
    thread7.join();
    thread8.join();

    return 0;
}