#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int i, string& mystr){
    if(i>=mystr.length()-1) 
        return true;
    
    if(tolower(mystr[i]) != tolower(mystr[mystr.length()-i-1])) 
        return false;

    return isPalindrome(i+1, mystr);
}


int main(){
    string str;
    cin>>str;

    bool isPal = true; 

    for(int i=0; i<str.length()/2; i++){
        if(tolower(str[i]) != tolower(str[str.length()-i-1])) 
            isPal = false;
    }

    cout<<"result from for loop:"<<endl;
    if(isPal) cout<<str<<" is a Palindrome"<<endl;
    else cout<<str<<" not a Palindrome"<<endl;
    cout<<"-------------"<<endl;

    cout<<"result from recursion:"<<endl;
    if(isPalindrome(0,str)) cout<<str<<" is a Palindrome"<<endl;
    else cout<<str<<" not a Palindrome"<<endl;
    cout<<"-------------"<<endl;
    
    return 0;   
}