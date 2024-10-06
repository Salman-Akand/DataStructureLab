#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;

    node(int value)
    {
        data = value;
        next = nullptr;

    }
};

class LinkedList
{
public:
    node* head;
    LinkedList()
    {
        head = nullptr;

    }


    void append(int value)
    {
        node* newnode = new node(value);
        if(head == nullptr)
            head = newnode;
        else
        {

            node* temp = head;
            while(temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
    void display()
    {
        node* temp = head;
        while(temp != nullptr)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl<<endl;
    }
};

LinkedList mergeList(LinkedList& ListA, LinkedList& ListB)
{
    if(ListA.head == nullptr)
        return ListB;
    if(ListB.head == nullptr)
        return ListA;
    node* temp = ListA.head;
    while(temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = ListB.head;
    return ListA;
}

int main()
{

    LinkedList ListA;

    ListA.append(1);
    ListA.append(3);
    ListA.append(5);

    LinkedList ListB;

    ListB.append(4);
    ListB.append(2);
    ListB.append(7);

    LinkedList mergedList = mergeList(ListA, ListB);

    cout<<"merged LinkedList: ";

    mergedList.display();
    return 0;

}
