class Solution {
public:
    string compressedString(string word) {
        string comp="";
        long long int pref = 1;
        string c="";
        c+=word[0];
        cout<<c[0]<<endl;
        for(int i=1; i<word.size(); i++){
            if(c[0]==word[i]){
                if(pref>=9){
                    comp += char(57);
                    comp += c[0];
                    pref = 1;
                }
                else{
                    pref++;
                }
            }
            else{
                comp += pref + 48;
                comp += c[0];
                pref = 1;
                c[0] = word[i];
            }
        }
        comp += pref + 48;
        comp += c[0];
        return comp;
    }
    