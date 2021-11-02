#include <gtest/gtest.h>
#include "phone.hpp"

TEST(CheckDefaultConstructor, testDefaultConstructor){
    Phone phone;

    int expectedBatteryValue = 0;
    int actualBatteryValue = phone.getBattery();
    ASSERT_EQ(expectedBatteryValue, actualBatteryValue);

    int expectedRamValue = 0;
    int actualRamValue = phone.getRam();
    ASSERT_EQ(expectedRamValue, actualRamValue);

    int expectedInternalStorageValue = 0;
    int actualInternalStorageValue = phone.getInternalStorage();
    ASSERT_EQ(expectedInternalStorageValue, actualInternalStorageValue);

    bool expected5G = false;
    bool actual5G = phone.has5G();
    ASSERT_EQ(expected5G, actual5G);

    bool expectedWifi = false;
    bool actualWifi = phone.hasWifi();
    ASSERT_EQ(expectedWifi, actualWifi);

    bool expectedBluetooth = false;
    bool actualBluetooth = phone.hasBluetooth();
    ASSERT_EQ(expectedBluetooth, actualBluetooth);

    bool expectedDualSim = false;
    bool actualDualSim = phone.hasDualSim();
    ASSERT_EQ(expectedDualSim, actualDualSim);

    bool expectedWaterResistance = false;
    bool actualWaterResistance = phone.isWaterResistant();
    ASSERT_EQ(expectedWaterResistance, actualWaterResistance);

    PhoneTypes expectedPhoneType = UNDEFINED_PHONE;
    PhoneTypes actualPhoneType = phone.getPhoneType();
    ASSERT_EQ(expectedPhoneType, actualPhoneType);

    colorTypes expectedColorType = UNDEFINED_COLOR;
    colorTypes actualColorType = phone.getPhoneColor();
    ASSERT_EQ(expectedColorType, actualColorType);

    proccesorTypes expectedProccesorType = UNDEFINED_PROCCESOR;
    proccesorTypes actualProccesorType = phone.getPhoneProccesor();
    ASSERT_EQ(expectedProccesorType, actualProccesorType);
     
}

TEST(CheckParametrizedConstructor, testParametrizedConstructor){
    Phone phone(SAMSUNG_S21,GRAY,QUALCOMM);

    int expectedBatteryValue = 4000;
    int actualBatteryValue = phone.getBattery();
    ASSERT_EQ(expectedBatteryValue, actualBatteryValue);

    int expectedRamValue = 8;
    int actualRamValue = phone.getRam();
    ASSERT_EQ(expectedRamValue, actualRamValue);

    int expectedInternalStorageValue = 128;
    int actualInternalStorageValue = phone.getInternalStorage();
    ASSERT_EQ(expectedInternalStorageValue, actualInternalStorageValue);

    bool expected5G = true;
    bool actual5G = phone.has5G();
    ASSERT_EQ(expected5G, actual5G);

    bool expectedWifi = true;
    bool actualWifi = phone.hasWifi();
    ASSERT_EQ(expectedWifi, actualWifi);

    bool expectedBluetooth = true;
    bool actualBluetooth = phone.hasBluetooth();
    ASSERT_EQ(expectedBluetooth, actualBluetooth);

    bool expectedDualSim = false;
    bool actualDualSim = phone.hasDualSim();
    ASSERT_EQ(expectedDualSim, actualDualSim);

    bool expectedWaterResistance = true;
    bool actualWaterResistance = phone.isWaterResistant();
    ASSERT_EQ(expectedWaterResistance, actualWaterResistance);

    PhoneTypes expectedPhoneType = SAMSUNG_S21;
    PhoneTypes actualPhoneType = phone.getPhoneType();
    ASSERT_EQ(expectedPhoneType, actualPhoneType);

    colorTypes expectedColorType = GRAY;
    colorTypes actualColorType = phone.getPhoneColor();
    ASSERT_EQ(expectedColorType, actualColorType);

    proccesorTypes expectedProccesorType = QUALCOMM;
    proccesorTypes actualProccesorType = phone.getPhoneProccesor();
    ASSERT_EQ(expectedProccesorType, actualProccesorType);
     
}

