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
	int left,right,pivot = 0,size;
	int temp;
		
	size = sizeof(list)/sizeof(list[0]);
	
	
	display(list,size);
	cout<<endl;
	
	for(int i = 0; i<10; i++){
		left = 1;
		right = (size-1);
		
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
		display(list,size);
		cout<<endl;
	}
	
//		swap(list[left],list[right]);
		
	
	
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


