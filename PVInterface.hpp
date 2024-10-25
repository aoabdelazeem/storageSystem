#ifndef PVINTERFACE_HPP
#define PVINTERFACE_HPP 

class PVInterface 
{
    private:
        float pvVoltage;
        float pvCurrent;
        float pvPower;

    public:
        //constructors
        PVInterface();
        PVInterface(float voltage, float current);
        //getters
        float getPVPower();
        float getPVVoltage();
        float getPVCurrent();
        //setters
        //NOTE: setters are only useful in terms of testing and validation
        //void setPVPower(float power);       //this setter is deprecated as power is not independent of voltage and current
        void setPVVoltage(float volt);
        void setPVCurrent(float current);
        //destructors
        ~PVInterface();
};

#endif