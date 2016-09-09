#include <iostream>

using namespace std;

void oddPositions(){
    int n, j=0;
    cout<<"Type how long would you like your list \n";
    cin>>n;
    int v[n], t[n];
    cout<<"Type your elements \n";
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(int i=0; i<n;i++){
        if(i%2==0){
            t[j]=v[i];
            j++;
        }
    }

    for(int i=0; i<j;i++)
        cout<<t[i]<<" ";
}

int main()
{
    oddPositions();
    return 0;
}
