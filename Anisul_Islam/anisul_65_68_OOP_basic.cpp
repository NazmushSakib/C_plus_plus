#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int id;
        double gpa;


        void print()
        {
            cout<<"The result of id "<<id<<" is "<<gpa<<endl;

        }

        void setValue(int x, double y)
        {
            id = x;
            gpa = y;
        }

       
};

int main()
{
    Student rimi,sakib, runu, mohima;

    sakib.id =1730100038;
    sakib.gpa = 3.44;
    cout<<"The result of id "<<sakib.id<<" is "<<sakib.gpa<<endl;;
    
    rimi.id = 1344545432;
    rimi.gpa = 2.64;
    rimi.print();    //printing values using print function

    runu.setValue(135567,3.11);   //id & gpa insert by setValue function
    runu.print();

    mohima.id = 113413441;
    mohima.gpa = 3.86;
    mohima.print();

    cout<<endl<<endl<<endl;
    return 0;
}
