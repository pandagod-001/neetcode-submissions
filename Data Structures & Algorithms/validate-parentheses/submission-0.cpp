#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if (s.length() % 2 != 0) {
            return false;
        }
        stack<char> brackets;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                brackets.push(c);
            } 
            else {
                if (brackets.empty()) {
                    return false;
                }
                
                char open = brackets.top();
                brackets.pop(); 
                if ((c == ')' && open != '(') ||(c == '}' && open != '{') ||(c == ']' && open != '[')) {
                    return false;
                }
            }
        }
        return brackets.empty();
    }
};