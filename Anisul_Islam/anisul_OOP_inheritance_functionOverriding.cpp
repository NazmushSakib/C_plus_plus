#include <bits/stdc++.h>
using namespace std;


//function overloading
class Overload
{
    public :
    void add(int a, int b)
    {
        cout<<"sum = "<<a+b<<endl;
    }

    void add(int a, int b, int c)
    {
        cout<<"sum = "<<a+b+c<<endl;
    }

    void add()
    {
        cout<<"nothing to add"<<endl;
    }

};

//function overriding
class Person
{
    public :
    void display()
    {
        cout<<"I am a Person"<<endl;
    }

};

class Student : public Person
{
    public :
    void display()
    {
        cout<<"I am a Student"<<endl;
    }
};

class Teacher : public Person
{
    public:
    void display()
    {
        cout<<"I am a Teacher"<<endl;
    }
};


int main()
{
    Overload joge;
    joge.add(1,2,3);
    joge.add(10,10);
    joge.add();

    Person ami;
    Teacher tumi;
    Student tomra;

    ami.display();
    tumi.display();
    tomra.display();

    cout<<endl<<endl;
    return 0;
}



/*

Difference between function overloading and function overriding

১। Overloading এর ক্ষেত্রে parameter ভিন্নভিন্ন হবে অপরদিকে function overriding এর ক্ষেত্রে parameter অবশ্যই সেম হতে হবে।
২। Overloading একই class এর মধ্যে হচ্ছে অপরদিকে function overriding একের অধিক class এর মধ্যে হচ্ছে । অর্থাৎ একটি super-class অপরটি sub-class।
৩। Overloading এর ক্ষেত্রে inheritance এর প্রয়োজন পড়ছে না অপরদিকে function overriding এর ক্ষেত্রে inheritance এর প্রয়োজন পড়ছে ।
৪। Overloading এর ক্ষেত্রে একটি ফাংশন অপর ফাংশনকে hide করে না । অপরদিকে function overriding ক্ষেত্রে একটি ফাংশন অপর ফাংশনকে hide করে ।
৫। function return type সেম হতেও পারে আবার নাও পারে অপরদিকে function overriding ক্ষেত্রে function return type অবশ্যই সেম হতে হবে।

**** function overloading কে compile time Polymorphism / static(or early) binding বলে।
**** function overriding কে run time Polymorphism/ Dynamic(or late) binding বলে।
*/