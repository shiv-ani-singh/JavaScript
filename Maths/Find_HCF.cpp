
 #include <iostream>
using namespace std;

int HCF(int a, int b) {
   return (b == 0) ? a : HCF(b, a%b); 
}

int main() {

  int n;
  cin >> n;

  int nums[n];

  
  cin>>nums[0];
  int hcf=nums[0];

  for(int i = 1; i < n ; i++) {
      cin >> nums[i];
      hcf = HCF(hcf, nums[i]);
  }

  cout << hcf << endl;
  return 0;
}
