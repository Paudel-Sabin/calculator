#include <iomanip> 
#include <iostream> 
#include <stdlib.h> 
#include <windows.h> 
using namespace std; 
int main() 
{ 
	system("color 3A"); 
  int hour,min,sec;
  cout<<"Enter Hour"<<endl;
  cin>>hour;
  cout<<"Enter Minute"<<endl;
  cin>>min;
  cout<<"Enter Second"<<endl;
  cin>>sec;

  if(hour>24){
    cout<<"wrong Time :(";
  }else if(min>60){
    cout<<"Wrong Minute :(";
  }else if(sec > 60){
    cout<<"Wrong second :(";
  }

  else{
    while(1){
      system("cls");
        for(hour;hour<24;hour++){
          for(min;min<60;min++){
            for(sec;sec<60;sec++){
              system("cls"); 
              cout<<"\t Current Time"<<endl;
              cout<<hour<<"H :"<<min<<"M :"<<sec<<"S";
              Sleep(1000);
            }
            sec=0;
          }
          min=0;
        }
    }
  }
}