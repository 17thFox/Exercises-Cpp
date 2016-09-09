#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int intro()
{
    int n;
    cout << "Hello! Let\'s play a game.\nI will choose a secret number, and you will have to guess it.\nChoosing between 1 and 50... \n";
    Sleep(1000);
    cout<<"Done. Please type your guess: \n";
    cin>>n;
    return n;
}
string isitgood(int n, int s)
{
    if(n<s && n>=1 && n<=50)
    {
        return "Oops... You picked a number too small! \n";
    }
    else if( n>s && n>=1 && n<=50)
    {
        return "Oops... Your number is too large! \n";
    }
    else
    {
        return "Human... Please read the instructions of the game. \n";
    }
}

int rezolv(int n, int s)
{
    int m=0, t=0;
    while(n!=s)
    {
        cout<<isitgood(n,s);
        if(n!=m && n>=1 && n<=50)
        {
            t=t+1;
        }
        m=n;
        cout<<"\nTry again: \n";
        cin>>n;
    }
    return t;
}


int main()
{
    int n, s=17, t=0;
    n = intro();
    t = rezolv(n, s);
    cout<<"Yahoo! You did it! That\'s the secret number! \nHere are your number of tries: \n"<<t;
    return 0;
}
