class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        char f=digit + '0';
        for(int i=0;i<nums.size();i++){
            string k  = to_string(nums[i]);
            for(char j:k){
                if(j ==f){
                    count++;
                }
            }
        }
        return count;
    }
};