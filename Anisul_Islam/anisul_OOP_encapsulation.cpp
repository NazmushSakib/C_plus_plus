#include <bits/stdc++.h>
using namespace std;

class Student
{
    private :
        string name;
    public :
    void setName(string x)
    {
        name =x;
    }
    string getName()
    {
        return name;
    }
};

class Boy 
{
    public :
        int id;  //Boy class এর মধ্যে এই id global variable

    Boy(int id)  //Boy constructor এর মধ্যে এই id local variable
    {
        this-> id = id;  // এখানে আমরা লোকাল ভ্যারিয়েবলের ভ্যালুকে গ্লোবাল ভ্যারিয়েবলের মধ্যে রাখতে চাচ্ছি; কিন্তু নাম একই হওয়ায় গ্লোবাল ভ্যারিয়েবলকে আলাদা করতে {this ->} keyowrd ব্যবহার করতে হয়।
    }

    void printID()
    {
        cout<<"The id = "<<id<<endl;
    }

};

int main()
{
    Student student_1;

    student_1.setName("Sakib");
    cout<<student_1.getName()<<endl;
    string naam = student_1.getName();
    cout<<naam<<endl;


    Boy Sakib(173010038);
    Sakib.printID();


    cout<<endl<<endl<<endl;
    return 0;
}

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
