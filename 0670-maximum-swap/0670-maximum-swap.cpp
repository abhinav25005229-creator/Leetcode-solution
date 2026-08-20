class Solution {
public:
    int maximumSwap(int num) {
        string s= to_string(num);
    int maxdigit=-1,maxindex=-1,swapi=-1,swapj=-1;

        for(int i=s.size()-1; i>=0; i--){
            int digit= s[i]-'0';
            if(maxdigit<digit){
                maxdigit=digit;
                maxindex=i;
            }else if(maxdigit>digit){
                swapi=i;
                swapj=maxindex;
            }
        }
        if(swapi!=-1){
            swap(s[swapi],s[swapj]);
        }
        return stoi(s);
    }
};