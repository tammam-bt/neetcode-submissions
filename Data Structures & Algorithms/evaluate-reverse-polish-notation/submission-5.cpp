class Solution {
public:
    int operation(int a, int b, char op) {
        if(op == '+') return a+b;
        if(op == '*') return a*b;
        if(op == '-') return a-b;
        if(op == '/') return a/b;
        return 0;
    }

    int evalRPN(vector<string>& tokens) {
        int final = 0,a,b,op; char c,current_operator;
        stack<int> numbers;
        for(string token:tokens) {
            c = token[token.size()-1];
            if(isalnum(c)) numbers.push(stoi(token));
            else {
                b = numbers.top(); numbers.pop();
                a = numbers.top(); numbers.pop();
                op = operation(a,b,c);
                numbers.push(op);
            }
        }
        return numbers.top();
    }
};
