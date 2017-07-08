// Visit http://www.geeksforgeeks.org/length-of-the-longest-valid-substring/ for more information.

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int lvp(string str)
{
    stack<int> s;
    s.push(-1);
    int res = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
        {
            s.push(i);
        }
        else
        {
            s.pop();

            if (!s.empty())
                res = max(res, i - s.top());
            else
                s.push(i);
        }
    }
    return res;
}

int main()
{
    cout << "Enter string : ";
    string s;
    cin >> s;
    int res = lvp(s);
    cout << res << endl;
    return 0;
}
