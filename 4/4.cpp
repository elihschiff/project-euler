//answer: 906609
#include <iostream>
#include <math.h>
#include <string>


bool isPalindromic(unsigned long num){
  std::string numS = std::to_string(num);
  for(int i=0;i<floor(numS.size()/2);i++){
    if(numS[i] != numS[numS.size()-1-i]){
      return false;
    }
  }
  return true;
}

int main(){
  int max = 0;
  for(int i=0;i<=999;i++){
    for(int j=0;j<=999;j++){
      if(isPalindromic(i*j) && i*j>max){
        max = i*j;
      }
    }
  }
  std::cout<<max<<std::endl;
}
