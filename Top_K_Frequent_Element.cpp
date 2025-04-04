/*
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.
*/

class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int,int> Frequency;
            priority_queue<pair<int,int>> MaxHeap;
            vector<int> result;
            for(int  num : nums)
            {
                Frequency[num]++;
    
            }
    
             for (const auto& p : Frequency)
             {
                MaxHeap.push({p.second, p.first});
             }
             for(int i=0;i<k;i++)
             {
                result.push_back(MaxHeap.top().second);
                MaxHeap.pop();
             }
             return result;
    
    
            
        }
    };