#include <bits/stdc++.h>
using namespace std;

// works one at time
void myRotateRight(vector<int> &nums)
{
    int size = nums.size(), last = nums[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        nums[i] = nums[i - 1];
    }
    nums[0] = last;
}

// works one at time
void myRotateLeft(vector<int> &nums)
{
    int size = nums.size(), last = nums[0];
    for (int i = 1; i < size; i++)
    {
        nums[i-1] = nums[i];
    }
    nums[size-1] = last;
}

// k rotations right 
void rotateRight(vector<int> &nums, int k)
{
    k = k % nums.size();
    
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

// k rotations left 
void rotateLeft(vector<int> &nums, int k)
{
    k = k % nums.size();

    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.end());
}

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5};

    for (int num : nums)
    {
        cout << num << " "; // Output the rotated array
    }
    cout << endl;

    myRotateRight(nums);

    for (int num : nums)
    {
        cout << num << " "; // Output the rotated array
    }
    cout << endl;
    
    myRotateLeft(nums);

    for (int num : nums)
    {
        cout << num << " "; // Output the rotated array
    }
    cout << endl;

    rotateRight(nums, 2);

    for (int num : nums)
    {
        cout << num << " "; // Output the rotated array
    }
    cout << endl;
    
    rotateLeft(nums, 2);

    for (int num : nums)
    {
        cout << num << " "; // Output the rotated array
    }
    cout << endl;

    return 0;
}