#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n%d\n%d\n%d", (a+b)%c, (a%c+b%c)%c, (a*b)%c, (a%c*b%c)%c);
	return 0;
}
