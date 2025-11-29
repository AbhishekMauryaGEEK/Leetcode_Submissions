class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementsum =0;    
        int digitsum =0;    
        for(int i=0;i<nums.size();i++){
            elementsum+=nums[i];
            int k=nums[i];
            while(k!=0){
                digitsum+=k%10;
                k=k/10;
            }
        }
        return abs(elementsum-digitsum);
    }
};