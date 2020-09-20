#include <stdio.h>

int stringSubset( char const *sub, char const *set){
    char const *u, *e;
    for(u = sub; *u; u++){
        for(e = set; *e; e++){
            
        }
    }
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
