#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;

    cout<<"Enter the number of students : ";
    cin>>n;

    int mark[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter marks of the student_"<<i+1<<" = ";
        cin>>mark[i];
        sum = sum + mark[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<"student_"<<i+1<<" mark = "<<mark[i]<<endl;
    }

    cout<<"Total marks = "<<sum<<endl;
    float avg = (float) sum/n;
    cout<<"Average marks = "<<avg<<endl;

    //maximum numebr & minimum number

    int max = mark[0];
    int min = mark[0];

    for(int i=1;i<n;i++)
    {
        if(max < mark[i])
        {
            max = mark[i];
        }

        if(min>mark[i]);
        {
            min = mark[i];
        }
    }
    cout<<"Maximum number = "<<max<<endl;

 /*   
    for(int i=1;i<n;i++)
    {
        
    }
*/   
    cout<<"Minimum number = "<<min<<endl;


    cout<<"\n"<<endl;
    return 0;
}