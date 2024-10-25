#ifndef BATTERYMODULE_HPP
#define BATTERYMODULE_HPP

class BatteryModule 
{
    private:
        float batteryTemperature = 25.0;    //initial temperature set to standard room temperature
        float batteryVoltage;
        float maxChargeRate;                //contains value for both charge/discharge as a representation of power flow to/from battery
        float maxCapacity;
        float realCapacity;
    public:
        //constructors
        BatteryModule();
        BatteryModule(float temp, float voltage, float c_rate, float max_capacity, float real_capacity);
        //getters
        float getBatteryTemperature();
        float getBatteryVoltage();
        float getMaxChargeRate();
        float getMaxCapacity();
        float getRealCapacity();

        //setters
        void setBatteryTemperature(float temp);
        void setBatteryVoltage(float volt);
        void setMaxChargeRate(float c_rate);
        void setMaxCapacity(float max_capacity);
        void setRealCapacity(float real_capacity);

        void changeBatteryTemperature(float temp_delta);
        void changeBatteryVoltage(float volt_delta);
        void changeMaxChargeRate(float c_rate_delta);
        void changeMaxCapacity(float max_capacity_delta);
        void changeRealCapacity(float real_capacity_delta);

        //destructors
        ~BatteryModule();

};
#endif