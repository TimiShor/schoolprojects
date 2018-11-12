#include <iostream>

using namespace std;
int a;
int b;
int main()
{
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    if (a==b) {cout<<a;}
        else
        {
            while (a!=b)
            {
                if (a>b) {a=a-b;}
                    else {b=b-a;}
            }
            cout<<a;
        }
    return 0;
}
