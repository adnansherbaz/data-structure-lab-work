
#include <iostream>
using namespace std;

int square(int n) {
    cout << "Size: " << sizeof(n) << " bytes" << endl;
    return n * n;
}

int main() {
	int n=8;
	
    cout << square(n);
    return 0;
}

