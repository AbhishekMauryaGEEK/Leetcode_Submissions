class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>freq1(26,0),freq2(26,0);
        for(int i=0;i<ransomNote.size();i++){
            freq1[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.size();i++){
            freq2[magazine[i]-'a']++;
        }
        bool flag=true;
        for(int j=0;j<26;j++){
            if(freq1[j]>freq2[j]){
                flag=false;
                break;
            }
        }
        return flag;
    }
};