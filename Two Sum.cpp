class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> res;
            int s=nums.size();
            for(int i=0;i<s;i++){
                for(int j=i+1;j<s;j++){
                    if(nums[i]+nums[j]==target){
                        res.push_back(i);
                        res.push_back(j);
                        return res;
                    }
                }
            }
            return res;
        }
    };