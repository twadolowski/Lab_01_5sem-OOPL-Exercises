// Task 1
#include <iostream>

using namespace std;

class Point
{
    float x,y;
    
public:

Point(float x_ = 0, float y_ = 0)
: x(x_), y(y_)

{
    
}

void set_x(float x_)
{
    x=x_;
}    
void set_y(float y_)
{
    y=y_;
}    
float get_x()
{
    return x;
}

float get_y()
{
    return y;
}

};

int main()
{
  Point first;
  cout << first.get_x() << endl;
  first.set_y(10);
  cout << first.get_x()
;}