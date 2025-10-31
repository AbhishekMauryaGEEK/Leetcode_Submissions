class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size() - 2;
        vector<int> freq(n, 0);
        vector<int> sneaky;

        for (int num : nums) {
            freq[num]++;
        }

        for (int i = 0; i < n; i++) {
            if (freq[i] > 1) {
                sneaky.push_back(i);
            }
        }

        return sneaky;
    }
};
