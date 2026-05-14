class Solution {
public:
    bool isGood(vector<int>& nums) {
        int k=*max_element(nums.begin(),nums.end());
        if(k+1!=nums.size()){
            return false;
        }
        else{
            sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size()-2;i++){
                if(nums[i+1]-nums[i]!=1){
                    return false;
                    // break;
                }
            }
            if(nums[nums.size()-1]!=k||nums[nums.size()-2]!=k){
                return false;
            }
        }
        return true;
    }
};