class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.size();
        string st[n];
        string st1="";
        for(int i=0;i<n;i++){
            st[indices[i]]=s[i];
        }
        for(int i=0;i<n;i++){
            st1+=st[i];
        }
        return st1;
    }
};