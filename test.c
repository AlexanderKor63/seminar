#include<stdio.h>
void print(int d[], int  n);

// some comments
int main(int argc, char *argv[]) {
	int d[] = { 1, -5, 4, 3, 10, 11, -7, 9, 8, 5 };
	int n=10, tmp, mp;
	
	for(int j=0; j<n; ++j) {
		mp=d[0];
		for(int i=1; i<n-j; ++i) {
			if( d[i]>mp )		mp = d[i];
			else {
				tmp  = d[i];
				d[i] = d[i-1];
				d[i-1]= tmp;
			}
		}
	}
	print(d,n);
}