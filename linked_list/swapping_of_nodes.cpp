#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
        int val;
        ListNode* next;
        ListNode(int d){
            this->val=d;
            this->next=NULL;
        }
};
 ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){       //recursive approach 
            return head;
        }
       ListNode* returned= swapPairs(head->next->next);
       ListNode* headnext=head->next;
        headnext->next=head;
        head->next=returned;
        return headnext;
    }
  ListNode* swapPairs(ListNode* head) {   
if(head==NULL || head->next==NULL){
                return head;
        }
        ListNode* one=head;
        ListNode* two=head->next;
        while(one->next!=NULL){
            int temp_data=one->val;
            one->val=two->val;
            two->val=temp_data;
            if(one->next->next !=NULL){
one=one->next->next;
            }else{
                break;
            }
            two=one->next;
        }
            return head;
  }
int main(){

}