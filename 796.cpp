class Solution {
public:
    bool rotateString(string s, string goal) {
        bool ans = false;
        for(int i=0; i<s.size(); i++){
            bool check = true;
            char temp = s[0];
            for(int i=0; i<s.size()-1; i++){
                s[i] = s[i+1];
            }
            s[s.size()-1] = temp;
            for(int j=0; j<s.size(); j++){
                if(s[j]!=goal[j]){
                    check = false;
                    break;
                }
            }
            if(check){
                ans = true;
                break;
            }
        }
        return ans;
    }

};