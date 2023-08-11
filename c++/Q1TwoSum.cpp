# 暴力破解
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {0, 0};
    }
};


# 哈希表
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashdict;
        int key;
        int length = nums.size();
        for (int i = 0; i < length; ++i) {
            int key = target - nums[i];
            auto it = hashdict.find(key);
            if (it != hashdict.end()) {
                return {it->second, i};
            }
            hashdict[nums[i]] = i;
        }
        return {};
    }
};

