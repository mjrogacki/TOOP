#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int subtract(int a, int b)
{
    int r=a-b;
    return r;
}

int main()
{
    int x;
    int y;
    int z;

    x=3;
    y=8;
    z=subtract(5,2);
    cout<<z;
    cout<<subtract(5,2);
}