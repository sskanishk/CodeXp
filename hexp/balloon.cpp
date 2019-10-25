#include <iostream>
using namespace std;

int main()
{
	int t, i, j, gbc, pbc, nop, r1, r2, z, y, x1, x2;
	int l = 0;
	int r = 0;
	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> gbc >> pbc;
		// cout<<endl;
		cin >> nop;
		for (j=0; j<nop; j++) {
			cin >> r1;
			cin >> r2;
			if(r1 == 1 && r2 == 1) {
				l += 1;
				r += 1;
			}
			else if(r1 == 1 && r2 == 0) {
				l += 1;
			}
			else if(r1 == 0 && r2 == 1) {
				r += 1;
			}
		}
		if(l < r){
			z = r;
			y = l;
		} else {
			z = l;
			y = r;
		}
		if(gbc > pbc){
			x1 = gbc;
			x2 = pbc;
		} else {
			x1 = pbc;
			x2 = gbc;
		}

		cout << ((z * x2)+(y*x1)) << endl;
		l = 0;
		r = 0;

	}
	return 0;
}








