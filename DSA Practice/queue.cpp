#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int size;
    int front;
    int back;
    int *arr;
};
Queue* createQueue(unsigned gsize){
  Queue* madequeue=new Queue();
  madequeue->size=gsize;
  madequeue->front=0;
  madequeue->back=0;
  madequeue->arr=new int[madequeue->size];
  return madequeue;
}
Queue* enqueue(Queue* inqueue,int insertion){
inqueue->arr[inqueue->back]=insertion;
inqueue->back=inqueue->back+1;
cout<<insertion<<"enqueued"<<endl;
}
void dequeue(Queue* inqueue){
  int item=inqueue->arr[inqueue->front];
  while(inqueue->front != inqueue->back-1){
  inqueue->arr[inqueue->front]=inqueue->arr[inqueue->front+1];
  inqueue->front=inqueue->front+1;
  }
inqueue->front=0;
cout<<"Remove "<<item<<endl;
}
int front(Queue* inqueue){
int item=inqueue->arr[inqueue->front];
return item;
}
int back(Queue* inqueue){
  return inqueue->arr[inqueue->back];
}
int main(){
 Queue* queue1=createQueue(1000);
enqueue(queue1,10);
enqueue(queue1,20);
cout<<back(queue1)<<endl;
dequeue(queue1);
cout<<back(queue1);
return 0;
}