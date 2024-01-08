#include <stdint.h>

#include <algorithm>
#include <cstdlib> 
#include <ctime> 
#include <iostream>

using namespace std;
long long MinDistance(int a[], int asize)
{
    long long dist = INTMAX_MAX;

    sort(a,a + asize);    

    for (int i = 0; i < asize - 1; i++)
    {
        int x = a[i];
        int y = a[i + 1];
        cout << "x: " <<x << " y: " <<y << "\n";
        cout << "a[i]: " <<a[i] << " a[i+1]: " <<a[i+1] << "\n";
        long long d = y - x;
        if (d == 0) return 0; // short circuit, distance of 0 achieved
        if (d < dist)
            dist = d;        
    }
    return dist;
}

#define A_SIZE 10000

int main(int argc, char* argv[])
{
    srand(time(NULL));
    
    int a[A_SIZE];

    for (int i = 0; i < A_SIZE; i++)
        a[i] = rand() * RAND_MAX;

    long long dist = MinDistance(a,A_SIZE);

    cout << "distance = " << dist; 
    
    return 0;
}
