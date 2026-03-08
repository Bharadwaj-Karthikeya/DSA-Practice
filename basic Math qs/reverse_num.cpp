#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string c = to_string(n);
    reverse(c.begin(), c.end());
    cout<<c<<endl;
    reverse(c.begin(), c.end());

    string rev(c.rbegin(), c.rend());
    cout<<rev<<endl;

    int x = n;
    int revs = 0;
    while (x>0)
    {
        int ls = x%10;
        revs = (revs*10) + ls;
        x/=10;
    }

    cout<<revs<<endl;

    return 0;
    
}