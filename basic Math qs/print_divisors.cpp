#include <bits/stdc++.h>
using namespace std;
    
vector<int> std_divisor_list(int div_num){
    vector<int> divisors;

    for(int i=1; i<=div_num; i++){
        if (div_num%i == 0){
            divisors.push_back(i);
        }
    }

    if(divisors.size() == 0) divisors.push_back(-1);

    return divisors;
}

vector<int> divisor_list(int div_num){
    vector<int> divisors;

    for(int i=1; i*i<=div_num; i++){
        if (div_num%i == 0){
            divisors.push_back(i);
            if (i != (div_num/i)) divisors.push_back(div_num/i);
        }
    }

    if(divisors.size() == 0) divisors.push_back(-1);
    else sort(divisors.begin(), divisors.end());

    return divisors;
}

int main(){
    int n; 
    cin>>n;

    vector<int> list = std_divisor_list(n);
    vector<int> vlist = divisor_list(n);

    cout<<"Brute Force Divisor list: ";
    for(auto i : list) {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"Mid-Stop or Sqrt Divisor list: ";
    for(auto i : vlist) {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}