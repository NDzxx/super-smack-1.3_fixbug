
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TABLE_SYM = 258,
     QUERY_SYM = 259,
     STRING_SYM = 260,
     OPEN_SECT_SYM = 261,
     CLOSE_SECT_SYM = 262,
     SEMI_SYM = 263,
     TYPE_SYM = 264,
     HAS_RESULT_SET_SYM = 265,
     CLIENT_SYM = 266,
     PARSED_SYM = 267,
     QUERY_BARREL_SYM = 268,
     DICT_SYM = 269,
     SOURCE_SYM = 270,
     SOURCE_TYPE_SYM = 271,
     USER_SYM = 272,
     PASS_SYM = 273,
     DB_SYM = 274,
     HOST_SYM = 275,
     IDENT_SYM = 276,
     NUMBER_SYM = 277,
     DOT_SYM = 278,
     OPEN_PAREN_SYM = 279,
     CLOSE_PAREN_SYM = 280,
     MAIN_SYM = 281,
     COMMA_SYM = 282,
     DOLLAR_SYM = 283,
     EQ_SYM = 284,
     COL_COL_SYM = 285,
     DELIM_SYM = 286,
     FILE_SIZE_EQUIV_SYM = 287,
     CREATE_SYM = 288,
     ALTER_SYM = 289,
     MIN_ROWS_SYM = 290,
     DATA_FILE_SYM = 291,
     GEN_DATA_FILE_SYM = 292,
     PORT_SYM = 293,
     SOCKET_SYM = 294
   };
#endif
/* Tokens.  */
#define TABLE_SYM 258
#define QUERY_SYM 259
#define STRING_SYM 260
#define OPEN_SECT_SYM 261
#define CLOSE_SECT_SYM 262
#define SEMI_SYM 263
#define TYPE_SYM 264
#define HAS_RESULT_SET_SYM 265
#define CLIENT_SYM 266
#define PARSED_SYM 267
#define QUERY_BARREL_SYM 268
#define DICT_SYM 269
#define SOURCE_SYM 270
#define SOURCE_TYPE_SYM 271
#define USER_SYM 272
#define PASS_SYM 273
#define DB_SYM 274
#define HOST_SYM 275
#define IDENT_SYM 276
#define NUMBER_SYM 277
#define DOT_SYM 278
#define OPEN_PAREN_SYM 279
#define CLOSE_PAREN_SYM 280
#define MAIN_SYM 281
#define COMMA_SYM 282
#define DOLLAR_SYM 283
#define EQ_SYM 284
#define COL_COL_SYM 285
#define DELIM_SYM 286
#define FILE_SIZE_EQUIV_SYM 287
#define CREATE_SYM 288
#define ALTER_SYM 289
#define MIN_ROWS_SYM 290
#define DATA_FILE_SYM 291
#define GEN_DATA_FILE_SYM 292
#define PORT_SYM 293
#define SOCKET_SYM 294




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 68 "super-smack-yacc.yy"

  string* str;
  Query* q;
  Query_def_line* q_def_line;
  Dictionary* d;
  Client* c;
  Table_def_line* table_def_line;
  Table_def* table_def;
  Dict_def* dict_def;
  Dict_def_line* dict_def_line;
  Client_def* client_def;
  Client_def_line* client_def_line;
  Main_line* main_line;
  Param_list* param_list;
  int n;
  Val* val;



/* Line 1676 of yacc.c  */
#line 150 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