TEST(CheckCopyConstructor, testCopyConstructor){
    Phone phone(SAMSUNG_S21,GRAY,QUALCOMM);
    Phone copyPhone(phone);

    int expectedBatteryValue = 4000;
    int actualBatteryValue = copyPhone.getBattery();
    ASSERT_EQ(expectedBatteryValue, actualBatteryValue);

    int expectedRamValue = 8;
    int actualRamValue = copyPhone.getRam();
    ASSERT_EQ(expectedRamValue, actualRamValue);

    int expectedInternalStorageValue = 128;
    int actualInternalStorageValue = copyPhone.getInternalStorage();
    ASSERT_EQ(expectedInternalStorageValue, actualInternalStorageValue);

    bool expected5G = true;
    bool actual5G = copyPhone.has5G();
    ASSERT_EQ(expected5G, actual5G);

    bool expectedWifi = true;
    bool actualWifi = copyPhone.hasWifi();
    ASSERT_EQ(expectedWifi, actualWifi);

    bool expectedBluetooth = true;
    bool actualBluetooth = copyPhone.hasBluetooth();
    ASSERT_EQ(expectedBluetooth, actualBluetooth);

    bool expectedDualSim = false;
    bool actualDualSim = copyPhone.hasDualSim();
    ASSERT_EQ(expectedDualSim, actualDualSim);

    bool expectedWaterResistance = true;
    bool actualWaterResistance = copyPhone.isWaterResistant();
    ASSERT_EQ(expectedWaterResistance, actualWaterResistance);

    PhoneTypes expectedPhoneType = SAMSUNG_S21;
    PhoneTypes actualPhoneType = copyPhone.getPhoneType();
    ASSERT_EQ(expectedPhoneType, actualPhoneType);

    colorTypes expectedColorType = GRAY;
    colorTypes actualColorType = copyPhone.getPhoneColor();
    ASSERT_EQ(expectedColorType, actualColorType);

    proccesorTypes expectedProccesorType = QUALCOMM;
    proccesorTypes actualProccesorType = copyPhone.getPhoneProccesor();
    ASSERT_EQ(expectedProccesorType, actualProccesorType);
     
}

TEST(CheckPhoneBattery, testGetBattery){
    Phone phone;
    int expectedValue = 0;
    int actualValue = phone.getBattery();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_1(IPHONE_12_MINI, GOLD, SNAPDRAGON);
    expectedValue = 2227;
    actualValue = phone_1.getBattery();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_2(IPHONE_12, GOLD, SNAPDRAGON);
    expectedValue = 2815;
    actualValue = phone_2.getBattery();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_3(IPHONE_12_PRO, GOLD, SNAPDRAGON);
    expectedValue = 2815;
    actualValue = phone_3.getBattery();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_4(IPHONE_21_PRO_MAX, GOLD, SNAPDRAGON);
    expectedValue = 3687;
    actualValue = phone_4.getBattery();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_5(SAMSUNG_S21, GOLD, SNAPDRAGON);
    expectedValue = 4000;
    actualValue = phone_5.getBattery();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_6(SAMSUNG_S21_PLUS, GOLD, SNAPDRAGON);
    expectedValue = 4800;
    actualValue = phone_6.getBattery();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_7(SAMSUNG_S21_ULTRA, GOLD, SNAPDRAGON);
    expectedValue = 5000;
    actualValue = phone_7.getBattery();
    ASSERT_EQ(expectedValue, actualValue);
}

TEST(CheckPhoneRam, testGetRam){
    Phone phone;
    int expectedValue = 0;
    int actualValue = phone.getRam();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_1(IPHONE_12_MINI, GOLD, SNAPDRAGON);
    expectedValue = 4;
    actualValue = phone_1.getRam();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_2(IPHONE_12, GOLD, SNAPDRAGON);
    expectedValue = 4;
    actualValue = phone_2.getRam();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_3(IPHONE_12_PRO, GOLD, SNAPDRAGON);
    expectedValue = 6;
    actualValue = phone_3.getRam();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_4(IPHONE_21_PRO_MAX, GOLD, SNAPDRAGON);
    expectedValue = 6;
    actualValue = phone_4.getRam();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_5(SAMSUNG_S21, GOLD, SNAPDRAGON);
    expectedValue = 8;
    actualValue = phone_5.getRam();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_6(SAMSUNG_S21_PLUS, GOLD, SNAPDRAGON);
    expectedValue = 8;
    actualValue = phone_6.getRam();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_7(SAMSUNG_S21_ULTRA, GOLD, SNAPDRAGON);
    expectedValue = 12;
    actualValue = phone_7.getRam();
    ASSERT_EQ(expectedValue, actualValue);

    phone_7.upgradeMemory(GB_512);
    expectedValue = 16;
    actualValue = phone_7.getRam();
    ASSERT_EQ(expectedValue, actualValue);
}

