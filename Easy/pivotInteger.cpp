class Solution {
public:
    int pivotInteger(int n) {
            for(int i=1;i<=n;++i){
                int cnt1=0;
                int cnt2=0;
                for(int j=0;j<=i;++j){
                    cnt1+=j;
                }
                for(int j=i;j<=n;++j){
                    cnt2+=j;
                }
                if(cnt1==cnt2){return i;}
            }
        return -1;
    }
};
