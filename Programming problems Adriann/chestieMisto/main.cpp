#include <iostream>
#include <windows.h>
using namespace std;

void myString(string misto)
{
    for(int i=0; i<misto.length(); i++)
    {
        cout<< misto[i];
        Sleep(75);
    };
    cout<<'\n';
}


int main()
{
    string misto = "Dare to Be\nWhen a new day begins, dare to smile gratefully.\nWhen there is darkness, dare to be the first to shine a light.\nWhen there is injustice, dare to be the first to condemn it.\nWhen something seems difficult, dare to do it anyway.\nWhen life seems to beat you down, dare to fight back.\nWhen there seems to be no hope, dare to find some.\nWhen you\'re feeling tired, dare to keep going.\nWhen times are tough, dare to be tougher.\nWhen love hurts you, dare to love again.\nWhen someone is hurting, dare to help them heal.\nWhen another is lost, dare to help them find the way.\nWhen a friend falls, dare to be the first to extend a hand.\nWhen you cross paths with another, dare to make them smile.\nWhen you feel great, dare to help someone else feel great too.\nWhen the day has ended, dare to feel as you\'ve done your best.\nDare to be the best you can \-\nAt all times, Dare to be!";
    myString(misto);
    system("pause");
    return 0;
}
