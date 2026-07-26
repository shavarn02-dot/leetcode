class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            int leftlow=INT_MAX;

            for(int i=low;i<=mid;i++){
                leftlow=min(leftlow,nums[i]);
            }
            int rightlow=INT_MAX;
            for(int i=mid+1;i<=high;i++){
                rightlow=min(rightlow,nums[i]);
            }
           
            ans=min(ans,min(leftlow,rightlow));

             if (leftlow <= rightlow) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
      return ans;   
    }
};