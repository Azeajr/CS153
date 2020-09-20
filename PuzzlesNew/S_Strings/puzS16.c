#include <stdio.h>

int findCstring( char const *str, char const *set){
    char const *strFront = str;
    char const *setFront = set;

    int i = 0;
    if(!*str || !set){
        return -1;
    }
    while(*str != *set && *str && *set){
        while(*str != *set && *str && *set){
            set++;

        }

        if(*str==*set){
            return i;
        }else{
            set = setFront;
        }

        str++;
        i++;
    }
    if(*str==*set){
        return i;
    }else{
        return -1;
    }


}


int main(int argc, char *argv[])
{
  char *trials[][2] =
  {
    {"abcdef", "a"},
    {"abcdef", "xyza"},
    {"abcdef", "f"},
    {"abcdef", "zxyf"},
    {"abcdef", "zxfy"},
    {"abcdef", "c"},
    {"abcdef", "xyzc"},
    {"abcdef", "cxyz"},
    {"abcdef", "xxcyz"},
    {"abbccddeef", "xyzfzz"},
    {"abcdefg", "gfedec"},
    {"small", "xxxxxxxxxxxxmxxxxxxxxx"},
    {"green", "apple"},
    {"apple", ""},
    {"", "rats"},
    {"",""}
  };

  int j, loc ;
  for ( j=0; j<sizeof(trials)/sizeof(trials[0]); j++ )
  {
    loc = findCstring( trials[j][0], trials[j][1] );
    if ( loc != -1 )
      printf("Found %c from %s at index %d in %s\n",
        trials[j][0][loc], trials[j][1], loc, trials[j][0] );
    else
      printf("Found no character from %s in %s\n",
        trials[j][1], trials[j][0] );
  }

  return 0;
}
