class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int flip=0;
        int maxi=0;
        int count=0;
        for(int right=0;right<n;right++){
            if(nums[right]==0){
                flip++;
            }
            while(flip>k){
                if(nums[left]==0){
                    flip--;
                }
                left++;
            }

            count=right-left+1;
            maxi=max(maxi,count);
        }

        return maxi;
    }
};