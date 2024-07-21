class Solution {
public:
    int countTime(string time) {
        short cnt=0;
        short res=1;
       for(int i=0;i<time.size();++i){
        if(time[i]=='?')
        {++cnt;
        if(i==3){res*=6;}
        if(i==4){res*=10;}
        }

       } 
       if(cnt==4){return 1440;}
       if(time[0]=='?' and time[1]=='?'){
        res*=24;
       }
       if(time[0]!='?' and time[1]=='?'){
        if(time[0]=='0' or time[0]=='1'){res*=10;}
        else{ res*=4;}
       }
       if(time[0]=='?' and time[1]!='?'){
        if((time[1]-'0')<4){
            res*=3;
        }
        else{res*=2;}
       }
       return res;
    }
};
