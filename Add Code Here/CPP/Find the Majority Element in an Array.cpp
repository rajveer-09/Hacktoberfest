//Find the Majority Element in an Array
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int, int> countMap;

    for (int num : nums) {
        countMap[num]++;
        if (countMap[num] > nums.size() / 2) {
            return num;
        }
    }

    // Majority element is guaranteed to exist, so this line should never be reached.
    return -1;
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

    int majorityElementValue = majorityElement(arr);

    if (majorityElementValue != -1) {
        cout << "Majority Element: " << majorityElementValue << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}

