//Sorting

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> res;
        int n=strs.size();

        // Loop through input array using index
        for (int i = 0; i < n; i++) {
               
            string s = strs[i];          // get current string
            string sortedS = s;          // copy
            
            sort(sortedS.begin(), sortedS.end());  // sort it
            
            res[sortedS].push_back(s);  // insert into map
        }

        vector<vector<string>> result;

        // Loop through map using iterator
        for (auto it = res.begin(); it != res.end(); it++) {
            result.push_back(it->second);
        }

        return result;
    }
};
