#include "vecfuncs.h"

void fillVector(vector<int> &vec) {
  int i;
  int num;

  for (i = 0; i < 5; i++) {
    cout << "Enter an int: ";
    cin >> num;
    vec.push_back(num);
  }
}

void findExtremes(vector<int> &vec, int &min, int &max) {
  // assummes there is at least one value in the vector
  min = max = vec[0];
  for (int i = 0; i < vec.size(); i++) {
    if (vec[i] < min) {
      // new min
      min = vec[i];
    }
    if (vec[i] > max) {
      max = vec[i];
    }
  }
}