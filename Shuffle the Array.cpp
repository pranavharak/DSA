class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuff;
        for(int i=0;i<n;i++){
            shuff.push_back(nums[i]);
            shuff.push_back(nums[i+n]);
        }
        return shuff;
    }
};