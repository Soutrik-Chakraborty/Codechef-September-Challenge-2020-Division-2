#include <bits/stdc++.h>
using namespace std;

int optimize(vector<int>& holder,int arr_size){
    // use set as an optimizer
    set<int>optimizer;
    for(int x:holder){
        if(x!=0)
            optimizer.insert(x);
    }
    return optimizer.size();
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
    	int arr_size;
    	cin>>arr_size;
    	vector<int>holder(arr_size);
    	for(int i=0;i<arr_size;i++){
    	    int stick;
    	    cin>>stick;
    	    holder[i]=stick;
    	}
    	cout<<optimize(holder,arr_size)<<endl;
    	T--;
	}
	return 0;
}