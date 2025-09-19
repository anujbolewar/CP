
// using STL 
// queue<int> q;
// q.push(10);     // insert at back
// q.push(20);     // [10, 20]
// q.front();      // access first element → 10
// q.back();       // access last element → 20
// q.pop();        // remove from front (removes 10)
// q.size();       // number of elements
// q.empty();      // true if queue is empty


// insertion (push)   --> O(1)
// deletion (pop)     --> O(1)
// front()/back()     --> O(1)
// searching          --> O(n)
// traversal          --> O(n)



// priority_queue<int> pq; (Max-heap by default)

// pq.push(10);
// pq.push(5);
// pq.push(20);
// pq.top();    // 20 (largest element)
// pq.pop();    // removes 20
// pq.size();
// pq.empty();

// insertion (push)   --> O(log n)
// deletion (pop)     --> O(log n)
// top() access       --> O(1)
// searching          --> O(n)   // not efficient
// traversal          --> O(n)


// for min-heap
// priority_queue<int, vector<int>, greater<int>> minpq;


// deque(double-ended queue) can be used as stack or queue
// insertion and deletion is possible form both the end 

// deque<int> dq;
// dq.push_back(10);     // [10]
// dq.push_front(5);     // [5, 10]
// dq.pop_back();        // removes 10 → [5]
// dq.pop_front();       // removes 5 → []
// dq.front();           // first element
// dq.back();            // last element
// dq.size();            // size
// dq.empty();           // check empty

// insertion (front/back)   --> O(1)
// deletion (front/back)    --> O(1)
// random access ([])       --> O(1)
// searching                --> O(n)
// traversal                --> O(n)






#include <iostream>
using namespace std;

class ListNode {
    public:
        int val_;
        ListNode* next = nullptr;

        ListNode(int val) {
            val_ = val;
        }
};

class Queue {
public:
    // Implementing this with dummy nodes would be easier!
    ListNode* left = nullptr;
    ListNode* right = nullptr;

    Queue() {}

    void enqueue(int val) {
        ListNode* newNode = new ListNode(val);

        // Queue is non-empty
        if (right != nullptr) {
            right->next = newNode;
            right = right->next;
        } 
        // Queue 
        else {
            left = right = newNode;
        }
    }

    int dequeue() {
        // Queue is empty
        if (left == nullptr) {
            return -1; // Better to throw an exception
        }
        // Remove left node and return value
        int val = left->val_;
        left = left->next;
        return val;
    }

    void print() {
        ListNode* curr = left;
        while (curr != nullptr) {
            cout << curr->val_ << " -> ";
            curr = curr->next;
        }
        cout << endl;
    }
};