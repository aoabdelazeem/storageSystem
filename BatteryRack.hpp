#ifndef BATTERYRACK_HPP
#define BATTERYRACK_HPP

#include "BatteryModule.hpp"
#include <vector>

class BatteryRack
{
    private:
        const int maxBatteryModules;
        int actualBatteryModules;
        std::vector <BatteryModule> BatterySet;
    public:
        //constructors
        BatteryRack();
        BatteryRack(const int max_modules, int actual_modules);

        //getters
        int getMaxBatteryModules();
        int getActualBatteryModules();
        float getMaxVoltageSingle();                //maximum voltage of one battery (nominally the same as maximum voltage for rack assuming parallel connection)
        float getMaxVoltageRack();                  //maximum voltage of rack, allows for variation between batteries based on age, heat, charge cycles
        float getMaxChargeRateSingle();
        float getMaxChargeRateRack();

        //setters
        bool addBattery(BatteryModule new_battery);
        

        //destructors
        ~BatteryRack();

};

#endif