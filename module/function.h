// Copyright 2021 Kuznetsov Nikita
#ifndef SWORK_MODULE_FUNCTION_H_
#define SWORK_MODULE_FUNCTION_H_

#include <vector>
#include <iostream>
#include <string>
#include <ostream>

class HoyneMethod {
  const double PI = 3.14159265358979323846;
  double h;
  double a;
  double D, Dh = 0;
  double AVG = 0;
  int count;
  std::vector<double> probs;
public:
  HoyneMethod(double _h, double _D, double _a, int _count);
  HoyneMethod calculate(int repeat_count);
  friend std::ostream& operator<<(std::ostream& stream,
    const HoyneMethod& data);
};

#endif  // SWORK_MODULE_FUNCTION_H_