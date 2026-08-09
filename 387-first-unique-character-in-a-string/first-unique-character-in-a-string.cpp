class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, pair<int, vector<int>>> mp;

        for(int i = s.size()-1; i >= 0; i--) {
            mp[s[i]].first++;
            mp[s[i]].second.push_back(i);
        }



        for(auto pair : mp) {
            if(pair.second.first == 1){
             return pair.second.second[0];
            }
        }
        return -1;
    }
};