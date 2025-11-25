class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(string &k :words){
                string rev=  k;
                reverse(rev.begin(),rev.end());
                if(k==rev){
                    ans= k;
                    break;
            }
        }
        return ans;
    }
};