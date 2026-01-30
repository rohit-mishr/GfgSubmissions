/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node* curr = head;
        while(curr!=NULL){
            if(curr->next==NULL){
                head = curr;
            }
            Node* temp = curr->next;
            curr->next=curr->prev;
            curr->prev=temp;
            curr = curr->prev;
        }
        return head;
    }
};