#include<bits/stdc++.h>
using namespace std;
int main()
{
    int first[10][10], second[10][10], result[10][10], r1,r2,c1,c2,i,j,k,sum=0;

    cout<<"Enter rows and columns for first matrix : ";
    cin>>r1>>c1;

    cout<<"Enter rows and columns for second matrix : ";
    cin>>r2>>c2;

    while(c1!=r2)
    {
        cout<<"Error !! column of first matrix not equal to row of Second Matrix."<<endl;

        cout<<"Enter rows and columns for first matrix : ";
        cin>>r1>>c1;

        cout<<"Enter rows and columns for second matrix : ";
        cin>>r2>>c2;
    }

    //input value for First Matrix
    cout<<"Enter the values of first Matrix : "<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"Value of first["<<i<<"]["<<j<<"] = ";
            cin>>first[i][j];
        }
        cout<<endl;
    }
    //input value for Second Matrix
    cout<<"Enter the values of second Matrix : "<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<"Value of second["<<i<<"]["<<j<<"] = ";
            cin>>second[i][j];
        }
        cout<<endl;
    }
    //Printing the Entered values
    cout<<"The values you've Entered for First Matrix : "<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<first[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The values you've Entered for Second Matrix : "<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<second[i][j]<<" ";
        }
        cout<<endl;
    }

    //Multiplication
    cout<<"Multiplaton : "<<endl;

    for(i=0;i<r1;i++)
    {
        for(j=0;i<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    //Multiplication Result
    cout<<"The Multiplication Result is : "<<endl;
    cout<<"\t";
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<result[i][j];
        }
        cout<<endl;
    }
    
    
    cout<<endl<<endl;
    return 0;
}