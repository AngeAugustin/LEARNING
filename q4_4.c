#ifndef MD5_H
#define MD5_H

#include <sys/types.h>
#ifdef __amigaos4__
#include <machine/endian.h>
#endif

typedef unsigned int uint32;

typedef struct MD5Context {
  uint32 buf[4];
  uint32 bits[2];
  unsigned char in[64];
} MD5_CTX;

extern void MD5Init(struct MD5Context *ctx);
extern void MD5Update(struct MD5Context *ctx, unsigned char *buf,
                      unsigned int len);
extern void MD5Final(unsigned char digest[16], struct MD5Context *ctx);
extern void MD5Transform(uint32 buf[4], uint32 in[16]);
extern char *MD5File(const char *, char *);
extern char *MD5FileChunk(const char *, char *, off_t, off_t);

#endif /* _MD5_H_ */
