#include<bits/stdc++.h>
using namespace std;
 class ListNode {
  public:
      int val;
      ListNode *next;
     ListNode(int x){
        this->val=x;
        this->next=NULL;
     }
  };
  ListNode* partition(ListNode* head, int x) {
        ListNode* temp=head;
        queue<ListNode*>sq;
        queue<ListNode*>lq;
        while(temp!=NULL){
            if(temp->val < x){
          
                sq.push(temp);
            }else{
          
                lq.push(temp);
            }
            temp=temp->next;
        }
    if(!sq.empty()){
        head = new ListNode(sq.front()->val);
        sq.pop();
    }else{
        head=new ListNode(lq.front()->val);
        lq.pop();
    }
     
     sq.pop();
     temp=head;
        while(!sq.empty()){
            temp->next=sq.front(); 
            sq.pop();
            temp=temp->next;
        }
      
        while(!lq.empty()){
            temp->next=lq.front();
            lq.pop();
            temp=temp->next;
        }
        temp->next=NULL;
        return head;
    }

  ListNode* create_ll(int n,int arr[]){
  ListNode* main=NULL;
    ListNode* head=main;
  
    for(int i=0;i<n;i++){
      if(main==NULL){
        head=main= new ListNode(arr[i]);
      }else{
 head->next=new ListNode(arr[i]);
      head=head->next;
      }
     
    }
    return main;
  }

ListNode* delete_node(ListNode* head ,int x){
  ListNode* temp= head;
  ListNode* prev = head->next; 
  while(temp!=NULL){
    if(temp->val == x){
        prev->next=temp->next;
        temp=temp->next;
        delete(temp);
    }
    temp=temp->next;
  }
}
int main(){
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
  cin>>arr[i];
}
int x;
cin>>x;
ListNode* head=create_ll(n,arr);

  ListNode* temp=head;

while(temp!=NULL){
  cout<<temp->val<<" ";
  temp=temp->next;
}
cout<<endl;

ListNode* part=partition(head,x);
while(part!=NULL){
  cout<<part->val<<" ";
  part=part->next;
}
cout<<endl;

}