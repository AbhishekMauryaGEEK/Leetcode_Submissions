class Solution {
public:
    bool isPalindrome(string s) {
        string k="";
      for (int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'){
            k.push_back(tolower(s[i]));
        }
        else if(s[i]>='A'&&s[i]<='Z'){
            k.push_back(tolower(s[i]));
        }
        else if(s[i]>='0'&&s[i]<='9'){
             k.push_back(tolower(s[i]));
        }
      }
      string m = k;
      reverse(k.begin(),k.end());
      if(m==k){
        return true;
      }
      else{
        return false;
      }
    }
};