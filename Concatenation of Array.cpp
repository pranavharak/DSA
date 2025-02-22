class Solution {
    public:
        vector<int> getConcatenation(vector<int>& nums) {
            vector<int> add;
            int s=nums.size();
            for(int i=0;i<s;i++){
                add.push_back(nums[i]);
            }
            for(int i=0;i<s;i++){
                add.push_back(nums[i]);
            }
            return add;
        }
    };