#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    cout<< "Enter the value" <<endl;
    int x,y,z;
    cin>>x;
    y=--x;
    z=x--;
    cout <<x<< endl;
    cout << y<< endl;
    cout << z<< endl;
    return 0;
}
