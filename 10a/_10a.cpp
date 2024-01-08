#include <iostream>
using namespace std;

int gcd_sub(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;    
}

int gcd_sub_r(int a, int b)
{
    if (a==b)
        return a;    
    if (a > b)
        return gcd_sub_r(a - b, b);
    else
        return gcd_sub_r(a, b - a);
}

int main(int argc, char *argv[])
{
    cout << "non-recursive:\n";
    cout << gcd_sub(64,20);    
    
    cout << "\nrecursive:\n";  
    cout << gcd_sub_r(64,20);
}
