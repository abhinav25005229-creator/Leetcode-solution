class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(string ch:operations){
           
             if(ch=="+"){
                int top1= st.top();st.pop();
                int top2= st.top();
                
                st.push(top1);
                st.push(top1+top2);
            }else if(ch=="D"){
                st.push(st.top()*2);

            }
            else if(ch=="C"){
                st.pop();
            }
            else st.push(stoi(ch));
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};