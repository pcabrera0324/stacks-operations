//
//  main.cpp
//  Stacks LL
//
//  Created by Paul on 11/15/18.
//  Copyright © 2018 Paul. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

struct node
{
    int data;
    node* next;
};

typedef node* Creating;

Creating top=NULL;

bool empty();
void push(int&info);
void pop();
void showtop();
void printStack();
void menu(int&,int&);

int main(int argc, const char * argv[]) {
    
    int option,info;
    menu(option,info);
   
    return 0;
}

bool empty()
{
    if(top==NULL)
    {
        return true;
    } else
        return false;
}

void push(int&info)
{
    Creating thing=new node;
    cout << " Enter value ";
    cin >> info;
    thing->data=info;
    thing->next=top;
    top=thing;
}

void pop()
{
    if (empty()) {
        cout << "Stack is empty";
    } else
    {
        Creating thing=top;
        top=top->next;
        cout << thing->data << " has been deleted" << endl;
        delete(thing);
    }
}

void showtop()
{
   if(empty())
   {
       cout << "Stack is empty";
   } else
   {
       cout << " Top element is " << top->data << endl;
   }
}


void printStack()
{
    
    if(empty())
    {
        cout << "Stack is empty " << endl;
    } else
    {
        Creating temp=top;
        while(temp!=NULL)
        {
            cout << temp->data << endl;
            temp=temp->next;
        }
        cout << "\n";
    }
}

void menu(int&option,int&info)
{
    while(option!=5)
    {
        cout << "STACKS" << endl;
        cout <<"1.Push" << endl;
        cout <<"2.Pop" << endl;
        cout <<"3.Top" << endl;
        cout <<"4.Display" << endl;
        cout <<"5.Exit" << endl;
        cin >> option;
        switch (option) {
            case 1:
                cout << endl;
                push(info);
                break;
            case 2:
                cout << endl;
                pop();
                break;
            case 3:
                cout << endl;
                showtop();
                break;
            case 4:
                cout << endl;
                printStack();
                break;
            case 5:
                option=5;
                break;
                
            default:cout<<"must be between 1-5";
                break;
        }
    }
}
