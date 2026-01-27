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
        Node* list = new Node(head->data);
        Node* curr = head->next;
        while(curr!=NULL){
            Node* temp = new Node(curr->data);
            temp->next = list;
            list->prev = temp;
            list = temp;
            curr=curr->next;
        }
        list->prev=NULL;
        return list;
    }
};