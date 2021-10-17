#include <iostream>
#include <time.h>
#include <algorithm>
#include <functional>

using namespace std;

class SmartArray
{
    int length;
    int *arr;

public:

    SmartArray(int x_)
        {
            length = x_;
            arr = new int[x_];
            srand(time(NULL));
            for(int i = 0; i< x_; i++)
            {
                arr[i] = rand() % 100;
            }

        }

    int get_max()
    {
        int max_val = arr[0];
        for(int i = 1; i < length; i++)
        {
            if(arr[i]>max_val);
            {
                max_val = arr[i];
            }
        }
        return max_val;
    }

    int get_min()
    {
        int min_val = arr[0];
        for(int i = 1; i < length; i++)
        {
            if(arr[i]<min_val);
            {
                min_val = arr[i];
            }
        }
        return min_val;
    }

    bool is_sorted()
    {
        bool I_S = true;

        if(length == 1)
            {
                I_S = true;
            }
        else if(arr[0]<arr[1])
            {
                for(int i = 1; i<length-1; i++)
                    {
                        if(!arr[i]<arr[i+1])
                        {
                            I_S = false;
                        }
                    }
            }
        else
            {
                for(int i = 1; i<length-1; i++)
                    {
                        if(!arr[i]>arr[i+1])
                        {
                            I_S = false;
                        }
                    }
            }

        return I_S;
    }


    void print()
    {
        for (int i = 0; i<length; i++)
        {
            cout << arr[i] << endl;
        }
    }

    void sort_stuff(char x)
    {
        if(x =='-')
        {
            sort(arr, arr + length, greater <int>());
        }
        else if (x == '+')
        {
            sort(arr, arr + length);
        }
        else
        {
            cout << "Pass either + or -" << endl;
        }
    }

};

int main()
{
    SmartArray x(10);
    cout << x.get_max() << endl;
    cout << x.is_sorted() << endl;
    x.print();
    cout << endl << endl;
    x.sort_stuff('-');
    x.print();
    return 0;
}
