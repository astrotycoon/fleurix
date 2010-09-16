/**
 *
 * Constants and blah~
 *
 * _Fleurer<me.ssword@gmail.com>
 * */ 

#ifndef PARAM_H
#define PARAM_H

typedef unsigned char   uchar;
typedef unsigned short  ushort;
typedef unsigned int    uint;

#define NULL ((void*)0)

#define NSYSC 64
#define NPROC 64
#define NSEG  (4+NPROC+1)

#define PSIZE 0x1000
#define NFRAME ((HI_MEM-LO_MEM)/PSIZE)


#define KERN_CS 0x08
#define KERN_DS 0x10
#define USER_CS (0x08|3)
#define USER_CS (0x10|3)

#define TSS0 5
#define _TSS (TSS0<<3)
#define LDT0 (TSS0+1)
#define _LDT(n) ((LDT0+n)<<3)

// Kernel is 1mb, which locates in 0~LO_MEM
// main Mem(which procs live in) is 16mb, locates in LO_MEM~HI_MEM 
#define LO_MEM 0x100000
#define HI_MEM 0x1000000

#endif