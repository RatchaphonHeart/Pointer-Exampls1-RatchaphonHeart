
#include <iostream>
#include <string.h>
#include <iomanip>



using namespace std;

int main(void){
  char *pa, *pb, temp;
  char a[1000];
  cout<<"Input String:";
  cin>>a;
  int lens = strlen(a);
  pa = &a[0];
  cout<< "Original: ";
  for (int i = 0; i < lens - 1; i++, pa++){
    cout<<setw(3)<<*pa<<" ";
  }
  cout<<setw(3)<<*pa<<endl;

    pa = &a[0]; pb = &a[lens - 1];
    cout<<"Reverse: ";
    for (int i = 0; i < lens / 2; i++) {
        temp = *pa;
        *pa = *pb;
        *pb = temp;
        pa++; pb--;
    }
    pa = &a[0];
    for (int i = 0; i <lens - 1; i++,pa++){
        cout<<setw(3)<<*pa<<" ";}
       cout<<setw(3)<<*pa<<endl;
    
    
return 0;
  
}