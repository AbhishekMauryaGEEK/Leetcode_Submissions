class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int n = batteryPercentages.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (batteryPercentages[i] > 0) {
                for (int j = i+1; j <= n-1; j++) {
                    batteryPercentages[j]--;
                }
                    count++;
            }
        }
        return count;
    }
};