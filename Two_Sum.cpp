/* 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/
#include <vector>
#include <hash_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap; 
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; 
            if (hashmap.find(complement) != hashmap.end()) {
                return {hashmap[complement], i}; 
            }
            hashmap[nums[i]] = i; 
        }
        return {};
    }
};