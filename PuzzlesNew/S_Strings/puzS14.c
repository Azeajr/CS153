#include <stdio.h>

int endsWith(char const *bigString, char const *endString){
    char const *endStringStart = endString;
    //printf("address:%d\t%d\n", endString, endStringStart);

    while(*bigString) bigString++;
    while(*endString) endString++;

    while(endStringStart!=endString && *bigString==*endString){
        bigString--;
        endString--;
    }
    //printf("***address:%d\t%d\n\n", endString, endStringStart);

    return endString == endStringStart && *bigString==*endString;
}

int main(int argc, char *argv[])
{
 char *trials[][2] =
  {
    {"abcdef", "f"},
    {"abcdef", "ef"},
    {"abcdef", "def"},
    {"abcdef", "cdef"},
    {"abcdef", "abcdef"},
    {"abcdef", "a"},
    {"abcdef", "abc"},
    {"abcdef", "xabcdef"},
    {"abcdef", "xyzabcdef"},
    {"abcdef", "rats"},
    {"abbccddeef", "cc"},
    {"abcdefg", "g"},
    {"applecart", "cart"},
    {"green", "apple"},
    {"apple", ""},
    {"", "rats"},
    {"",""}
  };

  int j;
  for ( j=0; j<sizeof(trials)/sizeof(trials[0]); j++ )
  {
    int result = endsWith( trials[j][0], trials[j][1] ) ;
    if ( result )
      printf("%s\t ends with \t%s\n", trials[j][0], trials[j][1]  );
    else
      printf("%s\t does not end with\t%s\n", trials[j][0], trials[j][1]  );
  }


  return 0;
}
