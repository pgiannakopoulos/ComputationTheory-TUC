#include "teaclib.h"


/* program */ 

const int SIZE = 10;

int fibo (int n) {
int i = 1, t1 = 0, t2 = 1, nextTerm;
writeString("Fibonacci Series: ");
while (i <= n) {
writeInt(t1);
writeString(", ");
nextTerm = t1 + t2;
t1 = t2;
t2 = nextTerm;
i = i + 1; 
};
writeString("\n");
return 0;
}
int get_array (int *a, int size) {
int i = 0;
writeString("Enter 10 values, after each value press enter:\n ");
while (i < size) {
a[i] = readInt();
i = i + 1; 
};
return 0;
}
int prt_array (int *a, int size) {
int i = 0;
writeString("Printing all values :\n");
while (i < size) {
writeString("\n");
writeInt(a[i]);
i = i + 1; 
};
return 0;
}

int main() {
int n;
int a[SIZE];
writeString("Enter the number of terms: ");
n = readInt();
fibo(n);
writeString("\n");
get_array(a, SIZE);
prt_array(a, SIZE);
writeString("\n");
return 0;
} 

