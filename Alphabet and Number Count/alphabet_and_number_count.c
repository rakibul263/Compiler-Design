#include <stdio.h>
#include <ctype.h>

int main()
{
  FILE *in = fopen("input.txt", "r");
  FILE *out = fopen("output.txt", "w");

  if (in == NULL)
  {
    printf("Error! File not found.\n");
    return 1;
  }

  char ch;
  int alphabetCount = 0;
  int digitCount = 0;

  while ((ch = fgetc(in)) != EOF)
  {
    if (isalpha(ch))
    {
      alphabetCount++;
    }
    else if (isdigit(ch))
    {
      digitCount++;
    }
  }

  fclose(in);

  // Output goes to file instead of console
  fprintf(out, "Total Alphabets: %d\n", alphabetCount);
  fprintf(out, "Total Digits: %d\n", digitCount);

  fclose(out);

  printf("✅ Output successfully written to output.txt\n");

  return 0;
}
