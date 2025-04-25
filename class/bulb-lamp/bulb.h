/* File: bulb.h */

class Bulb
{
  private:
    int wattage;        // A light bulb's power in watt (W)
    float price;        // A light bulb's price in dollars ($)
    
  public:
    int get_power() const;
    float get_price() const;
    void set(int w, float p); // w = bulb's wattage; p = its price
};
