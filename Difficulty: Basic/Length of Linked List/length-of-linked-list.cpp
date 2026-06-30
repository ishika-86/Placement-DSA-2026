/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        int c=0;
        Node* curr = head;
        while (curr!=nullptr){
            c++;
            curr = curr->next;
        }
        return c;
    }
};