//this is for pointer quick refrence !!
#include<iostream>

using namespace std;

/*
int main(){
    int *pointer;
    int value = 20;

    pointer = &value;

    cout<<"pointer: "<<pointer<<endl;
    cout<<"value: "<<*pointer<<endl;
    return 0;
}

*/

//passing array as pointer to a function and loop through it

/*
void function(int *, int);


int main(){
    int array[5] = {12, 32, 3, 43, 43};

    cout<<"array location: "<< &array << endl;
    function(array, 5);
    return 0;
}

void function(int *array, int size){
    for(int i = 0; i < size; i++){
        cout<<array[i]<<endl;
    }
}
*/

//implementation of swap funciton as well!

void printf(int *, int);

void sort(int *, int);

int main(){
    int array[] = {123, 432, 23, 0, 123} ;
    
    cout<<"array location: "<< &array <<endl;
    printf(array, 5);
    cout<<endl;

    cout<<"sorting "<<endl;
    sort(array, 5);
    printf(array, 5);

    return 0;
}

void printf(int *array, int size){
    for(int i = 0; i < size; i++){
        cout<<"["<< i <<"] : " << array[i] <<endl;
    }
}

void sort(int *array, int size){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(array[j] < array[i]){
                std::swap(array[j], array[i]);
            }
        }
    }
}