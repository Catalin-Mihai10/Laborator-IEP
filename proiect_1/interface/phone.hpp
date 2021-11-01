#ifndef PHONE_INTERFACE_PHONEINTERFACE_HPP
#define PHONE_INTERFACE_PHONEINTERFACE_HPP

#include "basicTypes.hpp"

class Phone {


    public:
        Phone();

        Phone(PhoneTypes selectedPhone, colorTypes selectedColor, proccesorTypes selectedProccesor);

        Phone(const Phone& copiedPhone);

        //Phone(Phone&& phone);
        ~Phone();

        void upgradeMemory(memoryTypes newInternalStorage);

        PhoneTypes getPhoneType();

        colorTypes getPhoneColor();

        proccesorTypes getPhoneProccesor();

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

    private:
        int battery, ram, internalStorage;
        bool g5, wifi, bluetooth, dualSim, waterResistance;
        PhoneTypes phone;
        colorTypes color;
        proccesorTypes proccesor;
};

#endif 