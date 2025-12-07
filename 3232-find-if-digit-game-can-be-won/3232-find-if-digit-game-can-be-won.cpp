class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single = 0;
        int double_ = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] / 10 == 0) {
                single += nums[i];
            } else {
                double_ += nums[i];
            }
        }
        if (single != double_) {
            return 1;
        }
        return 0;
    }
};