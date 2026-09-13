/*#include<iostream>
using namespace std;
int main(void){
int a[50];
int n;
int max,min;
cout << "Enter the number\n";
cin >> n;
cout << "Enter the elements:" << endl;
for (int i = 0 ; i < n ; i++){
cin >> a[i];
}
max = a[0];
min = a[0];
for(int i = 0 ; i < n ;i++){
    if (max < a[i]){
        max = a[i];
    }
}
for(int i = 0 ; i < n ;i++){
    if(min > a[i]){
        min = a[i];
    }
}
cout << "Minimum:" << min << endl;
cout << "Maximum:" << max << endl;
return 0;
}*/
#include <iostream>
using namespace std;
int main(){
  int a[50];
  int n;
  int even[50],odd[50];
  int e = 0,o = 0;
  cout <<"Enter the number of Elements:" << endl;
  cin >> n;

  cout << "Enter the Element:" << endl;
  for(int i = 0 ; i < n ; i++){
    cin >> a[i];
  }
  for(int i = 0 ; i < n ; i++){
    if (a[i] % 2 == 0){
     even[e] = a[i];
     e++;
    }
}
  
  for(int i = 0 ;i < n ; i++){
   if(a[i] % 2 != 0){
    odd[o] = a[i];
    o++;
   }
  }
  for(int i = 0; i < e ; i++){
    cout << even[i] << " ";
  }
  for (int i = 0 ; i < o ; i++){
  cout << odd[i] << " ";
  }
    return 0;
}