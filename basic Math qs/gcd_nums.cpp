#include <bits/stdc++.h>
using namespace std;

int gcd_bf(int n1, int n2){
    int gcd = -1;
    for(int i =1; i<=min(n1,n2); i++){
        if(n1%i == 0 && n2%i == 0) {
            gcd = i;
        }
    }

    return gcd;
}

int gcd_fsh(int n1, int n2){
    for(int i=min(n1,n2); i>0; i--){
        if(n1%i == 0 && n2%i == 0) {
            return i;
        }
    }
    return 1;
}

int gcd_euc(int n1, int n2){
    while(n1>0 && n2>0){
        if (n1>n2) n1 %= n2;
        else n2%=n1;  
    }

    return (n1==0) ? n2 : n1;
}


int main(){
    int n1, n2;
    cin>>n1>>n2;

    cout<<"Gcd using Brute Force(check all numbers till max): "
    <<gcd_bf(n1, n2)<<endl;
    cout<<"Gcd using First Hit(work backwards from min(n1, n2)): "
    <<gcd_fsh(n1, n2)<<endl;
    cout<<"Gcd using Euclidean Algorithm: "<<gcd_euc(n1, n2)<<endl;
    
    return 0;
}