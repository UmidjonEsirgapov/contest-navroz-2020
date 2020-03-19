#include <iostream>
#include <string>
using namespace std;
int main(){
	long int a;
	cin >> a;
	if (a == 1)
		cout << 1;
	else {
		a = a - 1;
		cout << a * a + 1;
	}
}