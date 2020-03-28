#include <iostream>
using namespace std;

int main()
{
    int x, y, z, min, max;
    cout << "Enter three integers:";
    cin >> x >> y >> z; 

    if (x < y)
    {
        if (x < z)
            min = x;
        else
            min = z;
    }
    else 
    {
        if (y < z)
            min = y;
        else 
            min = z;
    }

    if (x > y)
    {
        if (x > z)
            max = x;
        else
            max = z;
    }
    else 
    {
        if (y > z)
            max = y;
        else 
            max = z;
    }
    
    cout << "Sum = " << x + y + z << endl;
    cout << "Average = " << (x + y + z) / 3 << endl;
    cout << "Product = " << x * y * z << endl;
    cout << "Smalest = " << min << endl;
    cout << "Largest " << max << endl;
    
}