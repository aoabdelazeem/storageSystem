#ifndef HOUSEINTERFACE_HPP
#define HOUSEINTERFACE_HPP

class HouseInterface 
{

    private:
        float houseVoltage;
        float houseFrequency;
        float houseCurrent;
        float housePower;
    public:
        
        //constructors
        HouseInterface();
        HouseInterface(float voltage, float frequency, float current);

        //getters
        float getHouseVoltage();
        float getHouseFrequency();
        float getHouseCurrent();
        float getHousePower();

        //setters
        void setHouseVoltage(float volt);
        void setHouseFrequency(float frequency);
        void setHouseCurrent(float current);
        //void setHousePower(float power);          //deprecated since house power consumption can't be independant of voltage and current

        void changeHouseVoltage(float volt_delta);
        void changeHouseCurrent(float current_delta);
        
        //destructors
        ~HouseInterface();

};

#endif