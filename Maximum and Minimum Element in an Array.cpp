#include<iostream>
using namespace std;
class MinMax{
	public:
  	void find(int arr[],int s){
    	int min,max;
      	min=arr[0];
      	max=arr[s-1];
      	for(int i=0;i<s;i++){
        	if(arr[i]<min){
            	min=arr[i];
            }
          	if(arr[i]>max){
            	max=arr[i];
            }
        }
      	cout<<"\n Minimum element= "<<min;
      	cout<<"\n Maximum element= "<<max;
    }
};
int main(){
	MinMax m;
  	int a[]={100,81,2,8,7,1,42};
  	int s=sizeof(a) / sizeof(a[0]);
  	m.find(a,s);
}