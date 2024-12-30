#include<bits/stdc++.h>
using namespace std;

int sumz(vector <int> vt){
	//base case
	if(vt.size()==0)return 0;
	

	
	int sum = vt[vt.size()-1];
	vt.erase(vt.end()-1);
	int remanSum=sumz(vt);
	cout<<sum<<" "<<remanSum<<endl;
	
	return sum+remanSum;
	
	     
	

}

int main(){
	
	vector<int> vt = {1,2,3,4,5};
	cout<<sumz(vt);
	
}
