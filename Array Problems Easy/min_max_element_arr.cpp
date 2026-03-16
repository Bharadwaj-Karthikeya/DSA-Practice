#include <bits/stdc++.h>
using namespace std;

int max_element(int arr[], int size){
    int max_el = arr[0];
    
    for(int i=1 ; i<size; i++) {
        if (arr[i] > max_el) max_el = arr[i];
    }

    return max_el;
}

int min_element(int arr[], int size){
    int min_el = arr[0];
    
    for(int i=1 ; i<size; i++) {
        if (arr[i] < min_el) min_el = arr[i];
    }

    return min_el;
}

int main() {
    int arr[] = {2, 3, 5, 1, 0};

    cout<<"Max element of Arr = "<<max_element(arr, 5)<<endl;
    cout<<"Min element of Arr = "<<min_element(arr, 5)<<endl;

    return 0;
}