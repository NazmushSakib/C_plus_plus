#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
//Even-odd Function


    string evenOdd(int num)
    {
        string fin;
        
        if (num%2 == 0)
            {
            fin = "Even";
            }
        else fin = "Odd";

        return fin;

    }


int main()
{
    int num;
    cout << "This program is to find even or odd number\n\n"<<endl;
    cout << "Enter an integer number : ";
    cin >>num;
    string checkingValue = evenOdd(num);
    cout << "The number you've entered is : "<<checkingValue;

    getch();
}