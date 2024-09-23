#include <bits/stdc++.h>
using namespace std;

class student
{
    public:
        int id;
        double gpa;

        student()  //Default Constructor
        {

        }

        student(int a, double b)
        {
            id = a;
            gpa = b;
        }

        void setValue(int x, double y)
        {
            id =x;
            gpa =y;
        }

        void print()
        {
            cout<<"The result of id "<<id<<" is "<<gpa<<endl;
        }
};

int main()
{
    student sakib(173010038,3.44);
    sakib.print();

    student runu;
    runu.setValue(135533,3.11);
    runu.print();

    student mohima;
    mohima.id = 113413441;
    mohima.gpa = 3.96;
    mohima.print();


    cout<<endl<<endl<<endl;
    return 0;
}

