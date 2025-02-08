#include <iostream>
using namespace std;

int main() {
    int n;
    bool is_prime=true;
    cout<<"enter a positive integer n:";
    cin>>n;
   if(n<=1){
       is_prime=false;
   }else{
   for(int i=2;i*i<=n;i++){
       if(n%i==0){
           is_prime=false;
           break;
       }
       
   }
   }
  if(is_prime){
      cout<<"number is prime"<<endl;
     int next_prime=n+1;
     while(true){
        bool next_is_prime=true;
            for(int i=2;i*i<=next_prime;i++){
        if(next_prime%i==0){
            next_is_prime=false;
            break;
        }
            }
        if(next_is_prime){
          
            cout<<"the next prime number is"<<next_prime<<endl;
              break;
        }
        next_prime++;
     }
      
  
   }
  else{
      cout<<"number is not prime"<<endl;
      cout<<"factors are:";
      for(int i=1;i<n;i++){
          if(n%i==0){
              cout<<i<<endl;
          }
      }
  }

    return 0;
}