#include <bits/stdc++.h>
using namespace std;

class Student
{
    public : 
        const int admissionFee;
        const int examFee;
        int id;
        Student(int x, int y, int z)
        : admissionFee(x), examFee(y)
        {
            id = z;
            cout<<"Student id : "<< id <<endl;
            cout<<"Admission fee = "<<admissionFee<<" Tk."<<endl;
            cout<<"Examiation fee = "<<examFee<<" Tk."<<endl;
        }

};

int main()
{
    Student Sakib(20000,2000,173010038); 

    cout<<endl<<endl<<endl;
    return 0;
}