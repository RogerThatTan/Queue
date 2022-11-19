#include<bits/stdc++.h>
using namespace std;


class Circular_Queue{

    public:

    int maxsize;
    int rear;
    int front;
    int *queue;

    Circular_Queue(){}

    myqueue(int size){

        queue = new int[size];
        maxsize = size;
        front=rear=-1;

    }

    void Enqueue(int x){

        if(front==-1 && rear==-1){
            front=rear=0;
            queue[rear] =x;
        }

        else if((rear+1)%maxsize==front){
            cout<<"The queue is overflow"<<endl;
        }

        else{
            
            rear = (rear+1)%maxsize;
            queue[rear] = x;

        }
    }

        void Deque(){

            if(front == -1 && rear == -1){
                cout<<"The queue is already empty"<<endl;
            }

            else if (front == rear)

            {
                front = rear = -1;
            }

            else{

                front = (front+1)%maxsize;

            }
            
        }

        void showQueue(){

        int i = front;
        cout<<"The circular queue elements are: ";

        if(front==-1 && rear==-1){
            cout<<"Queue is empty"<<endl;
        }

        else{

            while(i != rear){
                cout<<queue[i]<<" ";
                i = (i+1)%maxsize;
            }

            cout<<queue[rear];
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
        
        Circular_Queue cq =  Circular_Queue();
        int n;
        cout<<"Enter the size of the circular Queue: ";
        cin>>n;
        cq.myqueue(n);

        cq.Enqueue(2);
        cq.Enqueue(3);
        cq.Enqueue(4);
        cq.Enqueue(1);
        cq.Enqueue(5);
        cq.Enqueue(6);
        cq.FrontElements();
        cq.showQueue();
        cq.Deque();
        cq.showQueue();
        cq.Deque();
        cq.Deque();
        cq.showQueue();
        cq.Enqueue(99);  
        cq.Enqueue(100); 
        cq.Enqueue(120); 
        cq.showQueue();
        cq.FrontElements();
        return 0;
    }
