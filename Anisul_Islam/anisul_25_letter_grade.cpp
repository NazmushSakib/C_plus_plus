#include <bits/stdc++.h>

using namespace std;

//function
string grade(int mark)
{
    string result;
    if(mark>32)
        {
            if(mark >=33 && mark<=39)
                {
                    result = "D";
                }
            else if(mark>=40 && mark<=49)
                {
                    result = "C";
                }
            else if(mark>=40 && mark<=49)
                {
                    result = "B";
                }
            else if(mark>=50 && mark<=59)
                {
                    result ="A-";
                }
             else if(mark>=60 && mark<=69)
                {
                    result = 'B';
                }
             else if(mark>=70 && mark<=79)
                {
                    result = "A";
                }
             else if(mark>=80 && mark<=100)
                {
                    result = "A+";
                }
             else if(mark>100)
             {
                 result = "You've entered a wrong value.";
             }


        }
    else
    {
        result = 'F';
    }

    return result;
}

int main ()
{
    cout <<"\n This is a grade letter program.\n\n"<<endl;
    cout <<"Enter your subject mark : ";
    int mark;
    cin >> mark;
    string result = grade(mark);
    cout <<"Your grade letter is : "<<result;

    return 0;
}
