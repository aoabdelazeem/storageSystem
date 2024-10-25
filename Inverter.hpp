#ifndef INVERTER_HPP
#define INVERTER_HPP

class Inverter
{
    private:
        float maxChargeRate;            //contains value for both charge/discharge as a representation of power flow to/from inverter
        float batteryVoltage;
        float batteryCurrent;
        float gridFrequency;
        float gridVoltage;
        float powerReleasedBatteries;       //contains the value of power released into batteries (charging: +ve) or from batteries (discharging: -ve)
    public:
        //constructors
        Inverter();
        Inverter(float c_rate, float batt_volt, float batt_current,float grid_frequency, float grid_volt, float power_released);

        //getters
        float getMaxChargeRate();
        float getBatteryVoltage();
        float getBatteryCurrent();
        float getGridFrequency();
        float getGridVoltage();
        float getPowerReleasedBatteries();

        //setters
        //NOTE: these setters are for the purpose of testing and the assessment
        //NOTE: these values (besides charge/discharge rate) should NOT be set/get/stored in an inverter object and should be fetched in realtime from sensors
        void setMaxChargeRate(float c_rate);
        void setBatteryVoltage(float batt_volt);
        void setBatteryCurrent(float batt_current);
        void setGridFrequency(float grid_frequency);
        void setGridVoltage(float grid_voltage);
        void setPowerReleasedBatteries(float power_released);


        //destructors
        ~Inverter();
        
};

#endif