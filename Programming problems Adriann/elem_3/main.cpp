#include <iostream>
#include <string>

using namespace std;

char charLower(char c)
{
    if(c < 'A' || c > 'Z')
    {
        return c;
    }

    int lowerInt = int(c) + 32;
    char lowerChar = char(lowerInt);
    return lowerChar;
}

string stringLower(string name)
{
    for(int i=0; i<name.length(); i++)
    {
        name[i] = charLower(name[i]);
    }
    return name;
}

int main()
{
    string name;

//    cout<<int('A')<<"65"<<'\n';
//    cout<<int('a')<<"97"<<'\n';
//    char c = 'F';
//    char lower = char(int(c) + 32);
//    cout<<lower<<'\n';

    cout<<"Please type your name: "<<'\n';
    cin>>name;

    if (stringLower(name) == "alice" || stringLower(name) == "bob")
        cout<<"Welcome "<<name<<'\n';
    return 0;
}
