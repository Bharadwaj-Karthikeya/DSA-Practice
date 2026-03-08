#include <bits/stdc++.h>
using namespace std;

// forward fall (print first then branch)
void print_n(int n){
    if(n<1) return;
    
    cout<<n<<" ";

    print_n(n-1);  
}

// backtracking (branch first then print)
// void print_n(int n){
//     if(n<1) return;

//     print_n(n-1);
    
//     cout<<n<<" ";
// }

int main(){
    int n;
    cin>>n;

    print_n(n);

    return 0;
}