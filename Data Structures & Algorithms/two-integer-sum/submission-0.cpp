class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> indices;

        for(int i = 0; i < nums.size(); i++){
            // copy nums array to hashmap and maintain indice positions
            indices[nums[i]] = i;
        }

        for(int i = 0; i <nums.size(); i++){
            int dif = target - nums[i];
            
            // check the map for difference
            if(indices.count(dif) && indices[dif] != i)
                return {i,indices[dif]};
        }
        return {};
    }
};
