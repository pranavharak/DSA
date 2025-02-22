class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int s=nums.size();
        int res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<s;i++){
                if(nums[i]==nums[i+1])
                {
                    return nums[i];
                }
        }
    return 0;
    }
};
