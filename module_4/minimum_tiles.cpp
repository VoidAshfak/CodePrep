#include<bits/stdc++.h>
using namespace std;

int minTiles(int n, int m)
{

if (n == 0 || m == 0)
	return 0;


else if (n%2 == 0 && m%2 == 0)
	return minTiles(n/2, m/2);


else if (n%2 == 0 && m%2 == 1)
	return (n + minTiles(n/2, m/2));

else if (n%2 == 1 && m%2 == 0)
	return (m + minTiles(n/2, m/2));


else
	return (n + m - 1 + minTiles(n/2, m/2));
}

int main()
{
int n , m;
cin >> n >> m;

cout << minTiles(n, m) << endl;
return 0;
}
