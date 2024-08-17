/* --- Generated the 5/5/2024 at 23:36 --- */
/* --- heptagon compiler, version 1.05.00 (compiled wed. feb. 21 16:19:46 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Line_follower__main_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int sen0;
  int sen1;
  int sen2;
  int sen3;
  int sen4;
  int left_ir;
  int right_ir;
  int node_counter;
  Line_follower__main_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Line_follower__main_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    if ((scanf("%d", &sen0)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &sen1)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &sen2)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &sen3)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &sen4)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &left_ir)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &right_ir)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &node_counter)==EOF)) {
      return 0;
    };;
    Line_follower__main_step(sen0, sen1, sen2, sen3, sen4, left_ir, right_ir,
                             node_counter, &_res, &mem);
    printf("%d\n", _res.v_l);
    printf("%d\n", _res.v_r);
    printf("%d\n", _res.dir);
    printf("%d\n", _res.st);
    fflush(stdout);
  };
  return 0;
}

