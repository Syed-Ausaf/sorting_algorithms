#include<iostream>
using namespace std;
void insertion_sort(int a[],int n){
	int i,j,key;
	for(j=1;j<n;j++){
		i=j-1;
		key=a[j];
		while(i>=0 && a[i]>key){// a[i]<key for decreasing order
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}
}
void print_sort(int ar[],int l)
{
	for(int i=0;i<l;i++)
			cout<<ar[i]<<" ";
}
int main(){
	int arr[6]={6,7,8,4,5,3};
	int size=sizeof(arr)/sizeof(arr[0]);
	insertion_sort(arr,size);
	print_sort(arr,size);
	return 0;
}

