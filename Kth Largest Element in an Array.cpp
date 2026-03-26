class Solution {
    public:
        int findKthLargest(vector<int>& nums, int k) {
            int s=nums.size();
            /*for(int i=0;i<s;i++){
                for(int j=i+1;j<s;j++){
                    if(nums[i]>nums[j]){
                        swap(nums[j],nums[i]);
                    }
                }    
            }*/
            sort(nums.begin(),nums.end());
            int max=nums[s-k];
            return max;
        }
    };