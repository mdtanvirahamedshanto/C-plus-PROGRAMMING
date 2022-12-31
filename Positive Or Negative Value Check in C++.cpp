//Positive Or Negative Value Check in C++ Programme

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter Your Value: ";
    cin>> num;

    if(0 < num)
    {
        cout<< num <<" is a Positive Value";
    }
    else if(0 > num)
    {
        cout<< num <<" is a Negative Value";
    }


return 0;
}

