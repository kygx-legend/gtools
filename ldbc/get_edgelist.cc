#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>
#include <vector>
#include <sstream>
#include <time.h>

typedef unsigned long long uintV;

using namespace std;

int main() {
  string ofs = "datagen-sf10k-fb.lvid";
  ofstream fo(ofs.c_str(), fstream::out);
  string path = "datagen-sf10k-fb/datagen-sf10k-fb.e";
  {
      ifstream fi(path.c_str(), fstream::in);
      string line;
      vector<pair<uintV, uintV>> e;
      int count = 10000000;
      int c = 0;
      while (getline(fi, line)) {
        stringstream ss(line);
        uintV ov;
        uintV nv;
        double w;
        ss >> ov >> nv >> w;
        e.push_back({ov, nv});
        c++;
        if (c >= count) {
          for (const auto& p : e) {
            fo << p.first << " " << p.second << endl;
          }
          c = 0;
          e.clear();
        }
      }
      fi.close();
      for (const auto& p : e) {
        fo << p.first << " " << p.second << endl;
      }
  }
  fo.close();

  return 0;
}
