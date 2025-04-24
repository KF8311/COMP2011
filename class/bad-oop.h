struct temperature
{
    char scale;
    double degree;
};

/************** BASICALLY NO DIFFERENCE BETWEEN ***************/
/********** THE STRUCT AND CLASS DEFINITIONS HERE *************/

class temperature
{
  public:
    char get_scale() { return scale; }
    double get_degree() { return degree; }
    void set_scale(char s) { scale = s; }
    void set_degree(double d) { degree = d; }
    
  private:
    char scale;
    double degree;
};

