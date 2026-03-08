#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        char c = char('A'+(n-1));
        for (int j=0; j<=i; j++, c--){
            cout<<c;
        }
        cout<<endl;
    }

    return 0;
}