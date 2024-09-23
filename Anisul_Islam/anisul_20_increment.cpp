#include <bits/stdc++.h>

using namespace std;

/* কোড সবসময় উপর থেকে নিচের দিকে এবং বাম থেকে ডানের দিকে execute হয়। */
int main ()
{
    int x =5;
    cout<<"x = "<<x<<endl; //x=5
    int y= x++;   
/* postfix -> এখানে লাইনের বামপাশ থেকে execute হবার সময় y এর value হিসেবে 
x এর আগের value 5 বসেছে; এরপরে x এর মান পরিবর্তন হয়ে x++ = x+1 = 5+1 =6 হয়েছে 
অর্থাৎ, postfix এর ক্ষেত্রে x এর মান আগে y এর মধ্যে assign হয়, এরপরে হ্রাস/বৃদ্ধি পায় 
*/
    cout<<"y=x++ = "<<y<<" and x = "<<x<<endl;
    int z= x--;
    cout<<"z=x-- ="<<z<<" and x = "<<x<<endl;
    
    int i = 9;
    int j = ++i;

    cout <<"i = "<<i<<" and j = "<<j<<endl;

    x = 20;
    y = --x;
/* prefix -> এখানে লাইনের বামপাশ থেকে execute হবার সময় y এর value হিসেবে 
x এর মান পরিবর্তিত হয়ে y= --x= x-1 = 20-1 =19 হয়েছে যা y এর value হিসেবে assign হয়েছে;
অর্থাৎ, prefix এর ক্ষেত্রে x এর মান আগে হ্রাস/বৃদ্ধি পায় এরপরে y এর মধ্যে assign হয়
*/
    cout <<"x = "<<x<<" and y = "<<y<<endl;

    return 0;
}

