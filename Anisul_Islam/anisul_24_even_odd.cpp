#include <bits/stdc++.h>

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

    void EvenOdd(int num)
    {
        if(num%2 == 0)
        {
            cout<<"The number you've entered is : EVEN"<<endl;
        }
        
        if(num%2 != 0)
        {
            cout<<"The number you've entered is : ODD"<<endl;
        }

    }


int main()
{
    int n;
    cout << "This program is to find even or odd number\n\n"<<endl;
    cout << "Enter an integer number : ";
    cin >>n;
    string checkingValue = evenOdd(n);
    cout << "The number you've entered is : "<<checkingValue<<endl;

    EvenOdd(n);


    return 0;
}