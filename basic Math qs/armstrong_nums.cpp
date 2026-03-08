#include <bits/stdc++.h>
using namespace std;

string isArmstrong(int num){
    int dup = num;
    int count = (int)(log10(num)+1);
    int arm = 0;

    while (dup>0)
    {
        int ls = dup%10;
        arm += (int)pow(ls, count);
        dup/=10;
    }
    
    return (arm == num) ? "Armstrong Number" : "Not Armstrong Number";
}

int main(){
    int n; 
    cin>>n;
    cout<<isArmstrong(n)<<endl;
    return 0;
}