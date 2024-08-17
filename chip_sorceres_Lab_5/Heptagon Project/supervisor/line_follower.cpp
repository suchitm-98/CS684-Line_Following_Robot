/* --- Generated the 5/5/2024 at 23:36 --- */
/* --- heptagon compiler, version 1.05.00 (compiled wed. feb. 21 16:19:46 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower.h"

void Line_follower__line_follower_reset(Line_follower__line_follower_mem* self) {
  self->v_162 = true;
  self->v_158 = true;
  self->v_112 = true;
  self->v_108 = true;
  self->v_99 = false;
  self->v_98 = Line_follower__St_Line_Follow;
  self->pnr_1 = false;
  self->ck = Line_follower__St_1_Whiteline;
  self->v_92 = true;
  self->v_86 = true;
}

void Line_follower__line_follower_step(long sen[5], long left_ir, long right_ir,
                                       long node_counter,
                                       Line_follower__line_follower_out* _out,
                                       Line_follower__line_follower_mem* self) {
  
  long v;
  long v_14;
  long v_13;
  long v_12;
  long v_11;
  long v_10;
  long v_9;
  long v_8;
  long v_7;
  long v_6;
  long v_5;
  long v_4;
  long v_3;
  long v_2;
  long v_1;
  long r_1_St_1_Parking;
  Line_follower__st_1 s_1_St_1_Parking;
  long r_1_St_1_Blackline;
  Line_follower__st_1 s_1_St_1_Blackline;
  long r_1_St_1_Whiteline;
  Line_follower__st_1 s_1_St_1_Whiteline;
  long v_42;
  long v_41;
  long v_40;
  long v_39;
  long v_38;
  long v_37;
  long v_36;
  long v_35;
  long v_34;
  long v_33;
  long v_32;
  long v_31;
  long v_30;
  long v_29;
  long v_28;
  long v_27;
  long v_26;
  long v_25;
  long v_24;
  long v_23;
  long v_22;
  long v_21;
  long v_20;
  long v_19;
  long v_18;
  long v_17;
  long v_16;
  long v_15;
  long v_70;
  long v_69;
  long v_68;
  long v_67;
  long v_66;
  long v_65;
  long v_64;
  long v_63;
  long v_62;
  long v_61;
  long v_60;
  long v_59;
  long v_58;
  long v_57;
  long v_56;
  long v_55;
  long v_54;
  long v_53;
  long v_52;
  long v_51;
  long v_50;
  long v_49;
  long v_48;
  long v_47;
  long v_46;
  long v_45;
  long v_44;
  long v_43;
  long v_91;
  long v_89;
  long v_88;
  long v_87;
  long r_2;
  long v_97;
  long v_95;
  long v_94;
  long v_93;
  long r_3;
  long v_85;
  long v_84;
  long v_83;
  long v_82;
  long v_81;
  long v_80;
  long v_79;
  long v_78;
  long v_77;
  long v_76;
  long v_75;
  long v_74;
  Line_follower__st v_73;
  long v_72;
  long v_71;
  long left_timer;
  long right_timer;
  long nr_St_Park_right;
  Line_follower__st ns_St_Park_right;
  long st_St_1_Parking_St_Park_right;
  long dir_St_1_Parking_St_Park_right;
  long v_r_St_1_Parking_St_Park_right;
  long v_l_St_1_Parking_St_Park_right;
  long nr_St_Park_left;
  Line_follower__st ns_St_Park_left;
  long st_St_1_Parking_St_Park_left;
  long dir_St_1_Parking_St_Park_left;
  long v_r_St_1_Parking_St_Park_left;
  long v_l_St_1_Parking_St_Park_left;
  long nr_St_Line_Follow;
  Line_follower__st ns_St_Line_Follow;
  long st_St_1_Parking_St_Line_Follow;
  long dir_St_1_Parking_St_Line_Follow;
  long v_r_St_1_Parking_St_Line_Follow;
  long v_l_St_1_Parking_St_Line_Follow;
  Line_follower__st ck_2;
  Line_follower__st ns;
  long r;
  long nr;
  long pnr;
  long v_151;
  long v_150;
  long v_149;
  long v_148;
  long v_147;
  long v_146;
  long v_145;
  long v_144;
  long v_143;
  long v_142;
  long v_141;
  long v_140;
  long v_139;
  long v_138;
  long v_137;
  long v_136;
  long v_135;
  long v_134;
  long v_133;
  long v_132;
  long v_131;
  long v_130;
  long v_129;
  long v_128;
  long v_127;
  long v_126;
  long v_125;
  long v_124;
  long v_123;
  long v_122;
  long v_121;
  long v_120;
  long v_119;
  long v_118;
  long v_117;
  long v_116;
  long v_115;
  long v_113;
  long v_111;
  long v_109;
  long v_107;
  long v_106;
  long v_105;
  long v_104;
  long v_103;
  long v_102;
  long v_101;
  long v_100;
  long v_201;
  long v_200;
  long v_199;
  long v_198;
  long v_197;
  long v_196;
  long v_195;
  long v_194;
  long v_193;
  long v_192;
  long v_191;
  long v_190;
  long v_189;
  long v_188;
  long v_187;
  long v_186;
  long v_185;
  long v_184;
  long v_183;
  long v_182;
  long v_181;
  long v_180;
  long v_179;
  long v_178;
  long v_177;
  long v_176;
  long v_175;
  long v_174;
  long v_173;
  long v_172;
  long v_171;
  long v_170;
  long v_169;
  long v_168;
  long v_167;
  long v_166;
  long v_165;
  long v_163;
  long v_161;
  long v_159;
  long v_157;
  long v_156;
  long v_155;
  long v_154;
  long v_153;
  long v_152;
  long nr_1_St_1_Parking;
  Line_follower__st_1 ns_1_St_1_Parking;
  long d_St_1_Parking;
  long i_St_1_Parking;
  long p_St_1_Parking;
  long pidvalue_St_1_Parking;
  long temp_pid_St_1_Parking;
  long error_St_1_Parking;
  long st_St_1_Parking;
  long dir_St_1_Parking;
  long v_r_St_1_Parking;
  long v_l_St_1_Parking;
  long nr_1_St_1_Blackline;
  Line_follower__st_1 ns_1_St_1_Blackline;
  long d_St_1_Blackline;
  long i_St_1_Blackline;
  long p_St_1_Blackline;
  long pidvalue_St_1_Blackline;
  long temp_pid_St_1_Blackline;
  long error_St_1_Blackline;
  long st_St_1_Blackline;
  long dir_St_1_Blackline;
  long v_r_St_1_Blackline;
  long v_l_St_1_Blackline;
  long nr_1_St_1_Whiteline;
  Line_follower__st_1 ns_1_St_1_Whiteline;
  long d_St_1_Whiteline;
  long i_St_1_Whiteline;
  long p_St_1_Whiteline;
  long pidvalue_St_1_Whiteline;
  long temp_pid_St_1_Whiteline;
  long error_St_1_Whiteline;
  long st_St_1_Whiteline;
  long dir_St_1_Whiteline;
  long v_r_St_1_Whiteline;
  long v_l_St_1_Whiteline;
  Line_follower__st_1 ck_1;
  Line_follower__st_1 s_1;
  Line_follower__st_1 ns_1;
  long r_1;
  long nr_1;
  long error;
  long temp_pid;
  long pidvalue;
  long p;
  long i;
  long d;
  switch (self->ck) {
    case Line_follower__St_1_Whiteline:
      v_12 = sen[4];
      v_13 = (v_12>800);
      v_9 = sen[3];
      v_10 = (v_9<800);
      v_6 = sen[2];
      v_7 = (v_6<800);
      v_3 = sen[1];
      v_4 = (v_3>800);
      v_1 = sen[0];
      v_2 = (v_1>800);
      v_5 = (v_2&&v_4);
      v_8 = (v_5&&v_7);
      v_11 = (v_8&&v_10);
      v_14 = (v_11&&v_13);
      if (v_14) {
        r_1_St_1_Whiteline = true;
        s_1_St_1_Whiteline = Line_follower__St_1_Blackline;
      } else {
        r_1_St_1_Whiteline = self->pnr_1;
        s_1_St_1_Whiteline = Line_follower__St_1_Whiteline;
      };
      s_1 = s_1_St_1_Whiteline;
      r_1 = r_1_St_1_Whiteline;
      break;
    case Line_follower__St_1_Blackline:
      v = (node_counter==4);
      if (v) {
        r_1_St_1_Blackline = true;
        s_1_St_1_Blackline = Line_follower__St_1_Parking;
      } else {
        r_1_St_1_Blackline = self->pnr_1;
        s_1_St_1_Blackline = Line_follower__St_1_Blackline;
      };
      s_1 = s_1_St_1_Blackline;
      r_1 = r_1_St_1_Blackline;
      break;
    case Line_follower__St_1_Parking:
      r_1_St_1_Parking = self->pnr_1;
      s_1_St_1_Parking = Line_follower__St_1_Parking;
      s_1 = s_1_St_1_Parking;
      r_1 = r_1_St_1_Parking;
      break;
    default:
      break;
  };
  ck_1 = s_1;
  switch (ck_1) {
    case Line_follower__St_1_Whiteline:
      v_177 = sen[3];
      v_178 = (v_177>850);
      if (v_178) {
        v_179 = 3;
      } else {
        v_179 = 1;
      };
      v_175 = sen[1];
      v_176 = (v_175>850);
      if (v_176) {
        v_180 = 2;
      } else {
        v_180 = v_179;
      };
      v_173 = sen[4];
      v_174 = (v_173>850);
      if (v_174) {
        v_181 = 5;
      } else {
        v_181 = v_180;
      };
      v_171 = sen[0];
      v_172 = (v_171>850);
      if (v_172) {
        dir_St_1_Whiteline = 4;
      } else {
        dir_St_1_Whiteline = v_181;
      };
      st_St_1_Whiteline = 1;
      if (self->v_162) {
        v_163 = true;
      } else {
        v_163 = r_1;
      };
      if (v_163) {
        v_165 = 0;
      } else {
        v_165 = self->v_164;
      };
      if (self->v_158) {
        v_159 = true;
      } else {
        v_159 = r_1;
      };
      v_156 = sen[4];
      v_155 = sen[3];
      v_157 = (v_155+v_156);
      v_153 = sen[0];
      v_152 = sen[1];
      v_154 = (v_152+v_153);
      error_St_1_Whiteline = (v_154-v_157);
      nr_1_St_1_Whiteline = false;
      ns_1_St_1_Whiteline = Line_follower__St_1_Whiteline;
      error = error_St_1_Whiteline;
      d_St_1_Whiteline = (error-v_165);
      v_161 = (self->v_160+error);
      if (v_159) {
        i_St_1_Whiteline = 0;
      } else {
        i_St_1_Whiteline = v_161;
      };
      p_St_1_Whiteline = error;
      p = p_St_1_Whiteline;
      v_166 = (p*Line_follower__kp);
      i = i_St_1_Whiteline;
      v_167 = (i*Line_follower__ki);
      v_168 = (v_166+v_167);
      d = d_St_1_Whiteline;
      v_169 = (d*Line_follower__kd);
      temp_pid_St_1_Whiteline = (v_168+v_169);
      temp_pid = temp_pid_St_1_Whiteline;
      v_170 = (temp_pid<0);
      if (v_170) {
        pidvalue_St_1_Whiteline = -15;
      } else {
        pidvalue_St_1_Whiteline = 15;
      };
      pidvalue = pidvalue_St_1_Whiteline;
      v_195 = (70+pidvalue);
      v_184 = (70+pidvalue);
      ns_1 = ns_1_St_1_Whiteline;
      nr_1 = nr_1_St_1_Whiteline;
      _out->dir = dir_St_1_Whiteline;
      v_197 = (_out->dir==5);
      if (v_197) {
        v_198 = 30;
      } else {
        v_198 = 40;
      };
      v_196 = (_out->dir==4);
      if (v_196) {
        v_199 = 90;
      } else {
        v_199 = v_198;
      };
      v_194 = (_out->dir==3);
      if (v_194) {
        v_200 = v_195;
      } else {
        v_200 = v_199;
      };
      v_193 = (_out->dir==2);
      if (v_193) {
        v_201 = 0;
      } else {
        v_201 = v_200;
      };
      v_192 = (_out->dir==0);
      if (v_192) {
        v_r_St_1_Whiteline = 0;
      } else {
        v_r_St_1_Whiteline = v_201;
      };
      v_187 = (_out->dir==5);
      if (v_187) {
        v_188 = 90;
      } else {
        v_188 = 40;
      };
      v_186 = (_out->dir==4);
      if (v_186) {
        v_189 = 30;
      } else {
        v_189 = v_188;
      };
      v_185 = (_out->dir==3);
      if (v_185) {
        v_190 = 0;
      } else {
        v_190 = v_189;
      };
      v_183 = (_out->dir==2);
      if (v_183) {
        v_191 = v_184;
      } else {
        v_191 = v_190;
      };
      v_182 = (_out->dir==0);
      if (v_182) {
        v_l_St_1_Whiteline = 0;
      } else {
        v_l_St_1_Whiteline = v_191;
      };
      _out->st = st_St_1_Whiteline;
      _out->v_l = v_l_St_1_Whiteline;
      _out->v_r = v_r_St_1_Whiteline;
      self->v_164 = error;
      self->v_162 = false;
      self->v_160 = i;
      self->v_158 = false;
      break;
    case Line_follower__St_1_Blackline:
      v_127 = sen[3];
      v_128 = (v_127<800);
      if (v_128) {
        v_129 = 3;
      } else {
        v_129 = 1;
      };
      v_125 = sen[1];
      v_126 = (v_125<800);
      if (v_126) {
        v_130 = 2;
      } else {
        v_130 = v_129;
      };
      v_123 = sen[4];
      v_124 = (v_123<800);
      if (v_124) {
        v_131 = 5;
      } else {
        v_131 = v_130;
      };
      v_121 = sen[0];
      v_122 = (v_121<550);
      if (v_122) {
        dir_St_1_Blackline = 4;
      } else {
        dir_St_1_Blackline = v_131;
      };
      st_St_1_Blackline = 2;
      if (self->v_112) {
        v_113 = true;
      } else {
        v_113 = r_1;
      };
      if (v_113) {
        v_115 = 0;
      } else {
        v_115 = self->v_114;
      };
      if (self->v_108) {
        v_109 = true;
      } else {
        v_109 = r_1;
      };
      v_106 = sen[4];
      v_104 = sen[3];
      v_105 = (v_104*2);
      v_107 = (v_105+v_106);
      v_102 = sen[0];
      v_100 = sen[1];
      v_101 = (v_100*2);
      v_103 = (v_101+v_102);
      error_St_1_Blackline = (v_103-v_107);
      nr_1_St_1_Blackline = false;
      ns_1_St_1_Blackline = Line_follower__St_1_Blackline;
      error = error_St_1_Blackline;
      d_St_1_Blackline = (error-v_115);
      v_111 = (self->v_110+error);
      if (v_109) {
        i_St_1_Blackline = 0;
      } else {
        i_St_1_Blackline = v_111;
      };
      p_St_1_Blackline = error;
      p = p_St_1_Blackline;
      v_116 = (p*Line_follower__kp);
      i = i_St_1_Blackline;
      v_117 = (i*Line_follower__ki);
      v_118 = (v_116+v_117);
      d = d_St_1_Blackline;
      v_119 = (d*Line_follower__kd);
      temp_pid_St_1_Blackline = (v_118+v_119);
      temp_pid = temp_pid_St_1_Blackline;
      v_120 = (temp_pid<0);
      if (v_120) {
        pidvalue_St_1_Blackline = -15;
      } else {
        pidvalue_St_1_Blackline = 15;
      };
      pidvalue = pidvalue_St_1_Blackline;
      v_145 = (60+pidvalue);
      v_134 = (60+pidvalue);
      ns_1 = ns_1_St_1_Blackline;
      nr_1 = nr_1_St_1_Blackline;
      _out->dir = dir_St_1_Blackline;
      v_147 = (_out->dir==5);
      if (v_147) {
        v_148 = 30;
      } else {
        v_148 = 40;
      };
      v_146 = (_out->dir==4);
      if (v_146) {
        v_149 = 90;
      } else {
        v_149 = v_148;
      };
      v_144 = (_out->dir==3);
      if (v_144) {
        v_150 = v_145;
      } else {
        v_150 = v_149;
      };
      v_143 = (_out->dir==2);
      if (v_143) {
        v_151 = 0;
      } else {
        v_151 = v_150;
      };
      v_142 = (_out->dir==6);
      if (v_142) {
        v_r_St_1_Blackline = 60;
      } else {
        v_r_St_1_Blackline = v_151;
      };
      v_137 = (_out->dir==5);
      if (v_137) {
        v_138 = 90;
      } else {
        v_138 = 40;
      };
      v_136 = (_out->dir==4);
      if (v_136) {
        v_139 = 30;
      } else {
        v_139 = v_138;
      };
      v_135 = (_out->dir==3);
      if (v_135) {
        v_140 = 0;
      } else {
        v_140 = v_139;
      };
      v_133 = (_out->dir==2);
      if (v_133) {
        v_141 = v_134;
      } else {
        v_141 = v_140;
      };
      v_132 = (_out->dir==6);
      if (v_132) {
        v_l_St_1_Blackline = 60;
      } else {
        v_l_St_1_Blackline = v_141;
      };
      _out->st = st_St_1_Blackline;
      _out->v_l = v_l_St_1_Blackline;
      _out->v_r = v_r_St_1_Blackline;
      self->v_114 = error;
      self->v_112 = false;
      self->v_110 = i;
      self->v_108 = false;
      break;
    case Line_follower__St_1_Parking:
      if (r_1) {
        pnr = false;
      } else {
        pnr = self->v_99;
      };
      r = pnr;
      if (r_1) {
        ck_2 = Line_follower__St_Line_Follow;
      } else {
        ck_2 = self->v_98;
      };
      d_St_1_Parking = 0;
      i_St_1_Parking = 0;
      p_St_1_Parking = 0;
      pidvalue_St_1_Parking = 0;
      temp_pid_St_1_Parking = 0;
      error_St_1_Parking = 0;
      nr_1_St_1_Parking = false;
      ns_1_St_1_Parking = Line_follower__St_1_Parking;
      error = error_St_1_Parking;
      p = p_St_1_Parking;
      i = i_St_1_Parking;
      d = d_St_1_Parking;
      temp_pid = temp_pid_St_1_Parking;
      pidvalue = pidvalue_St_1_Parking;
      ns_1 = ns_1_St_1_Parking;
      nr_1 = nr_1_St_1_Parking;
      switch (ck_2) {
        case Line_follower__St_Line_Follow:
          v_97 = (self->v_96+1);
          v_93 = (r_1||r);
          r_3 = (right_ir==0);
          v_94 = (v_93||r_3);
          if (self->v_92) {
            v_95 = true;
          } else {
            v_95 = v_94;
          };
          if (v_95) {
            right_timer = 0;
          } else {
            right_timer = v_97;
          };
          v_91 = (self->v_90+1);
          v_87 = (r_1||r);
          r_2 = (left_ir==0);
          v_88 = (v_87||r_2);
          if (self->v_86) {
            v_89 = true;
          } else {
            v_89 = v_88;
          };
          if (v_89) {
            left_timer = 0;
          } else {
            left_timer = v_91;
          };
          st_St_1_Parking_St_Line_Follow = 3;
          v_77 = sen[3];
          v_78 = (v_77<800);
          if (v_78) {
            v_79 = 3;
          } else {
            v_79 = 1;
          };
          v_75 = sen[1];
          v_76 = (v_75<800);
          if (v_76) {
            dir_St_1_Parking_St_Line_Follow = 2;
          } else {
            dir_St_1_Parking_St_Line_Follow = v_79;
          };
          v_72 = (right_timer>Line_follower__thresh);
          if (v_72) {
            v_74 = true;
            v_73 = Line_follower__St_Park_right;
          } else {
            v_74 = false;
            v_73 = Line_follower__St_Line_Follow;
          };
          v_71 = (left_timer>Line_follower__thresh);
          if (v_71) {
            nr_St_Line_Follow = true;
            ns_St_Line_Follow = Line_follower__St_Park_left;
          } else {
            nr_St_Line_Follow = v_74;
            ns_St_Line_Follow = v_73;
          };
          dir_St_1_Parking = dir_St_1_Parking_St_Line_Follow;
          st_St_1_Parking = st_St_1_Parking_St_Line_Follow;
          ns = ns_St_Line_Follow;
          nr = nr_St_Line_Follow;
          break;
        case Line_follower__St_Park_left:
          st_St_1_Parking_St_Park_left = 4;
          v_68 = sen[4];
          v_69 = (v_68>500);
          v_65 = sen[3];
          v_66 = (v_65>500);
          v_62 = sen[2];
          v_63 = (v_62>500);
          v_59 = sen[1];
          v_60 = (v_59>500);
          v_57 = sen[0];
          v_58 = (v_57>500);
          v_61 = (v_58&&v_60);
          v_64 = (v_61&&v_63);
          v_67 = (v_64&&v_66);
          v_70 = (v_67&&v_69);
          if (v_70) {
            v_r_St_1_Parking_St_Park_left = 0;
          } else {
            v_r_St_1_Parking_St_Park_left = 50;
          };
          v_54 = sen[4];
          v_55 = (v_54>500);
          v_51 = sen[3];
          v_52 = (v_51>500);
          v_48 = sen[2];
          v_49 = (v_48>500);
          v_45 = sen[1];
          v_46 = (v_45>500);
          v_43 = sen[0];
          v_44 = (v_43>500);
          v_47 = (v_44&&v_46);
          v_50 = (v_47&&v_49);
          v_53 = (v_50&&v_52);
          v_56 = (v_53&&v_55);
          if (v_56) {
            v_l_St_1_Parking_St_Park_left = 0;
          } else {
            v_l_St_1_Parking_St_Park_left = 25;
          };
          dir_St_1_Parking_St_Park_left = 7;
          nr_St_Park_left = false;
          ns_St_Park_left = Line_follower__St_Park_left;
          dir_St_1_Parking = dir_St_1_Parking_St_Park_left;
          st_St_1_Parking = st_St_1_Parking_St_Park_left;
          ns = ns_St_Park_left;
          nr = nr_St_Park_left;
          break;
        case Line_follower__St_Park_right:
          st_St_1_Parking_St_Park_right = 5;
          v_40 = sen[4];
          v_41 = (v_40>500);
          v_37 = sen[3];
          v_38 = (v_37>500);
          v_34 = sen[2];
          v_35 = (v_34>500);
          v_31 = sen[1];
          v_32 = (v_31>500);
          v_29 = sen[0];
          v_30 = (v_29>500);
          v_33 = (v_30&&v_32);
          v_36 = (v_33&&v_35);
          v_39 = (v_36&&v_38);
          v_42 = (v_39&&v_41);
          if (v_42) {
            v_r_St_1_Parking_St_Park_right = 0;
          } else {
            v_r_St_1_Parking_St_Park_right = 25;
          };
          v_26 = sen[4];
          v_27 = (v_26>500);
          v_23 = sen[3];
          v_24 = (v_23>500);
          v_20 = sen[2];
          v_21 = (v_20>500);
          v_17 = sen[1];
          v_15 = sen[0];
          v_18 = (v_17>500);
          v_16 = (v_15>500);
          v_19 = (v_16&&v_18);
          v_22 = (v_19&&v_21);
          v_25 = (v_22&&v_24);
          v_28 = (v_25&&v_27);
          if (v_28) {
            v_l_St_1_Parking_St_Park_right = 0;
          } else {
            v_l_St_1_Parking_St_Park_right = 50;
          };
          dir_St_1_Parking_St_Park_right = 9;
          nr_St_Park_right = false;
          ns_St_Park_right = Line_follower__St_Park_right;
          dir_St_1_Parking = dir_St_1_Parking_St_Park_right;
          st_St_1_Parking = st_St_1_Parking_St_Park_right;
          ns = ns_St_Park_right;
          nr = nr_St_Park_right;
          break;
        default:
          break;
      };
      _out->dir = dir_St_1_Parking;
      _out->st = st_St_1_Parking;
      switch (ck_2) {
        case Line_follower__St_Line_Follow:
          v_84 = (_out->dir==3);
          if (v_84) {
            v_85 = 40;
          } else {
            v_85 = 40;
          };
          v_83 = (_out->dir==2);
          if (v_83) {
            v_r_St_1_Parking_St_Line_Follow = 10;
          } else {
            v_r_St_1_Parking_St_Line_Follow = v_85;
          };
          v_81 = (_out->dir==3);
          if (v_81) {
            v_82 = 10;
          } else {
            v_82 = 40;
          };
          v_80 = (_out->dir==2);
          if (v_80) {
            v_l_St_1_Parking_St_Line_Follow = 40;
          } else {
            v_l_St_1_Parking_St_Line_Follow = v_82;
          };
          v_l_St_1_Parking = v_l_St_1_Parking_St_Line_Follow;
          v_r_St_1_Parking = v_r_St_1_Parking_St_Line_Follow;
          break;
        case Line_follower__St_Park_right:
          v_l_St_1_Parking = v_l_St_1_Parking_St_Park_right;
          v_r_St_1_Parking = v_r_St_1_Parking_St_Park_right;
          break;
        case Line_follower__St_Park_left:
          v_l_St_1_Parking = v_l_St_1_Parking_St_Park_left;
          v_r_St_1_Parking = v_r_St_1_Parking_St_Park_left;
          break;
        default:
          break;
      };
      _out->v_l = v_l_St_1_Parking;
      _out->v_r = v_r_St_1_Parking;
      self->v_99 = nr;
      self->v_98 = ns;
      break;
    default:
      break;
  };
  self->pnr_1 = nr_1;
  self->ck = ns_1;
  switch (ck_1) {
    case Line_follower__St_1_Parking:
      switch (ck_2) {
        case Line_follower__St_Line_Follow:
          self->v_96 = right_timer;
          self->v_92 = false;
          self->v_90 = left_timer;
          self->v_86 = false;
          break;
        default:
          break;
      };
      break;
    default:
      break;
  };;
}

void Line_follower__main_reset(Line_follower__main_mem* self) {
  Line_follower__line_follower_reset(&self->line_follower);
}

void Line_follower__main_step(long sen0, long sen1, long sen2, long sen3,
                              long sen4, long left_ir, long right_ir,
                              long node_counter,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self) {
  Line_follower__line_follower_out Line_follower__line_follower_out_st;
  
  long sen[5];
  sen[0] = sen0;
  sen[1] = sen1;
  sen[2] = sen2;
  sen[3] = sen3;
  sen[4] = sen4;
  Line_follower__line_follower_step(sen, left_ir, right_ir, node_counter,
                                    &Line_follower__line_follower_out_st,
                                    &self->line_follower);
  _out->v_l = Line_follower__line_follower_out_st.v_l;
  _out->v_r = Line_follower__line_follower_out_st.v_r;
  _out->dir = Line_follower__line_follower_out_st.dir;
  _out->st = Line_follower__line_follower_out_st.st;;
}

