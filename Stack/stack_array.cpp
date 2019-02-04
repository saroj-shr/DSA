#include<iostream>

using namespace std;

const int MAXSIZE = 5;

class Stack{

    int top;
    int stackArray[ MAXSIZE ] ;

    public:

    Stack(){
        top = -1;
    }
    
    ~Stack();

    int topPosition();
    void display();
    void push(int);
    void pop();
};

int Stack::topPosition(){
    return top;
}

void Stack::display(){
    if(top!=-1){
        cout<<"Stack's Data: "<<endl;
        for(int i = 0; i <= top; i++){
            cout<< "[" << i << "]: " <<stackArray[i]<<endl;
        }        
    }else{
        cout<<"Can't Display !! No data!!"<<endl;
    }
}

void Stack::push(int value){
    if(top >= MAXSIZE - 1){
        cout<<"Can't Push!!! Stack OverFlow!!"<<endl;        
    }else{
        stackArray[++top] = value;
    }    
}

void Stack::pop(){
    if(top == -1){
        cout<<"Can't Pop!! Stack UnderFlow!!!"<<endl;
    }else{
        cout<<"Poped Element: "<<stackArray[top--]<<endl;
    }
    
}

int main(){
    system("clear");
    cout<<"Simple Implementation of Stack Data Structure in array using C++."<<endl<<endl;
    
    Stack obj;
    static int switchPosition;
    
    // menu     
    while(true){

        cout<<"Stack Size: " << MAXSIZE<<endl;
        cout<<"top Postion: "<< obj.topPosition() + 1<<endl<<endl;
        cout<<"Operation"<<endl;
        cout<<"1: push"<<endl;
        cout<<"2: pop"<<endl;
        cout<<"3: display elements"<<endl;
        cout<<"4: exit"<<endl<<endl;

        cout<<"Enter your choice: ";
        cin>>switchPosition;
        cout<<endl;
        
        switch (switchPosition)
        {
            case 1:
                // push
                static int push;
                cout<<"enter an element to push: ";
                cin>>push;
                obj.push(push);
                cout<<endl;                
                break;

            case 2:
                //pop
                obj.pop();
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
}
