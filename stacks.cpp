
// stack<int> st (using STL)
#include <vector>

using std::vector;

// Implementing a stack is trivial using a dynamic array
class Stack {
public:
    vector<int> stack_;


//stack<int> st;
//st.push()
// st.pop()
// st.top()
// st.empty()
// st.size()


    Stack() {};

    void push(int n) {
        stack_.push_back(n);
    }

    int pop() {
        int res = stack_[stack_.size() - 1];
        stack_.pop_back();
        return res;
    }
};
