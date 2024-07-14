#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row, col, transRow, transCol;
    cout<<"Enter the numeber of row : ";
    cin>>row;

    cout<<"Enter the value of column : ";
    cin>>col;

    int matA[row][col], transA[col][row];
    
    //taking input
    cout<<"Enter the value of Matrix : "<<endl;

    for(int i=0; i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"value of Matrix A["<<i<<"]["<<j<<"] = ";
            cin>>matA[i][j];
        }
        cout<<endl;
    }
    //printing entered values

    cout<<"Entered Values : "<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matA[i][j]<<" ";
        }
        cout<<endl;
    }
  
    //Transposing

    for(int i =0; i<row; i++)
    {
        for(int j=0;j<col;j++)
        {
            transA[j][i]= matA[i][j];  //এখানে index গুলো ঘুরিয়ে দেয়া হলো
        }
        cout<<endl;
    }
    cout<<"Transposed Matrix : "<<endl;
    //printing Transposed matrix
    for(int i=0;i<col;i++)             // এখানে row এর লুপ চলবে  column পর্যন্ত
    {
        for(int j=0;j<row;j++)           // আর column এর লুপ চলবে row পর্যন্ত
        {
            cout<<transA[i][j]<<" ";     // ফলে এখানে ভ্যালু প্রিন্ট করার সময় অটোমেটিক্যালি transpose হয়ে যাবে
        }
        cout<<endl;
    }
    //T


    cout<<endl<<endl;
    return 0;
}