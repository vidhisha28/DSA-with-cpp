#include <iostream>
using namespace std;
template <typename T>
class Queue{
    T *data;
    int firstIndex;
    int nextIndex;
    int size;
    int capacity;
    public:
    Queue(int s){
        data = new T[s];
        firstIndex = -1;
        nextIndex = 0;
        size = 0;
        capacity = s; 
    }

    int getsize(){
        return size;
    }

    bool isEmpty(){
        return size==0;
    }

    void enqueue(T element){
        if(size==capacity){
            cout << "Queue is full !" <<endl;
        }
        data[nextIndex]=element;
        nextIndex = (nextIndex+1)%capacity;
        if(firstIndex== -1){
            firstIndex = 0;
        }
        size++;
    }
    T front(){
        if(isEmpty()){
            cout << "Queue is Empty !" <<endl;
            return 0;
        }
        return data[firstIndex];

    }

    T dequeue(){
        if(isEmpty()){
            cout << "Queue is Empty !" <<endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex = (firstIndex+1)%capacity;
        size--;
        if(size==0){
            firstIndex = -1;
            nextIndex = 0;
        }
        return ans;
    } 
};

//Implementation
int main(){
    Queue <int>q1(5);
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    cout << q1.dequeue() << endl;
    cout << q1.dequeue() << endl;
    cout << q1.front() << endl;
    cout << q1.getsize() << endl;
    cout << q1.isEmpty() << endl;
    q1.enqueue(100);


    
}