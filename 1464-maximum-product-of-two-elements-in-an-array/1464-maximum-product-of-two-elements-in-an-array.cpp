class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int maxi=INT_MIN;
        while(i<j){
         int ans=(nums[i]-1)*(nums[j]-1);
         if(ans>maxi){
            maxi=ans;
         }
         else if(nums[i]<nums[j]){
            i++;
         }
         else{
            j--;
         }

        }
     return maxi;   
    }
};