/* File: temperature2.h */
class temperature
{   ...
    inline double kelvin() const;
};

inline double
temperature::kelvin() const
{
    return degree;
}
