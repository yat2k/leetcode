class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left,right;
        int lmax=0,rmax=0,ans=0;
        
        for(int x: height){
            lmax=max(lmax,x);
            left.push_back(lmax);
        }
        for(int i=n-1;i>=0;i--){
            rmax=max(rmax,height[i]);
            right.push_back(rmax);
        }
        reverse(right.begin(),right.end());
        for(int i=0;i<n;i++){
            ans+=min(left[i],right[i])-height[i];
        }
        
        return ans;
    }
};