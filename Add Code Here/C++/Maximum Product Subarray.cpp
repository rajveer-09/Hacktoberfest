//Maximum Product Subarray
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProductSubarray(vector<int>& nums) {
    int n = nums.size();
    int maxProduct = nums[0];
    int minProduct = nums[0];
    int result = maxProduct;

    for (int i = 1; i < n; i++) {
        if (nums[i] < 0)
            swap(maxProduct, minProduct);

        maxProduct = max(nums[i], maxProduct * nums[i]);
        minProduct = min(nums[i], minProduct * nums[i]);

        result = max(result, maxProduct);
    }

    return result;
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

    cout << "Maximum Product Subarray: " << maxProductSubarray(arr) << endl;

    return 0;
}
