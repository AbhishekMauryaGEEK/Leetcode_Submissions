class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int count =0;
        int sum=accumulate(nums.begin(),nums.end(),0);
        int numleft=0;
        int numright=sum;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                if (numleft - numright >= 0 && numleft - numright <= 1) {
                    count++;
                }
                if (numright - numleft >= 0 && numright - numleft <= 1) {
                    count++;
                }
            }
            else{
                numleft+=nums[i];
                numright-=nums[i];
            }
        }
        return count;
    }
};