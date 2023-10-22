//Find the Peak Element in an Array
#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[mid + 1]) {
            // Peak must be in the left half, including mid
            right = mid;
        } else {
            // Peak must be in the right half
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int peakIndex = findPeakElement(arr);
    cout << "Peak Element Index: " << peakIndex << endl;

    return 0;
}
