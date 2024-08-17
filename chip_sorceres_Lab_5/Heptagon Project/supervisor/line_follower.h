/* --- Generated the 5/5/2024 at 23:36 --- */
/* --- heptagon compiler, version 1.05.00 (compiled wed. feb. 21 16:19:46 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_H
#define LINE_FOLLOWER_H

#include "line_follower_types.h"
typedef struct Line_follower__line_follower_mem {
  Line_follower__st_1 ck;
  long v_90;
  long v_86;
  long v_96;
  long v_92;
  Line_follower__st v_98;
  long v_99;
  long v_114;
  long v_112;
  long v_110;
  long v_108;
  long v_164;
  long v_162;
  long v_160;
  long v_158;
  long pnr_1;
} Line_follower__line_follower_mem;

typedef struct Line_follower__line_follower_out {
  long v_l;
  long v_r;
  long dir;
  long st;
} Line_follower__line_follower_out;

void Line_follower__line_follower_reset(Line_follower__line_follower_mem* self);

void Line_follower__line_follower_step(long sen[5], long left_ir, long right_ir,
                                       long node_counter,
                                       Line_follower__line_follower_out* _out,
                                       Line_follower__line_follower_mem* self);

typedef struct Line_follower__main_mem {
  Line_follower__line_follower_mem line_follower;
} Line_follower__main_mem;

typedef struct Line_follower__main_out {
  long v_l;
  long v_r;
  long dir;
  long st;
} Line_follower__main_out;

void Line_follower__main_reset(Line_follower__main_mem* self);

void Line_follower__main_step(long sen0, long sen1, long sen2, long sen3,
                              long sen4, long left_ir, long right_ir,
                              long node_counter,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self);

#endif // LINE_FOLLOWER_H
