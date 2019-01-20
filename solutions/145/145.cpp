//answer: 608720
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool allDigitsOdd(int num){
  std::string numS = std::to_string(num);
  for(unsigned int i=0;i<numS.size();i++){
    if(numS[i]%2==0){
      return false;
    }
  }
  return true;
}

int reverseInt(int num){
  std::string numS = std::to_string(num);
  std::reverse(numS.begin(),numS.end());
  return std::stoi(numS);
}

int main(){
  int max = 1000000000;
  std::vector<bool> checked(max, false);

  int sum = 0;

  for(int i=1;i<=max;i++){
    if(i%10000000 == 0){
      std::cout<<i<<std::endl;
    }
    if(checked[i]==false){
      int reverse = reverseInt(i);
      if(checked[reverse]==false){
        checked[i]=true;
        checked[reverse]=true;
        if(allDigitsOdd(i + reverse)){
          sum++;
          if(reverse!=i){sum++;}
        }
      }
    }
  }
  std::cout<<sum<<std::endl;
}
