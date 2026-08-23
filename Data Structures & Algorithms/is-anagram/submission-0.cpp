class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int, int> mpp1;
        map<int, int> mpp2;
        for(int i=0;i<s.size();i++){
            mpp1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            mpp2[t[i]]++;
        }
        return mpp1==mpp2;
    }
};
