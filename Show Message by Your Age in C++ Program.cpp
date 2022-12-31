//Show Message by Your Age in C Program

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"What Is Your Age: ";
    cin >> age;

    if(age <= 12 )
    {
        cout<<"Your Are A Child.";
    }
    else if(age > 12 && age <=19)
    {
        cout<<"Your Are A Teens.";
    }
    else if(age > 19)
    {
        cout<<"Your Are A Older.";
    }

return 0;
}
