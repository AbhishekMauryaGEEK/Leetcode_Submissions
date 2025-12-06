class Solution {
public:
    int arraySign(vector<int>& nums) {
        int finalsign=1;
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i]==0){
                return 0;
                break;
            }
            if(nums[i]>0){
                finalsign*=1;
            }
            if(nums[i]<0){
                finalsign*=-1;
            }
        }
        return finalsign;
    }
};