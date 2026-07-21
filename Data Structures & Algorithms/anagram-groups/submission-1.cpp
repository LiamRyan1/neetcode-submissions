class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //hashmap to store grouped anagrams
        std::unordered_map<string, vector<string>> groups;
        //sort
        for(string& str : strs){
            //create a copy
            string sortedS = str;
            std::sort(sortedS.begin(),sortedS.end());
            // store sorted as key to unsorted string
            groups[sortedS].push_back(str);
        }
        //array of an array of strings for expected result
        std::vector<vector<string>> results;
        for(auto& match : groups)
        {
            // add the value of each key to the array of arrays
            results.push_back(match.second);
        }
        return results;
    }
};
