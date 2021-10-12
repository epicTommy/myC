#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_LINE 30
#define NULL_CHAR '\0'

int add(char y[5][12], int z);
char arr[30][5][12];

int main(void) {
    char a[5][12] = {
       {"    #       "},
       {"   # #      "},
       {"  #####     "},
       {" #     #    "},
       {"#       #   "}
    };

    char b[5][12] = {
        {"########    "},
        {"#       #   "},
        {"#########   "},
        {"#       #   "},
        {"########    "}
    };

    char c[5][12] = {
        {" ########   "},
        {"#           "},
        {"#           "},
        {"#           "},
        {" ########   "}
    };

    char d[5][12] = {
        {"########    "},
        {"#       #   "},
        {"#       #   "},
        {"#       #   "},
        {"########    "}
    };

    char e[5][12] = {
        {" ########   "},
        {"#           "},
        {"#########   "},
        {"#           "},
        {" ########   "}
    };

    char f[5][12] = {
        {" ########   "},
        {"#           "},
        {"#########   "},
        {"#           "},
        {"#           "}
    };

    char g[5][12] = {
        {" ########   "},
        {"#           "},
        {"#   #####   "},
        {"#       #   "},
        {" ########   "}
    };

    char h[5][12] = {
        {"#       #   "},
        {"#       #   "},
        {"#########   "},
        {"#       #   "},
        {"#       #   "}
    };

    char i[5][12] = {
        {"#########   "},
        {"    #       "},
        {"    #       "},
        {"    #       "},
        {"#########   "}
    };

    char j[5][12] = {
        {"#########   "},
        {"    #       "},
        {"    #       "},
        {"    #       "},
        {"####        "}
    };

    char k[5][12] = {
        {"#     ###   "},
        {"#  ###      "},
        {"###         "},
        {"#  ###      "},
        {"#     ###   "}
    };

    char l[5][12] = {
        {"#           "},
        {"#           "},
        {"#           "},
        {"#           "},
        {" ########   "}
    };

    char m[5][12] = {
        {"##     ##   "},
        {"# #   # #   "},
        {"# #  #  #   "},
        {"#   #   #   "},
        {"#       #   "}
    };

    char n[5][12] = {
        {"##      #   "},
        {"#  #    #   "},
        {"#   #   #   "},
        {"#    #  #   "},
        {"#      ##   "}
    };

    char o[5][12] = {
        {" #######    "},
        {"#       #   "},
        {"#       #   "},
        {"#       #   "},
        {" #######    "}
    };

    char p[5][12] = {
        {"########    "},
        {"#       #   "},
        {"########    "},
        {"#           "},
        {"#           "}
    };

    char q[5][12] = {
        {" #######    "},
        {"#       #   "},
        {"#    #  #   "},
        {"#      #    "},
        {" ###### #   "}
    };

    char r[5][12] = {
        {"########    "},
        {"#       #   "},
        {"########    "},
        {"#     #     "},
        {"#       #   "}
    };
    char s[5][12] = {
        {" ########   "},
        {"#           "},
        {" #######    "},
        {"        #   "},
        {"#######     "}
    };

  char t[5][12] = {
    {"#########   "},
    {"    #       "},
    {"    #       "},
    {"    #       "},
    {"    #       "}
  };

  char u[5][12] = {
    {"#       #   "},
    {"#       #   "},
    {"#       #   "},
    {"#       #   "},
    {" #######    "}
  };

  char v[5][12] = {
    {"#       #   "},
    {"#       #   "},
    {" #     #    "},
    {"  #   #     "},
    {"    #       "}
  };

  char w[5][12] = {
    {"#       #   "},
    {"#       #   "},
    {"#   #   #   "},
    {"# #  #  #   "},
    {"#       #   "}
  };

  char x[5][12] = {
    {"#       #   "},
    {"  #   #     "},
    {"    #       "},
    {"  #   #     "},
    {"#       #   "}
  };

  char y[5][12] = {
    {"#       #   "},
    {"  #   #     "},
    {"    #       "},
    {"    #       "},
    {"    #       "}
  };

  char z[5][12] = {
    {"#########   "},
    {"      #     "},
    {"    #       "},
    {"  #         "},
    {"#########   "}
  };

  char space[5][12] = {
    {"            "},
    {"            "},
    {"            "},
    {"            "},
    {"            "}
  };
  
  char input[MAX_LINE];
  for (int i=0;i<MAX_LINE;i++) {
    input[i] = NULL_CHAR;
  } 

  int inputLen = 0;
  printf("What is your word?:");
  fgets(input,MAX_LINE,stdin);

    //finds how many characters the user inputs
  for(int issa = 0; issa < 30; issa++){
      if(input[issa] == 0){
          inputLen = issa - 1;
          break;
    }
}

char finput[inputLen];
for(int count = 0; count < inputLen; count++){
  finput[count] = input[count];
}

//makes all of the charact
for(int loc = 0; loc < inputLen; loc++){
  finput[loc] = toupper(finput[loc]);
}

//find what character the user input is and adds the character information to the 3d array
for(int count = 0; count < inputLen; count++){
  char in = finput[count];
    if(in == 'A'){
      add(a, count);
    }

    if(in == 'B'){
      add(b, count);
    }

    if(in == 'C'){
      add(c, count);
    }

    if(in == 'D'){
      add(d, count);
    }

    if(in == 'E'){
      add(e, count);
    }

    if(in == 'F'){
      add(f, count);
    }

    if(in == 'G'){
      add(g, count);
    }

    if(in == 'H'){
      add(h, count);
    }

    if(in == 'I'){
      add(i, count);
    }

    if(in == 'J'){
      add(j, count);
    }

    if(in == 'K'){
      add(k, count);
    }

    if(in == 'L'){
      add(l, count);
    }

    if(in == 'M'){
      add(m, count);
    }

    if(in == 'N'){
      add(n, count);
    }

    if(in == 'O'){
      add(o, count);
    }

    if(in == 'P'){
      add(p, count);
    }

    if(in == 'Q'){
      add(q, count);
    }

    if(in == 'R'){
      add(r, count);
    }

    if(in == 'S'){
      add(s, count);
    }
         
    if(in == 'T'){
      add(t, count);
    }

    if(in == 'U'){
      add(u, count);
    }

    if(in == 'V'){
      add(v, count);
    }

    if(in == 'W'){
      add(w, count);
    }

    if(in == 'X'){
      add(x, count);
    }

    if(in == 'Y'){
      add(y, count);
    }

    if(in == 'Z'){
      add(z, count);
    }

    if(in == ' '){
      add(space, count);
    }
  }

//prints the 3d array (print the each letter with hash)
  for(int second = 0; second < 5; second++){
    for(int first = 0; first < inputLen; first++){
      for(int third = 0; third < 12; third++){
        printf("%c",arr[first][second][third]);
      }
    }
  printf("\n");
  }
}

//creates a 3d array with the all of the characters the user inputs
int add(char y[5][12], int z){
  int t = z;
  for(int i = 0; i < 5; i++){
        for(int j = 0; j < 12; j++){
           arr[t][i][j] = y[i][j];
        }
    }
 return 1;
}


