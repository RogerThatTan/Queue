#include<bits/stdc++.h>
using namespace std;

class Queue{

    int maxsize, front,rear;
    int queue[100];


    public: 
    Queue(){

        maxsize= 5;
        front = -1;
        rear = -1;
    }

    void Enqueue(int x){

        if(rear==maxsize-1){
            cout<<"Queue is overflow"<<endl;
        }

        else if(rear==-1 && front ==-1){
        
        front=rear=0;
        queue[rear] = x;

        }
    
        else{

        rear++;
        queue[rear]=x;
    }

    }

    void Deque(){

        if(rear == -1 && front == -1){
            cout<<"Queue is already empty"<<endl;
        }

        else if(front==rear){
            front=rear=-1;
        }

        else{
            front++;
        }

    }

    void showQueue(){

        cout<<"The queue elements are: ";
        if(front==-1 && rear==-1){
            cout<<"Queue is empty"<<endl;
        }

        else{
            for(int i=front ;i<rear+1;i++){
                cout<<queue[i]<<" ";
            }
            cout<<endl;
        }
        
    }

    int FrontElements(){
        
        cout<<"The front element is: ";
        if(front==-1 && rear==-1){
            cout<<"Queue is empty"<<endl;
        }

        else{
            cout<<queue[front];
            }
            cout<<endl;
        }
    

};
    
    int main(){

    Queue q = Queue();

    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(1);
    q.Enqueue(5);
    q.Enqueue(6);
    q.FrontElements();
    q.showQueue();
    q.Deque();
    q.showQueue();
    q.Deque();
    q.Deque();
    q.showQueue();
    q.Enqueue(99);  //Queue Overflow -> need circular queue;
    q.Enqueue(100); //Queue Overflow -> need circular queue;
    q.Enqueue(120); //Queue Overflow -> need circular queue;
    q.showQueue();
    q.FrontElements();

    return 0;
}
