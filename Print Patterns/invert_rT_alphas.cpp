#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n; i>=1; i--){
        for(char c = 'A'; c<'A'+i; c++){
            cout<<c;
        }
        cout<<endl;
    }

    return 0;
}