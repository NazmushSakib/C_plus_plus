#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int x = 10;     // size = 4 byte 
    double nm1 = 45.586852;
    long double nm2= 546543.1567463;  // size = 16 byte 
    char ch = 'S';   //size = 1 byte
    float nm3 = 0.546464646646;
    char name[17] = "Md. Namush Sakib";
    string address = "Mirbag, Dhaka.";

    cout << nm1 << endl << nm2 << endl << ch << endl << nm3 << endl;
    cout <<"My name is "<<name<<endl<<address<<endl;
    /*normal text এর  ক্ষেত্রে "text" double qoute হবে্;
            আর variable এর ক্ষেত্রে কোনো quote হবে না */ 

    return 0;
}
