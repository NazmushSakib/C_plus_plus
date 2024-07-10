#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the value of row : ";
    cin>>row;
    cout<<"Enter the value of column : ";
    cin>>col;

    int a[row][col], b[row][col], c[row][col];
    //matrix input

    cout<<"Enter the value of A matrix -> "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"value of A["<<i<<"]"<<"["<<j<<"] : ";
            cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Enter the value of B matrix -> "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"value of B["<<i<<"]"<<"["<<j<<"] : ";
            cin>>b[i][j];
        }
        cout<<endl;
    }

    //matrix priniting
    cout<<"The value of Matrix_A : "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"The value of Matrix_B :"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    //addition
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout<<"The addition result of A & B : "<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    //Subtraction
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    cout<<"The subtraction result of A & B : "<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;
    return 0;
}