#include "Test.h"

int
Add (
  int A,
  int B
  )
{
	return A + B;
}

int 
main (
  void
  )
{
	int A;
	int B;
	
	A = 10;
	B = 18;
	
	Printf ("%d + %d = %d\n", A, B, Add (A, B));
}