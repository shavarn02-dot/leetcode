class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=*max_element(weights.begin(),weights.end());
        int sum=accumulate(weights.begin(),weights.end(),0);
        int high=sum;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int weight=0;
            int count=1;
        
            for(int i=0;i<n;i++){
                if(weight+weights[i]<=mid){
                
                 weight+=weights[i];
                }
                else{
                    count++;
                    weight=weights[i];
                    
                } 
            }
            if(count<=days){
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