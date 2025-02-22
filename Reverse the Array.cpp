#include<iostream>
#include<vector>
using namespace std;
class Solution{
	public:
  		vector<int> ReverseArray(vector<int> & nums){
        	vector<int> rev;	
          	for(int i=nums.size()-1;i>=0;i--){
            	rev.push_back(nums[i]);
            }
          return rev;
        }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    
    vector<int> reversed = sol.ReverseArray(nums);
    
    cout << "Reversed Array: ";
    for (int i=0;i<reversed.size();i++) {
        cout <<reversed[i]<< " ";
    }
    cout << endl;

    return 0;
}
