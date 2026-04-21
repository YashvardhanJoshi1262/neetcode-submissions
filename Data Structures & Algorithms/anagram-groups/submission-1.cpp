class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> res;
        for(int i=0; i<strs.size();i++){
            string s=strs[i]; // got the current string.
            string sortedS=s; //we got the copy

            sort(sortedS.begin() , sortedS.end());
            res[sortedS].push_back(s); //inser the key value pair into the map.
        }
        vector<vector<string>>result;
        for(auto it = res.begin(); it != res.end() ;it++){
            result.push_back(it->second);
        }
        return result;
    }
};
