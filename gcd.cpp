#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int hcf(int a, int b)
{
	if (a == 0)
		return b;
	else if (b == 0)
		return a;
	while (a != b) {
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}

int main()
{
	int a ,b;
    cin>>a;
    cin>>b;
	cout << hcf(a, b) << endl;
	return 0;
}


