class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<3) return 0;
        int rmax=0,lmax=0,total=0,l=0,r=n-1;
        while(l<r){
            if(height[l]<height[r]){
                if(height[l]>=lmax){
                    lmax=height[l];
                }
                else{
                    total+=lmax-height[l];
                }
                l++;
            }
            else{
                if(height[r]>=rmax){
                    rmax=height[r];
                }else{
                    total+=rmax-height[r];
                }
                r--;
            }
        }
        return total;
    }
};