
#define PHYBLK  512
#define BSIZE   2   /* (*512) */
#define BLK     (BSIZE*PHYBLK)
#define PAGE    0x1000
#define LO_MEM  (0x300000)  /* kernel locates in 0~LO_MEM */
#define HI_MEM  0x1000000
#define ROOTINO 1

#define NSYSC   64
#define NPROC   64
#define NSEG    (4+NPROC+1)
#define NBUF    (0x200000/BLK/BSIZE) /* buffers take 2mb */
#define NBLKDEV 2
#define NINODE  128
#define NMOUNT  16
#define NPAGE   ((HI_MEM-LO_MEM)/PAGE)

typedef unsigned char   uchar;
typedef unsigned short  ushort;
typedef unsigned int    uint;

#define NULL ((void*)0)
