// Copyright 2021 Kuznetsov Nikita

#include "function.h"
#include "GASDEV.C"
#include <time.h>
#include <cmath>
#include <iostream>

HoyneMethod::HoyneMethod(double _h, double _D, double _a, int _count) {
  this->h = _h;
  this->D = _D;
  this->a = _a;
  this->count = _count;
  this->Dh = sqrt(h) * sqrt(D);
  this->probs.resize(count);
  this->AVG = 0;
  for (size_t i = 0; i < this->probs.size(); i++) {
    this->probs[i] = 0;
  }
}

HoyneMethod HoyneMethod::calculate(int repeat_count) {
  double x0, x1;
  float randNoise;
  long g = 1;

  clock_t start, finish;

  int rep_counter = 0;

  while (rep_counter < repeat_count) {
    start = clock();
    double* x = new double[this->count];
    x[0] = 0;

    for (int i = 0; i < this->count; i++) {
      if (i != 0) {
        randNoise = gasdev(&g);
        x0 = x[i - 1];
        x1 = x0 + randNoise * Dh + h * (a - sin(x0));
        x[i] = x0 + randNoise * Dh + a * h * (a - sin(x0) + a - sin(x1));
      }

      if (x[i] <= this->PI && x[i] >= -this->PI) {
        this->probs[i] += 1;
      }
    }

    finish = clock();

    double sTime = (double)(finish - start) / CLOCKS_PER_SEC;
    std::cout << "T(algorythm" << rep_counter << ") = "
      << sTime << std::endl;
    this->AVG += sTime;

    delete[] x;
    rep_counter++;
  }

  for (size_t i = 0; i < this->probs.size(); i++) {
    this->probs[i] /= repeat_count;
  }

  this->AVG /= repeat_count;

  system("cls");

  return *this;
}

std::ostream& operator<<(std::ostream& stream,
  const HoyneMethod& data) {
  std::cout << "AVG(T) = " << data.AVG << std::endl;
  for (size_t i = 0; i < data.probs.size(); i++) {
    stream << i * data.h << ";" << data.probs[i] << std::endl;
  }
  return stream;
}