#include<iostream>
using namespace std;

struct Node
{
int data;
Node *next;

};
Node* head = NULL;  //global because it has to updated everytime.

Node* create_NODE(int x)
{
    Node *temp = new Node(); //creates a memory block and returns the address of that
    temp->data = x;
    temp->next = NULL;

    return temp;

}


void print()
{
  Node* temp = head;
  
  if(temp==NULL)
     cout<<"EMPTY";
  
  else{
 
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp= temp->next;

   }
}

}


//INSERTIONS


void Insert_beg(int x)
{
     Node *mylist = create_NODE(x);
     mylist->next = head;
     head = mylist;
}

void Insert_end(int x)
{
    Node *mylist2 = create_NODE(x);

    Node *ptr = head;
    while(ptr->next!=NULL)   //go to the last node
    {
        ptr = ptr->next;
    }

    ptr->next= mylist2;



}

void Insert_after(int element,int x)
{
    Node *mylist3 = create_NODE(x);

    Node *ptr = head;
    while(ptr->data!=element)  //iterate till the element is found
    {
        ptr = ptr->next;

    }

    mylist3->next = ptr->next;
    ptr->next = mylist3;        //store the address of mylist3 memory block there.



}




//DELETIONS.


void delete_beg()
{
	if(head==NULL)
	{
		cout<<"Linked list is empty";
	}
	
	else if(head->next==NULL)    //ONLY ONE NODE
	{
		Node *ptr = head;
		head = NULL;
		delete ptr;
		
	}
	
	else{
	
	Node *ptr = head;    //copy the address of the beg. node
	head = head->next;   //move head to next node.
	
	ptr->next = NULL;    // make it's address NULL i.e. breaks the connection.
	
	delete ptr;      //delete the block i.e. deallocate that memory(address)
	
}
	
}


void delete_after(int x)
{
	
if(head==NULL)
cout<<"Linked list is empty";


else{

/*first find the element , give that place address to prev. and move the pointer ptr to next one (which is to be deleted)*/


Node *ptr = head;

while(ptr->data !=x)   //till element is found
{
	ptr=ptr->next;
}
 
Node *prev=ptr;    //store that address.
ptr = ptr->next;   //move ptr to next.

prev->next = ptr->next;

ptr->next = NULL;  //break the connection.

delete ptr;


}
}



void delete_end()     //IMPORTANT
{
		
   if(head ==NULL)
    { 
        cout<<"Linked list is empty";
        
	}


	else if(head->next==NULL)      // only one node present
	{
		Node *ptr = head;
		head = NULL;
		delete ptr;
	}
	
	
	else{
		
	Node *ptr = head->next;  //KEEP it a node ahead
	Node *prev = head;	
	
	while(ptr->next!=NULL)   //GO TO LAST node. prev will be pointing to 2nd last node.
	{
		ptr = ptr->next;
		prev= prev->next;
	}
	
	
	prev->next = NULL;    //break the chain     
	
	delete ptr;        //delete the block.
	
   }
	
}






int main()
{

Insert_beg(10);
Insert_beg(99);
Insert_beg(20);
Insert_beg(30);

Insert_end(55);
Insert_end(66);

Insert_after(55,250);
Insert_after(66,369);


//delete_beg();

//delete_end();

//delete_after(30);

print();

}
