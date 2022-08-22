#include<iostream>
using namespace std;

void display(int list[], int n){
	for(int i=0; i<n;i++){
		cout<<list[i]<<" ";
	}
}

int main()
{
	int list[10]={36, 34, 43, 11, 15, 20, 28, 45, 27, 32};
	int left,right,pivot,size;
	int temp;
		
	pivot = list[0];
	left = 1;
	size = sizeof(list)/sizeof(list[0]);
	right = (size-1);
	
	display(list,size);
	cout<<endl;
	
	for(; left<=size; left++){
		if(list[left] > list[pivot])
		break;
	}
	for(; right >= 1; right--){
		if(list[right] < list[pivot])
		break;
	}
	if (left >= right){
		temp = list[pivot];
		list[pivot] = list[right];
		list[right] = temp;
	}
	else{
		temp = list[left];
		list[left] = list[right];
		list[right] = temp;
	}
//		swap(list[left],list[right]);
		
	display(list,size);
	
//	if (list[left] > list[pivot]){
//		halt
//	}
//	else
//		list[left+1]
//	
//	if (list[right]<list[pivot])
//		halt
//	else
//		list[right-1]
//	
//	if left position >= right position
//		swap pivot and right
//		
//	else
//		swap(list[left], list[right])
//	
}


