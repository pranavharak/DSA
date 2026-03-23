#include<iostream>
#include<vector>
using namespace std;
void selection_sort(int arr[],int n){
    int min_ind;
    for(int i=0;i<n-1;i++){
        min_ind = i;
        for(int j=i+1;j<n;j++){
            if(arr[min_ind]>arr[j]){
                min_ind = j;
            }
        }
        int temp;
        temp = arr[min_ind];
        arr[min_ind] = arr[i];
        arr[i] = temp;
    }
}

void bubble_sort(int arr[],int n){
    for(int i = n-1;i>=0;i--){
        int didswap =0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didswap =1;
            }
        }
        if(didswap != 1){
            break;
        }
    }
}

void insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp;
            temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }
}

void merge(int arr[],int low,int mid,int high){
    vector<int> temp;
    int l = low;
    int r = mid+1;

    while(l<=mid && r <= high){
        if(arr[l]<=arr[r]){
            temp.push_back(arr[l]);
            l++;
        }
        else{
            temp.push_back(arr[r]);
            r++;
        }
    }
    while(l<=mid){
        temp.push_back(arr[l]);
        l++;
    }
    while(r<=high){
        temp.push_back(arr[r]);
        r++;
    }

    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }

}

void merge_sort(int arr[],int low, int high){
    if(low >= high) return;
    int mid = (low + high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int partition(int arr[], int low ,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    
    while(i<j){
        while(arr[i]<=pivot && i<=high){
            i++;
        }
        while(arr[j]>pivot && j>=low){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quick_sort(int arr[],int low, int high){
    if(low<high){
        int part = partition(arr,low,high);
        quick_sort(arr,low,part - 1);
        quick_sort(arr,part+1,high);
    }
}

int main(){
    int arr[] = {12,3,45,8,21,9,89,10,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"\n Array before sorting = ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    //selection_sort(arr,size);
    //bubble_sort(arr,size);
    //insertion_sort(arr,size);
    //merge_sort(arr,0,size-1);
    quick_sort(arr,0,size-1);
    
    cout<<"\n Array after sorting = ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


}