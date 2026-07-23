class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> indices;
        vector<int> result;
        for(int i = 0; i< nums.size(); i++){
            indices[nums[i]] = i;
        }
        for(int i = 0; i< nums.size(); i++){
            int difference = target - nums[i];
            if(indices.count(difference) && indices[difference] != i){
                result.push_back(i);
                result.push_back(indices[difference]);
                return result;
            }
        }
        return result;
    }
};
