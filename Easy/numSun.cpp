class Solution {
public:
    int numSub(string s) {
        const unsigned long long int MOD = 1e9 + 7;
        unsigned long long int len=0;
        unsigned long long int cnt=0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='1'){
                ++len;
                cnt=(cnt+len)%MOD;
            }
            else{len=0;}
        }
        return cnt;
    }
};
