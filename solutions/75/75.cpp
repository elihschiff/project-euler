//answer: 161667
#include <iostream>
#include <vector>
#include <math.h>


int main(){
  unsigned long max = 1500000;
  // max = 50;
  std::vector<unsigned long> count(max+1, 0);
  for(unsigned long a=1;a<=max;a++){
    for(unsigned long b=a;b<=max-a;b++){
      unsigned long c = std::sqrt((a*a)+(b*b));
      if(c*c==(a*a)+(b*b)){
        if(a+b+c <= max){
          if(count[a+b+c] <= 1){
            count[a+b+c] = count[a+b+c]+1;
          }
        }else{
          break;
        }
      }
    }
  }

  unsigned long sum = 0;
  for(unsigned long i=0;i<count.size();i++){
    if(count[i] == 1){
      sum++;
    }
  }
  std::cout<<sum<<std::endl;
}
