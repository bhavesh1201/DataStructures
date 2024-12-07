

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        
        this->data=data;
        this->next=NULL;
        
        
    }
    
   
};

void intAtHead(Node* &Head, int data){
    Node* temp = new Node(data);
    temp->next = Head;
    Head = temp;
}
void intAttail(Node* &Tail , int data){
	
	
	
	
    Node* temp = new Node(data);
    
    Tail->next = temp;
    Tail=temp;
}


int lls(Node* &Head){
	Node* temp = Head;
	int count =1;
	
	while(temp->next != NULL){
		count++;
		temp=temp->next;
	}
	
	return count;
}

void delete2 (Node* &Head ,Node* &Tail, int position ){
    
    int size = lls(Head);
    cout<<endl<<"size :"<<size<<endl;
     
    if(position==1){
        Node* temp = Head->next;
        Head->next=NULL;
        Head=temp;
        return;
    }
   
     
    if(size==position){
    	
     Node* temp = Head;
     while(temp->next->next != NULL){
         temp=temp->next;
         }
      return;
  }
  
 
    int cnt =1;
    Node* prev = NULL;
    Node* curr = Head;
    while(cnt < position ){
    	prev= curr;
    	curr=curr->next;
    	cnt++;
	}
	
	prev->next=curr->next;
	
	return;
}


void print(Node* head){
    
    Node* temp =head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
 

    
    
}


void InATm (Node* &Tail ,Node* &Head, int p , int d )
{
    
    if(p==1){
        intAtHead(Head,d);
        return;
    }
    Node* temp = Head;
    int cnt = 1;
    Node* new1 =new Node(d);
    
    while(cnt<p-1){
        cnt++;
        temp = temp->next;
        
    }
    
    if(temp->next == NULL){
        intAttail(Tail,d);
        return ;
    }
    
    new1->next = temp->next;
    temp->next = new1;
}   
int main()
{
  
  
  
    Node* n1 = new Node(10);
    
    Node* Head=n1;
    Node* Tail=n1;
  
     intAtHead(Head,11);
      intAtHead(Head,12);
      intAtHead(Head,13);
      intAtHead(Head,14);
      intAttail(Tail,9);
      intAttail(Tail,8);
      
      
    
    
    print(Head);
    cout<<endl;
    
    InATm(Tail,Head,3,-1);
    print(Head);
    delete2(Head,Tail,3);
    cout<<endl;
    print(Head);
    
    
}
