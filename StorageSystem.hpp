#ifndef STORAGESYSTEM_HPP
#define STORAGESYSTEM_HPP

#include "includes.hpp"
#include "defines.hpp"
#include "BatteryRack.hpp"
#include "Controller.hpp"
#include "EMCommand.hpp"
#include "EMState.hpp"
#include "GridInterface.hpp"
#include "HouseInterface.hpp"
#include "Inverter.hpp"
#include "PVInterface.hpp"

class storageSystem
{
    private:

        EMState systemState;
        EMCommand controllerCommand;
        Controller storageController;
        Inverter storageInverter;
        BatteryRack storageRack;
        GridInterface storageGridInterface;
        HouseInterface storageHouseInterface;
        PVInterface storagePVInterface;
        

};

#endif
