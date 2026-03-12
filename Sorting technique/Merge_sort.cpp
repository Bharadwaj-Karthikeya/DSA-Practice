#include <bits/stdc++.h>
using namespace std;

static void printRange(const vector<int> &arr, int low, int high)
{
    cout << "[";
    for (int i = low; i <= high; i++)
    {
        cout << arr[i];
        if (i < high)
            cout << " ";
    }
    cout << "]";
}

static void printVec(const vector<int> &v)
{
    cout << "[";
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i + 1 < v.size())
            cout << " ";
    }
    cout << "]";
}

// Function to merge two halves of the array
void merge(vector<int> &arr, int low, int mid, int high)
{
    // Create temp arrays
    vector<int> temp;
    int left = low, right = mid + 1;

    cout << "Merge start low=" << low << " mid=" << mid << " high=" << high << " left=";
    printRange(arr, low, mid);
    cout << " right=";
    printRange(arr, mid + 1, high);
    cout << endl;

    // Merge two sorted halves
    while (left <= mid && right <= high)
    {
        cout << "Compare arr[" << left << "]=" << arr[left]
             << " and arr[" << right << "]=" << arr[right] << " -> take ";
        if (arr[left] <= arr[right])
        {
            cout << "left";
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            cout << "right";
            temp.push_back(arr[right]);
            right++;
        }
        cout << ", temp=";
        printVec(temp);
        cout << endl;
    }

    // Copy remaining elements from left half
    while (left <= mid)
    {
        cout << "Left remainder arr[" << left << "]=" << arr[left] << " -> append";
        temp.push_back(arr[left]);
        left++;
        cout << ", temp=";
        printVec(temp);
        cout << endl;
    }

    // Copy remaining elements from right half
    while (right <= high)
    {
        cout << "Right remainder arr[" << right << "]=" << arr[right] << " -> append";
        temp.push_back(arr[right]);
        right++;
        cout << ", temp=";
        printVec(temp);
        cout << endl;
    }

    // Copy sorted elements back to original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
        cout << "Write back arr[" << i << "]=" << arr[i] << endl;
    }

    cout << "Merge done range low=" << low << " high=" << high << " -> ";
    printRange(arr, low, high);
    cout << endl;
}

// Recursive merge sort function
void mergeSort(vector<int> &arr, int low, int high)
{
    cout << "----------------" << endl;
    cout << "mergeSort call low=" << low << " high=" << high << " range=";
    printRange(arr, low, high);
    cout << endl;
    cout << "----------------" << endl;
    if (low >= high)
    {
        cout << "Base case reached at index " << low << endl;
        return;
    }

    // Find the middle index
    int mid = (low + high) / 2;
    cout << "Mid index=" << mid << endl;

    // Recursively sort left half
    cout << "----------------" << endl;
    cout << "Split left low=" << low << " mid=" << mid << endl;
    mergeSort(arr, low, mid);
    cout << "----------------" << endl;
    // Recursively sort right half
    cout << "----------------" << endl;
    cout << "Split right mid=" << mid + 1 << " high=" << high << endl;
    mergeSort(arr, mid + 1, high);
    cout << "----------------" << endl;

    // Merge the two sorted halves
    cout << "----------------" << endl;
    cout << "Merging range low=" << low << " mid=" << mid << " high=" << high << endl;
    merge(arr, low, mid, high);
    cout << "----------------" << endl;

    cout << "After merge low=" << low << " high=" << high << " -> ";
    printRange(arr, low, high);
    cout << endl;
}

int main()
{
    vector<int> arr = {5, 2, 8, 4, 1};

    cout << "Initial array: ";
    printRange(arr, 0, arr.size() - 1);
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Final array: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}
