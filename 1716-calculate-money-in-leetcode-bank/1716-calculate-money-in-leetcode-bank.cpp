class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        int weeks = n / 7;
        int days = n % 7;

        // Add money for complete weeks
        for (int i = 0; i < weeks; i++) {
            for (int j = 1; j <= 7; j++) {
                sum += i + j;
            }
        }

        // Add money for leftover days
        for (int j = 1; j <= days; j++) {
            sum += weeks + j;
        }

        return sum;
    }
};
