#include<bits/stdc++.h>
using namespace std;


void print(vector<int> vt){				
	for(int i = 0 ; i < vt.size();i++){
		cout<<vt[i]<<" ";
	}
}
int partition(vector<int> &vt , int s , int e){
	
	int piv = vt[s];
	int cnt=0;
	for(int i = s+1; i <= e;i++){
		if(piv > vt[i])cnt++;
	}
	
	int pivElement = vt[s+cnt];
	int pivIndex=s+cnt;
	swap(vt[s],vt[pivIndex]);
	int temp = vt[pivIndex];
	
	int i = s ; int  j = e;
	
	while(i < pivIndex && j > pivIndex){
		
		while(vt[i] < pivElement)i++;
		while(vt[j]>pivElement)j--;
		
		if(i < pivIndex && j > pivIndex)swap(vt[i++],vt[j--]);
		
	}
	
	return pivIndex;
	
}

void QuickSort(vector<int> &vt , int s , int e){
	
	//base case
	if(s>=e)return;
	
	//find pivot element
	int pivot = partition(vt,s,e);
	QuickSort(vt,s,pivot-1);
	QuickSort(vt,pivot+1,e);
	
	
	
	
	
	
}
int main(){
	
	vector<int> vt = {6,3,4,2,1,5};
	QuickSort(vt,0,vt.size());
	print(vt);
	
}
