#include "disp_vector.h"

#include <iostream>

using namespace std;

double dispVector(const vector<int> &vec) {
  for (const auto &v: vec) {
    cout << v << endl;
  }
  return 0;
}
