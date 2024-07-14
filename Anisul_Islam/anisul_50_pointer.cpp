#include <bits/stdc++.h>
using namespace std;

void swapping(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
   
    int x =5;
    int *p;

    p =&x;

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;

    int num1, num2,num3,num4;
    int *ptr1, *ptr2;
    cout<<"Enter two integer : ";
    cin>>num1>>num2;

    ptr1 = &num1;
    ptr2 = &num2;

    cout<<"before value swapping ptr1 = "<<*ptr1<<" & ptr2 = "<<*ptr2<<endl;
    //swapping values between two pointers

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout<<"After value swapping num1 = "<<*ptr1<<" & num2 = "<<*ptr2<<endl;

     cout<<"Enter two integer : ";
    cin>>num3>>num4;

    ptr1 = &num3;
    ptr2 = &num4;

    //again swapping using functon
    swapping(&num3,&num4);  //ptr1 & ptr2 holds the memory addresses of num1 and num2 respectively

    cout<<"Swapping using funcion : num1= "<<num3<<" & num2 = "<<num4<<endl;

    //sum of two pointers
    int sum = *ptr1 + *ptr2;

    cout<<"The sum of two pointer is :"<<sum<<endl<<endl;

    //access array element using Pointer
    int size ;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    int *ptr;
    ptr = &arr[0];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter the value of arr["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<"Entered array value : "<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<"The value of arr["<<i<<"] = "<<*ptr<<endl;
        ptr++;
    }

    cout<<endl<<endl;
    return 0;
}