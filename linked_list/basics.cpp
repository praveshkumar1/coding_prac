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
node* reversal_iter(node* &head){
    node* prev=head;                                    
        node* curr=head->next;                   //links ko hi ulta kar diya hai to linked list apne aap reverse ho gayi 
    node* new_next=curr->next;
    prev->next=NULL;
    while(curr->next!=NULL){
    curr->next=prev;
      prev=curr;
    curr=new_next;
    new_next=new_next->next;
    }
    curr->next=prev;
    return curr;
 }
 node* reversal_recursive(node* &head){
    node* temp=head;
    if(temp->next==NULL || temp==NULL){
        return temp;
    }
     node* temp2=temp->next;
   node* newhead= reversal_recursive(temp->next);
    temp2->next=temp;
    temp->next=NULL;
    return newhead;
 }
int main(){
    node* head=new node(1);
    creation(head);
    traversal(head);
    node* reversed_head=reversal_iter(head);
    traversal(reversed_head);
    traversal(head);
    node* reversed_head_rec=reversal_recursive(head);
    traversal(reversed_head_rec);
}