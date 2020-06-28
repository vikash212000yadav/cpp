class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vec;
        unordered_map<string, vector<int>> m;
        
        for(int i=0; i!=strs.size(); i++)
        {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            m[temp].push_back(i);
        }
        
        vector<string> v;
        
        for(unordered_map<string, vector<int>>::iterator it=m.begin(); it!=m.end(); it++)
        {
            for(int i=0; i!=it->second.size(); i++)
                v.push_back(strs[it->second[i]]);
            
            vec.push_back(v);
            v.clear();
        }
        
        return vec;
    }
};
