/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        // code here
        if (head == nullptr) return nullptr;
        
        if(head-> next == nullptr){
            delete head;
            return nullptr;
        }
        
        Node* lastSec = head;
        while (lastSec -> next -> next != nullptr){
            lastSec = lastSec->next;
        }
        
        delete lastSec->next;
        
        lastSec->next = nullptr;
        
        return head;
        
    }
};