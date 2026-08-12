class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>ans;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++){
            long long nextgreater=-1;
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    for(long long k=j+1;k<m;k++){
                        if(nums2[j]<nums2[k]){
                            nextgreater=nums2[k];
                            break;
                        }
                    }
                    break;
                }
            }
            ans.push_back(nextgreater);
        }
        return ans;
    }
};