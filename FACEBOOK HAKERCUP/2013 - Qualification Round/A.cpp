#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>
#include <vector>
#include <queue>
#include <list>
#include <stack>
#include <map>
#include <sstream>
#include <climits>

// #include <unordered_map>

#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define pdd pair<double,double>
#define F first
#define S second
#define fr(i,j,k) for(int (i)=(j);(i)<(k);++(i))
#define rep(i,n) for(int (i)=0;(i)<(n);++(i))
#define pb push_back
#define PI acos(-1)
#define db(x) cerr << #x << " = " << x << endl;
#define _ << ", " << 
#define mp make_pair
#define cl(x) memset(x,0,sizeof(x))
#define EPS 1e-9
// #define umap unordered_map

using namespace std;

template <class _T> inline string tostr(const _T& a){ ostringstream os(""); os<<a;return os.str();}


char in[510];
int num[30];



int main(){
	int caso = 1;
	int t; scanf("%d\n" , &t);
	while(t--){
		cl( num );
		gets(in);		
		for(int i = 0; in[i];i++){
			if( 'a' <= tolower(in[i]) && tolower(in[i]) <= 'z' ){
				num[tolower(in[i]) - 'a']++;
			}
		}
		sort( num, num+26, greater<int>());
		int resp = 0;
		fr(i,0,26){ resp += num[i] * (26 -i); }
		printf("Case #%d: %d\n", caso++, resp);
	}
	return 0;
}