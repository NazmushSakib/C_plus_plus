#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cout << "give a decimal number = ";
    cin >> n;
    cout <<"\n\n";
    cout <<"hex value : " <<setbase(16)<<n<<endl;
    cout <<"oct value : " <<setbase(8)<<n<<endl;
    cout <<"bin value : " <<setbase(2)<<n<<endl;


    getch ();
}
