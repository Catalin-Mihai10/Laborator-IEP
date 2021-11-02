#include "phone.hpp"
#include<iostream>

Phone::Phone(): battery(0), ram(0), internalStorage(0), g5(false), wifi(false),
bluetooth(false), dualSim(false), waterResistance(false), phone(UNDEFINED_PHONE), 
color(UNDEFINED_COLOR), proccesor(UNDEFINED_PROCCESOR) {
}

Phone::Phone(PhoneTypes selectedPhone, colorTypes selectedColor, proccesorTypes selectedProccesor){
    
    switch(selectedPhone){
        case IPHONE_12_MINI:
             phone = IPHONE_12_MINI;
             battery = 2227;
             ram = 4;
             internalStorage = 64;
             g5 = true;
             wifi = true;
             bluetooth = true;
             dualSim = true;
             waterResistance = true;
             break;
        case IPHONE_12:
             phone = IPHONE_12;
             battery = 2815;
             ram = 4;
             internalStorage = 64;
             g5 = true;
             wifi = true;
             bluetooth = true;
             dualSim = true;
             waterResistance = true;
             break;
        case IPHONE_12_PRO:
             phone = IPHONE_12_PRO;
             battery = 2815;
             ram = 6;
             internalStorage = 128;
             g5 = true;
             wifi = true;
             bluetooth = true;
             dualSim = true;
             waterResistance = true;
             break;
        case IPHONE_21_PRO_MAX:
             phone = IPHONE_21_PRO_MAX;
             battery = 3687;
             ram = 6;
             internalStorage = 128;
             g5 = true;
             wifi = true;
             bluetooth = true;
             dualSim = true;
             waterResistance = true;
             break;
        case SAMSUNG_S21:
             phone = SAMSUNG_S21;
             battery = 4000;
             ram = 8;
             internalStorage = 128;
             g5 = true;
             wifi = true;
             bluetooth = true;
             dualSim = false;
             waterResistance = true;
             break;
        case SAMSUNG_S21_PLUS:
             phone = SAMSUNG_S21_PLUS;
             battery = 4800;
             ram = 8;
             internalStorage = 128;
             g5 = true;
             wifi = true;
             bluetooth = true;
             dualSim = true;
             waterResistance = true;
             break;
        case SAMSUNG_S21_ULTRA:
             phone = SAMSUNG_S21_ULTRA;
             battery = 5000;
             ram = 12;
             internalStorage = 128;
             g5 = true;
             wifi = true;
             bluetooth = true;
             dualSim = true;
             waterResistance = true;
             break;
        default: std::cout << "ERROR: Undefined phone type!" << std::endl;
    }

    switch(selectedColor){
        case BLACK:
             color = BLACK;
             break;
        case WHITE:
             color = WHITE;
             break;
        case RED:
             color = RED;
             break;
        case GREEN:
             color = GREEN;
             break;
        case SILVER:
             color = SILVER;
             break;
        case GOLD:
             color = GOLD;
             break;
        case TITANIUM:
             color = TITANIUM;
             break;
        case GRAY:
             color = GRAY;
             break;
        case VIOLET:
             color = VIOLET;
             break;
        case BROWN:
             color = BROWN;
             break;
        case BLUE:
             color = BLUE;
             break;
        default: std::cout << "ERROR: Undefined color type!" << std::endl;
    }

    switch(selectedProccesor){
        case SNAPDRAGON:
             proccesor = SNAPDRAGON;
             break;
        case EXYNOS:
             proccesor = EXYNOS;
             break;
        case QUALCOMM:
             proccesor = QUALCOMM;
             break;
        default: std::cout << "ERROR: Undefined proccesor type!" << std::endl;
    }
}

Phone::Phone(const Phone& copiedPhone): battery(copiedPhone.battery), ram(copiedPhone.ram), internalStorage(copiedPhone.internalStorage), 
g5(copiedPhone.g5), wifi(copiedPhone.wifi), bluetooth(copiedPhone.bluetooth), dualSim(copiedPhone.dualSim), waterResistance(copiedPhone.waterResistance),
phone(copiedPhone.phone), color(copiedPhone.color), proccesor(copiedPhone.proccesor){}

Phone::~Phone(){}


void Phone::upgradeMemory(memoryTypes newInternalStorage){
    PhoneTypes curentPhone = getPhoneType();
    
    switch(curentPhone){
        case IPHONE_12_MINI:
             switchPhoneMemory(newInternalStorage);
             break;
        case IPHONE_12:
             switchPhoneMemory(newInternalStorage);
             break;
        case IPHONE_12_PRO:
             switchPhoneMemory(newInternalStorage);
             break;
        case IPHONE_21_PRO_MAX:
             switchPhoneMemory(newInternalStorage);
             break;
        case SAMSUNG_S21:
             std::cout << "The phone does not support upgrading memory" << std::endl;
             break;
        case SAMSUNG_S21_PLUS:
            if((newInternalStorage == GB_128) || (newInternalStorage == GB_256))
                switchPhoneMemory(newInternalStorage);
             break;
        case SAMSUNG_S21_ULTRA:
             switchPhoneMemory(newInternalStorage);
             switchPhoneRam();
             break;
    }
}

