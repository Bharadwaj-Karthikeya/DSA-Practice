#include <bits/stdc++.h>
using namespace std;

void countFreq_bf(int arr[], int n) {
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++) {

        if (visited[i] == true)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }

        cout << arr[i] << " found " << count << endl;
    }
}


void countFrq(int arr[], int n){
    unordered_map<int, int> freq;
    
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for(auto i : freq) cout<<i.first<<" found "<<i.second<<endl;

}

void countFrq(string str ){
    unordered_map<char, int> freq;
    
    for(int i=0; i<str.length(); i++){
        freq[str[i]]++;
    }

    for(auto i : freq) cout<<i.first<<" found "<<i.second<<endl;

}

int main() {
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"---------------------------"<<endl;
    cout<<"brute force"<<endl;
    countFreq_bf(arr, n);
    cout<<"---------------------------"<<endl;
    
    cout<<"---------------------------"<<endl;
    cout<<"unordered Map based"<<endl;
    countFrq(arr, n);
    cout<<"---------------------------"<<endl;
    
    string s;
    cin>> s;
    
    cout<<"---------------------------"<<endl;
    cout<<"unordered Map based"<<endl;
    countFrq(s);
    cout<<"---------------------------"<<endl;


    return 0;
}
