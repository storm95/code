#include <iostream>

using namespace std;
struct node
{
    int data;
    struct node *next;

};

struct node* push(struct node* head,int data)
{
    cout<<"in"<<endl;
    struct node* newnode;
    newnode=(struct node*)sizeof(struct node);
    if(head==NULL)
    {
        cout<<"in1"<<endl;
        newnode->data=data;
        newnode->next=NULL;
        head=newnode;

    }
    else
    {
        struct node *temp;
        temp=head;
        cout<<"else"<<endl;
       while(temp->next!=NULL)
       {
           temp=temp->next;
           newnode->data=data;
           newnode->next=NULL;

       }

    }
    return head;

}

 void display(struct node *head)
  {
      struct node *temp;
      temp=head;
      while(temp->next!=NULL)
      {
          cout << temp->data;
          temp=temp->next;
      }
  }





int main()
{
    struct node *head1=NULL;
    struct node *head2=NULL;
    //printimg first linklist
    cout << "enter first link list:"<< endl;
    int t1;
    cin>>t1;
    while(t1--)
    {
        int data;
        cin>>data;
       head1= push(head1,data);
    }
    display(head1);
    // printing second linklist;
    cout << "enter first link list:"<< endl;
    int t2;
    cin >> t2;
    while(t2--)
    {
        int data;
        cin >> data;
       head2= push(head2,data);
    }
    display(head2);


    return 0;
}

