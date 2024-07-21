class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        bool was=0;
        for(int i=s.size()-1;i>=0;--i){
            if(s[i]!=' '){++cnt;was=1;}
            if(s[i]==' ' and was){break;}
        }
        return cnt;
    }
};
