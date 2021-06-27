// Copyright 2021 Kuznetsov Nikita

#include <fstream>
#include "function.h"

int main() {
  HoyneMethod Hoyne(0.01, 0.3, 0.5, 500001);

  Hoyne.calculate(500);

  std::ofstream fout_probs;
  fout_probs.open("../../file_probs.txt");

  fout_probs << "t;p" << std::endl;
  fout_probs << Hoyne;

  fout_probs.close();

  return 0;
}