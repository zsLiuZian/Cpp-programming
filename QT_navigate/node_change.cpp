#include<cstdio>
using namespace std;
int main() {
	freopen("node.txt", "r", stdin);
	freopen("node1.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	printf("%d\n", n);
	for(int i = 1; i <= n; i++) {
		int x, y;
		scanf("%d%d", &x, &y);
		printf("%d %d\n", x * 5 / 6, y * 5 / 6);
	}
}
