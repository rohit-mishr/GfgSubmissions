/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        if(head==NULL){
            return 0;
        }
        else{
            return 1+getCount(head->next);
        }
    }
};