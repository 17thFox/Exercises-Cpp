#include <iostream>

using namespace std;

bool madafachinfunctionwithreturns(string test){
    for(int i=0; i<test.length()/2; i++)
    {
        if(test[i]!=test[test.length()-1-i]){
            return false;
        }
    }
    return true;
}

void isPalindrome(){
    string test;
    cout<<"Write the word and I'll check if it's a palindrome \n";
    cin>>test;

    if(madafachinfunctionwithreturns(test) == true){
        cout<<"This word is a palindrome \n";
    }else{
        cout<<"This word isn\'t a palindrome \n";
    }
}

int main()
{
    isPalindrome();
    return 0;
}
