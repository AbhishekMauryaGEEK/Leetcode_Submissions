class Solution {
    public int minNumberOperations(int[] t) {
        int r = t[0];
        for (int i = 1; i < t.length; i++) {
            if (t[i] > t[i - 1]) 
                r += t[i] - t[i - 1];
        }
        return r;
    }
}
