class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            int s=nums.size();
            for(int i=0;i<s;i++){
                for(int j=i+1;j<s;j++){
                    if(nums[i]==nums[j]){
                        return true;
                    }
                }
            }
            return false;
        }
    };