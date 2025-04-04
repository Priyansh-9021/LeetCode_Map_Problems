/*
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.
*/

class Solution {
    public:
        int firstUniqChar(string s) {
            std::unordered_map<char,int> map;
            for(char ch : s)
            {
                map[ch]++;
            }
            for(int i=0;i<s.length();i++)
            {
                if(map[s[i]]==1)
                {
                    return i;
                }
            }
            return -1;
            
        }
    };