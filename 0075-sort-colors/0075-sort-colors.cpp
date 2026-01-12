class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> dat(3, 0); 
        for (int i = 0; i < nums.size(); i++) {
            dat[nums[i]]++;
        }
        int index = 0;
        for (int color = 0; color < 3; color++) {
            for (int count = 0; count < dat[color]; count++) {
                nums[index++] = color;
            }
        }
    }
};
