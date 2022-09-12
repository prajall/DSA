#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> mystack;
    int input,num;
    
    top:
    cout<<"1. Push 2. Pop Enter: ";
    cin>>input;
    switch(input){
    	case 1:
    		cout<<"Enter a number: ";
    		cin>>num;
    		mystack.push(num);
    		break;
    	
    	case 2:
    		cout<<"Popped: "<<mystack.top()<<endl;
    		mystack.pop();
    		break;
	}
	while(!mystack.empty())
		goto top;
}
