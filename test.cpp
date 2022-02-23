#include <iostream>
#include <math.h>

using namespace std;

const double tolerance = 0.0001;

double g(double p0)
{
   return pow(p0, 2) - 2;
}

int main()
{
   double p0 = 1.5, iter = 1000, i = 1.0;

   while (true)
   {

      double p = g(p0);

      if ((fabs(p - p0)) < tolerance)
      {
         break;
      }

      cout << "Current value: " << p0 << "    -------    Iteration: #" << i << endl;

      i++;
      p0 = p;

      if (i > iter)
      {
         cout << "method failed after n0 iterations, n0 = " << i << endl;

         break;
      }
   }
   return 0;
}