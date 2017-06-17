#include <stdio.h>

int a, b, c, d;

int main(void) {
	scanf("%d %d %d %d", &a, &b, &c, &d);
	char res = ((a == c && b != d) || (b == d && a != c)) ? 'V' : 'F';
	printf("%c\n", res);
}