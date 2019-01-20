//answer: 4613732
#include <iostream>
int main(){
  int sum = 0;
  int max = 4000000;

  int back2;
  int back1 = 1;
  int current = 2;
  while(current < max){
    if(current%2==0){
      sum+=current;
    }
    back2=back1;
    back1=current;
    current = back1+back2;
  }
  std::cout<<sum<<std::endl;
}
