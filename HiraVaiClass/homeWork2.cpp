#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a;
    float x,y, sum, mul, avg;
    cout <<"Enter two number : "<<endl;
    cin >>x >>y;
    sum = x+y;
    mul = x*y;
    avg = (x+y)/2;
    cout <<"\nThe sum of two value = "<<sum<<endl;
    cout << "The multiplication of two value = "<<mul<<endl;
    cout <<"The average of two value = "<<avg<<endl<<endl;

    cout <<"The size of int : "<< sizeof(int)<<"byte"<<endl;
    cout <<"The size of float : "<< sizeof(float)<<"byte"<<endl;
    cout <<"The size of double : "<< sizeof(double)<<"byte"<<endl;
    cout <<"The size of boolean type : "<< sizeof(bool)<<"byte"<<endl;
    cout <<"The size of character : "<< sizeof(char)<<"byte"<<endl;


    return 0;
}
