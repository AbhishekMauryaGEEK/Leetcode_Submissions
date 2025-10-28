class Solution {
public:
bool simulate(vector<int> nums, int start, int dir) {
    int i = start;
    while (i >= 0 && i < nums.size()) {
        if (nums[i] == 0) {
            i += dir;
        } else {
            nums[i]--;
            dir *= -1;
            i += dir;
        }
    }
    for (int val : nums) {
        if (val != 0) return false;
    }
    return true;
}
int countValidSelections(vector<int>& nums) {
    int count = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == 0) {
            if (simulate(nums, i, -1)) count++;
            if (simulate(nums, i, 1)) count++;
        }
    }
    return count;
}
};