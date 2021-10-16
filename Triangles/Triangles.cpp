#define _USE_MATH_DEFINES
#include "Triangles.h"
#include <stdexcept>
#include <math.h>
using namespace std;
namespace TrianglesFuncs
{
	double MyTrianglesFuncs::Perimeter(double A, double B, double C)
	{
		if (A + B > C && A + C > B && C + B > A) {
			return A + B + C;
		}
		else {
			throw invalid_argument("Сумма двух любых сторон должна привышать 3ю");
		}
	}
	double MyTrianglesFuncs::Area(double A, double B, double C)
	{
		double p = 0;
		if (A + B > C && A + C > B && C + B > A) {
			p = (A + B + C) / 2.0;
			return sqrt(p*(p-A)*(p-B)*(p-C));
		}
		else {
			throw invalid_argument("Сумма двух любых сторон должна привышать 3ю");
		}
	}
}