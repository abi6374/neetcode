class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> a;
        for(int i=0;i<s.length();i++){
            a[s[i]]++;
            a[t[i]]--;

        }
        for(auto x:a){
            if(x.second !=0){
                return false;
            }
        }
        return true;
        
    }
};
