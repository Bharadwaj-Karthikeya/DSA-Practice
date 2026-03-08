#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for (int j=1; j<(n-i); j++ ){
            cout<<" ";
        }
        for(char c = 'A'; c<=('A'+i); c++){
            cout<<char(c);
        }
        for(char c = ('A'+(i-1)); c>='A'; c--){
            cout<<char(c);
        }
        cout<<endl;
    }

    return 0;
}