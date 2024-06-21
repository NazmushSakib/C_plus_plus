#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int main()

{
    int num1,num2;
    cout << "This program is for basic arithmetic operations\n"<<endl;
    cout << "Enter first number=";
    cin>>num1;
    cout << "\nEnter first number= ";
    cin>>num2;
    cout << "\n\nSum of two number is = "<<num1+num2<<endl;
    cout << "subtraction of two number is = "<<num1-num2<<endl;
    cout << "Multiplication of two number is = "<<num1*num2<<endl;
    double div = (float) num1/num2;
    cout << "Division of two number is = "<<div<<endl;
    cout << "Modulus of two number is = "<<num1%num2<<endl;

    getch ();
}
