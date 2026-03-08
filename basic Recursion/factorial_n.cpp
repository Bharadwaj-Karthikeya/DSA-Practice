#include <bits/stdc++.h>
using namespace std;

int fact_n_for(int n){
    int fact = 1;
    for (int i=1; i<=n; i++) fact*=i;
    return fact;
}

int fact_n_rec(int n){
    if(n==1) return 1;
    return n * fact_n_rec(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<"factorial of "<<n<< " is (loop): "<< fact_n_for(n)<<endl;
    cout<<"factorial of "<<n<< " is (recursive): "<< fact_n_rec(n)<<endl;

    return 0;
}