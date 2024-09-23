#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  int id;
  string name;
  float cgpa;
  string dept;
  
  void display()
  {
   cout<<"Student name = "<<name<<endl<<"Student id = "<<id<<endl<<"Department = "<<dept<<endl<<"Student CGPA = "<<cgpa<<endl<<endl;
  }

  Student()  //Default constructor
  {

  }
  Student(string n, int i, string d, float c)
  {
    name = n;
    id = i;
    cgpa = c;
    dept = d;

  }

};

int main()
{
  Student Sakib;
  Sakib.name = "Nazmush Sakib";
  Sakib.id = 173010038;
  Sakib.cgpa =3.44;
  Sakib.dept ="EEE";
  Sakib.display();

  Student Runu("Lailatul Ferdoush", 135533, "Bangla", 3.11);
  Runu.display();

  cout<<endl;
  return 0; 
}
