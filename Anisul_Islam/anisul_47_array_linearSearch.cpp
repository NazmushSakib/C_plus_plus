#include<bits/stdc++.h>
using namespace std;
int main()
/*
Linear Search : কোনো একটা অ্যারের মধ্যে নির্দিষ্ট কোনো ভ্যালু আছে কিনা তা এবং তার পজিশন কোথায়(index number) তা বের করতে এটা ব্যবহৃত হয়।
সাধারণত ছোট অ্যারের ক্ষেত্রে Linear Search করা হয় আর বড় অ্যারের ক্ষেত্রে Binary Search করা হয়।
*/
{
    int a[]={34,6545,34,76,1232,688,4,347,24,64},value, position=-1;

    cout<<"Enter the value you want to search : ";
    cin>>value;

    for(int i=0;i<10;i++)
    {
        if(value == a[i])
        {
            position = i+1;
            cout<<"The number is found and it's position is "<<position<<endl;
            break;
        }
        
    }

    if(position==-1)
    {
        cout<<"Not Found\n";
    }


    cout<<endl<<endl;
    return 0;
}