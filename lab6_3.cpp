#include<iostream>
using namespace std;

char before(char x){
	char y;
	if(x <= 'Z'&& x >= 'A'){
	if(x > 'A'){
char y = x-1;
cout<<y; 
}else{
	if(char x = 'A'){
		cout<<"Z";
	}else{
		cout<<"0";
	}
	
}

}else{
cout << "0";
}
}
int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
