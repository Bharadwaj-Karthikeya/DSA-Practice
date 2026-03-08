#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string c = to_string(n);
    cout<<"no. of digits using string: "<<c.length()<<endl;

    int x = n;
    int count = 0;
    while (x>0){ 
        count++;
        x/=10; 
    }
    cout<<"no. of digits using while loop: "<<count<<endl;
    
    count = 0;
    count = (int)(log10(n)+1);
    
    cout<<"no. of digits using log_10 func: "<<count<<endl;


    return 0;
}