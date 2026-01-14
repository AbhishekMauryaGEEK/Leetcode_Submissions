class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int firstmax = nums[0];
        int secondmax = INT_MIN;
        int thirdmax = INT_MIN;
        if (nums.size() < 3) {
            return nums[0];
        }
        for (int i = 1; i < nums.size() - 1; i++) {
            if (nums[i] < firstmax) {
                secondmax = nums[i];
                for (int j = i + 1; j < nums.size(); j++) {
                    if (nums[j] < secondmax) {
                        thirdmax = nums[j];
                        return thirdmax;
                }
            }
        }
        }
        return thirdmax;
    }
};