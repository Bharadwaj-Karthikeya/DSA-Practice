#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<(2*n)-1; i++){
        for(int j=0; j<(2*n)-1; j++){
            int top = i, le = (2*n-2)-i , ri = (2*n-2)-j, bot = j;
            int mn = min(min(top, le), min(ri, bot));
            cout<<(n-mn)<<" ";
        }
        cout<<endl;
    }

    return 0;
}
