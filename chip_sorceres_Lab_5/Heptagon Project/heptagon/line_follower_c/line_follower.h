/* --- Generated the 5/5/2024 at 23:36 --- */
/* --- heptagon compiler, version 1.05.00 (compiled wed. feb. 21 16:19:46 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_H
#define LINE_FOLLOWER_H

#include "line_follower_types.h"
typedef struct Line_follower__line_follower_mem {
  Line_follower__st_1 ck;
  int v_90;
  int v_86;
  int v_96;
  int v_92;
  Line_follower__st v_98;
  int v_99;
  int v_114;
  int v_112;
  int v_110;
  int v_108;
  int v_164;
  int v_162;
  int v_160;
  int v_158;
  int pnr_1;
} Line_follower__line_follower_mem;

typedef struct Line_follower__line_follower_out {
  int v_l;
  int v_r;
  int dir;
  int st;
} Line_follower__line_follower_out;

void Line_follower__line_follower_reset(Line_follower__line_follower_mem* self);

void Line_follower__line_follower_step(int sen[5], int left_ir, int right_ir,
                                       int node_counter,
                                       Line_follower__line_follower_out* _out,
                                       Line_follower__line_follower_mem* self);

typedef struct Line_follower__main_mem {
  Line_follower__line_follower_mem line_follower;
} Line_follower__main_mem;

typedef struct Line_follower__main_out {
  int v_l;
  int v_r;
  int dir;
  int st;
} Line_follower__main_out;

void Line_follower__main_reset(Line_follower__main_mem* self);

void Line_follower__main_step(int sen0, int sen1, int sen2, int sen3,
                              int sen4, int left_ir, int right_ir,
                              int node_counter,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self);

#endif // LINE_FOLLOWER_H
