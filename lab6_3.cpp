#include<iostream>
using namespace std;

char before(char x){
	char y ;
	if (x >=65 && x<=90)
	{
		if(x==65){
			y=x+25;
		}
		else
		{
			y=x-1;
		}
		
	
	}else
	{
		y='0';
	}
	
	return y;

	
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
