class Solution {
public:
    int myAtoi(string s) {
      int sign=1;  
      long long ans=0;
      int i=0;
      while(i < s.length() && s[i] == ' ') {
       i++;
      }
      if (i < s.length() && s[i] == '-') {
            sign = -1;
            i++;
        }
      else if (i < s.length() && s[i] == '+') {
            i++;
        }
      for(;i<s.length();i++){ 
     
       if (s[i] >= '0' && s[i] <= '9'){
         if(ans>(pow(2,31)-1-(s[i]-'0'))/10){
            if(sign==1){
                return pow(2,31)-1;
            }
            else{
                return (-pow(2,31));
            }
         }
            ans=(ans*10)+(s[i]-'0');
       }    
    else{
        break;
      }
    
    }
       if(sign==1){
        return ans;
       }
       return (-ans);
    }
};