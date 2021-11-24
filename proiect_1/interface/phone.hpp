#ifndef PHONE_INTERFACE_PHONEINTERFACE_HPP
#define PHONE_INTERFACE_PHONEINTERFACE_HPP

#include "basicheaders/basicHeaders.hpp"

namespace phone{

class Phone {

    public:
        Phone();

        Phone(PhoneTypes selectedPhone, colorTypes selectedColor, proccesorTypes selectedProccesor);

        Phone(const Phone& copiedPhone);

        ~Phone();

        void upgradeMemory(memoryTypes newInternalStorage);

        PhoneTypes getPhoneType() const;

        colorTypes getPhoneColor() const;

        proccesorTypes getPhoneProccesor() const;

        void getPhoneSpecs(); 

        int getBattery();

        int getRam();

        int getInternalStorage();

        bool has5G();

        bool hasWifi();

        bool hasBluetooth();

        bool hasDualSim();

        bool isWaterResistant();

        void switchPhoneMemory(memoryTypes newInternalStorage);

        void switchPhoneRam();

        void displayPhone();

        Phone& operator=(const Phone&);

    private:
        Phone(Phone&&) = default;

        int battery, ram, internalStorage;
        bool g5, wifi, bluetooth, dualSim, waterResistance;
        PhoneTypes phone;
        colorTypes color;
        proccesorTypes proccesor;

};
}

#endif 