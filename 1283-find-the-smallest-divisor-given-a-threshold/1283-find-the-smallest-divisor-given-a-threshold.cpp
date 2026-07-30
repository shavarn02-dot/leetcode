class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long total=0;

            for(int i=0;i<n;i++){
                total +=(nums[i] + mid - 1) / mid;
            }
            if(total<=threshold){
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