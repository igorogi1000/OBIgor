#include <stdio.h>

#define MAX 10000

// # => 35
// b => 98
// Ab => 64 + 98 = 162
// A => 65
// B => 66
// C => 67
// D => 68
// E => 69
// F => 70
// G => 71
// G# => 71 + 35 = 106

//C D E = D E F#
//67 + 68 + 69 != 68 + 69 + (70 + 35)

// # => +1
// b => -1
// Ab => 64 + 98 = 162
// A => 65
// B => 66
// C => 67
// D => 68
// E => 69
// F => 70
// G => 71
// G# => 71 + 35 = 106

int n;
int sequencia[MAX];
int i, j;

int qtdPeaks() {
	int diminui = 0;
	int cresce = 0;
	int peaks = 0;
	
	int min = -10001;
	int max = 10001;
	
	for (i=1; i<n; i++) {
		if (
		if (sequencia[i] > sequencia[i-1]) {
			cresce++;
			if (diminui) {
				diminui = 0;
				peaks++;
			}
		}
		
		else if (sequencia[i] < sequencia[i-1]) {
			diminui++;
			if (cresce) {
				cresce = 0;
				peaks++;
			}
		}
	}
	return peaks;
}

int main(void) {
	scanf("%d", &n);
	
	for (j=0; j<n; j++) {
		int h;
		scanf("%d", &h);
		
		sequencia[j] = h;
	}
	
	printf("%d\n", qtdPeaks());
}