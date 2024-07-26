class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt=0;
        string res=;
        for(int i=0;i<s.size();++i){
            if(s[i]=='1'){++cnt;}
        }
        for(int i=0;i<s.size();++i){
            if(i==s.size()-1){res=res+'1'; break;}
            if(cnt>1){res=res+'1'; --cnt;}
            else{res=res+'0';}

            
        }
        return res;
    }
};
