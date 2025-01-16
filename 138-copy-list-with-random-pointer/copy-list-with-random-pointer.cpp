/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:

    void InsertCopyInBetween(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            Node* nextEle=temp->next;
            Node* copyNode=new Node(temp->val);
            copyNode->next=nextEle;
            temp->next=copyNode;
            temp=nextEle;
        }
    }

    void copyRandomPtr(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            Node* copy=temp->next;
            if(temp->random){
                copy->random=temp->random->next;
            }else{
                copy->random=nullptr;
            }
            temp=temp->next->next;
        }
    }

    Node* copyNextPtr(Node* head){
        Node* temp=head;
        Node* dummy=new Node(-1);
        Node* res=dummy;
        
        while(!temp==NULL){ 
            res->next=temp->next;
            res=res->next;
            temp->next=temp->next->next;
            temp=temp->next;
        }
        return dummy->next;
    }
    Node* copyRandomList(Node* head) {
        InsertCopyInBetween(head);
        copyRandomPtr(head);
        return copyNextPtr(head);
    }
};