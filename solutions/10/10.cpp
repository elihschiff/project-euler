//answer: 142913828922
#include <iostream>
#include <vector>

int main(){
  std::vector<unsigned long> primes;
  unsigned long sum=0;
  unsigned long i = 2;
  for(; i<2000000;i++){
    bool prime = true;
    for(unsigned long j=0;j<primes.size();j++){
      if(i%primes[j]==0){
        prime = false;
        break;
      }
    }
    if(prime){
      sum+=i;
      primes.push_back(i);
    }
  }
  std::cout<<sum<<std::endl;
}
