#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int d){
            this->data=d;
            this->next=NULL;
        }
};
int arr[5]={2,3,4,5,6};
void creation(node* &head){
    node* temp=head;
    cout<<"no.of nodes in ll"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        node* new_node=new node(arr[i]);
        temp->next=new_node;
        temp=temp->next;
     
    }
    
}
void traversal(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"reached end of node"<<endl;
    }
}
node* removeNthFromEnd(node* head, int n) {
    if(head->next==NULL){                     //simple approach of traversing 
        return NULL;
    }
       int len=0;
       node* temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        temp=head;
        node* extra=NULL;
        for(int i=0;i<len-n;i++){
            extra=temp;
            temp=temp->next;
        }
        extra->next=temp->next;
        delete(temp);
        return head;
    }
    node* removeNthFromEnd_twopointer(node* head,int n){           //two pointer approach bhi hai iski 
        node* temp=head;
        for(int i=0;i<n;i++){
            temp=temp->next;
        }
        node* before=temp;
        temp=head;
      if(before==NULL){
        return head->next;
      }
        while(before->next!=NULL){
            before=before->next;
            temp=temp->next;
        }
   temp->next=temp->next->next;
 
   return head;
    }
    
node* swapPairs(node* head) {
        if(head->next->next==NULL || head->next==NULL){
            cout<<"nahi ho pa raha "<<endl;
            head->next->next=head;
            return head;
        }
       node* returned= swapPairs(head->next->next);
       
       head->next->next=head;
        head->next=returned;
        return head;
    }
int main(){
 node* head=new node(1);
 creation(head);
 traversal(head);
 node* sw=swapPairs(head);
 traversal(sw);
// node* th=removeNthFromEnd_twopointer(head,1);
// node* th= removeNthFromEnd(head,1);
 //traversal(th);
}



// if(head==NULL || head->next==NULL){
//                 return head;
//         }
//         ListNode* one=head;
//         ListNode* two=head->next;
//         while(one->next!=NULL){
//             int temp_data=one->val;
//             one->val=two->val;
//             two->val=temp_data;
//             if(one->next->next !=NULL){
// one=one->next->next;
//             }else{
//                 break;
//             }
//             two=one->next;
//         }
//             return head;