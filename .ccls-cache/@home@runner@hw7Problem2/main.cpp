#include <iostream>
#include <cmath>

using namespace std;
void time(int hours, int min, int secs);


int main() {
int hours, min, secs, secounds;
  
time ( hours, min, secs, secounds);

  
}
void time(int hours, int min, int secs, int secounds)
{
  cin>>secounds;
  hours = (secounds/3600) % 60;
  min = (secounds / 60) % 60;
  secs = secounds % 60;

  cout << hours<<min<<secs<<endl;
  
}