#include <iostream>
#include <math.h>
#include <sstream>
#include <string>

using namespace std;

class Int
{
    int x;

public:

    void to_zero()
    {
        x = (int) 0;
    }

    void set_int(float x_)
    {
        x = (int) floor(x_);
    }

    string get_val(string decision = "wot")
    {
        if(decision=="hex")
            {
                stringstream s;
                s << hex << x;
                return s.str();
            }
        else
            {
                return to_string(x);
            }
    }

    void add_ints(Int first, Int second)
    {
        x = stoi(first.get_val()) + stoi(second.get_val());
    }

};

int main()
{
    Int X;
    Int Y;
    Int Z;

    X.set_int(4);
    Y.set_int(2);

    Z.add_ints(X,Y);
    cout << Z.get_val();
    return 0;
}
