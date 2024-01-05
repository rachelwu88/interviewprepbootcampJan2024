class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> string_char;
        vector<char> reversed;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i = 0; i <= s.length(); i ++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                string_char.push_back(s[i]);
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                string_char.push_back(s[i]);
            }
        }
        reversed = string_char;
        reverse(reversed.begin(), reversed.end());
        for(int j = 0; j < string_char.size(); j++){
            if(string_char[j] != reversed[j] ){
                return false;
            }
        }
        
        return true;
    }
};