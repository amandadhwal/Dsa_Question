#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }

};
void display(Node* curr)
    {
        while(curr != NULL)
        {
            cout<<curr->data<<" ";
            curr =curr->next;

        }
        cout<<endl;
    }


//insert function
void insertAtstart(int val,Node* &head)
{
    Node* newnode4 = new Node(val);
    newnode4->next = head;
    head = newnode4;
}

//void insertAtend(int val,Node* &head)
//{
//    Node* newnode = new Node(val);
//     Node* temp = head;
//     while(temp->next != NULL)
//     {
//         temp = temp->next;
//
//     }
//         temp->next =newnode;
//
//}

void intsertspecific(int pos,int valu,Node* &head)
{
    Node* newnode = new Node(valu);
    Node* temp = head;

    int c=1;
    while(c < pos-1)
    {
        temp = temp->next;
        c++;
    }

    newnode->next = temp->next;
    temp->next = newnode;

}

//delete function
 void deleteAtstart(Node* &head)
 {
     Node* temp ;
     temp = head;
     if(head == NULL)
     {
         cout<<"list is empty";
     }
     else
     {
        head = temp->next;
        free(temp);
     }
 }

// //delete at end position
// void deleteAtend(Node* &head)
// {
//     Node* temp = head;
//
//     while(temp->next->next != NULL)
//     {
//         temp = temp->next;
//
//     }
//         temp->next = NULL;
//         free(temp->next);
//
// }

 //delete at specific position
 void deleteAtspecific(int p,Node* &head)
 {
     Node* curr = head;
     if(curr == NULL)
     {
         cout<<"list is empty";
     }
     else
    {
     Node* temp = head->next;
     int c = 1;

     while(c < p-1)
     {
         curr = curr->next;
         temp = temp->next;
         if(curr->next == NULL)
         {
             cout<<"invalid index"<<endl;
             return;
         }
         c++;
     }
        curr->next = temp->next;
        free(temp);
     }

 }

int main()
{
    Node* head = NULL;

    Node* newnode1 = new Node(10);
    Node* newnode2 = new Node(20);
    Node* newnode3 = new Node(30);

    head = newnode1;
    newnode1->next = newnode2;
    newnode2->next = newnode3;

    display(head);

             // insert at end
            //int value;
            //cin>>value;
            //insertAtend(value,head);
           // display(head);

     //insert value at specific position
    int pos,valu;
    cout<<"enter positionm you want to insert ";
    cin>>pos;
    cout<<"enter value";
    cin>>valu;
    if(pos == 1)
    {
        insertAtstart(valu,head);
    }
    else
    {
        intsertspecific(pos,valu,head);
    }

    display(head);

    //delete at specific position

    int position;
    cout<<"enter the position you want to delete ";
    cin>>position;
    if(position == 1)
    {
        deleteAtstart(head);
    }
    else
    {
    deleteAtspecific(position,head);
    }


    //delete at end
//    deleteAtend(head);
//    display(head);

}
