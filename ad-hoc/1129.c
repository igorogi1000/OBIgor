#include <stdio.h>

int a, b, c, d;

int marcou(int l) {
	if (l <= 127)
		return 1;
	return 0;
}

char findMarcou(int a, int b, int c, int d, int e) {
	if (marcou(a))
		return 'A';
	if (marcou(b))
		return 'B';
	if (marcou(c))
		return 'C';
	if (marcou(d))
		return 'D';
	if (marcou(e))
		return 'E';
}

int main(void) {
	while (1) {
		int n, i;
		scanf("%d", &n);
		if (!n)
			break;
		for (i=0; i<n; i++) {
			int a, b, c, d, e;
			char r = '*';
			scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
			if (marcou(a) + marcou(b) + marcou(c) + marcou(d) + marcou(e) == 1)
				r = findMarcou(a, b, c, d, e);
			printf("%c\n", r);
		}
	}
}