class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        // buckets
        vector<vector<int>> buckets(nums.size()+1);
       
        // get the frequency of each number
        unordered_map<int,int> freq;
        for(int num : nums){
            freq[num] += 1;
        }
        // add the frequencies of each number to a vector of int vectors
        // where the index is the frequency and value is the number
        for(auto f : freq ){
            buckets[f.second].push_back(f.first);
        }

        // go through the loop from the end to the start i.e most frequent to least
        for(int i = buckets.size()-1; i > 0; i--){
            // access the elements in the inner vectors
                    for(int b : buckets[i]){
                    // add the elements present at that frequency to results
                    result.push_back(b);
                    // exit when elements the given k
                    if(result.size() == k)
                        return result;
                }
        }
        return result;
    }
};
