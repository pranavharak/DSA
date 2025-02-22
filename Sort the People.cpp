class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int s=names.size();
        vector<pair<int,string>> people;
        vector<string> sortedName;
        for(int i=0;i<s;i++){
            people.push_back({heights[i],names[i]});
        }
        sort(people.rbegin(),people.rend());
        for(auto&p: people){
            sortedName.push_back(p.second);
        }
        return sortedName;
    }
};