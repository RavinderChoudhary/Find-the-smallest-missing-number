#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> arr = {0, 1, 2, 6, 9};
	int n = arr.size();
	
    int l = 0, r = n-1;
    int mid;
    while(l <= r){
        mid = (l + r)/2;
        if(arr[mid] == mid)
          l = mid + 1;
        else r = mid - 1;
    }
    if(mid != n-1)
     cout<<mid;
    else cout<<n;
	return 0;
}

