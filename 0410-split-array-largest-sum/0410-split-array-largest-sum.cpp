class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end());
        int tot_sum=accumulate(nums.begin(),nums.end(),0);
        int high=tot_sum;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int split=1;
            int sum=0;
            for(int i=0;i<n;i++){
                if(sum+nums[i]<=mid){
                    sum+=nums[i];
                }
                else{
                    split+=1;
                    sum=0;
                    sum+=nums[i];
                }
            }
            if(split<=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};