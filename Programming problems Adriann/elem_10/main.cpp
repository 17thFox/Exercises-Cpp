#include <iostream>

using namespace std;

int main()
{   int leap=2017, i=0;

    while(i<20){
    if(leap%4==0){
        cout<<leap<<"\n";
        i++;
    }
    leap++;
    }
    cout << "Hello world!" << endl;
    return 0;
}
