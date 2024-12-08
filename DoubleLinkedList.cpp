#include <iostream>
using namespace std;



class Node{
	public:
	int data;
	Node* Prev;
	Node* next;
	public:
	Node(int data){
		this->data= data;
		this->Prev=NULL;
		this->next =NULL;
		
	}
};

int size(Node* Head){
	
	Node* temp = Head;
	int cnt=1;
	while(temp->next != NULL){
		cnt++;
		temp=temp->next;
	}
	
	return cnt;
}

void InsertNode(Node* &Head , Node* &Tail,int data , int position){
	
	//Find Size
	int n = size(Head);
		cout<<"Size :"<<n<<endl;
	
	//Insert at head
	if(position==1){
		Node* temp = new Node(data);
		temp->next = Head;
		Head->Prev= temp;
		Head=temp;
		return ;
	}
	
	

	
	//Insert at tail
	if(n==position){
			Node* temp = new Node(data);
			Tail->next=temp;
			temp->Prev=Tail;
			Tail=temp;
			return;
		
	}
	
	//Insert at any position
	
	Node* temp = new Node(data);
	Node* curr = Head;
	int cnt=1;
	while(cnt < position-1){
		curr= curr->next;
		cnt++;
	}
	temp->next = curr->next;
	temp->Prev= curr;
	curr->next=temp;
	return;
	
	
	
}

void print(Node* Head){
	cout<<endl;
	Node* temp = Head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;

	
}

void deletez(Node* &Head , Node* &Tail, int position){
	
	int n = size(Head);
	if(position==1){
		
	Node* temp =Head;
	Head =Head->next;
	Head->Prev=NULL;
	temp->next=NULL;
	return;
	}
	
	if(position==n){
		Node* temp = Tail->Prev;
		Tail->Prev=NULL;
		temp->next=NULL;
		Tail=temp;
		return;
		
	}


   int cnt =1;
   Node* temp=Head;
   while(cnt < position){
   	temp=temp->next;
   	cnt++;
   }
   
   Node* prev = temp->Prev;
   Node* curr= temp->next;
   
   temp->Prev=NULL;
   temp->next=NULL;
   
   prev->next=curr;
   curr->Prev=prev;
   return;
}

int main(){
	
	
	Node* temp = new Node(3);
	Node* Head= temp;
	Node* Tail=temp;

	InsertNode(Head,Tail,5,1);
	InsertNode(Head,Tail,7,1);
    InsertNode(Head,Tail,0,3);
		
			print(Head);
			
			  InsertNode(Head,Tail,4,3);
			  print(Head);
			  deletez(Head,Tail,3);
			   print(Head);
			  
			
			
			
			
	
	
}

