#include <bits/stdc++.h>
using namespace std;

int sum_n(int n){
    if (n==1) return 1;
    return n+sum_n(n-1);   
}

int sum_n_for(int n){
    int sum =0;
    for(int i=1; i<=n; i++){
        sum+=i;
    } 
    return sum;
}

int sum_n_formula(int n){
    return ((n*(n+1))/2);
}

int main(){
    int n;
    cin>>n;

    cout<<"Sum of first "<< n 
    << " Natural numbers (recursive): "<<sum_n(n)<<endl;
    
    cout<<"Sum of first "<< n 
    << " Natural numbers (for loop): "<<sum_n_for(n)<<endl;
    
    cout<<"Sum of first "<< n 
    << " Natural numbers (formula): "<<sum_n_formula(n)<<endl;
    
    return 0;
}