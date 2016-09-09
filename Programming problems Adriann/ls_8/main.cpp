#include <iostream>

using namespace std;

int perfectSquare(int x){
    return x*x;
}

void on_all(){
    int n;
    cout<<"Please enter the number of elements: \n";
    cin>>n;
    cout<<"Enter your elements: \n";
    int v[n];
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<"Here are the perfect squares of every element: \n";
    for(int i=0; i<n; i++){
        cout<<perfectSquare(v[i])<<"\n";
    }
}

int main()
{
    on_all();
    cout << "Here are the first twenty perfect squares: \n";
    for(int i=0; i<=20; i++){
        cout<<perfectSquare(i)<<"   ";
    }
    return 0;
}
