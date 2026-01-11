class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        vector<int>dat(10001,0);
        for(int i=0;i<nums.size();i++){
            dat[nums[i]]++;
            if(dat[nums[i]]>1){
                return nums[i];
            }
        }
        return -1;
    }
};