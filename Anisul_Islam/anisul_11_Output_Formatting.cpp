#include <bits/stdc++.h>

using namespace std;

int main()
{
    double num1,num2;
    cout << "This program is for basic arithmetic operations\n"<<endl;
    cout << "Enter first number=";
    cin>>num1;
    cout << "\nEnter first number=";
    cin >>num2;

    cout << showpoint; //এসব কিওয়ার্ড ব্যবহারের ক্ষেত্রে অবশ্যই float/double data type নিতে হবে
    cout << setprecision(10); //by default total 6 digit থাকে। তাই ৬ ডিজিটের কম/বেশি দেখাতে হলে
    cout <<"\n\n";
    cout <<setw(50) << "Sum of two number is = "<<num1+num2<<endl;

    cout << fixed; //দশমিকের পর থেকে ৬ ডিজিট কাউন্ট করবে
    cout << setprecision(3);

    cout <<setw(50)<< "subtraction of two number is = "<<num1-num2<<endl;
    cout <<setw(50)<< "Multiplication of two number is = "<<num1*num2<<endl;
    cout << noshowpoint;
    double div = (float) num1/num2;
    cout <<setw(50)<< "Division of two number is = "<<div<<endl;
    //cout << "Modulus of two number is = "<<num1%num2<<endl; //float টাইপ ডাটার ক্ষেত্রে % হয় না

    return 0;
}
