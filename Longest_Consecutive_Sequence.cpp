/*
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.
*/
class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            unordered_set<int> HashSet(nums.begin(),nums.end());
            int Streak=0;
            for(int num : HashSet)
            {
                if(HashSet.find(num-1)==HashSet.end())
                {
                    int CurrStreak=1;
    
                    while(HashSet.find(num+CurrStreak) != HashSet.end())
                    {
                        CurrStreak++;
                    }
                    Streak= max(Streak,CurrStreak);
    
                }
            }
            return Streak;
            
        }
    };