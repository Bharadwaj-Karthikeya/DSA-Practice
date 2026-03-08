#include <bits/stdc++.h>
using namespace std;

// forward fall (print first then branch)
void print_n(int n, int mycount = 1){
    if(mycount > n) return;

    cout<<mycount<<" ";
    
    print_n(n, mycount+1);
}

// backtracking (branch first then print)
// void print_n(int n, int mycount = 1){
//     if(mycount > n) return;

//     print_n(n, mycount+1);
    
//     cout<<mycount<<" ";
// }

int main(){
    int n;
    cin>>n;

    print_n(n);

    return 0;
}