#include <bits/stdc++.h>
using namespace std;
int main () {
	int tc;
	scanf("%d",&tc);
	while (tc--) {
		int n, k;
		scanf("%d%d",&n,&k);
		set < int > s;
		int temp;
		for (int i=0; i<n; i++) {
			scanf("%d",&temp);
			s.insert(temp);
		}
		if (s.size()<k) {
			printf("Bad husband\n");
		}
		if (s.size()==k) {
			printf("Perfect husband\n");
		}
		if (s.size()>k) {
			printf("Lame husband\n");
		}
	}
	return 0;
}
