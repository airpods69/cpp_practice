#include<iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *first,*tail,*x;
int main()
{
    int data,value,flag=0;
    char ch;
    first=(node*)malloc(sizeof(node));
    cout<<"Enter the data: ";
    cin>>first->data;
    first->link=NULL;
    tail=first;
    cout<<"Do you want enter more data(Y/N): ";
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        do
        {
            x=(node*)malloc(sizeof(node));
            cout<<"Enter the data: ";
            cin>>x->data;
            tail->link=x;
            tail=x;
            cout<<"Do you want enter more data(Y/N): ";
            cin>>ch;
        }
        while(ch=='y'||ch=='Y');
    }
    tail->link=NULL;
    cout<<"Enter the element you want to delete: ";
    cin>>value;
    node* previous;
    tail=first;
    previous=tail;
    tail=tail->link;
    while(tail!=NULL)
    {
        if(tail->data==value)
        {
            flag=1;
            previous->link=tail->link;
            tail->link=NULL;
            value=tail->data;
        }
        else
        {
            previous=tail;
            tail=tail->link;
        }
    }
    if(flag==0)
        cout<<"Element doesn't exist in the given linked list!";
    cout<<"Displaying the linked list: ";
    tail=first;
    while(tail!=NULL)
    {
        cout<<tail->data<<" ";
        tail=tail->link;
    }
    return 0;
}
