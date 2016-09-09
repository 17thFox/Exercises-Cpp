#include <iostream>

using namespace std;

void occuring(){
    int v[7]={41,32,71,62,83,94,53};
    int e,d=0;
/*    int n;
    cout<<"Type how long would you like your list \n";
    cin>>n;
    int v[n];
    cout<<"Type your elements \n";
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
*/
    cout<<"Type a number to see if it is in a special list\n";
    cin>>e;

    for(int i=0; i<7; i++)
    {
        if(v[i]!=e){}
        else {
            cout<<"Your number exists!\n";
            d=1;
        }
    }
    if(d!=1){
        cout<<"Sorry, I couldn\'t find your number \n";
    }
}

int main()
{
    occuring();
    return 0;
}
