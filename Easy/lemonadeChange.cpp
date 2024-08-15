class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        short int cnt5 = 0;
        short int cnt10 = 0;
        for(int i=0;i<bills.size();++i){
            if(bills[i]==5){++cnt5;}
            else if(bills[i]==10){
                if(cnt5==0){return false;}
                --cnt5;
                ++cnt10;
            }
            else{
                if(cnt5<3 and (cnt5==0 or cnt10==0)){return false;}
                if(cnt10!=0){--cnt10;--cnt5;}
                else{cnt5-=3;}
            }
        }
        return true;
    }
};
