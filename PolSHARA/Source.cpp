#include <iostream>
#include <set>
#include <string>
using namespace std;

void OUTYES();
void OUTNO();

int main() {
	int n, m;
	cin >> n >> m;
	set <string> otvet;
	for (int i = 0; i < n + m; i++) {
		string a;
		cin >> a;
		otvet.insert(a);
	}
	if (n > m) {
		OUTYES();
	}
	if (n < m) {
		OUTNO();
	}
	long long tabul = (n + m) - otvet.size();
	int nomer1 = n - tabul;
	int nomer2 = m - tabul;
	if (tabul % 2 == 0) {
		nomer2++;
	}
	if (nomer1 > nomer2) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}

void OUTYES() {
	cout << "YES";
}
void OUTNO() {
	cout << "NO";
}