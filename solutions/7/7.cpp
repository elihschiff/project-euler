//answer: 104743
#include <iostream>
#include <vector>

int main(){
  std::vector<int> primes;
  unsigned int i = 2;
  if(primes.size()>=1){
    i = primes[primes.size()-1];
  }
  while(primes.size()-1!=10001){
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
    i++;
  }
  std::cout<<primes[10001-1]<<std::endl;
}
