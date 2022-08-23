class Solution {
public:
    void merge(vector<int> &arr,int s,int e){
        int i = s;
        int m = s+(e-s)/2;
        int j = m+1;
        
        vector<int> temp;
        while(i<=m and j<=e){
            if(arr[i]<arr[j]){
                temp.push_back(arr[i++]);
            }
            else{
                temp.push_back(arr[j++]);
            }
        }
        while(i<=m){
            temp.push_back(arr[i++]);
        }
        while(j<=e){
            temp.push_back(arr[j++]);
        }
        
        int k=0;
        for(int idx=s;idx<=e;idx++){
            arr[idx] = temp[k++];
        }
        return;
    }
    void mergeSort(vector<int> &arr, int s ,int e){
        if(s>=e){
            return;
        }
        int m=s+(e-s)/2;
        
        mergeSort(arr,s,m);
        mergeSort(arr,m+1,e);
        return merge(arr,s,e);
    }
    vector<int> sortArray(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        mergeSort(nums,s,e);
        return nums;
    }
};