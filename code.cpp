#include <iostream>
#include "function.h"

using namespace std;
//------------------------------------------------------
void Implement::InsertBack(int data)
{
	// add your code here
    if(head!=NULL)
    {
        Node* curr = head;
        while(curr->next) curr = curr->next;
        curr->next = new Node(data, NULL);
    }else
    {
        head = new Node(data, NULL);
    }
}

void Implement::InsertAfter(int data1, int data2)
{
	// add your code here
    Node* curr = head;
    while(curr!=NULL)
    {
        if(curr->data==data1)
        {
            Node* n_Node = new Node(data2, curr->next);
            curr->next = n_Node;
            break;
        }else
        {
            curr = curr->next;
        }
    }
}

void Implement::InsertFront(int data)
{
	// add your code here
	if(head!=NULL)
    {
        Node* newHead = new Node(data, head);
        head = newHead;
    }else
    {
        head = new Node(data, NULL);
    }
}

void Implement::Delete(int data)
{
	// add your code here
	if(head!=NULL)
    {
        Node* curr = head;
        if(head->data==data)
        {
            head = head->next;
            delete curr;
        }else
        {
            Node *prev = head;
            curr = head->next;
            while(curr)
            {
                if(curr->data==data)
                {
                    prev->next = curr->next;
                    delete curr;
                    break;
                }else
                {
                    prev = curr;
                    curr = curr->next;
                }
            }
        }
    }
}

void Implement::DeleteFront()
{
	// add your code here
	if(head!=NULL)
    {
        Node* curr = head;
        head = head->next;
        delete curr;
    }
}

void Implement::DeleteBack()
{
	// add your code here
	if(head!=NULL)
    {
        if(head->next!=NULL)
        {
            Node* curr = head;
            while((curr->next)->next) curr = curr->next;
            delete curr->next;
            curr->next = NULL;
        }else
        {
            Node* curr = head;
            head = NULL;
            delete curr;
        }
    }
}

void Implement::Reverse()
{
	// add your code here
	if(head!=NULL)
    {
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
}
//------------------------------------------------------
