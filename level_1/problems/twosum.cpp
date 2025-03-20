#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> freq;

            for (int i = 0; i < nums.size(); ++i) {
                int needed = target - nums[i];

                if (freq.find(needed) != freq.end()) {
                    return {i, freq[needed]};
                }
                freq.insert({nums[i], i});
            }

            return {};
        }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    for (const int& idx : sol.twoSum(nums, target)) {
        cout << idx << "    ";
    }

    cout << endl;
}
