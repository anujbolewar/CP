 // using stl function of doubly linked list
     
//  insertion  --> O(1)
//  deletion   --> O(1)
//  searching  --> O(n)
//  traversal  --> O(n)


// list<int> l;

// l.push_back(10);     
// l.push_front(5);      
// l.pop_back();         
// l.pop_front();        
// l.insert(it, 15);     
// l.erase(it);          
// l.remove(20);         
// l.reverse();          
// l.sort();            
// l.size();             
// l.empty();  

// insertion (begin/end)    --> O(1)
// deletion (begin/end)     --> O(1)
// searching                --> O(n)
// traversal                --> O(n)



#include <iostream>


using namespace std;

class ListNode {
public:
    int val_;
    ListNode* next = nullptr;
    ListNode* prev = nullptr;

    ListNode(int val) {
        val_ = val;
    }
};

// Implementation for Doubly Linked List
class LinkedList {
public:
    ListNode* head;
    ListNode* tail;

    LinkedList() {
        // Init the list with a 'dummy' node which makes 
        // removing a node from the beginning of list easier.
        head = new ListNode(-1);
        tail = new ListNode(-1);
        head->next = tail;
        tail->prev = head;
    }

    void insertFront(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->prev = head;
        newNode->next = head->next;

        head->next->prev = newNode;
        head->next = newNode;
    }

    void insertEnd(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = tail;
        newNode->prev = tail->prev;

        tail->prev->next = newNode;
        tail->prev = newNode;
    }

    // Remove first node after dummy head (assume it exists)
    void removeFront() {
        head->next->next->prev = head;
        head->next = head->next->next;
    }

    // Remove last node before dummy tail (assume it exists)
    void removeEnd() {
        tail->prev->prev->next = tail;
        tail->prev = tail->prev->prev;
    }

    void print() {
        ListNode* curr = head->next;
        while (curr != tail) {
            cout << curr->val_ << " -> ";
            curr = curr->next;
        }
        cout << endl;
    }
};   
