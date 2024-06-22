#include <bits/stdc++.h>

using namespace std;

//leap year function

    string findLeapYear(int year)
    {
        string ans;
        
        (year%4==0 && year !=100) || year%400 ==0 ? ans = "a leap year" : ans = "not a leap year";

        return ans;
    }
    
int main()
{   
    int year;
    string checkYear;
    cout<<"Enter a year : ";    
    cin >>year;
    cout <<"The year you've entered is "<< findLeapYear(year);


 return 0;
}