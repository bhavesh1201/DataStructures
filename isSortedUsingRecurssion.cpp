//Merge Sort

#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> vt){
	if(vt.size()<=1)return true;
	
	if(vt[0]>vt[1])return false;
	else{
		vt.erase(vt.begin());
		bool smallRemai=isSorted(vt);
		return smallRemai;
	}
}

int main(){

vector <int> vc = {1,2,3,4,4,4,};

 if(isSorted(vc)){
 	cout<<"sorted hi kehde";
 }
 else
 {
 	cout<<"na sort ni hai";
 }
 return 0;
}

