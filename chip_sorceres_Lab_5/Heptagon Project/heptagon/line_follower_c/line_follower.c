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

void Line_follower__line_follower_step(int sen[5], int left_ir, int right_ir,
                                       int node_counter,
                                       Line_follower__line_follower_out* _out,
                                       Line_follower__line_follower_mem* self) {
  
  int v;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int r_1_St_1_Parking;
  Line_follower__st_1 s_1_St_1_Parking;
  int r_1_St_1_Blackline;
  Line_follower__st_1 s_1_St_1_Blackline;
  int r_1_St_1_Whiteline;
  Line_follower__st_1 s_1_St_1_Whiteline;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_91;
  int v_89;
  int v_88;
  int v_87;
  int r_2;
  int v_97;
  int v_95;
  int v_94;
  int v_93;
  int r_3;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  Line_follower__st v_73;
  int v_72;
  int v_71;
  int left_timer;
  int right_timer;
  int nr_St_Park_right;
  Line_follower__st ns_St_Park_right;
  int st_St_1_Parking_St_Park_right;
  int dir_St_1_Parking_St_Park_right;
  int v_r_St_1_Parking_St_Park_right;
  int v_l_St_1_Parking_St_Park_right;
  int nr_St_Park_left;
  Line_follower__st ns_St_Park_left;
  int st_St_1_Parking_St_Park_left;
  int dir_St_1_Parking_St_Park_left;
  int v_r_St_1_Parking_St_Park_left;
  int v_l_St_1_Parking_St_Park_left;
  int nr_St_Line_Follow;
  Line_follower__st ns_St_Line_Follow;
  int st_St_1_Parking_St_Line_Follow;
  int dir_St_1_Parking_St_Line_Follow;
  int v_r_St_1_Parking_St_Line_Follow;
  int v_l_St_1_Parking_St_Line_Follow;
  Line_follower__st ck_2;
  Line_follower__st ns;
  int r;
  int nr;
  int pnr;
  int v_151;
  int v_150;
  int v_149;
  int v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
  int v_140;
  int v_139;
  int v_138;
  int v_137;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_113;
  int v_111;
  int v_109;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int v_188;
  int v_187;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int v_176;
  int v_175;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v_167;
  int v_166;
  int v_165;
  int v_163;
  int v_161;
  int v_159;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int nr_1_St_1_Parking;
  Line_follower__st_1 ns_1_St_1_Parking;
  int d_St_1_Parking;
  int i_St_1_Parking;
  int p_St_1_Parking;
  int pidvalue_St_1_Parking;
  int temp_pid_St_1_Parking;
  int error_St_1_Parking;
  int st_St_1_Parking;
  int dir_St_1_Parking;
  int v_r_St_1_Parking;
  int v_l_St_1_Parking;
  int nr_1_St_1_Blackline;
  Line_follower__st_1 ns_1_St_1_Blackline;
  int d_St_1_Blackline;
  int i_St_1_Blackline;
  int p_St_1_Blackline;
  int pidvalue_St_1_Blackline;
  int temp_pid_St_1_Blackline;
  int error_St_1_Blackline;
  int st_St_1_Blackline;
  int dir_St_1_Blackline;
  int v_r_St_1_Blackline;
  int v_l_St_1_Blackline;
  int nr_1_St_1_Whiteline;
  Line_follower__st_1 ns_1_St_1_Whiteline;
  int d_St_1_Whiteline;
  int i_St_1_Whiteline;
  int p_St_1_Whiteline;
  int pidvalue_St_1_Whiteline;
  int temp_pid_St_1_Whiteline;
  int error_St_1_Whiteline;
  int st_St_1_Whiteline;
  int dir_St_1_Whiteline;
  int v_r_St_1_Whiteline;
  int v_l_St_1_Whiteline;
  Line_follower__st_1 ck_1;
  Line_follower__st_1 s_1;
  Line_follower__st_1 ns_1;
  int r_1;
  int nr_1;
  int error;
  int temp_pid;
  int pidvalue;
  int p;
  int i;
  int d;
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

void Line_follower__main_step(int sen0, int sen1, int sen2, int sen3,
                              int sen4, int left_ir, int right_ir,
                              int node_counter,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self) {
  Line_follower__line_follower_out Line_follower__line_follower_out_st;
  
  int sen[5];
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

