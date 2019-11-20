class Solution {
public:
    int calPoints(vector<string>& ops) {
    stack<int> st;
    int total = 0;
        for (int i = 0; i < ops.size(); i++) {
            if (ops[i] == "C" && !st.empty()) {
                st.pop();
            }
            
            else if (ops[i] == "+") {
                int op1 =0;
                int op2 = 0;

                op1 = st.top();
                st.pop();
               
                if (!st.empty()) {
                 int op2 = st.top();   
                }
                st.push(op1);
                st.push(op1 + op2);
            }
            
            else if (ops[i] == "D" && !st.empty()) {
                   
                st.push(2 * st.top());
            }
            
            else {
                st.push(stoi(ops[i]));
            }      
        }
        while(!st.empty()) {
            total += st.top();
            st.pop();
        }
        return total;
    }
};