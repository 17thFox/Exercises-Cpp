#include <iostream>

using namespace std;

int main()
{
    for(int i=2; i<=1000; i++){
        int x=0;
        for(int j=2; j<=i; j++)
        {
            if(i%j == 0)
            {
                x = x+1;
            }
        }
        if(x==1){
            cout<<i<<"   ";
        }
    }
    return 0;
}
