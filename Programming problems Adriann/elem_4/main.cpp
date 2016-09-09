#include <iostream>

using namespace std;

class question{
private:
    int mn;
public:
    void setN(int n){
        mn=n;
    }
    int getN(){
        return mn;
    }
};

question answer(){
    int n;
    question q;
    cout << "Hello! Please write a random number: "<<'\n';
    cin>>n;
    q.setN(n);
    return q;
}

int yoSum(question q3){
    int sum = 0;
    for(int i=1; i<=q3.getN(); i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    question q2;
    q2=answer();

    cout<<"Printing out the sum of the number 1 to your random number: "<<'\n'<<yoSum(q2)<<'\n';
    return 0;
}
