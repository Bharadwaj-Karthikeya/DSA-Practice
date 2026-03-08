#include <bits/stdc++.h>
using namespace std;

bool isPrime_Bf(int n){
    int count = 0;

    for(int i=1; i<=n; i++){
        if(n%i == 0) count++;
    }

    return (count==2) ? true : false;
} 

bool isPrime_Sqrt(int n){
    int count = 0;

    for(int i=1; i<=sqrt(n); i++){
        if(n%i == 0) { 
            count++;
            if (n/i != i) count++;
        }
    }

    return (count==2) ? true : false;
} 

int main(){
    int n;
    cin>>n;

    cout<<"Using Brute force: "<< n <<
    (isPrime_Bf(n) ? " Is Prime" : " Is not Prime")<<endl;
    cout<<"Using Sqrt check: "<< n <<
    (isPrime_Sqrt(n) ? " Is Prime" : " Is not Prime")<<endl;

    return 0;
}