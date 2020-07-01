class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> arr = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};     
        set<string> tempSet;
        
        for (int i = 0; i < words.size(); ++i) {
            string morseCode = "";
            
            for (int j = 0; j < words[i].size(); ++j) {
                morseCode += arr[words[i][j] - 'a'];
            }
            
            tempSet.insert(morseCode);
        }
        
        return tempSet.size();
    }
};
