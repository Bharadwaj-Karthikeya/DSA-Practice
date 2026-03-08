#include <iostream>
using namespace std;    

void triangle_Stars(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i); j++){
            cout<<"*";
        }
        for(int j=0; j<(2*i); j++){
            cout<<" ";
        }
        for(int j=(n-i); j>0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

void invert_triangle_Stars(int n){
    for(int i=n; i>0; i--){
        for(int j=(n-i+1); j>0; j--){
            cout<<"*";
        }
        for(int j=(2*i-2); j>0; j--){
            cout<<" ";
        }
        for(int j=0; j<(n-i+1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;

    triangle_Stars(n);
    invert_triangle_Stars(n);

    return 0;
}