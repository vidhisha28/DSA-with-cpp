#include <iostream>
#include <climits>

using namespace std;
class Stack
{
  int *data;
  int nextIndex;
  int capacity;
public:
    Stack(int totsize)
  {
    data = new int[totsize];
    nextIndex = 0;
    capacity = totsize;
  }
  //return no. of elements 
  int size()
  {
    return nextIndex;
  }
  //To check empty or not
  bool isEmpty()
  {
    /*
    if (nextIndex == 0)
      {
	return true;
      }
    else
      {
	return false;
      }
    */
    return nextIndex == 0;

  }
  //Insert Elements using push
  void push(int element)
  {
    if (nextIndex == capacity)
      {
	cout << "Array is full" << endl;
	return;
      }
    data[nextIndex] = element;
    nextIndex++;
  }
  //Deleting the last element (LIFO)
  //Last In first Out
  int pop()
  {
    if (isEmpty())
      {
	cout << "Array is Empty" << endl;
	return INT_MIN; //To have a return value
      }
    nextIndex--;
    return data[nextIndex];
    
  }
  int top()
  {
    if (isEmpty())
      {
	cout << "Array is Empty" << endl;
	return INT_MIN; //To have a return value
      }
    return data[nextIndex - 1];


  }

};
//Implementation
int main()
{
  Stack s(5);
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  cout<<s.top()<<endl;
  cout<<s.pop()<<endl;
  cout<<s.pop()<<endl;
  cout<<s.isEmpty()<<endl;
  cout<<s.size()<<endl;
  


  return 0;
}
