#include <bits/stdc++.h>
using namespace std;

// Selection sort
// 1. target an element by index i 
// 2. find elements after it and record the index of minimum element 
// 3. after go through all elements swap current element with the recorded element's index
// 4. repeat till end

int main()
{
    int n = 6, arr[] = {13, 46, 24, 52, 20, 9};

    for (int i = 0; i < n - 1; i++)
    {
        cout<<"----------------"<<endl;
        cout<<"Before step "<<i+1<<" : ";
        for(int j=0; j<n; j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;

        int mi = i; 
        for (int j = i + 1; j < n; j++)
        {
            if (arr[mi] > arr[j])
            {
                mi = j;
            }
        }
        cout<<"Swapping "<<arr[i]<<" with "<<arr[mi]<<endl; 
        swap(arr[i], arr[mi]);
        
        cout<<"After step "<<i+1<<" : ";
        for(int j=0; j<n; j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
        cout<<"----------------"<<endl;
    }

    return 0;
}