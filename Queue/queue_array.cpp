#include <iostream>

using namespace std;

const int MAXSIZE = 5;

class Queue
{
private:
    int front;
    int rear;
    int QueueArray[MAXSIZE];
public:
    Queue(/* args */);
    ~Queue();
    void enQue(int);
    void deQue();
    void display();
    int getFront();
    int getRear();
};

Queue::Queue(/* args */)
{
    front = 0;
    rear = -1;
}

Queue::~Queue()
{
}

int Queue::getFront(){
    return front;
}

int Queue::getRear(){
    return rear;
}

void Queue::enQue(int value){
    //check where the queue is full
    if(rear == MAXSIZE){
        cout<<"Can't enQue!! Queue OverFlow!!"<<endl;
    }else{
        QueueArray[++rear] = value;
    }
}

void Queue::deQue(){
    // check if queue is empty
    if(front > rear){
        cout<<"Can't deQue!! Queue UnderFlow"<<endl;        
    }else{
        cout<<"deQue'ed data: "<<QueueArray[front++]<<endl;
    }
}

void Queue::display(){
    //check if front > then rear
    if(front > rear){
        cout<<"Can't display!! Queue empty!!"<<endl;
    }else{
        cout<<"Queue Data"<<endl;
        for(int i = front; i <= rear; i++){
            cout<<"["<< i << "]: "<<QueueArray[i]<<endl;
        }
    }
}

int main(){
    system("clear");
    cout<<"Simple Implementation of Queue Data Structure in array using C++."<<endl<<endl;
    
    Queue obj;
    static int switchPosition;
    
    // menu     
    while(true){

        cout<<"Queue Size: " << MAXSIZE<<endl;
        cout<<"Front: "<< obj.getFront() <<endl;
        cout<<"Rear: "<< obj.getRear() <<endl<<endl;
        cout<<"Operation"<<endl;
        cout<<"1: enQue"<<endl;
        cout<<"2: deQue"<<endl;
        cout<<"3: display elements"<<endl;
        cout<<"4: exit"<<endl<<endl;

        cout<<"Enter your choice: ";
        cin>>switchPosition;
        cout<<endl;
        
        switch (switchPosition)
        {
            case 1:
                // push
                static int data;
                cout<<"enter an element to enQue: ";
                cin>>data;
                obj.enQue(data);
                cout<<endl;                
                break;

            case 2:
                //pop
                obj.deQue();
                cout<<endl;
                break;
            
            case 3:
                //display                
                obj.display();
                cout<<endl;
                break;
            case 4:
                //exit
                cout<<"Exiting the program...."<<endl;
                cout<<endl;
                exit(0);
        
            default:
                cout<<"Wrong choice!!"<<endl;
                cout<<endl;
                break;
        }

    }

    return 0;
}