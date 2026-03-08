#include <bits/stdc++.h>
using namespace std;

string isPalindrome(int num){
    int rev = 0;
    int dup = num;
    while (dup>0)
    {
        int ls = dup % 10;
        rev = rev * 10 + ls;
        dup/=10;
    }

    return (num == rev) ? "Palindrome" : "Not Palindrome";
}

int main(){
    int n;
    cin>>n;

    cout<<isPalindrome(n)<<endl;
    return 0;
}