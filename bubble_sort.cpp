#include<iostream>
using namespace std;
void bubble_sort(int a[],int n){
	int i,j,swapped;
	for(i=0;i<n-1;i++){
		swapped=0;
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])//< for decreasing order
				swap(a[j],a[j+1]);
	}
}
void print_sort(int a[],int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
int main(){
	int arr[7]={4,5,6,7,1,3,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,size);
	print_sort(arr,size);
	return 0;
}
