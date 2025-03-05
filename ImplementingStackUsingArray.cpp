#include<bits/stdc++.h>
using namespace std;


	class mystack{
		public:
		int size;
		int top;
		int *arr;
		
		mystack(int siz){
			this ->size=siz;
			arr=new int[size];
			top=-1;
		}
		
		void push(int ele){
			if(size-top > 0){
					top++;
				arr[top]=ele;
			
			}
			else{
				cout<<"Stack overflow !";
			}
		}
		void pop(){
			if(top >=0){
				arr[top]=0;
				top--;
			}
			else{
				cout<<"stack underflow";
			}
		}
		
		void peek(){
			if(top>=0){
				cout<<arr[top];
			}else
			cout<<"stack underflow";
		}
	};

int main(){
	cout<<"Hello World";
	mystack st(5);
	st.push(1);
	st.push(2);
	st.peek();
	st.pop();
	st.peek();
	
}
