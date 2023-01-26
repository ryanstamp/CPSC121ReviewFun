#include "vecfuncs.h" 

int main() {
  int min, max;
  vector<int> userNums;

  fillVector(userNums);
  cout << "size: " << userNums.size() << endl;

  findExtremes(userNums, min, max);
  cout << "min: " << min << " max: " << max << endl;
}