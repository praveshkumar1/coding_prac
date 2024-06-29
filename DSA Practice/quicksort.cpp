#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int ub,int lb){
    int pivot = arr[lb];
    int i=lb;
    int j=ub;
    while(i<j){
        while(arr[i]<=arr[pivot]){
            i++;
        }
        while(arr[j]>arr[pivot]){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i],arr[pivot]);
    return j;
}
void quicksort(int arr[],int end,int start){
    int x=partition(arr,end,start);
    quicksort(arr,x-1,start);
    quicksort(arr,end,x+1);
}
int main(){

}