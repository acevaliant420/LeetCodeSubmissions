class Solution {
public:
    string makeFancyString(string s) {
        int count = 1;
        string ans;
        ans += s[0];
        for(int i=1; i<s.size(); i++){
            if(s[i]==s[i-1]){
                count++;
                if(count<3){
                    ans+=s[i];
                }
            }
            else{
                count = 1;
                ans+=s[i];
            }
        }
        return ans;
    }
};