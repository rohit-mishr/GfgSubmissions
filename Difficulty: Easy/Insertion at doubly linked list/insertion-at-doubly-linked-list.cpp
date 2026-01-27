/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        // code here
        int count = p;
        Node* temp = head;
        while(count--){
            temp = temp->next;
        }
        Node* node = new Node(x);
        node->prev = temp;
        node->next = temp->next;
        temp->next = node;
        if(node->next!=NULL){
            node->next->prev = node;
        }
        return head;
    }
};