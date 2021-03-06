#include <stdio.h>
#include <wchar.h>

// I am modifying this before stash.
size_t my_strlen(const char *s)
{
   const char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

wchar_t *my_wstrchr(wchar_t *ws, wchar_t *wc)
{
  while (*ws)
  {
    if (*ws == wc)
      return ws;
    ++ws;
  }
  return NULL;
}

/** Wide charactor strlen function. */
size_t my_wstrlen(const wchar_t *s)
{
  const wchar_t *p = s;
  while (*p)
    ++p;

  return (p -s);
}

char* my_strcpy(char* t, char* s)
{
   char *p = t;

   while (*t++ = *s++);

   return p;
}

char* my_strcat(char* t, char* s)
{
  char *p = t;
  while (*p) {
    ++p;
  }
  while (*p++ = *s++);
  return t;
}

int main(void)
{
   int i;
   char p1[32];
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i) {
     printf("string lenght of %s = %lu\n", s[i], my_strlen(s[i]));
   }

   printf("%s\n", my_strcpy(p1, "Hello, World !!!"));

   return 0;
}

