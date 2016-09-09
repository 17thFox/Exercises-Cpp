#include <iostream>

using namespace std;

void reverseList()
{
    int n, k=0, holder;
    cout<<"Type how long would you like your list \n";
    cin>>n;
    int v[n];
    cout<<"Type your elements \n";
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(int j = n-1; j>=0; j--)
    {
        if (k == n/2){
            break;
        }

        holder=v[j];
        v[j]=v[k];
        v[k]= holder;
        k++;
    }

    for(int m=0; m<n; m++)
    {
        cout<<v[m]<<"\n";
    }
}
int main()
{
    reverseList();
    return 0;
}
