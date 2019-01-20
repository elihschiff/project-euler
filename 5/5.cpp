//answer: 232792560
#include <iostream>
#include <math.h>
#include <vector>


int main(){
  std::vector<int> oneToTwenty = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  int num=1;
  while(true){
    bool validNum = true;
    for(unsigned int i=0;i<oneToTwenty.size();i++){
      if(num%oneToTwenty[i]!=0){
        num++;
        validNum = false;
        break;
      }
    }
    if(validNum == false){
      continue;
    }
    std::cout<<num<<std::endl;
    return 1;
  }
}
