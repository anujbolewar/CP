// using stl --> Singly linkedList

// insertion  --> O(1)
// deletion   --> O(1)
// searching  --> O(n)
// traversal  --> O(n)

// forward_list<int> fl;



// fl.push_front(10);     // insert at front
// fl.pop_front();        // remove from front
// fl.insert_after(it, 20);   // insert after iterator
// fl.erase_after(it);        // erase after iterator
// fl.remove(30);         // remove all occurrences of 30
// fl.reverse();          // reverse list
// fl.sort();             // sort list
// fl.empty();            // check if empty

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

// Implementation for Singly Linked List
class LinkedList {
public:
    ListNode* head;
    ListNode* tail;

    LinkedList() {
        // Init the list with a 'dummy' node which makes 
        // removing a node from the beginning of list easier.
        head = new ListNode(-1);
        tail = head;
    }

    void insertEnd(int val) {
        tail->next = new ListNode(val);
        tail = tail->next;
    }

    void remove(int index) {
        int i = 0;
        ListNode* curr = head;
        while (i < index && curr) {
            i++;
            curr = curr->next;
        }
        
        // Remove the node ahead of curr
        if (curr) {
            curr->next = curr->next->next;
        }
    }

    void print() {
        ListNode* curr = head->next;
        while (curr) {
            cout << curr->val_ << " -> ";
            curr = curr->next;
        }
        cout << endl;
    }
};   
