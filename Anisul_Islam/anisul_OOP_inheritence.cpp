#include <bits/stdc++.h>
using namespace std;

class Person
{
    public:
        string name;
        int age;
        void printPerson()
        {
            cout<<"The name is : "<<name<<endl;
            cout<<"The age is : "<<age<<endl;

        }
};

class Student : public Person                // এখানে Person class কে -> Student class inherit করেছে ; এটি একটি Single inheritance এর উদাহরণ
{
    public:
        int id;
        void printStudent()
        {
            cout<<"The id is : "<<id<<endl;
            printPerson();
        }

};

class Employee : public Student  
// এখানে Student class কে ->  Employee class inherit করেছে ; আবার Person class কে -> Student class inherit করেছে ; এটি একটি Multilevel inheritance এর উদাহরণ

{
    public:
        string occupation;

        void printEmployee()
        {
            printStudent();
            cout<<"The occupation is : "<<occupation<<endl;
        }
};

int main()
{
    Student senpai;
    senpai.name = "Ayat";
    senpai.age = 1;
    senpai.id =103;

    senpai.printStudent();
    cout<<endl<<endl;

    Employee Oppa;
    Oppa.occupation = "Demon Emperor";
    Oppa.name = "Zhou Fan";
    Oppa.age = 28;
    Oppa.id = 9999;
    Oppa.printEmployee();

    cout<<endl<<endl<<endl;
    return 0;
}
