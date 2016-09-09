#include <iostream>

using namespace std;

class Question
{
private:
    int mAnsw;
    int mN;
public:
    int getAnsw()
    {
        return mAnsw;
    }
    int getN()
    {
        return mN;
    }
    void setAnsw(int answ)
    {
        mAnsw=answ;
    }
    void setN(int n)
    {
        mN = n;
    }
};

Question answer()
{
    int answ, n;
    Question q;
    cout << "Please write a random number: " << '\n';
    cin>>n;
    q.setN(n);
    cout<<"Would you like to: \n 1 \- compute the SUM of 1 to your number or \n 2 \- compute the PRODUCT of 1 to your number\? \n";
    cin>> answ;
    q.setAnsw(answ);
    return q;
}

int getSum(Question q4)
{
    int result=0;
    for(int i=1; i<=q4.getN(); i++)
    {
        result = result + i;
    }
    return result;
}

int getProd(Question q5)
{
    int result=1;
    for(int j=1; j<=q5.getN(); j++)
    {
        result = result * j;
    }
    return result;
}

int solve(Question q3)
{
    if(q3.getAnsw() == 1)
    {
        return getSum(q3);
    }
    else if(q3.getAnsw()==2)
    {
        return getProd(q3);
    }
}

int main()
{
    Question q2;
    q2 = answer();
    cout<<"The result is: \n"<<solve(q2)<<'\n';
    return 0;
}
