#include <iostream>

using namespace std;

void yoMult(){
int x = 0;
    for(int i=1; i<=12; i++){
        for (int j=1; j<=10; j++)
    {
        x = i*j;
        cout<<i<<"x"<<j<<"="<<x<<"   ";
    }
    cout<<'\n'<<'\n';
    }
}

int main()
{
    yoMult();
    return 0;
}
