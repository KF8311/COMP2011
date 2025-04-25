class temperature
{   ...
    inline double kelvin() const { return degree; }
    inline double celsius() const { return degree - 273.15; }
};
