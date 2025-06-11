#include<iostream>
using namespace std;

int sum(int a, int b); // 🔧 Fixed declaration
int sum(int a, int b) // ✅ Correct definition
{
	int sum = a + b;
	return sum;
}

int main()
{
	cout << "\nEnter\n1\tAdd\n2\tSub\n: ";
	int choice;
	cin >> choice;

	int a, b;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;

	if (choice == 1)
		cout << "Sum = " << sum(a, b) << endl; // 🔧 Proper usage
	else
		cout << "\nComing Soon...\n";

	system("pause");
	return 0;
}


