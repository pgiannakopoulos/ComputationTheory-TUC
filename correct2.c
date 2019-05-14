#include "teaclib.h"


/* program */ 

int flag;

double fun (double x, double y) {
double f;
f = x + y;
return f;

}

int main() {
double a, b, x, y, h, t, k;
writeString("\nEnter x0,y0,h,xn: \n");
a = readReal();
b = readReal();
h = readReal();
t = readReal();
x = a;
y = b;
writeString("\n  x\t  y\n");
while (x <= t) {
k = h * fun(x, y);
y = y + k;
x = x + h;
writeReal(x);
writeString("\t");
writeReal(y);
writeString("\n"); 
};
return 0;
} 

