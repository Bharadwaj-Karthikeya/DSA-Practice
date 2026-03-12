#include <bits/stdc++.h>
using namespace std;

void step_pause()
{
    this_thread::sleep_for(chrono::milliseconds(200));
}

void step_separator()
{
    cout << "--------\n";
    step_pause();
}

int split(vector<int> &arr, int low, int high)
{
    cout << "split: low=" << low << ", high=" << high << "\n";

    int pivot = (low + high) / 2;
    cout << "  pivot (value) = " << arr[pivot] << "\n";

    int i = low - 1;
    cout << "  initial i= " << i << "\n";

    // Traverse the array
    for (int j = low; j < high; j++)
    {
        cout << "  compare: arr[" << j << "]= " << arr[j] << " <= pivot index = " << pivot << " ?";
        // If element is smaller than or equal to pivot
        if (arr[j] <= pivot)
        {
            cout << " yes";
            // Increment i and swap with j
            i++;
            cout << ", swap " << arr[i] << " and " << arr[j] << "\n";
            swap(arr[i], arr[j]);
        }
        else
        {
            cout << " no\n";
        }
    }

    // Place pivot in correct position
    cout << "  final swap " << arr[i + 1] << " and " << arr[high] << "\n";
    swap(arr[i + 1], arr[high]);

    // Return pivot index
    cout << "  pivot placed at index " << i + 1 << "\n";
    return i + 1;
}

void quick_sort(vector<int> &arr, int low, int high)
{
    cout << "quick_sort: low=" << low << ", high=" << high << "\n";
    if (low <= high)
    {
        int pivotInd = split(arr, low, high);
        cout << "quick_sort: pivotInd=" << pivotInd << "\n";
        step_separator();

        quick_sort(arr, low, pivotInd - 1);
        quick_sort(arr, pivotInd + 1, high);
    }
    else
    {
        cout << "quick_sort: base case reached (low > high)\n";
        step_separator();
    }
}

int main()
{
    // Sample array
    vector<int> arr = {10, 7, 8, 9, 1, 5};

    cout << "Initial array: ";
    for (int num : arr)
        cout << num << " ";
    cout << "\n";
    step_separator();

    // Apply quicksort
    quick_sort(arr, 0, arr.size() - 1);

    // Print sorted array
    cout << "Sorted array: ";
    for (int num : arr)
        cout << num << " ";
    cout << "\n";
    step_separator();

    return 0;
}