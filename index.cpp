#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() 
{
  string day;
  cout<<"Enter a day :" <<endl;
  cin>>day;
  transform(day.begin(), day.end(), day.begin(), ::tolower);

  if(day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday"||day==
  "friday")
  {
      cout<<"It's Weekday!";
  }
  else
  if(day=="saturday"|| day=="sunday")
  {
      cout<<"It's Weekend!";
  }
  
}