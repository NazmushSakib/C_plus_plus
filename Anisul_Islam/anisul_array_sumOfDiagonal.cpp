#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row, col, sum = 0, result=0;
    cout<<"Enter number of row : ";
    cin>>row;

    cout<<"Enter number of column : ";
    cin>>col;

    int matA[row][col], matB[row][col];
    //taking input

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"value of matrix A["<<i<<"]["<<j<<"] = ";
            cin>>matA[i][j];
        }
        cout<<endl;
    }

    //printing output

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matA[i][j]<<" ";
        }
        cout<<endl;
    }
//calculating diagonal values
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                matB[i][j] =  matA[i][j];
                result = result + matB[i][j];
            }
        }
    }
    cout<<"The result is : "<<result<<endl;

//printing diagonal values 
    cout<<"Diagonal values are : "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                cout<<matB[i][j]<<" ";

            }   
        }
        cout<<endl;
    }
    //sum of Diagonal values : "
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
          if(i==j)
          {
            sum = sum + matB[i][j];
          }
        }
        cout<<endl;
    }    

    cout<<"Sum of diagonal value = "<<sum;


    cout<<endl<<endl;
    return 0;
}