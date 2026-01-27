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
        bool ans = false;
        while(head!=NULL){
            if(head->data==key){
                ans = true;
                break;
            }
            head=head->next;
        }
        return ans;
    }
};
