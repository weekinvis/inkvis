#pragma once 
#ifndef _ftokenizer_h__
#define _ftokenizer_h__

typedef enum token_type_e {
	ADD_TOK,
	SUB_TOK,
	MUL_TOK,
	DIV_TOK,
	POT_TOK,
	SQR_TOK,

	ESQ_TOK,
	DIR_TOK,

	VAR_TOK,
	LIT_TOK,

	EOF_TOK,
	NAN_TOK

} token_type_t;


#endif // _ftokenizer_h__
