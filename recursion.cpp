#include <iostream>
using namespace std;


int removeFirst(int n){
	if(n<10)return 0;
	return removeFirst(n/10)*10+n%10;
}

int main() {
 int n, m;
 cout << "Enter a number greater than 0: ";
 cin >> n;
 m = removeFirst(n);
 cout << m << endl;
 return 0;
}
