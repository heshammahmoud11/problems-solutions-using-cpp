#include<iostream>
#include<vector>
using namespace std;


// 1. Write a C++ program to find the largest element of a given array of integers


// Sort array using bubble sort algorithm in descending order
void bubbleSort(vector<int> &nums)
{
    int n = nums.size();
    for(int i = 0; i < n - 1 ; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(nums[j] < nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}

// function to swap 2 elements
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int num;
    cout << "Enter a Num: ";
    cin >> num;

    vector<int> arr(num);
    cout <<"Enter Array Elements: \n";
    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr);

    // the largest element in the first index ==> in descending order
    cout <<"the Largest Element: " << arr[0];

}