#include <iostream>
#include <vector>
using namespace std;

class NumArray {
    vector<int> prefixSum;  // To store the prefix sums

public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefixSum.resize(n + 1, 0);
        
        // Compute prefix sums
        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }
    }

    int sumRange(int left, int right) {
        return prefixSum[right + 1] - prefixSum[left];
    }
};

int main() {
    vector<int> nums;
    int value;
    
    // Taking input for the array until a non-integer input is detected
    while (cin >> value) {
        nums.push_back(value);
    }

    // Example usage of the class
    NumArray numArray(nums);

    // Sample queries
    cout << numArray.sumRange(0, 2) << endl;  // Output: 1
    cout << numArray.sumRange(2, 5) << endl;  // Output: -1
    cout << numArray.sumRange(0, 5) << endl;  // Output: -3

    return 0;
}
