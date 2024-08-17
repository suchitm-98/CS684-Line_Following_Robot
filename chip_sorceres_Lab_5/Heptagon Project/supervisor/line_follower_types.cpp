/* --- Generated the 5/5/2024 at 23:36 --- */
/* --- heptagon compiler, version 1.05.00 (compiled wed. feb. 21 16:19:46 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower_types.h"

Line_follower__st_1 Line_follower__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Whiteline")==0)) {
    return Line_follower__St_1_Whiteline;
  };
  if ((strcmp(s, "St_1_Parking")==0)) {
    return Line_follower__St_1_Parking;
  };
  if ((strcmp(s, "St_1_Blackline")==0)) {
    return Line_follower__St_1_Blackline;
  };
}

char* string_of_Line_follower__st_1(Line_follower__st_1 x, char* buf) {
  switch (x) {
    case Line_follower__St_1_Whiteline:
      strcpy(buf, "St_1_Whiteline");
      break;
    case Line_follower__St_1_Parking:
      strcpy(buf, "St_1_Parking");
      break;
    case Line_follower__St_1_Blackline:
      strcpy(buf, "St_1_Blackline");
      break;
    default:
      break;
  };
  return buf;
}

Line_follower__st Line_follower__st_of_string(char* s) {
  if ((strcmp(s, "St_Park_right")==0)) {
    return Line_follower__St_Park_right;
  };
  if ((strcmp(s, "St_Park_left")==0)) {
    return Line_follower__St_Park_left;
  };
  if ((strcmp(s, "St_Line_Follow")==0)) {
    return Line_follower__St_Line_Follow;
  };
}

char* string_of_Line_follower__st(Line_follower__st x, char* buf) {
  switch (x) {
    case Line_follower__St_Park_right:
      strcpy(buf, "St_Park_right");
      break;
    case Line_follower__St_Park_left:
      strcpy(buf, "St_Park_left");
      break;
    case Line_follower__St_Line_Follow:
      strcpy(buf, "St_Line_Follow");
      break;
    default:
      break;
  };
  return buf;
}

