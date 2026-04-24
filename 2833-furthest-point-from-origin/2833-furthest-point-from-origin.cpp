class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        string L="", R="";
        for (char c : moves) {
            L += (c == '_') ? 'L' : c;
            R += (c == '_') ? 'R' : c;
        }

        int l1=0, r1=0, l2=0, r2=0;
        for (char c : L) {
            if (c == 'L') l1++;
            else r1++;
        }
        for (char c : R) {
            if (c == 'L') l2++;
            else r2++;
        }

        int mov1 = abs(l1 - r1);
        int mov2 = abs(l2 - r2);
        return max(mov1, mov2);
    }
};
