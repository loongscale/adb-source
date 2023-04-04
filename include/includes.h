#ifdef _WIN32
#include "win32_adb.h"
#endif

#ifdef _DEBUG
#undef DEBUG
#define DEBUG 1
#endif // _DEBUG

#ifndef   __INCLUDE_APPLINK_C__
#define   __INCLUDE_APPLINK_C__
#include <openssl/applink.c>
#endif

#include <sys/types.h>
#include <sys/stat.h>

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>
#include <errno.h>
#include <stddef.h>
#include <string.h>
#include <time.h>
#include <limits.h>
#include <assert.h>
#include <memory.h>

#ifdef _WIN32
#  define WIN32_LEAN_AND_MEAN
#  include <winsock2.h>
#  include <windows.h>
#  include <winerror.h>
#  include <shlobj.h>
#  include <direct.h>
#else
#  include <unistd.h>
#  include <sys/time.h>
#  include <stdint.h>
#  include <dirent.h>
#  include <netdb.h>
#  include <sys/socket.h>
#endif

// WDK
#include <usb100.h>

// include
#include <cutils/list.h>
#include <zipfile/zipfile.h>

// zlib
#include <zlib.h>

#include <openssl/evp.h>
#include <openssl/objects.h>
#include <openssl/pem.h>
#include <openssl/rsa.h>
#include <openssl/sha.h>

#include "sysdeps.h"