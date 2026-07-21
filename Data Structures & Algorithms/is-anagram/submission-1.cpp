class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        std::map<char,int> frequncies1;
        std::map<char,int> frequncies2;

        // increase value for every occurance of the key
        for(int i = 0; i < s.length(); i++)
        {
            frequncies1[s[i]] += 1;
            frequncies2[t[i]] += 1;
        }
        
        if(frequncies1 == frequncies2){
            return true;
        }
        return false;
    }
};
