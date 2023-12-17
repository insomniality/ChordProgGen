#pragma once

// #define SYSTEM 13	// starting from 1
#define SYSTEM 12		// starting from 0
#define SYS SYSTEM

//
#define C SYS - 12 // + 3	// + 3 if You want A to be the first
#define Cb (C - 1) % SYS
#define C$ (C + 1) % SYS

#define D (C + 2) % SYS
#define Db (D - 1) % SYS
#define D$ (D + 1) % SYS

#define E (D + 2) % SYS
#define Eb (E - 1) % SYS
#define E$ (E + 1) % SYS

#define F (E + 1) % SYS
#define Fb (F - 1) % SYS
#define F$ (F + 1) % SYS

#define G (F + 2) % SYS
#define Gb (G - 1) % SYS
#define G$ (G + 1) % SYS

//
#define A (G + 2) % SYS
#define Ab (A - 1) % SYS
#define A$ (A + 1) % SYS

#define B (A + 2) % SYS
#define Bb (B - 1) % SYS
#define B$ (B + 1) % SYS
