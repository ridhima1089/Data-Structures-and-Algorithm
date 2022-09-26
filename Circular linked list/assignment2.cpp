//Assignment 2
//Circular Linked list
//Ridhima
// 21105007
// ECE 

//[Question.1] While traversing a single-circular linked list, which condition establishes that the traversing element/variable has reached the first element? */

//[Ans.1]
//Lets take an example and create a basic circular linked list
#include <iostream>
using namespace std;
//Creating node class
class nd{
    //Creating class objects
    public:
    int data;
    nd*next;
    //Calling node constructor
    nd(int data){
        this->data=data;
        next=NULL;
    }
};
//Function to insert a node at end on linked list
void add(nd*&head,int data){
    nd*temp=head;
    nd*new_nd=new nd(data);
    if(temp==NULL){head=new_nd;new_nd->next=head;return;}
    while(temp->next!=head){temp=temp->next;}   //This condition establishes that the traversing element(temp) has reached the first element
    temp->next=new_nd;
    new_nd->next=head;
}
//Function to print elements of linked list from head to the last nd.
void view(nd*&head){
    nd*temp=head;
    do{cout<<temp->data<<"->";temp=temp->next;}
    while(temp!=head);
}

int main(){
    nd*head=NULL;
    add(head,1);
    add(head,2);
    add(head,3);
    view(head);
}
/*
With reference to above example of circular linked list.
Line 24 i.e. while(temp->next!=head){temp=temp->next;} establishes that the traversing element/variable has reached the first element.
We Know that in circular linked list last node of linked list points to head of that linked list, hence we can check if any node points to head of linked list then that node is the end of circular linked list.
*/


/*[Question.2]  What are the practical applications of a circular linked list? (Try to find applications in your respective fields).
Ans 2)### Real-time application of circular linked list can be a multi-programming operating system wherein it schedules multiple programs. 
Each program is given a dedicated timestamp to execute after which the resources are passed to another program. 
This goes on continuously in a cycle. This representation can be efficiently achieved using a circular linked list.
### Games that are played with multiple players can also be represented using a circular linked list in which each player is a node that is given a chance to play.
### We can use a circular linked list to represent a circular queue. By doing this, we can remove the two pointers front and rear that is used for the queue. Instead, we can use only one pointer.

Practical applications of circular linked list are :
1)Multiplayer Games: All the Players are kept in a Circular Linked List and the pointer keeps on moving forward as a player's chance ends.
2)Computing Resources: Circular Linked Lists is used to manage the computing resources of the computer.
3)Fionacci Heap: Circular Linked List is also used in the implementation of advanced data structures such as a Fibonacci Heap.
4)Computer Networking:Circular linked list is also used in computer networking for token scheduling.
5)Implementation of Data Structure: Data structures such as stacks and queues are implemented with the help of the circular linked lists.
6)Audio/Video Streaming: Circular linked list is also used in audio and video streaming,for ex. when one copmlete audio list finishes playing in music player then it again starts playing from start.
*/