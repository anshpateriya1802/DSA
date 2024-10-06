#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> selectionSort(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {

            int minIndex = i;

            for (int j = i + 1; j < nums.size(); j++)
            {

                if (nums[j] < nums[minIndex])
                {
                    minIndex = j;
                }
            }

            if (minIndex != i)
            {
                swap(nums[minIndex], nums[i]);
            }
        }
        return nums;
    }
};

int main()
{

    vector<int> arr = {7, 5, 9, 2, 8};

    cout << "Original array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    
    Solution s1;


    vector<int> sortedArr = s1.selectionSort(arr);

    cout << "Sorted array: ";
    for (int num : sortedArr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
