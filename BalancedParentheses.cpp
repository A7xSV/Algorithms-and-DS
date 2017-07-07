#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool check(char s1, char s2)
{
    if (s1 == '(' && s2 == ')')
        return 1;
    else if (s1 == '{' && s2 == '}')
        return 1;
    else if (s1 == '[' && s2 == ']')
        return 1;
    else
        return 0;
}

bool isBalanced(string s)
{
    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (st.empty() == 1 || check(st.top(), s[i]) == 0)
            {
                return 0;
            }
            else
            {
                st.pop();
            }
        }
    }
    if (st.empty() == 1)
        return 1;
    else
        return 0;
}

int main()
{
    cout << "Check balancing for '(, '), '{', '}', '[', ']' " << endl;
    cout << "Enter string to check : ";
    
    string s;
    cin >> s;
    cout << "0 - False\n1 - True" << endl;
    cout << "Result : " << isBalanced(s) << endl;
    return 0; 
}