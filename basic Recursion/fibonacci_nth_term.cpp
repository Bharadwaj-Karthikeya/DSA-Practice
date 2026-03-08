#include <bits/stdc++.h>
using namespace std;

vector<int> fibonacci_loop(int n){
    vector<int> fib_arr;
    
    if (n==0) {
        fib_arr.push_back(0);
        return fib_arr;
    }
    else if(n==1){
        fib_arr.push_back(0);
        fib_arr.push_back(1);
        return fib_arr;
    }
    
    fib_arr.push_back(0);
    fib_arr.push_back(1);
    
    for(int i=2; i<=n; i++){
        fib_arr.push_back(fib_arr[i-1]+fib_arr[i-2]);
    }
    
    return fib_arr;
}

void fib_loop_no_arr(int n){
    int f_term = 0;
    int s_term = 1;

    if (n==0) {
        cout<<f_term<<endl;
        return ;
    }
    if (n==1) {
        cout<<f_term<<" "<<s_term<<endl;
        return ;
    }

    cout<<f_term<<" "<<s_term<< " ";
    for(int i=2; i<=n; i++){
        int next = f_term + s_term;
        cout<<next<<" ";
        f_term = s_term;
        s_term = next;
    }
    cout<<endl;

    return;
}

int fib_recursive(int n){
    if (n<=1) return n;

    int last = fib_recursive(n-1);
    int slast = fib_recursive(n-2);

    return last + slast;
}

int main(){
    int n;
    
    cout<<"Input of n: ";
    cin>>n;
    cout<<endl;
    
    vector<int> fibs = fibonacci_loop(n);
    
    cout<<"Fibonacci series upto nth term (0 based indexing array)"<<endl;
    for(int i: fibs) cout<<i<<" ";
    cout<<endl;
    
    cout<<"_____________________________________________________"
    <<endl<<endl;
    
    cout<<"Fibonacci series upto nth term (manual variable print)"<<endl;
    fib_loop_no_arr(n);
    
    cout<<"_____________________________________________________"
    <<endl<<endl;
    
    cout<<"Fibonacci series upto nth term (recursive print)"<<endl;
    cout<<fib_recursive(n)<<endl;
    cout<<endl;

    return 0;
}