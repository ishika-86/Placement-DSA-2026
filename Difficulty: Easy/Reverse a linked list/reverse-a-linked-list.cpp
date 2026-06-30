/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node* curr=head, *prev = nullptr, *next;
        while(curr!=nullptr){
            next = curr->next; curr->next = prev;
            prev = curr; curr = next;
            
        }
        return prev;
        
    }
};