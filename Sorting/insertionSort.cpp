#include<iostream>
#include<vector>
 /* giriteja94495*/
using namespace std;

vector<int> insertionSort(vector<int> &arr){
	int n=arr.size();
	int i,value,index;
	for(int i=1 ; i<n ; i++){
		index=i;
		value=arr[i];
		while(index>0 && arr[index-1]>value){
			arr[index]=arr[index-1];
			index=index-1;
		}
		arr[index]=value;
	}
	return arr;

}



int main(){
	vector<int> giri;
	int n;
	cout<<"Enter the number of elements in the array"<<endl;
	cin>>n;
	giri.resize(n);
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<n;i++){
		cin>>giri[i];
	}
vector<int> ans=insertionSort(giri);
	for(int i=0;i<n;i++){
	cout<<ans[i]<<endl;	
	}
	return 0;
} 
//worst case time complexity is O(N2) and best case is O(N)
//and space complexity is O(1)