TEST(CheckPhoneInternalStorage, testgetInternalStorage){
    Phone phone;
    int expectedValue = 0;
    int actualValue = phone.getInternalStorage();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_1(IPHONE_12_MINI, GOLD, SNAPDRAGON);
    expectedValue = 64;
    actualValue = phone_1.getInternalStorage();
    ASSERT_EQ(expectedValue, actualValue);

    phone_1.upgradeMemory(GB_128);
    expectedValue = 128;
    actualValue = phone_1.getInternalStorage();
    ASSERT_EQ(expectedValue, actualValue);

    phone_1.upgradeMemory(GB_256);
    expectedValue = 256;
    actualValue = phone_1.getInternalStorage();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_2(IPHONE_21_PRO_MAX, GOLD, SNAPDRAGON);
    expectedValue = 128;
    actualValue = phone_2.getInternalStorage();
    ASSERT_EQ(expectedValue, actualValue);

    phone_2.upgradeMemory(GB_256);
    expectedValue = 256;
    actualValue = phone_2.getInternalStorage();
    ASSERT_EQ(expectedValue, actualValue);

    phone_2.upgradeMemory(GB_512);
    expectedValue = 512;
    actualValue = phone_2.getInternalStorage();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_3(SAMSUNG_S21, GOLD, SNAPDRAGON);
    expectedValue = 128;
    actualValue = phone_3.getInternalStorage();
    ASSERT_EQ(expectedValue, actualValue);

    phone_3.upgradeMemory(GB_256);
    expectedValue = 128;
    actualValue = phone_3.getInternalStorage();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_4(SAMSUNG_S21_ULTRA, GOLD, SNAPDRAGON);
    expectedValue = 128;
    actualValue = phone_4.getInternalStorage();
    ASSERT_EQ(expectedValue, actualValue);

    phone_4.upgradeMemory(GB_256);
    expectedValue = 256;
    actualValue = phone_4.getInternalStorage();
    ASSERT_EQ(expectedValue, actualValue);

    phone_4.upgradeMemory(GB_512);
    expectedValue = 512;
    actualValue = phone_4.getInternalStorage();
    ASSERT_EQ(expectedValue, actualValue);
}

