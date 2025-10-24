class Solution {
public:
    bool Balance(int num) {
        int freq[10] = {0};
        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            freq[digit]++;
            temp /= 10;
        }
        for (int i = 0; i < 10; i++) {
            if (freq[i] > 0 && freq[i] != i) return false;
        }
        return true;
    }

    int nextBeautifulNumber(int n) {
        int k = n + 1;
        while (true) {
            if (Balance(k))
            return k;
            k++;
        }
    }
};
