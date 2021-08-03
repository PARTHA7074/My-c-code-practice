#include <stdio.h>

int main()
{
  int n=5,
  int max_and = 0, max_or = 0, max_xor = 0, temp1, temp2, temp3;
  for (int i = 1; i <= n; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {
      temp1 = i & j;
      temp2 = i | j;
      temp3 = i ^ j;
      if (temp1 > max_and)
      {
        max_and = temp1;
      }
      if (temp2 > max_or)
      {
        max_or = temp2;
      }
      if (temp3 > max_xor)
      {
        max_xor = temp3;
      }
    }
  }
  printf("%d\n%d\n%d", max_and, max_or, max_xor);
}
}