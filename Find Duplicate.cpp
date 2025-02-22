class Solution {
    public:
        int findDuplicate(vector<int>& nums) {
            int s=nums.size();
            int res;
            sort(nums.begin(),nums.end());
            for(int i=0;i<s;i++){
                for(int j=i+1;j<s;j++){
                    if(nums[i]==nums[j]){
                        return nums[i];
                    }
                }
            }
        return 0;
        }
    };