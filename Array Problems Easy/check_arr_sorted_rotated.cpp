#include <bits/stdc++.h>
using namespace std;

int rotations = 0;

void rotate(vector<int> &nums)
{
    int size = nums.size(), last = nums[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        nums[i] = nums[i - 1];
    }
    nums[0] = last;
    rotations++;
}

bool isSorted(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] > nums[j])
                return false;
        }
    }
    return true;
}

bool myCheck(vector<int> &nums)
{
    if (isSorted(nums))
        return true;

    while (rotations < nums.size())
    {
        rotate(nums);
        if (isSorted(nums))
            return true;
    }

    return false;
}

bool check(vector<int> &nums)
{
    int cnt = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > nums[(i + 1) % nums.size()])
            cnt++;
    }

    return (cnt <= 1);
}

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};

    cout << "nums is sorted + rotated: " << (myCheck(nums) ? "True" : "False") << endl;
    cout << "nums is sorted + rotated: " << (check(nums) ? "True" : "False") << endl;

    return 0;
}