TEST(CheckThatPhoneHas5G, testHas5G){
    Phone phone;
    bool expectedValue = false;
    bool actualValue = phone.has5G();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_1(IPHONE_12_MINI, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_1.has5G();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_2(IPHONE_12, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_2.has5G();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_3(IPHONE_12_PRO, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_3.has5G();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_4(IPHONE_21_PRO_MAX, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_4.has5G();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_5(SAMSUNG_S21, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_5.has5G();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_6(SAMSUNG_S21_PLUS, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_6.has5G();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_7(SAMSUNG_S21_ULTRA, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_7.has5G();
    ASSERT_EQ(expectedValue, actualValue);
}

TEST(CheckThatPhoneHasWifi, testHasWifi){
    Phone phone;
    bool expectedValue = false;
    bool actualValue = phone.hasWifi();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_1(IPHONE_12_MINI, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_1.hasWifi();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_2(IPHONE_12, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_2.hasWifi();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_3(IPHONE_12_PRO, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_3.hasWifi();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_4(IPHONE_21_PRO_MAX, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_4.hasWifi();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_5(SAMSUNG_S21, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_5.hasWifi();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_6(SAMSUNG_S21_PLUS, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_6.hasWifi();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_7(SAMSUNG_S21_ULTRA, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_7.hasWifi();
    ASSERT_EQ(expectedValue, actualValue);
}

TEST(CheckThatPhoneHasBluetoot, testHasBluetooth){
    Phone phone;
    bool expectedValue = false;
    bool actualValue = phone.hasBluetooth();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_1(IPHONE_12_MINI, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_1.hasBluetooth();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_2(IPHONE_12, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_2.hasBluetooth();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_3(IPHONE_12_PRO, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_3.hasBluetooth();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_4(IPHONE_21_PRO_MAX, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_4.hasBluetooth();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_5(SAMSUNG_S21, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_5.hasBluetooth();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_6(SAMSUNG_S21_PLUS, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_6.hasBluetooth();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_7(SAMSUNG_S21_ULTRA, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_7.hasBluetooth();
    ASSERT_EQ(expectedValue, actualValue);
}

TEST(CheckThatPhoneHasDualSim, testPhoneHasDualSim){
    Phone phone;
    bool expectedValue = false;
    bool actualValue = phone.hasDualSim();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_1(IPHONE_12_MINI, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_1.hasDualSim();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_2(IPHONE_12, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_2.hasDualSim();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_3(IPHONE_12_PRO, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_3.hasDualSim();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_4(IPHONE_21_PRO_MAX, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_4.hasDualSim();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_5(SAMSUNG_S21, GOLD, SNAPDRAGON);
    expectedValue = false;
    actualValue = phone_5.hasDualSim();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_6(SAMSUNG_S21_PLUS, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_6.hasDualSim();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_7(SAMSUNG_S21_ULTRA, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_7.hasDualSim();
    ASSERT_EQ(expectedValue, actualValue);
}

TEST(CheckThatPhoneIsWaterResistant, testIsWaterResistant){
    Phone phone;
    bool expectedValue = false;
    bool actualValue = phone.isWaterResistant();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_1(IPHONE_12_MINI, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_1.isWaterResistant();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_2(IPHONE_12, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_2.isWaterResistant();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_3(IPHONE_12_PRO, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_3.isWaterResistant();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_4(IPHONE_21_PRO_MAX, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_4.isWaterResistant();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_5(SAMSUNG_S21, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_5.isWaterResistant();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_6(SAMSUNG_S21_PLUS, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_6.isWaterResistant();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_7(SAMSUNG_S21_ULTRA, GOLD, SNAPDRAGON);
    expectedValue = true;
    actualValue = phone_7.isWaterResistant();
    ASSERT_EQ(expectedValue, actualValue);
}

TEST(CheckPhoneType, testGetPhoneType){
    Phone phone;
    PhoneTypes expectedValue = UNDEFINED_PHONE;
    PhoneTypes actualValue = phone.getPhoneType();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_1(IPHONE_12_MINI, GOLD, SNAPDRAGON);
    expectedValue = IPHONE_12_MINI;
    actualValue = phone_1.getPhoneType();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_2(IPHONE_12, GOLD, SNAPDRAGON);
    expectedValue = IPHONE_12;
    actualValue = phone_2.getPhoneType();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_3(IPHONE_12_PRO, GOLD, SNAPDRAGON);
    expectedValue = IPHONE_12_PRO;
    actualValue = phone_3.getPhoneType();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_4(IPHONE_21_PRO_MAX, GOLD, SNAPDRAGON);
    expectedValue = IPHONE_21_PRO_MAX;
    actualValue = phone_4.getPhoneType();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_5(SAMSUNG_S21, GOLD, SNAPDRAGON);
    expectedValue = SAMSUNG_S21;
    actualValue = phone_5.getPhoneType();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_6(SAMSUNG_S21_PLUS, GOLD, SNAPDRAGON);
    expectedValue = SAMSUNG_S21_PLUS;
    actualValue = phone_6.getPhoneType();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_7(SAMSUNG_S21_ULTRA, GOLD, SNAPDRAGON);
    expectedValue = SAMSUNG_S21_ULTRA;
    actualValue = phone_7.getPhoneType();
    ASSERT_EQ(expectedValue, actualValue);
}

TEST(CheckPhoneColor, testGetPhoneColor){
    Phone phone;
    colorTypes expectedValue = UNDEFINED_COLOR;
    colorTypes actualValue = phone.getPhoneColor();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_1(IPHONE_12_MINI, GOLD, SNAPDRAGON);
    expectedValue = GOLD;
    actualValue = phone_1.getPhoneColor();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_2(IPHONE_12, GREEN, SNAPDRAGON);
    expectedValue = GREEN;
    actualValue = phone_2.getPhoneColor();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_3(IPHONE_12_PRO, TITANIUM, SNAPDRAGON);
    expectedValue = TITANIUM;
    actualValue = phone_3.getPhoneColor();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_4(IPHONE_21_PRO_MAX, GRAY, SNAPDRAGON);
    expectedValue = GRAY;
    actualValue = phone_4.getPhoneColor();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_5(SAMSUNG_S21, BROWN, SNAPDRAGON);
    expectedValue = BROWN;
    actualValue = phone_5.getPhoneColor();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_6(SAMSUNG_S21_PLUS, WHITE, SNAPDRAGON);
    expectedValue = WHITE;
    actualValue = phone_6.getPhoneColor();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_7(SAMSUNG_S21_ULTRA, BLACK, SNAPDRAGON);
    expectedValue = BLACK;
    actualValue = phone_7.getPhoneColor();
    ASSERT_EQ(expectedValue, actualValue);  
}

TEST(CheckPhoneProccesor, testGetPhoneProccesor){
    Phone phone;
    proccesorTypes expectedValue = UNDEFINED_PROCCESOR;
    proccesorTypes actualValue = phone.getPhoneProccesor();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_1(IPHONE_12_MINI, GOLD, SNAPDRAGON);
    expectedValue = SNAPDRAGON;
    actualValue = phone_1.getPhoneProccesor();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_2(IPHONE_12, GREEN, EXYNOS);
    expectedValue = EXYNOS;
    actualValue = phone_2.getPhoneProccesor();
    ASSERT_EQ(expectedValue, actualValue);

    Phone phone_3(IPHONE_12_PRO, TITANIUM, QUALCOMM);
    expectedValue = QUALCOMM;
    actualValue = phone_3.getPhoneProccesor();
    ASSERT_EQ(expectedValue, actualValue);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}