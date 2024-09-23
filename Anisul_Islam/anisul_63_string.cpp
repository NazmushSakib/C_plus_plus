#include <bits/stdc++.h>
using namespace std;

int main()
{
    char name1[] = "Bangladesh";
    int stringLength = strlen(name1);

    cout<<"Given string name1 = "<<name1<<".\nAnd Length of String = "<<stringLength<<endl;

    char name2[20];
    strcpy(name2,name1);    // name2=name1 ; name1 এর ভ্যালু name2 তে কপি করতে  strcpy ব্যবহৃত হয়
    cout<<"Copied from name1 string = "<<name2<<endl;

    char firstName[15];
    char lastName[15];
    cout<<"Enter your first name : ";
    cin>>firstName;

    cout<<"Enter your last name : ";
    cin>>lastName;

    strcat(firstName,lastName);  //দুইটা string কে যুক্ত করে প্রথম string এর মধ্যে রাখতে হলে strcat (string conccatination) function ব্যবহৃত হয় ।
    cout<<"Your full name is : "<<firstName<<endl;
    
    string str1 = "Hello Bangladesh.";
    string str2 = " I'm from Dhaka.";
    string str3 = str1 + str2;
    cout<<str3<<endl;

    int stringSize = str3.size();
    cout<<"String size : "<<stringSize;


    cout<<endl<<endl<<endl;
    return 0;
}