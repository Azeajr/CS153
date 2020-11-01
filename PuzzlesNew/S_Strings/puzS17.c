#include <stdio.h>
/*
 * Write function stringSubset(char *sub, char *set) that returns 1 if every
 * character in the string *sub is also contained in the string *set; otherwise
 * it returns 0
 */
int stringSubset( char const *sub, char const *set){
    char const *u, *e;
    char const *p, *s;
    /*
     * Teachers solution seems much simpler than mine.
     * for ( u=sub; *u; u++ ){
     *     for ( e=set; *e && *e != *u; e++);
     *     if ( *e == '\0' ) return 0;
     * }
     * return 1;
    */

    for(u = sub; *u; u++){
        for(e = set; *e; e++){
            if(*u == *e){
                break;
            }
        }
        if(*u != *e){
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[])
{
  char *trials[][2] =
  {
    {"a","a"},
    {"a","ab"},
    {"a","aaa"},
    {"ab","ab"},
    {"aaa","a"},
    {"abc","abc"},
    {"a","xyza"},
    {"a","xyzaxyz"},
    {"x","a"},
    {"x","abc"},
    {"ababab","abcxyz"},
    {"aaabbbcccaaa","abc"},
    {"aabbaabbaax","abc"},
    {"xaabbaabbaa","abc"},
    {"aabbxaabbaa","abc"},
    {"aabbxaabbaa","abc"},
    {"aabbxaaxbbaa","abc"},
    {"empty set",""},
    {"","abc"},
    {"",""}
  };

  int j, loc ;
  for ( j=0; j<sizeof(trials)/sizeof(trials[0]); j++ )
  {
    if ( stringSubset( trials[j][0], trials[j][1] ) )
      printf("%s \tcontains only characters from %s\n",
          trials[j][0], trials[j][1] );
    else
      printf("%s \tcontains extra characters than %s\n",
          trials[j][0], trials[j][1] );
  }

  return 0;
}
