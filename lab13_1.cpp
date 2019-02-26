#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
int i,j,k;
for(i=0;i<N-1;i++){
	k=i;
	for(j=0;j<N;j++){
		if(j==i+1) cout<<"["<<d[j]<<"]"<<" ";
		else cout<<d[j]<<" ";
	}
	cout<<"=> ";
	if(d[i+1]>d[i]){
		while(d[k+1]>d[k]&&k>=0){
			swap(d,k+1,k);
			k--;
		}
	}
	for(j=0;j<N;j++){
		if(j==k+1) cout<<"["<<d[j]<<"]"<<" ";
		else cout<<d[j]<<" ";
	
}
cout<<"\n";
}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
 