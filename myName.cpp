#include <iostream>
using namespace std;

int main()
{

    int  x = 3;

    int &rx = x;
   // cout <<rx;
    rx = 98;
    cout <<x;
    return 0;
}