#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Define the Solution class with the twoSum method
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int remaining = target - nums[i];
            if (seen.find(remaining) != seen.end()) {
                return {seen[remaining], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    vector<int> param_1 = {2, 7, 11, 15};
    int param_2 = 9;

    // Now Solution is declared, this will work
    vector<int> ret = Solution().twoSum(param_1, param_2);

    cout << "Output: [" << ret[0] << ", " << ret[1] << "]" << endl;

    return 0;
}
