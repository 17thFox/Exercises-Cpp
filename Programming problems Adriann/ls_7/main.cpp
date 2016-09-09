#include <iostream>

using namespace std;

class PentruCitire
{
private:
    int mn;
    int mv[1000];
public:
    int getN()
    {
        return mn;
    }
    void setN(int n)
    {
        mn = n;
    }

    void getV(int v[])
    {
        for(int i=0; i<mn; i++){
            v[i]=mv[i];
        }
    }

    void setV(int v[])
    {
        for(int i=0; i<mn; i++){
            mv[i]=v[i];
        }
    }
};

PentruCitire citire()
{
    PentruCitire p;
    int n;
    cout<<"Type how many elements do you want in your list: \n";
    cin>>n;
    p.setN(n);
    int v[n];
    cout<<"Type your elements: \n";
    for (int i = 0; i<n; i++)
    {
        cin>>v[i];
    }
    p.setV(v);
    return p;
}

void sumwithFor(PentruCitire d)
{
    int sum = 0;
    int v[d.getN()];
    d.getV(v);
    for (int i=0; i<d.getN(); i++)
    {
        sum = sum + v[i];
    }
    cout<<"FOR: "<<sum<<"\n";
}

void sumwithWhile(PentruCitire f)
{
    int i=0, sum=0;
    int v[f.getN()];
    f.getV(v);
    while(i!=f.getN())
    {
        sum = sum + v[i];
        i++;
    }
    cout<<"While: "<<sum<<"\n";
}

int sumwithRecursion(int k, PentruCitire h)
{
    int v[h.getN()];
    h.getV(v);
    if(k>=0)
    {
        return v[k] + sumwithRecursion(k-1,h);
    }
    else
    {
        return 0;
    }
}

int main()
{   PentruCitire q;
    q=citire();
    sumwithFor(q);
    sumwithWhile(q);
    cout<<"Recursivitate: "<<sumwithRecursion(q.getN()-1,q)<<"\n";
    cout << "Hello world!" << endl;
    return 0;
}
