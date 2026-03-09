#include <bits/stdc++.h>
using namespace std;

// Function to sort the array using insertion sort
vector<int> insertionSort(vector<int> &nums)
{
    int n = nums.size(); 
    
    for (int i = 1; i < n; i++)
    {
        cout<<"----------------"<<endl;
        cout<<"Before step "<<i<<" : ";
        for(int j=0; j<n; j++){
            cout<<nums[j]<<" ";
        }
        cout<<endl;

        int key = nums[i]; // Current element as key
        int j = i - 1;
        cout<<"Selected "<<key<<" to check position"<<endl;

        while (j >= 0 && nums[j] > key)
        {
            cout<<"Shifting "<<nums[j] <<" to "<<j+1<<endl;
            nums[j + 1] = nums[j];
            j--;
        }
        if(j== i-1) cout<<"No shifts made"<<endl;
        cout<<"Inserting "<<key<<" at " <<j+1<<" index"<<endl;
        nums[j + 1] = key; // Insert key at correct position

        cout<<"After step "<<i<<" : ";
        for(int j=0; j<n; j++){
            cout<<nums[j]<<" ";
        }
        cout<<endl;
        cout<<"----------------"<<endl;
    }

    return nums;
}

int main()
{
    vector<int> nums = {13, 46, 24, 52, 20, 9};

    cout << "Before Using Insertion Sort: " << endl;
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    // Function call for insertion sort
    nums = insertionSort(nums);

    cout << "After Using Insertion Sort: " << endl;
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}