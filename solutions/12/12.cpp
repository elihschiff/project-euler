//answer: 76576500
#include <iostream>
#include <math.h>

unsigned long getDevCount(unsigned long num, unsigned long start){
  for(unsigned long i=start;i<num;i++){
    if(num%i==0){
      // std::cout<<i<<std::endl;
      return 1+getDevCount(num, i+1);
    }
  }
  return 2;
}

int main(){
  unsigned long sum = 0;
  unsigned long spot = 1;
  int max = 0;
  while(true){
    sum+=spot;
    spot++;
    // std::cout<<sum<<std::endl;
    unsigned long devCount = getDevCount(sum, 2);
    if(max<devCount){
      max = devCount;
      std::cout<<sum<<" "<<max<<std::endl;
    }
    // std::cout<<sum<<" "<<devCount<<std::endl;
    if(devCount>500){
      std::cout<<sum<<std::endl;
      return 1;
    }
  }
  // std::cout<<getDevCount(21)<<std::endl;
}
