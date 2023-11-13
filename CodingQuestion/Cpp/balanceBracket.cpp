#include <bits/stdc++.h>

using namespace std;

bool bracketsBalanced(string input)
{
    stack<char> s;
    for (char ch : input)
    {
        if (ch == '(' || ch == '[' || ch == '{')
        {
            s.push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}')
        {
            if (s.empty())
            {
                return false;
            }
            char top = s.top();
            s.pop();
            if (ch == ')' && top != '(')
            {
                return false;
            }
            else if (ch == ']' && top != '[')
            {
                return false;
            }
            else if (ch == '}' && top != '{')
            {
                return false;
            }
        }
    }
    return s.empty();
}

int main()
{
    string input = "{([])}[]";
    string input2 = "{([(])}";

    if (bracketsBalanced(input))
    {
        cout << input + " Balanced" << endl;
    }
    else
    {
        cout << input + " Not Balanced" << endl;
    }

    if (bracketsBalanced(input2))
    {
        cout << input2 + " Balanced" << endl;
    }
    else
    {
        cout << input2 + " Not Balanced" << endl;
    }
}
