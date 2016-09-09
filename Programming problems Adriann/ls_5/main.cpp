#include <iostream>

using namespace std;

void runningTotal(){
    int n, total=0;
    cout<<"Type how LONG you wish your LIST to be: \n";
    cin>>n;
    int list[n];
    cout<<"Type your ELEMENTS: \n";
    for(int i=0; i<n; i++)
    {
        cout<<"\n";
        cin>>list[i];

        total = total + list[i];
        cout<<"The running total is now: \n"<<total<<"\n";
    }

}

int main()
{   runningTotal();
    return 0;
}
