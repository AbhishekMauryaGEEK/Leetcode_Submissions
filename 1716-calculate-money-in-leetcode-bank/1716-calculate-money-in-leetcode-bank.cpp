class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        int weeks = n / 7;
        int days = n % 7;
        for (int i = 0; i < weeks; i++) {
            for (int j = 1; j <= 7; j++) {
                sum += i + j;
            }
        }
        for (int j = 1; j <= days; j++) {
            sum += weeks + j;
        }

        return sum;
    }
};
