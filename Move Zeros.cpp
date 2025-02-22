class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int c=0;
       int s=nums.size();
       for(int i=0;i<s;i++){
        if(nums[i]!=0){
            nums[c]=nums[i];
            c++;
        }
       }
       for(int i=c;i<s;i++){
        nums[i]=0;
       }
    }
};