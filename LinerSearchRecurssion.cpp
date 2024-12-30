
#include<bits/stdc++.h>
using namespace std;

int LinearSearch(vector <int> vt,int target){
	
	if(vt.size()==0)return -1;
	
	if(vt[vt.size()-1]== target){
	return vt.size()-1;
}
	else {
		vt.erase(vt.end()-1);
		
	 	return LinearSearch(vt,target);
	}
}

int main(){
	
	vector<int> vt = {1,2,3,4,5,6};
	
	cout<<LinearSearch(vt,4);
	
}
