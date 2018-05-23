#include <bits/stdc++.h>
using namespace std;
 
int _;
 
int reverse(int x) {
  int res = 0;
  while (x > 0) {
    res *= 10;
    res += x % 10;
    x /= 10;
  }
  
  return res;
}
 
int main() {
  int n;
  _ = scanf("%d", &n);
  
  while (n--) {
    int x, y;
    _ = scanf("%d%d", &x, &y);
    
    int result = reverse(x) + reverse(y);
    printf("%d\n", reverse(result));
  }
  
  return 0;
}
