#include <bits/stdc++.h>
using namespace std;

int sec_max_element(int arr[], int size){
    int max_el = arr[0];
    
    for(int i=1 ; i<size; i++) {
        if (arr[i] > max_el) max_el = arr[i];
    }
    
    int sec_max = arr[0];
    
    for(int i=1 ; i<size; i++) {
        if (arr[i] > sec_max && arr[i] != max_el) sec_max = arr[i];
    }

    return sec_max;
}

int sec_min_element(int arr[], int size){
    int min_el = arr[0];
    
    for(int i=1 ; i<size; i++) {
        if (arr[i] < min_el) min_el = arr[i];
    }
    
    int sec_min = arr[0];
    
    for(int i=1 ; i<size; i++) {
        if (arr[i] < sec_min && arr[i] != min_el) sec_min = arr[i];
    }

    return sec_min;
}

int main() {
    int arr[] = {2, 3, 5, 1, 0};

    cout<<"Second max element of Arr = "<<sec_max_element(arr, 5)<<endl;
    cout<<"Second min element of Arr = "<<sec_min_element(arr, 5)<<endl;

    return 0;
}