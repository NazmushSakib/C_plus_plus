#include <bits/stdc++.h>
using namespace std;
int main()
{
    int noOfRowA, noOfColA, noOfRowB, noOfColB;
    int i,j,k;
     int result[i][j];
    cout<<"Enter the number of row of Matrix_A: ";
    cin>>noOfRowA;

    cout<<"Enter the number of column of Matrix_A: ";
    cin>>noOfColA;

    cout<<"Enter the number of row of Matrix_B: ";
    cin>>noOfRowB;

    cout<<"Enter the number of column of Matrix_A: ";
    cin>>noOfColB;
    

    int matA[noOfRowA][noOfColA],matB[noOfRowB][noOfColB];

    //input value of Matrix_A
    for(int row=0;row<noOfRowA;row++)
    {
        for(int col=0;col<noOfColA;col++)
        {
            cout<<"Enter the value of  A["<<row<<"]["<<col<<"] : ";
            cin>>matA[row][col];
        }
        cout<<endl;
    }

    //printing the input value of Matrix  A
    
    cout<<"The value of Matrix_A : "<<endl;
    for(int row=0;row<noOfRowA;row++)
    {
        for(int col=0;col<noOfColA;col++)
        {
            cout<<matA[row][col]<<" ";
        }
        cout<<endl;
    }

    //Taking input for Matrix B
    cout<<"Enter the value of Matrix B : "<<endl;
    for(int row=0;row<noOfRowB;row++)
    {
        for(int col=0;col<noOfColB;col++)
        {
            cout<<"Enter the value of B["<<row<<"]["<<col<<"] : ";
            cin>>matB[row][col];
        }
        cout<<endl;
    }
    //Printing the B matrix
    cout<<"The value of Matrix_B : "<<endl;
    for(int row=0;row<noOfRowB;row++)
    {
        for(int col=0;col<noOfColB;col++)
        {
            cout<<matB[row][col]<<" ";
        }
        cout<<endl;
    }
    
    //Multiplication
    int sum=0;
    
    if(noOfRowA==noOfColB)
    {
        for(i=0;i<noOfRowA;i++)
        {
            for(j=0;j<noOfColB;j++)
            {
                for( k=0;k<noOfColA;k++)
                {
                    sum = sum + matA[i][k] * matB[k][j];
                }
           
            result[i][j] = sum;
            sum = 0;
            }
        }
    }
    else
    {
        cout<<"Erro!!Multiplictation won't be possible"<<endl;
    }



    cout<<endl<<endl;
    return 0;
}