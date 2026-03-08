#include <bits/stdc++.h>
using namespace std;

void countFreq_bf(int arr[], int n)
{
    vector<bool> visited(n, false);
    int key_max = 0;
    int key_min = 0;
    int val_min = INT16_MAX;
    int val_max = INT16_MIN;

    for (int i = 0; i < n; i++)
    {

        if (visited[i] == true)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }

        if (count < val_min)
        {
            val_min = count;
            key_min = arr[i];
        }
        if (count > val_max)
        {
            val_max = count;
            key_max = arr[i];
        }
    }
    cout << "Element found most number of times " << key_max
         << " which was found " << val_max << " number of times" << endl;

    cout << "Element found least number of times " << key_min
         << " which was found " << val_min << " number of times" << endl;
}

void countFrq(int arr[], int n)
{
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int key_max = 0;
    int key_min = 0;
    int val_min = INT16_MAX;
    int val_max = INT16_MIN;

    for (auto i : freq)
    {
        int key = i.first;
        int val = i.second;

        if (val_min > val)
        {
            val_min = val;
            key_min = key;
        }
        if (val_max < val)
        {
            val_max = val;
            key_max = key;
        }
    }

    cout << "Element found most number of times " << key_max
         << " which was found " << val_max << " number of times" << endl;

    cout << "Element found least number of times " << key_min
         << " which was found " << val_min << " number of times" << endl;
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "---------------------------" << endl;
    cout << "brute force" << endl;
    countFreq_bf(arr, n);
    cout << "---------------------------" << endl;
    
    
    cout<<"---------------------------"<<endl;
    cout<<"unordered Map based"<<endl;
    countFrq(arr, n);
    cout<<"---------------------------"<<endl;

    return 0;
}