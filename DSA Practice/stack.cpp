#include<iostream>
#include<stack>
using namespace std;
// class Stack{
// public:
// int *arr;
// int top;
// int size;
// Stack(int size){
//  this->size=size;
//  arr=new int[size];
//  top=-1;
// }
// void push(int element){
//  if(top>size){
//     cout<<"overflow";
//  }else{
//     top++;
//     arr[top]=element;
//  }

// }

// void pop(){
//     if(top==-1){
//         cout<<"nothing to remove";
//     }else{
//         top--;
//     }
// }
// int peek(){
//     if(top>=0){
//         cout<<top<<endl;
//         return arr[top];
//     }else{
//         cout<<top<<endl;
//         cout<<"stack is empty";
// return -1;
//     }
// }

// bool isempty(){
//     if(top==-1){
//         return true;
//     }else{
//         return false;
//     }
// }

// };
// class node{
// public:
// int data;
// node* next;
// node(int data){
// this->next=NULL;
// this->data=data;
// }
// };
// class Stack{
// public:
// node* head;

// Stack(){
//     head=NULL;

// }

// void push(int element){
//   node* temp=new node(element);
//   temp->next=head;
//   head=temp;
//   }

// void pop(){
// node* to_be_deleted=head;
// head=head->next;
// delete(to_be_deleted);
// }

// int peek(){
//     if(head!=NULL){
//         return head->data;
//     }else{
//         cout<<"underflow"<<endl;
//         return -1;
//     }
// }
// bool isempty(){
//     if(head==NULL){
//         return 1;
//     }else{
//         return 0;
//     }
// }
// };

// class my2stack{
// int start;
// int end;
// int size;
// int *arr;
// my2stack(int size){
//     this->size=size;
//  start=-1;
//  end=size;
// arr=new int[size];
// }

// void push(int element){
// if(start<end){
//     start++;
//      arr[start]=element;
// }else{
//     cout<<"overflow";
// }
// }
// void push2(int element){
//     if(start<end){
//         end--;
//         arr[end]=element;
//     }else{
//         cout<<"overflow";
//     }
// }
// void pop(){
//     if(start==-1) cout<<"underflow";
//     else{
//         start--;
//     }
// }
// };

int main(){
    stack<char>s;
    int n;
    cin>>n;
     for(int i=0;i<n;i++){
   char c;
   cin>>c;
   s.push(c);
     }
     for(int i=0;i<n;i++){
     cout<<s.top();
     s.pop();
     }
}