#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10; 
int a[N]; 

void merge(int l, int r , int mid){
	int l_size = mid-l+1; 
	int L[l_size+1]; 
	int r_size = r- mid; 
	int R[r_size+1]; 
	for(int i=0;i<l_size;i++){
		L[i] = a[i+l]; 
	}
	for(int i=0;i<r_size;i++){
		R[i] = a[i+mid+1];  
	}
	L[l_size] = R[r_size] = INT_MAX;  
}

int main(){
	int n; 
	cin>>n; 
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	}
	for(int i=0;i<a[i];i++){
		
	}
	return 0; 
}
