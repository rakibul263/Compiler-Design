#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isDataType(const char *word)
{
  char *types[] = {"int", "float", "double", "char", "long", "short", "unsigned", "signed"};
  int total = sizeof(types) / sizeof(types[0]);
  for (int i = 0; i < total; i++)
  {
    if (strcmp(word, types[i]) == 0)
      return 1;
  }
  return 0;
}

void trimSemicolon(char *str)
{
  int len = strlen(str);
  if (str[len - 1] == ';')
    str[len - 1] = '\0';
}

int main()
{
  FILE *in = fopen("input.c", "r");
  FILE *out = fopen("output.txt", "w");

  if (in == NULL)
  {
    printf("Error! Input file not found.\n");
    return 1;
  }

  char word[100];
  int isVarDeclaration = 0;

  while (fscanf(in, "%s", word) != EOF)
  {
    if (isDataType(word))
    {
      isVarDeclaration = 1;
      continue;
    }

    if (isVarDeclaration)
    {
      // Handle comma-separated variables and remove symbols
      char *token = strtok(word, ",");
      while (token != NULL)
      {
        trimSemicolon(token);

        // Skip if contains parentheses (function names like main)
        if (strchr(token, '(') == NULL && isalpha(token[0]))
        {
          fprintf(out, "%s\n", token);
        }

        token = strtok(NULL, ",");
      }

      // If line ends with semicolon, end declaration
      if (strchr(word, ';') != NULL)
      {
        isVarDeclaration = 0;
      }
    }
  }

  printf("Variable Identifier Successfully Executed.\n");

  fclose(in);
  fclose(out);

  return 0;
}
