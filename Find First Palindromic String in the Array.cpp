class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int s=words.size();
        string str,str1;
        for(int i=0;i<s;i++){
            str=words[i];
            str1=string(str.rbegin(), str.rend());
            if(str==str1){
                return str;
            }
        }
        return "";
    }
};
