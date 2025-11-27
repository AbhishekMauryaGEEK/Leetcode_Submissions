class Solution {
public:
    int xorOperation(int n, int start) {
       int count=0;
        int i=0;
        int nums[n];
        while(i!=nums.size()){
            i=start+2*1;
            count+=nums[i]+nums[i+1];
            i++;
        }
        return count;
    }
};