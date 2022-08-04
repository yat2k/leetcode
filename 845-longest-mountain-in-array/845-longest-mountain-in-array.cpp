class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int result=0;
        for(int i=1;i<n-1;){
            //whether is it a peak
            if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){
                int count=1;
                int j=i;
                //going backwards
                while(j>0 and arr[j]>arr[j-1]){
                    j--;
                    count++;
                }
                //going forward
                while(i<n-1 and arr[i]>arr[i+1]){
                    count++;
                    i++;
                }
                result = max(count,result);
                
            }
            else{
                i++;
            }
        }
        return result;
    }
};