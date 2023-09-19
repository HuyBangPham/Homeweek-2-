#include<bits/stdc++.h>
using namespace std;

int main () {
	int   n;
	cin >> n;
	int a[n] ;  
	int count = 0;
	for ( int i = 0; i < n; i++) {
		cin >> a[i];
	} 
	sort(a,a+n) ; 
	for (int i = 0; i < n; i++) {
		int left = i +1 ;
		int right = n - 1 ;
		
		while ( left < right ) {
			int sum = a[i] + a[left] + a[right] ;
			if ( sum == 0 ) {
				count++;
				left++;
				right--;
			} else if (sum<0) {
				left++;
			} else {
				right--; 
			}
		}
	}
	cout << count << endl; 
	return 0 ;
 }

