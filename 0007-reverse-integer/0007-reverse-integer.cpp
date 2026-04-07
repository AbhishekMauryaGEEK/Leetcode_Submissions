class Solution {
public:
    int reverse(int x) {
        string s;
        long long temp = x;
        s += to_string(abs(temp));
        std::reverse(s.begin(), s.end());
        long long k = stoll(s);
        if (x < 0) {
            k = -k;
        }
        if (k < INT_MIN || k > INT_MAX)
            return 0;
        return  k;
    }
};