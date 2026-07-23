class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char,int> freq1;
        unordered_map<char,int> freq2;
        for(int i = 0; i < s.length(); i++){
            freq1[s[i]] += 1;
            freq2[t[i]] += 1;
        }

        if(freq1 == freq2){
            return true;
        }
        return false;

    }
};
