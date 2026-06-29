/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        // Code here
        if (head == nullptr) return false;
        if (head -> data == key) return true;
        
        return searchKey(head->next, key);
    }
};
