class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        //int n=nums.size();
        int i=0;
        int j=1;
        for(int k=0;k<n;k++){
            if(nums[k]>0){
                result[2*i]=nums[k];
                i++;
            }
            else{
                result[j]=nums[k];
                j+=2;
            }
        }
        return result;
        
    }
};