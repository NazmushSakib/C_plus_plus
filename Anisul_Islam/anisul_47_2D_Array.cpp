#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the value of number of row : ";
    cin>>row;    

    cout<<"Enter the value of number of column : ";
    cin>>col;    

    int a[row][col];
    //taking input for matrix
    

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter the matrix value of a["<<i<<"]"<<"["<<j<<"] = ";
            cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<endl;

    //Printing the the values
    cout<<"Printing the value of matrix : "<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }


    cout<<endl<<endl;
    return 0;
}