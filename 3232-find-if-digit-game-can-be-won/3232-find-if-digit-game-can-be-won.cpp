class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single = 0;
        int double_ = 0;
        for (int i = 0; i < nums.size(); i++) {
            int k = nums[i];
            int count = 0;
            while (k != 0) {
                k =k/ 10;
                count++;
            }
            if (count == 1) {
                single +=nums[i];
            } else {
                double_ +=nums[i];
            }
        }
        if (single != double_) {
            return true;
        }
         return false;

    }
};