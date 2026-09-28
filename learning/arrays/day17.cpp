#include <iostream>
using namespace std;

int main() {
      int width = 0;
      int ans = 0;
      int height = 0;
      int area = 1;
      int arr[] = {1,8,6,2,5,4,8,3,7};
      int n = sizeof(arr)/sizeof(arr[0]);

      for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            width = j - i;
            height = min(arr[i] ,arr[j]);
            area = width * height;
            ans = max(ans,area);
        }
      }
      cout << "ans:" << ans << endl;
    return 0;
}