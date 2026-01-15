class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int minval = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 10 == nums[i]) {
                minval=min(minval,i);
            }
        }
        if(minval!=INT_MAX){
            return minval;
        }
        else{
            return -1;
        }
        
    }
};