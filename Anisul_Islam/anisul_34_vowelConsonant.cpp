#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

string letterCheck(char letter)
    {
        string ans;
        letter = tolower(letter);
        switch(letter)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ans = "a vowel";
                break;

            default :
                ans = "a consonant";
                break;
        }

        return ans;
    }



int main()
{
    cout <<"\n\n---------This program is used to find vowel or consonant-------\n\n";
    int ch;
    cout << "Enter a letter : ";
    cin >>ch;
    cout <<"The letter you've entered is "<<letterCheck(ch);
     
    getch();
}
