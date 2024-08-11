

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> smap;
        unordered_map<char, char> tmap;
        string sres=;
        string tres =;
        if(t.size()!=s.size()){return false;}
        for(int i=0;i<s.size();++i){
            if(smap.find(s[i])==smap.end()){
                smap[s[i]]=smap.size();
            }
            if(tmap.find(t[i])==tmap.end()){
                tmap[t[i]]=tmap.size();
            }
           if(tmap[t[i]]!=smap[s[i]]){return false;}
        }
        return true;

    }
};
