class Solution {
public:
    bool judgeCircle(string moves) {
     int n=moves.length();
     int up=0;
     int down=0;
     int right=0;
     int left=0;
     for(int i=0;i<n;i++){
        if(moves[i]=='U'){
            up+=1;
        }
        else if(moves[i]=='D'){
            down+=1;
        }
        else if(moves[i]=='L'){
            left+=1;
        }
        else{
            right+=1;
        }
     }
     if(up==down && right==left)return true;
     else return false;
    }
};