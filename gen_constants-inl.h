#if defined(__i386__) || defined(__x86_64__)
#include <asm/prctl.h>
#endif // __i386__ || __x86_64__
#include <errno.h>
#include <fcntl.h>
#include <linux/fs.h>
#include <linux/mman.h>
#include <linux/prctl.h>
#include <linux/sched.h>
#include <linux/serial.h>
#include <linux/termios.h>
#include <stddef.h>
#include <signal.h>
#include <sys/mman.h>
#include <sys/resource.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/types.h>

// These defines use C structures that are not defined in the same headers which
// cause our CPP logic to fail w/undefined identifiers.  Remove them to avoid
// build errors on such broken systems.
#undef BLKTRACESETUP
#undef FS_IOC_FIEMAP
