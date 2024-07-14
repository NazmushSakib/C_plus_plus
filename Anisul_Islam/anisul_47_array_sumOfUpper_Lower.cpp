#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col, sumOfUpper=0, sumOfLower=0;
    cout<<"Enter number of row : ";
    cin>>row;
    cout<<"Enter number of column : ";
    cin>>col;

    int matA[row][col];

    cout<<"Enter value of matrix : "<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"value of matrix A["<<i<<"]["<<j<<"] = ";
            cin>>matA[i][j];
        }
        cout<<endl;
    }
    //printing the entered values
    cout<<"The entered Matrix is : "<<endl;
    
    for(int i=0;i<row;i++)
    {
        cout<<"\t";
        for(int j=0;j<col;j++)
        {
            
            cout<<matA[i][j]<<" ";
        }
        cout<<endl;
    }

    //Upper & Lower values

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i<j)
            {
                sumOfUpper = sumOfUpper + matA[i][j];
            }

            if(i>j)
            {
                sumOfLower = sumOfLower + matA[i][j];
            }
        }
    }

    cout<<"Sum of Upper Values = "<<sumOfUpper<<endl;
    cout<<"Sum of Lower Values = "<<sumOfLower;


    cout<<endl<<endl;
    return 0;
}