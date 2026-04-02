class Solution {
public:
    string toGoatLatin(string sentence) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        stringstream ss(sentence);
        string word, result, suffix = "a";
        
        while (ss >> word) {
            if (vowels.count(word[0])) {
                word += "ma";
            } else {
                word = word.substr(1) + word[0] + "ma";
            }
            
            word += suffix;
            result += (result.empty() ? "" : " ") + word;
            suffix += "a";
        }
        
        return result;
    }
};