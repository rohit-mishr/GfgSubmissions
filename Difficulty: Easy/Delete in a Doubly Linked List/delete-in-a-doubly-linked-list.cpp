/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* delPos(Node* head, int x) {
        // code here
        Node* curr = head;
        int count = x;
        while(--count){
            curr = curr -> next;
        }
        if(curr->next!=NULL){
            curr->next->prev = curr->prev;
        }
        if(curr->prev!=NULL){
            curr->prev->next = curr->next;
        }
        if(x==1){
            head = head->next;
        }
        delete curr;
        return head;
    }
};