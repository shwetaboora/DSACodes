// precedence -> firstly -> (),^,*or/,+or-

// Infix -> <operand><operator><operand>

// Prefix(polish notation) -> <operator><operand><operand>
// Infix -> 4*2+3 = ((4*2)+3) = (*<-(42)+3) = +-<(*(42)3) = +*423 -> Prefix
// Infix -> 5-6/3 = (5-(6/3)) = (5-/<-(63)) = -<-(5/(63)) = -5/63 -> Prefix

// Postfix(reverse polish notation) -> <operand><operand><operator>
// Infix -> 4*2+3 = ((4*2)+3) = ((42)->*+3) = ((42)->*3)->+ = 42*3+ -> Postfix

#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int prefixEvaluation(string s)
{
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    cout << prefixEvaluation("-+7*45+20") << endl;

    return 0;
}