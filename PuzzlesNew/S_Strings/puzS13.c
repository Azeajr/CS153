#include <stdio.h>

int startsWith(char const *bigString, char const *start){
    while(*bigString && *start && *bigString==*start){
        bigString++;
        start++;
    }
    /*
     * This orignally scared me because any number other than zero would be
     * false.  That idea just seemded wrong.  I choose my solution because there
     * would be no ambiguity in my
     * return !*start;
     */
    return *start=='\0';
}


int main(int argc, char *argv[])
{
 char *trials[][2] =
  {
    {"abcdef", "a"},
    {"abcdef", "x"},
    {"abcdef", "ab"},
    {"abcdef", "abx"},
    {"abcdef", "abcdef"},
    {"abcdef", "f"},
    {"abcdef", "abcdefx"},
    {"abcdef", "abcdefxyz"},
    {"abcdef", "fooey"},
    {"abcdef", "rats"},
    {"aaaaaa", "a"},
    {"abcdefg", "g"},
    {"applecart", "apple"},
    {"green", "apple"},
    {"apple", ""},
    {"", "rats"},
    {"",""}
  };

  int j;
  for ( j=0; j<sizeof(trials)/sizeof(trials[0]); j++ )
  {
    int result = startsWith( trials[j][0], trials[j][1] ) ;
    if ( result )
      printf("%s\t          starts with\t%s\n", trials[j][0], trials[j][1] );
    else
      printf("%s\t does not start  with\t%s\n", trials[j][0], trials[j][1]  );
  }


  return 0;
}
