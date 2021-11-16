#include <iostream>
using namespace std;
template <typename T>
class Node{
    public:
    T data;
    Node<T> *next;

    Node(T data){
        this ->data = data;
        next=NULL;
    }
};
template <typename T>
class Stack{
    public :
    Node<T> *head;
    int size;
    Stack(){
    head = NULL;
    size = 0 ;
    }
    int getsize(){
        return size;
    }
    
    bool isEmpty(){
        /*
        if(size==0){
            return true;
        }
        else{
            return false;
        }*/
        return size == 0 ;
    }
    void push(T element){
        Node<T> *newNode = new Node <T>(element);
        newNode -> next = head;
        head = newNode ;
        size ++;
    }

    T pop(){
        if(isEmpty()){
            return 0;
        }
        T ans = head -> data ; 
        Node<T> *temp = head;
        head = head -> next;
        delete temp;
        size --;
        return ans;
    }
    T top(){
        if(isEmpty()){
            return 0;
        }
        return head -> data ;
    }
};
//Implementation
int main(){
    Stack<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    cout<<s.getsize()<<endl;

    cout<<s.isEmpty()<<endl;
    
}