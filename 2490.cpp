class Solution {
public:
    bool isCircularSentence(string sentence) {
        bool check = true;
        for(int i=1; i<sentence.size()-1; i++){
            if(sentence[i]==' '){
                if(sentence[i-1]!=sentence[i+1]){
                    check = false;
                    break;
                }
            }
        }
        if(sentence[0]!=sentence[sentence.size()-1]){
            check = false;
        }
        return check;
    }
};