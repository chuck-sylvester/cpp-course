/*
   Deitel C++ 10E - Chapter 7
   Figure 7.6
   ----------------------------------------------------------
   Bar chart printing program.
*/

#include <iostream>
#include <iomanip>
#include <array>

int main() {
   const size_t arraySize {11};
   std::array<unsigned int, arraySize> n {0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1};

   std::cout << "Grade distribution: " << std::endl;

   // for each element of array n, output a bar of the chart
   for (size_t i {}; i < n.size(); ++i) {
      // output bar labels in a nicely formatted column
      if (i == 0) {
         std::cout << "  0-9: ";
      } else if (i == 10) {
         std::cout << "  100: ";
      } else {
         std::cout << i * 10 << "-" << (1 * 10) + 9 << ": ";
      }

      for (size_t j{}; j < n[i]; j++) {
         std::cout << '*';
      }

      std::cout << std::endl;
   }
}
