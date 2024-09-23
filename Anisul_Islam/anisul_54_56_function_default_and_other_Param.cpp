#include<bits/stdc++.h>
using namespace std;

void display(int a=10, int b =46)
{
    cout<< a <<endl;
    cout<< b <<endl;
}

void square(int n)
{
    cout<<"square of "<<n<<" = "<<n*n<<endl;
}

int main()
{
    display();
    cout<<endl;
    display(23);
    cout<<endl;
    display(87,90);

    square(9);
    square(8);
    square(34);

    cout<<endl<<endl<<endl;
    return 0;
}
