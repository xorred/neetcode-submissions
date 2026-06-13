class Solution {
public:
    bool isPalindrome(string s) {
        // string n;
        // for(int i=0; i<s.size();i++){
        //     // if
        //     n[i] = tolower(s[i]);
        // }

        // string n = "";
        // for (int i = 0; i < s.size(); i++) {
        //     if (isalnum(s[i])) {          // Only keep letters and numbers
        //         n += tolower(s[i]);       // Safely append to the end
        //     }
        // }

        int i = 0;
        int j = s.size() - 1;
        // while(i<j)
        // {
        //     if(n[i] != n[j]){
        //         return false;
        //     }
        //     i++;
        //     j--;
        // }
        // return true;

        while(i<j){
            while(i<j && !isalnum(s[i])){
                i++;
            }
            while(i<j && !isalnum(s[j])){
                j--;
            }

            if(tolower(s[i]) != tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;

        
    }
};
