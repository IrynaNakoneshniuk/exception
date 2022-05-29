#include <iostream>
#include <iostream>
#include <stack>
#include "Exception.h"

using namespace std;

bool balanced(const string& s)
{
    stack<char> stack;
    for (char c : s)
    {
        switch (c)
        {

        case '(': stack.push(')'); break;
        case '[': stack.push(']'); break;
        case '{': stack.push('}'); break;
        case '<': stack.push('>'); break;

        case ')':
        case ']':
        case '}':
        case '>':
            if (stack.empty() || stack.top() != c)
                throw "stack is empty";
            stack.pop();
            break;
        default:
            break;
        }
    }
    return stack.empty();
}

void test(const string& s)
{
    cout << '"' << s << "\" " << (balanced(s) ? "yes" : "no") << endl;
}

int main()
{
   /* try
    {
        test("({x-y-z}*[x+2y]-(z+4x))");
        test("([x-y-z}*[x+2y)-{z+4x)]");
    }
    catch (const char* exception)
    {
        cout << "Error: " << exception << std::endl;
    }*/
    try {
        char* ch = nullptr;
        if (ch == nullptr) {
            throw  ExceptionPtr<char>("ch is null",ch);
        }
    }
    catch (ExceptionPtr<char>& ex) {
        cout << ex.getMsg() << endl;
    }
    
}
