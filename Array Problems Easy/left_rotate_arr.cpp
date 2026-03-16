#include <bits/stdc++.h>
using namespace std;

// works but time limits exceed for huge input
void myRotate(vector<int> &nums, int k)
{
    k = k % nums.size();
    while (k--)
    {
        int size = nums.size(), last = nums[size - 1];
        for (int i = size - 1; i > 0; i--)
        {
            nums[i] = nums[i - 1];
        }
        nums[0] = last;
    }
}

// default method rotate fastest
void rotate(vector<int> &nums, int k)
{
    k = k % nums.size();

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5};

    for (int num : nums)
    {
        cout << num << " "; // Output the rotated array
    }
    cout << endl;

    myRotate(nums, 3);

    for (int num : nums)
    {
        cout << num << " "; // Output the rotated array
    }
    cout << endl;
    
    rotate(nums, 2);

    for (int num : nums)
    {
        cout << num << " "; // Output the rotated array
    }
    cout << endl;

    return 0;
}