class Solution {
    public:
      // arr : given array
      // k : find kth smallest element and return using this function
      int kthSmallest(vector<int> &arr, int k) {
          int s=arr.size();
          for(int i=0;i<s;i++){
              for(int j=i+1;j<s;j++){
                if(arr[i]<arr[j]){
                    swap(arr[j],arr[i]);
                }  
              }
          }
          int res=arr[s-k];
          return res;
      }
  };