#include<iostream>
#include<vector>
using namespace std;
int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int largest = nums[0];
        int slargest = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest){
                slargest = largest;
                largest = nums[i];
            }
            else if(nums[i]<largest && nums[i]>slargest){
                slargest = nums[i];
            }
        }
        
        return slargest;
    }

int main(){
    vector<int> nums = {3, 3, 6, 1};
    cout<<secondLargestElement(nums);
}