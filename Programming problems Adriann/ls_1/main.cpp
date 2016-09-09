#include <iostream>

using namespace std;

int largestElement(){
    int n;
    cout<<"Type how LONG you wish your LIST to be: \n";
    cin>>n;
    int list[n];
    cout<<"Type your ELEMENTS: \n";
    for(int j=0; j<n; j++)
    {
        cin>>list[j];
    }
    int max=0;
    for(int i=0; i<n; i++)
    {
        if(max<list[i]){
            max =list[i];
        }
    }
    return max;
}

int main()
{
    cout<<"Your largest element is: \n"<<largestElement();
    return 0;
}
