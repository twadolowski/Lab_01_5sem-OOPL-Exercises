#include <iostream>
#include "main1.cpp"


using namespace std;

class Rectangle
{
    Point placement;
    float width, height;

public:
    Rectangle(float x_, float y_, float width_, float height_)
        :placement(x_,y_), width(width_), height(height_)
    {

    }

    /*float* get_position()
    {
        float position[2]={placement.get_x(),placement.get_y()};
        return position;
    }*/

    float get_x()
    {
        return placement.get_x();
    }

    float get_y()
    {
        return placement.get_y();
    }

    float set_x(float x)
    {
        placement.set_x(x);
    }

    float set_y(float y)
    {
        placement.set_y(y);
    }

    float get_width() {return width;}
    float get_height() {return height;}
    float set_width(float x) {width = x;}
    float set_height(float x) {height = x;}

    void move_rec(float x_ax, float y_ax)
    {
        placement.set_x(placement.get_x()+x_ax);
        placement.set_y(placement.get_y()+y_ax);
    }

    void print()
    {
        cout << "Initial position [" << placement.get_x() <<"," << placement.get_y() << "]" << endl;
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
    }

};

int main()
{
    Rectangle rec(1,1,1,1);
    rec.print();
    cout << endl;
    rec.set_x(10);
    rec.print();

    rec.move_rec(0,4);
    rec.set_width(10);
    cout << endl;
    rec.print();
    return 0;
}
