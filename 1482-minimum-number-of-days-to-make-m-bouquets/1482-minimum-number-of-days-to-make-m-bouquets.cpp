class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
             int bucket=0;
             int count=0;
            for(int i=0;i<n;i++){
                if(bloomDay[i]<=mid){
                    count++;
                }
                else{
                    bucket += count / k;
                    count = 0;
                }
            }
            bucket += count / k;
              if(bucket >= m){
               ans = mid;
               high = mid - 1;
            }
             else{
             low = mid + 1;
              }
            
            
        }
        
        return ans;
    }
};