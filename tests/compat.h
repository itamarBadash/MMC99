#ifndef COMPAT_H
#define COMPAT_H

#ifdef _WIN32
#include <direct.h>
#include <io.h>
#else
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#define _mkdir(path) mkdir((path), 0777)
#define _rmdir rmdir
#define _dup dup
#define _dup2 dup2
#define _fileno fileno
#define _close close
#endif

#endif
