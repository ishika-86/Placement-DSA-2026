/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node *new_node = new Node(x);
        if (head==nullptr){
            return new_node;
        }    
        
        Node *temp = head;
        while (temp->next!=nullptr){
            temp =temp->next;
        }
        
        temp -> next = new_node;
            
        return head;
    }
};