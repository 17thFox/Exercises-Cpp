#include <iostream>

using namespace std;

class question{
private:
    int ma;
public:
    int getA()
    {
        return ma;
    }
    void setA(int a){
        ma=a;
    }
};

question answer(){
    int a;
    question q;
    cout << "Please write  random number: "<<'\n';
    cin>>a;
    q.setA(a);
    return q;
}

int multSum(question q3){
    int sum = 0;
    for (int i=1; i<=q3.getA(); i++){
        if(i%3==0 || i%5==0){
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{
    question q2;
    q2 = answer();

    cout<<"Printing out the sum in which only multiples of three or five are considered "<<'\n'<<multSum(q2)<<'\n';
    return 0;
}
