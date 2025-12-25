class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        long long  sum = 0;
        int j=0;
        sort(h.begin(), h.end(),greater<int>());
        for (int i = 0; i <k; i++) {
            int ans = h[i]-i;
            if(ans > 0){
                sum+=ans;
            }
        }
        return sum;
    }
};