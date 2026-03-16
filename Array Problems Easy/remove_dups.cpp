#include <bits/stdc++.h>
#include <cassert>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int count = 0;
    unordered_set<int> uniq;
    for (auto num : nums)
    {
        if (uniq.find(num) == uniq.end())
        {
            uniq.insert(num);
            nums[count] = num;
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> nums = {1,1,2};         // Input array
    vector<int> expectedNums = {1,2}; // The expected answer with correct length

    int k = removeDuplicates(nums); // Calls your implementation

    assert(k == expectedNums.size());
    for (int i = 0; i < k; i++)
    {
        assert(nums[i] == expectedNums[i]);
    }

    cout<<"Passed"<<endl;

    return 0;
}