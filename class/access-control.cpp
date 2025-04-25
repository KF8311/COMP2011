class temperature
{
  private:
    double degree;      // Internally it is always saved in Kelvin
  public:
    ...
    double kelvin() const;      // Read temperature in Kelvin
    void set(double d, char s); // Set the value of degree
};

int main()
{
    temperature x;
    x.set(20, CELSIUS); // OK: set() is public
    cout << x.degree;   // Error: cannot access private member degree
    return 0;
}

