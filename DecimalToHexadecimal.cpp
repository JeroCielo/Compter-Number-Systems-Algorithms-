# include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int x = 0;
	int arr[50] = {};
	char alpha[6][2] = {{10, 'A'}, {11, 'B'}, {12, 'C'}, {13, 'D'},{14, 'E'}, {15, 'F'}};
	
	while(n > 0) {
		arr[x] = n % 16;
		x++;
		n /= 16;
	}
	
	for(int i = (x - 1); i >= 0; i--) {
		if(arr[i] >= 10) {
			cout << alpha[arr[i] - 10][1];
		} else {
			cout << arr[i];
		}
	}
}
