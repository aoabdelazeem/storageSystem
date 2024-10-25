#ifndef EMSTATE_HPP
#define EMSTATE_HPP

class EMState
{
    public:
        EMState();
        EMState(float pv_power, float house_power, float inverter_c_rate, float battery_c_rate, float inverter_power_released);
        float pvProducedPower;
        float houseConsumedPower;
        float maxInverterCRate;
        float maxBatteryCRate;
        float inverterPowerReleased;

        void setState(float pv_power, float house_power, float inverter_c_rate, float battery_c_rate, float inverter_power_released);
        ~EMState();


};

#endif