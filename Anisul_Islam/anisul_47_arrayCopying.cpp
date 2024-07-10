#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[10]={10,20,30,40,50,60,70,80,90}, array2[10];

    cout<<"Array_1 : ";

    for(int i=0;i<9;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    //copying

    for(int i=0;i<9;i++)
    {
        array2[i]=array[i];
    }

    cout<<"Array_2 : ";

    for(int i=0;i<9;i++)
    {
        cout<<array2[i]<<" ";
    } 


    cout<<endl;
    return 0;
}