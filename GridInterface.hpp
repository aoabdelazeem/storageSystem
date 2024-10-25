#ifndef GRIDINTERFACE_HPP
#define GRIDINTERFACE_HPP

class GridInterface
{
    private:
        float amountSold = 0.0;
        float amountBought = 0.0;       //the amounts are separated to allow for separate price calculations at different rates
        float gridVoltage;
        float gridFrequency;
    public:

        //constructors
        GridInterface();
        GridInterface(float sold, float bought, float volt, float frequency);
        
        //getters
        float getAmountSold();
        float getAmountBought();
        float getGridVoltage();
        float getGridFrequency();

        //setters
        void setAmountSold(float sold);
        void setAmountBought(float bought);
        void setGridVoltage(float volt);
        void setGridFrequency(float frequency);

        void changeAmountSold(float sold_delta);
        void changeAmountBought(float bought_delta);

        //destructors
        ~GridInterface();
};

#endif