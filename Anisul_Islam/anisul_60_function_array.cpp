#include<bits/stdc++.h>
using namespace std;

void displayAarray(int num[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<num[i]<<" ";
    }
}

int main()
{
    int number[5]= {1,2,3,4,5};
    displayAarray(number,5);

    cout<<endl<<endl<<endl;
    return 0;
}