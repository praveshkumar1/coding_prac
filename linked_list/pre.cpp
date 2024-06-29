#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
  data=d;
  next=NULL;
    }
};
void print(Node* head){
    if(head==NULL){
      return ;
    }
else{
cout<<head->data<<endl;
print(head->next);
}



 }
//int searchll(Node* head,int key,int count){
//     int count=1;
// while (head!=NULL)
// {
//     if(head->data==key){
//         return count;
//     }else{
//         count++;
//         head=head->next;
//     }
// }
// if(head->data==key){
//     return count;
// }
// if(head->next==NULL){
// return -1;
// }
// searchll(head->next,key,++count);

//}
// Node* insertatHead(Node* head,int val){
// Node *newer=new Node(val);
// newer->next=head;
// return newer;
// }


// Node* insertatpos(Node* head,int value,int pos){
//     Node* temp=new Node(value);
//    int count=0;
//    Node* curr= head;
//     while(head!=NULL){
// count++;
// if(count==pos-1){
//  temp->next=curr->next;
// curr->next=temp;
// return head;
// }
// curr=curr->next;

//     }
// }



Node* insertatEnd(Node* head,int val){
Node* temp=new Node(val);
if(head==NULL){
    head=temp;
}
Node* curr=head;
while(curr->next != NULL){
    curr=curr->next;
}
curr->next=temp;
return head;
}

// Node* deletefirsthead(Node* head){
//    if(head->next==NULL){
//     return NULL;
//    }
//    else if(head==NULL){
//     return NULL;
//    }else{
    
//     head=head->next;
//     return head;
//    }
// }


// Node* deletelastnode(Node* head){
//     if(head==NULL){
//         return NULL;
//     }
//     else if(head->next==NULL){
// return NULL;
//     }else{
//         Node* curr=head;
//         while(curr->next->next!=NULL){
//             curr=curr->next;
//         }
//         delete(curr->next);
//        curr->next=NULL;
//         return head;
//     }
// }


// Node* insertinsortedorder(Node* head,int value){
//     Node* temp=new Node(value);
//     if(head==NULL){
//         return temp;
//     }else if(head->data < value){

// temp->next=head;
// return temp;

//     }else{

//     Node* curr=head;
//     while(curr->next != NULL && curr->next->data < value){
//         curr=curr->next;
//     }
  
//    temp->next=curr->next;
//    curr->next=temp;
   
//     }
   

// }

//int middleoflinkedlist(Node* head){
    //Basic approach
//     int count=0;
//     Node* temp=head;
//     while(temp!=NULL){
//         count++;
// temp=temp->next;
//     }
//     cout<<count<<endl;
//     Node* curr= head;
    
//         for(int i=0;i<count/2;i++){
//             curr=curr->next;
//     }
//   cout<<curr->data;
    //Advance approach

//     Node* slow=head;
//     Node* fast =head;
//     while(fast!=NULL && fast->next!=NULL){
//         fast=fast->next->next;
//         slow=slow->next;
//     }
//     cout<<slow->data;
// }

//void nth_fromend(Node* head,int n){
    //Basic Approach
//     if(n==0){
//         cout<<"NOthing to be return ";

//     }
// Node* curr=head;
// int count=0;
// while(curr!=NULL){
//     count++;
//     curr=curr->next;
// }
// curr=head;
// for(int i=0;i<(count-n);i++){
// curr=curr->next;
// }
// cout<<curr->data;

//Pro approach of two pointers

// Node* first=head;
// for(int i=0;i<n;i++){
//     first=first->next;
// }
// Node* second=head;
// while(first != NULL){
//     first=first->next;
//     second=second->next;
// }
// cout<<second->data;
// }


Node* reverselinkedlist(Node* head){
// vector<int>v;
// Node* curr=head;
// while(curr!=NULL){
//    v.push_back(curr->data);
//    curr=curr->next;
// }

// curr=head;
// while(curr!=NULL){
//     curr->data=v.back();
//     v.pop_back();
//     curr=curr->next;
// }
// return head;


Node* curr=head;
Node* prev=NULL;
while(curr!=NULL){
    Node* temp=curr->next;
curr->next=prev;
prev=curr;
curr=temp;
}
return prev;
}
Node* removeduplicates(Node* head){
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }
   Node* temp=head;
   Node* itemp;
   while (temp->next!=NULL)
   {
     if(temp->next->data==temp->data){
     itemp=temp->next->next;
     temp->next->next=NULL;
       delete(temp->next);
     temp->next=itemp;
     temp=temp;
   
   }else{
   temp=temp->next;
   }


   }
   
 
}

Node* reverseingroups(Node* head,int k){
 Node* temp= NULL;
 Node* curr=head;
 Node* prev=NULL;
 int count=0;
 while(curr!=NULL && count<k){
  temp=curr->next;
  curr->next=prev;
  curr=temp;
  prev=curr;
  count++;
 }
 if(temp!=NULL){
    Node* resthead=reverseingroups(temp,k);
    head->next=resthead;
 }
 return prev;

}

void loopinlinkedlist(Node* head){
    Node* curr=head;
 while(curr!=NULL){
Node* temp=curr->next;
Node* temp2=head;
while(temp2!=curr){
    if(temp2==temp){
        cout<<"Loop Detected"<<endl;
    }
    temp2=temp2->next;
}
curr=curr->next;
 }
 cout<<"Loop not detected"<<endl;

}
void segregateevenandodd(Node* head){
Node* temp=head;
while(temp->next!=NULL){
    temp=temp->next;

}
while(head->next!=NULL){
    if(head->data %2 !=0){
        Node* intemp=head;
        head=head->next;
        temp->next=intemp;
        
    }
}

}
int main(){
    Node* head=new Node(1);
   
   head=insertatEnd(head,10);
   head=insertatEnd(head,20);
    head=insertatEnd(head,20);
   head=insertatEnd(head,30);
     head=insertatEnd(head,40);
       head=insertatEnd(head,30);
    head=insertatEnd(head,20);
    //   insertatEnd(head->next->next->next->next,40);
    // print(head);
   //cout<<searchll(head,50,1);
//    cout<<deletefirsthead(head)->data;
//insertatpos(head,25,2);
//middleoflinkedlist(head);
//nth_fromend(head,2);
//print(head);
//reverselinkedlist(head);


//reverseingroups(head,3);
//removeduplicates(head);
//loopinlinkedlist(head);
segregateevenandodd(head);
//print(head);
 
}

