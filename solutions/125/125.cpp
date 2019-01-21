//answer: 2906969179
#include <iostream>
#include <vector>
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
  unsigned long max = 100000000;
  std::vector<bool> nums(max+1, false);
  for(unsigned long i=1;i<max;i++){
    unsigned long sum = (i*i)+((i+1)*(i+1));
    unsigned long spot = i+2;
    while(sum < max){
      nums[sum]=true;
      sum+=spot*spot;
      spot++;
    }
  }

  unsigned long sum = 0;
  for(unsigned long i=0;i<nums.size();i++){
    if(nums[i] == true){
      if(isPalindromic(i)){
        std::cout<<i<<std::endl;
        sum+=i;
      }
    }
  }
  std::cout<<sum<<std::endl;
}
