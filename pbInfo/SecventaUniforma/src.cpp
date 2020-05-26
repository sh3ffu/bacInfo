#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream in("secventauniforma.in");
  ofstream out("secventauniforma.out");

  int x, lastX=-1, lungimeMax=0, termenSec, lungimeCurenta=0;
  while(in>>x){
    if(x==lastX){
      lungimeCurenta++;
      if(lungimeCurenta>=lungimeMax){
        lungimeMax = lungimeCurenta;
        termenSec = x;
      }
    }else{
      lungimeCurenta = 1;
    }
    lastX = x;
  }

  out<<lungimeMax<<endl;
  for(int i=0; i<lungimeMax; i++)
    out<<termenSec<<' ';

  return 0;
}
