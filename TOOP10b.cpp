#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void odd(int x);
void even(int x);

int main()
{
    int i;
    do
    {
        cout<<"\nPlease enter a number (0 to exit): ";
        cin>>i;
        odd(i);
    }while(i!=0);
    return 0;
}

void odd(int x)
{
    if((x%2)!=0)
    {
        cout<<"That is an odd number.";
    }
    else
    {
        even(x);
    }
}

void even(int x)
{
    if((x%2)==0)
    {
        cout<<"That is an even number.";
    }
    else
    {
        odd(x);
    }
}