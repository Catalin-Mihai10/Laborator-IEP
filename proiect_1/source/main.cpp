#include "main.hpp"
#include "phone.hpp"

int main(){

    std::cout << std::endl;
    std::cout << "*********************************" << std::endl;
    std::cout << "*Create phone with no parameters*" << std::endl;
    Phone phone1;

    std::cout << "*  Print phone specifications   *" << std::endl;
    std::cout << "*********************************" << std::endl;
    std::cout << std::endl;

    phone1.getPhoneSpecs();

    std::cout << "*******************************************************" << std::endl;
    std::cout << "*Create Samsung S21 Gray color with Qualcomm proccesor*" << std::endl;
    
    Phone phone2(SAMSUNG_S21,GRAY,QUALCOMM);
    
    std::cout << "*               Memory storage: " << phone2.getInternalStorage()<<"                   *" << std::endl;
    std::cout << "*             Upgrade memmory to 256 GB               *" << std::endl;
    phone2.upgradeMemory(GB_256);
    std::cout << "*            Print phone specifications               *" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    phone2.getPhoneSpecs();
    
    std::cout << "*******************************************************" << std::endl;
    std::cout << "*        Create new phone with copy-constructor       *" << std::endl;

    Phone phone3(phone2);

    std::cout << "*            Print phone specifications               *" << std::endl;
    std::cout << "*******************************************************" << std::endl;

    phone3.getPhoneSpecs();

    std::cout << "**********************************************************" << std::endl;
    std::cout << "*Create IPHONE PRO MAX GOLD color with Qualcomm proccesor*" << std::endl;
   
    Phone phone4(IPHONE_21_PRO_MAX,GOLD,SNAPDRAGON);
    
    std::cout << "*                Memory storage:   " << phone4.getInternalStorage()<<"                   *" << std::endl;
    std::cout << "*              Upgrade memmory to 512 GB                 *" << std::endl;
    
    phone4.upgradeMemory(GB_512);
    
    std::cout << "*             Print phone specifications                 *" << std::endl;
    std::cout << "**********************************************************" << std::endl;
    
    phone4.getPhoneSpecs();
    return 0;
}