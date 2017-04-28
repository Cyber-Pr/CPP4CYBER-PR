#include <iostream>
using namespace std;

int main (){

	const int size = 5;
	int ARRAY[size] = {10,2,6,4,8}; 
	
	for (int VALUE : ARRAY)
		cout << VALUE << endl; 


	system("PAUSE");
	return 0;
}
