#include <iostream>
#include <fstream>

#define UPPER_LIMIT 1000000000

using namespace std;

int main() {
  ifstream in("sir13.in");
  ofstream out("sir13.out");
  bool err = false;
  unsigned int maxPar=0, maxImpar=UPPER_LIMIT, x;
  while(in>>x){
    if(!(x%2)){
      //par
      if(x<maxPar){
        err = true;
        break;
      }
      maxPar = x;
    }else{
      //impar
      if(x>maxImpar){
        err = true;
        break;
      }
      maxImpar = x;
    }
  }
  out<<(err?"NU":"DA");
  return 0;
}
