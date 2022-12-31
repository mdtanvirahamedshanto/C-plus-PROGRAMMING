// then Number & Less then Number in C++

#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout<<"Enter Your 1st Number: ";
    cin>> a;
    cout<<"Enter Your 2nd Number: ";
    cin>> b;

    if(a == b)
    {
        cout<<"They Are Equal";
    }
    else if(a > b)
    {
        cout<< a <<" Grater then "<< b;
    }
    else if(a < b)
    {
        cout<<  <<" Less then "<< b;
    }


return 0;
}

