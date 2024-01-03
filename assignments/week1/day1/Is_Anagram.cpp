class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char,char> anagram;
        for (auto i : s) {
            for (auto j : t) {
                if (anagram[i] != anagram[j]) {
                    return false;
                }
                anagram[i]++;
            }
        }
        return true;
    }
}
;
// What I basically tried to do was create a map and if the character
// in the first string matched the character in the second string, then 
//it would be able tp tell if the strings are anagrams or not