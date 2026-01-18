class Solution {
public:  
    int minDistance(string word1, string word2) {
        // Step 1: sort both strings alphabetically
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());

        int i = 0, j = 0;
        int count = 0;

        // Step 2: compare character by character
        while (i < word1.size() && j < word2.size()) {
            if (word1[i] == word2[j]) {
                // equal → just move forward
                i++;
                j++;
            } else {
                // different → move the smaller one forward and count++
                if (word1[i] < word2[j]) {
                    count++;
                    i++;
                } else {
                    count++;
                    j++;
                }
            }
        }

        // Step 3: remove leftovers (if any remain after one string ends)
        count += (word1.size() - i) + (word2.size() - j);

        // Step 4: special case — if both pointers reach last position and chars differ
        if (!word1.empty() && !word2.empty() &&
            i == word1.size() && j == word2.size() &&
            word1.back() != word2.back()) {
            count += 2;
        }

        return count;
    }
};
