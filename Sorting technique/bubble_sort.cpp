#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6, array[] = {13, 46, 24, 52, 20, 9};

    for (int i = n - 1; i > 0; i--)
    {
        cout<<"----------------"<<endl;
        cout<<"Before step "<<(n-i)<<": "; 
        for (int j = 0; j < n; j++)
        {
            cout<<array[j]<<" ";
        }
        cout<<endl;
        
        for(int j=0; j<i; j++){
            if(array[j] > array[j+1]) {
                cout<<"Swaping "<<array[j] <<" and "<<array[j+1]<<endl;
                swap(array[j], array[j+1]);
            }
        }
        
        cout<<"After step "<<(n-i)<<": "; 
        for (int j = 0; j < n; j++)
        {
            cout<<array[j]<<" ";
        }
        cout<<endl;
        cout<<"----------------"<<endl;
    }
    
    for (int j = 0; j < n; j++)
    {
        cout<<array[j]<<" ";
    }
    cout<<endl;
    cout<<"----------------"<<endl;
    
    return 0;
}