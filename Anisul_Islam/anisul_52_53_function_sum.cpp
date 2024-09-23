#include<bits/stdc++.h>
using namespace std;

void addition(int a, int b)
{
    cout<<"sum_result = "<<a+b<<endl;
}
void addition(int a, int b, int c)
{
    cout<<"three_sum = "<<a+b+c<<endl;
}

void subtraction(int a, int b)
{
    cout<<"sub_result = "<<a-b<<endl;
}

void multiplication(int a, int b)
{
    cout<<"mul_result = "<<a*b<<endl;
}

void division(int a, int b)
{
    float c = (float)a / b;
    cout<<"division_result = "<<c<<endl;
}

int main()
{
    int x, y;
    cout<<"enter two numbers : ";
    cin>>x>>y;

    addition(x,y);
    subtraction(x,y);
    multiplication(x,y);
    division(x,y);
    addition(10,20,30);

    cout<<endl<<endl<<endl;
    return 0;
}
