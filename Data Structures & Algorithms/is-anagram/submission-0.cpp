class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() == t.size()){
            unordered_map<int, int>string1;
            unordered_map<int,int>string2;
            for(int x: s){
                string1[x]++;
            }

            for(int y: t){
                string2[y]++;
            }

            return string1 == string2;
        }
        else{
            return false;
        }
    }
};
