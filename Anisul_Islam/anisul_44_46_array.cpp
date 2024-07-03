#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;

    cout<<"Enter the number of students : ";
    cin>>n;
    int students[n];

//input
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the marks of the student "<<i+1<<" = ";
        cin>>students[i];
        sum = sum + students[i];
    }
//output
    for(int i=0;i<n;i++)
    {
        cout<<"student_"<<i+1<<" mark = "<<students[i]<<endl;
    }
    cout<<"Total marks of the students = "<<sum<<endl;
    float avg = (float) sum/n;
    cout<<"The average number of the students = "<<avg<<endl;

    //maximum & minimum number

    int max = students[0];

    for(int i=1;i<n;i++)
    {
        if(max<students[i])
        {
            max = students[i];
        }
    }
    
    int min = students[0];

    for(int i=1;i<n;i++)
    {
        if(min>students[i])
        {
            min = students[i];
        }
    }
    cout<<"The maximum number = "<<max<<endl;
    cout<<"The minimum number = "<<min<<endl;

    cout<<"\n"<<endl;
    return 0;
}