void Phone::switchPhoneMemory(memoryTypes newInternalStorage){
    switch(newInternalStorage){
        case GB_64:
             this->internalStorage = 64;
             break;
        case GB_128:
             this->internalStorage = 128;
             break;
        case GB_256:
             this->internalStorage = 256;
             break;
        case GB_512:
             this->internalStorage = 512;
             break;
    }
}

void Phone::switchPhoneRam(){
    int internalStorage = getInternalStorage();

    switch(internalStorage){
        case 128:
             this->ram = 12;
             break;
        case 256:
             this->ram = 12;
             break;
        case 512:
             this->ram = 16;
             break;
    }
}

void Phone::getPhoneSpecs(){

     std::string phoneType = "", color = "", proccesor = "";

     switch(getPhoneType()){
          case IPHONE_12_MINI:
               phoneType = "IPHONE 12 MINI";
               break;
          case IPHONE_12:
               phoneType = "IPHONE 12";
               break;
          case IPHONE_12_PRO:
               phoneType = "IPHONE 12 PRO";
               break;
          case IPHONE_21_PRO_MAX:
               phoneType = "IPHONE 12 PRO MAX";
               break;
          case SAMSUNG_S21:
               phoneType = "SAMSUNG S21";
               break;
          case SAMSUNG_S21_PLUS:
               phoneType = "SAMSUNG S21 PLUS";
               break;
          case SAMSUNG_S21_ULTRA:
               phoneType = "SAMSUNG S21 ULTRA";
               break;
          default: phoneType = "ERROR: Undefined phone type";
     }

     switch(getPhoneColor()){
          case BLACK:
               color = "BLACK";
               break;
          case WHITE:
               color = "WHITE";
               break;
          case RED:
               color = "RED";
               break;
          case GREEN:
               color = "GREEN";
               break;
          case SILVER:
               color = "SILVER";
               break;
          case GOLD:
               color = "GOLD";
               break;
          case TITANIUM:
               color = "TITANIUM";
               break;
          case GRAY:
               color = "GRAY";
               break;
          case VIOLET:
               color = "VIOLET";
               break;
          case BROWN:
               color = "BROWN";
               break;
          case BLUE:
               color = "BLUE";
               break;
          default: color = "ERROR: Undefined color type";
     }

     switch(getPhoneProccesor()){
          case SNAPDRAGON:
               proccesor = "SNAPDRAGON";
               break;
          case EXYNOS:
               proccesor = "EXYNOS";
               break;
          case QUALCOMM:
               proccesor = "QUALCOMM";
               break;
          default: proccesor = "ERROR: Undefined proccesor type";
     }

     std::cout << std::endl;
     std::cout << " ______________________________" << std::endl;
     std::cout << "|                              |" << std::endl;
     std::cout << "|          PHONE SPECS         |" << std::endl;
     std::cout << "|______________________________|" << std::endl;
     std::cout << std::endl;
     std::cout << "| Phone Type: " << phoneType << " " << color << std::endl;
     std::cout << "| Processor: "  << proccesor << std::endl;
     std::cout << "| Battery size: " << getBattery() << "mAh" << std::endl;
     std::cout << "| RAM: " << getRam() << " GB" << std::endl;
     std::cout << "| Storage: " << getInternalStorage() << std::endl;
     std::cout << "| 5G: " << (has5G()? "true":"false") << std::endl;
     std::cout << "| wifi: " << (hasWifi()? "true":"false" )<< std::endl;
     std::cout << "| bluetooth: " << (hasBluetooth()? "true":"false") << std::endl;
     std::cout << "| dualSim: " << (hasDualSim()? "true":"false" )<< std::endl;
     std::cout << "| water Resistance: " << (isWaterResistant()? "true":"false")<< std::endl;

     std::cout << "________________________________" << std::endl;
     std::cout << std::endl;
}

PhoneTypes Phone::getPhoneType(){
     return this->phone;
}

colorTypes Phone::getPhoneColor(){
     return this->color;
}

proccesorTypes Phone::getPhoneProccesor(){
     return this->proccesor;
}

int Phone::getBattery(){
     return this->battery;
}

int Phone::getRam(){
     return this->ram;
}

int Phone::getInternalStorage(){
     return this->internalStorage;
}

bool Phone::has5G(){
     return this->g5;
}

bool Phone::hasWifi(){
     return this->wifi;
}

bool Phone::hasBluetooth(){
     return this->bluetooth;
}

bool Phone::hasDualSim(){
     return this->dualSim;
}

bool Phone::isWaterResistant(){
     return this->waterResistance;
}

