//answer: 6857
#include <iostream>
#include <vector>
#include <math.h>

void getPrimesUpTo(std::vector<unsigned int>& primes, unsigned int max){
  unsigned int i = 2;
  if(primes.size()>=1){
    i = primes[primes.size()-1];
  }
  for(; i<max;i++){
    bool prime = true;
    for(unsigned int j=0;j<primes.size();j++){
      if(i%primes[j]==0){
        prime = false;
        break;
      }
    }
    if(prime){
      primes.push_back(i);
    }
  }
}

int main(){
  std::vector<unsigned int> primes;
  getPrimesUpTo(primes, std::sqrt(600851475143));

  for(int i = primes.size()-1;i>=0;i--){
    if(600851475143%primes[i]==0){
      std::cout<<primes[i]<<std::endl;
      return 1;
    }
  }
}
