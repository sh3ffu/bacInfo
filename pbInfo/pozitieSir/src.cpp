#include <iostream>

using namespace std;

int main(){

  int n, x, maiMari=0, a;
  bool nrAbsent = true;
  //devine false odata ce x este gasit in sir.

  cin>>n>>x;

  for(int i=0; i<n;i++){
    cin>>a;
    nrAbsent = a!=x && nrAbsent;
    if(a>x)
      maiMari++;
  }

  cout<<(nrAbsent?-1:maiMari+1);

  return 0;
}
