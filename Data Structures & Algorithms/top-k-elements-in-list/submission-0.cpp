class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        vector<vector<int>> freq(nums.size() + 1);
        std::unordered_map<int,int> count;

        // get the frequency of each number
        for(int num : nums){
            count[num] = ++count[num];
        }

        // add the frequencies of each number to a vector of int vectors
        // where the index is the frequency and value is the number
        for(const auto c : count){
           freq[c.second].push_back(c.first);
        }

        // go through the loop from the end to the start i.e most frequent to least
        for(int i = freq.size()-1; i>0; i--){
            // access the elements in the inner vectors
            for (int n : freq[i]) {
                // add the elements present at that frequency to results
                result.push_back(n);
                // exit when elements the given k
                if(result.size() == k)
                    return result;
            }
        }

        return result;
    }
};
