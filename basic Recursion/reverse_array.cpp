#include <bits/stdc++.h>
using namespace std;

void reverseRecursive(vector<int>& arr, int i){
    int j = static_cast<int>(arr.size()) - 1 - i;
    if(i >= j) return;
    swap(arr[i], arr[j]);
    reverseRecursive(arr, i + 1);
}

int main(){
    vector<int> arr = {1,2,4,5};
    cout<<"Intial arr: ";
    for(int i : arr) cout<<i<<" ";
    cout<<endl;

    // builtin
    reverse(arr.begin(), arr.end());
    
    cout<<"builtin reverse method on arr: ";
    for(int i : arr) cout<<i<<" ";
    cout<<endl;
    
    // xor swap with loop till mid of array 
    for(int i=0; i<(arr.size()/2); i++){
        arr[i] ^= arr[arr.size()-1-i];
        arr[arr.size()-1-i] ^= arr[i];
        arr[i] ^= arr[arr.size()-1-i];
    }
    
    cout<<"Xor swap method (for loop till midpoint) on arr: ";
    for(int i : arr) cout<<i<<" ";
    cout<<endl;
    
    // swap function with loop till mid of array 
    for(int i=0; i<(arr.size()/2); i++){
        swap(arr[i], arr[arr.size()-i-1]);
    }
    
    cout<<"builtin swap method (for loop till midpoint) on arr: ";
    for(int i : arr) cout<<i<<" ";
    cout<<endl;
    
    // recursive two-pointer
    reverseRecursive(arr, 0);
    
    cout<<"recursive swap method on arr: ";
    for(int i : arr) cout<<i<<" ";
    cout<<endl;

    return 0;
}