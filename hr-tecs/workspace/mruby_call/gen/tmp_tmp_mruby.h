/*  1 "gen/tmp_C_src.c" */
/*  1 "<built-in>" */
/*  1 "<command-line>" */
/*  1 "gen/tmp_C_src.c" */
/*  34 "gen/tmp_C_src.c" */
typedef struct { int dummy; } va_list;

/*  1 "gen/tmp_mruby.h" 1 */
/*  11 "gen/tmp_mruby.h" */
typedef struct { int dummy; } va_list;
/*  49 "gen/tmp_mruby.h" */
typedef signed char __int8_t;

typedef unsigned char __uint8_t;


typedef short int __int16_t;

typedef short unsigned int __uint16_t;


typedef long int __int32_t;

typedef long unsigned int __uint32_t;


typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;


typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;


typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;


typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;


typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;


typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
/*  136 "gen/tmp_mruby.h" */
typedef __int8_t int8_t ;



typedef __uint8_t uint8_t ;







typedef __int16_t int16_t ;



typedef __uint16_t uint16_t ;







typedef __int32_t int32_t ;



typedef __uint32_t uint32_t ;







typedef __int64_t int64_t ;



typedef __uint64_t uint64_t ;






typedef __intmax_t intmax_t;




typedef __uintmax_t uintmax_t;




typedef __intptr_t intptr_t;




typedef __uintptr_t uintptr_t;
/*  207 "gen/tmp_mruby.h" */
typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;


  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;


  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;


  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;


  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
/*  251 "gen/tmp_mruby.h" */
typedef int ptrdiff_t;


typedef unsigned int size_t;


typedef unsigned int wchar_t;


typedef struct {
  long long __max_align_ll ;
  long double __max_align_ld ;
} max_align_t;
/*  359 "gen/tmp_mruby.h" */
typedef


       va_list


                         __gnuc_va_list;







typedef __gnuc_va_list va_list;
/*  400 "gen/tmp_mruby.h" */
struct __lock;
typedef struct __lock * _LOCK_T;






extern void __retarget_lock_init(_LOCK_T *lock);

extern void __retarget_lock_init_recursive(_LOCK_T *lock);

extern void __retarget_lock_close(_LOCK_T lock);

extern void __retarget_lock_close_recursive(_LOCK_T lock);

extern void __retarget_lock_acquire(_LOCK_T lock);

extern void __retarget_lock_acquire_recursive(_LOCK_T lock);

extern int __retarget_lock_try_acquire(_LOCK_T lock);

extern int __retarget_lock_try_acquire_recursive(_LOCK_T lock);


extern void __retarget_lock_release(_LOCK_T lock);

extern void __retarget_lock_release_recursive(_LOCK_T lock);




typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;


typedef __uint32_t __mode_t;





 typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;


typedef unsigned int __size_t;


typedef signed int _ssize_t;


typedef _ssize_t __ssize_t;






typedef unsigned int wint_t;





typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;



typedef _LOCK_T _flock_t;




typedef void *_iconv_t;



typedef unsigned long __clock_t;


typedef long __time_t;


typedef unsigned long __clockid_t;


typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;


typedef


       va_list


                         __va_list;
/*  588 "gen/tmp_mruby.h" */
typedef unsigned long __ULong;


struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};


struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};


struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (* _read) (struct _reent *, void *, char *, int)
                                          ;
  int (* _write) (struct _reent *, void *, const char *, int)

                                   ;
  _fpos_t (* _seek) (struct _reent *, void *, _fpos_t, int);
  int (* _close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};


typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};


struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};


struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (* __cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;
  __FILE __sf[3];
};


extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);






typedef __uint8_t u_int8_t;


typedef __uint16_t u_int16_t;


typedef __uint32_t u_int32_t;


typedef __uint64_t u_int64_t;

typedef int register_t;
/*  863 "gen/tmp_mruby.h" */
typedef unsigned long __sigset_t;






typedef __suseconds_t suseconds_t;




typedef long time_t;


struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};
/*  892 "gen/tmp_mruby.h" */
struct timespec {
 time_t tv_sec;
 long tv_nsec;
};




struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};





typedef __sigset_t sigset_t;


typedef unsigned long fd_mask;







typedef struct _types_fd_set {
 fd_mask fds_bits[(((64)+(((sizeof (fd_mask) * 8))-1))/((sizeof (fd_mask) * 8)))];
} _types_fd_set;




int select (int __n, _types_fd_set *__readfds, _types_fd_set *__writefds, _types_fd_set *__exceptfds, struct timeval *__timeout)
                                                   ;

int pselect (int __n, _types_fd_set *__readfds, _types_fd_set *__writefds, _types_fd_set *__exceptfds, const struct timespec *__timeout, const sigset_t *__set)

                           ;
/*  942 "gen/tmp_mruby.h" */
typedef __uint32_t in_addr_t;




typedef __uint16_t in_port_t;


typedef unsigned char u_char;



typedef unsigned short u_short;



typedef unsigned int u_int;



typedef unsigned long u_long;







typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;



typedef __blkcnt_t blkcnt_t;




typedef __blksize_t blksize_t;




typedef unsigned long clock_t;


typedef long daddr_t;



typedef char * caddr_t;




typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;




typedef __id_t id_t;




typedef __ino_t ino_t;


typedef __off_t off_t;



typedef __dev_t dev_t;



typedef __uid_t uid_t;



typedef __gid_t gid_t;




typedef __pid_t pid_t;




typedef __key_t key_t;




typedef _ssize_t ssize_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __clockid_t clockid_t;





typedef __timer_t timer_t;





typedef __useconds_t useconds_t;


typedef __int64_t sbintime_t;
/*  1086 "gen/tmp_mruby.h" */
typedef __FILE FILE;






typedef _fpos_t fpos_t;
/*  1105 "gen/tmp_mruby.h" */
char * ctermid (char *);




FILE * tmpfile (void);
char * tmpnam (char *);

char * tempnam (const char *, const char *);

int fclose (FILE *);
int fflush (FILE *);
FILE * freopen (const char *, const char *, FILE *);
void setbuf (FILE *, char *);
int setvbuf (FILE *, char *, int, size_t);
int fprintf (FILE *, const char *, ...)
                                                            ;
int fscanf (FILE *, const char *, ...)
                                                           ;
int printf (const char *, ...)
                                                            ;
int scanf (const char *, ...)
                                                           ;
int sscanf (const char *, const char *, ...)
                                                           ;
int vfprintf (FILE *, const char *, __gnuc_va_list)
                                                            ;
int vprintf (const char *, __gnuc_va_list)
                                                            ;
int vsprintf (char *, const char *, __gnuc_va_list)
                                                            ;
int fgetc (FILE *);
char * fgets (char *, int, FILE *);
int fputc (int, FILE *);
int fputs (const char *, FILE *);
int getc (FILE *);
int getchar (void);
char * gets (char *);
int putc (int, FILE *);
int putchar (int);
int puts (const char *);
int ungetc (int, FILE *);
size_t fread (void * , size_t _size, size_t _n, FILE *);
size_t fwrite (const void * , size_t _size, size_t _n, FILE *);



int fgetpos (FILE *, fpos_t *);

int fseek (FILE *, long, int);



int fsetpos (FILE *, const fpos_t *);

long ftell ( FILE *);
void rewind (FILE *);
void clearerr (FILE *);
int feof (FILE *);
int ferror (FILE *);
void perror (const char *);

FILE * fopen (const char * _name, const char * _type);
int sprintf (char *, const char *, ...)
                                                            ;
int remove (const char *);
int rename (const char *, const char *);


int fseeko (FILE *, off_t, int);
off_t ftello ( FILE *);







int snprintf (char *, size_t, const char *, ...)
                                                            ;
int vsnprintf (char *, size_t, const char *, __gnuc_va_list)
                                                            ;
int vfscanf (FILE *, const char *, __gnuc_va_list)
                                                           ;
int vscanf (const char *, __gnuc_va_list)
                                                           ;
int vsscanf (const char *, const char *, __gnuc_va_list)
                                                           ;


int asiprintf (char **, const char *, ...)
                                                            ;
char * asniprintf (char *, size_t *, const char *, ...)
                                                            ;
char * asnprintf (char *, size_t *, const char *, ...)
                                                            ;

int diprintf (int, const char *, ...)
                                                            ;

int fiprintf (FILE *, const char *, ...)
                                                            ;
int fiscanf (FILE *, const char *, ...)
                                                           ;
int iprintf (const char *, ...)
                                                            ;
int iscanf (const char *, ...)
                                                           ;
int siprintf (char *, const char *, ...)
                                                            ;
int siscanf (const char *, const char *, ...)
                                                           ;
int sniprintf (char *, size_t, const char *, ...)
                                                            ;
int vasiprintf (char **, const char *, __gnuc_va_list)
                                                            ;
char * vasniprintf (char *, size_t *, const char *, __gnuc_va_list)
                                                            ;
char * vasnprintf (char *, size_t *, const char *, __gnuc_va_list)
                                                            ;
int vdiprintf (int, const char *, __gnuc_va_list)
                                                            ;
int vfiprintf (FILE *, const char *, __gnuc_va_list)
                                                            ;
int vfiscanf (FILE *, const char *, __gnuc_va_list)
                                                           ;
int viprintf (const char *, __gnuc_va_list)
                                                            ;
int viscanf (const char *, __gnuc_va_list)
                                                           ;
int vsiprintf (char *, const char *, __gnuc_va_list)
                                                            ;
int vsiscanf (const char *, const char *, __gnuc_va_list)
                                                           ;
int vsniprintf (char *, size_t, const char *, __gnuc_va_list)
                                                            ;


FILE * fdopen (int, const char *);

int fileno (FILE *);


int pclose (FILE *);
FILE * popen (const char *, const char *);



void setbuffer (FILE *, char *, int);
int setlinebuf (FILE *);



int getw (FILE *);
int putw (int, FILE *);


int getc_unlocked (FILE *);
int getchar_unlocked (void);
void flockfile (FILE *);
int ftrylockfile (FILE *);
void funlockfile (FILE *);
int putc_unlocked (int, FILE *);
int putchar_unlocked (int);


int dprintf (int, const char *, ...)
                                                            ;

FILE * fmemopen (void *, size_t, const char *);


FILE * open_memstream (char **, size_t *);
int vdprintf (int, const char *, __gnuc_va_list)
                                                            ;



int renameat (int, const char *, int, const char *);






int _asiprintf_r (struct _reent *, char **, const char *, ...)
                                                            ;
char * _asniprintf_r (struct _reent *, char *, size_t *, const char *, ...)
                                                            ;
char * _asnprintf_r (struct _reent *, char *, size_t *, const char *, ...)
                                                            ;
int _asprintf_r (struct _reent *, char **, const char *, ...)
                                                            ;
int _diprintf_r (struct _reent *, int, const char *, ...)
                                                            ;
int _dprintf_r (struct _reent *, int, const char *, ...)
                                                            ;
int _fclose_r (struct _reent *, FILE *);
int _fcloseall_r (struct _reent *);
FILE * _fdopen_r (struct _reent *, int, const char *);
int _fflush_r (struct _reent *, FILE *);
int _fgetc_r (struct _reent *, FILE *);
int _fgetc_unlocked_r (struct _reent *, FILE *);
char * _fgets_r (struct _reent *, char *, int, FILE *);
char * _fgets_unlocked_r (struct _reent *, char *, int, FILE *);




int _fgetpos_r (struct _reent *, FILE *, fpos_t *);
int _fsetpos_r (struct _reent *, FILE *, const fpos_t *);

int _fiprintf_r (struct _reent *, FILE *, const char *, ...)
                                                            ;
int _fiscanf_r (struct _reent *, FILE *, const char *, ...)
                                                           ;
FILE * _fmemopen_r (struct _reent *, void *, size_t, const char *);
FILE * _fopen_r (struct _reent *, const char *, const char *);
FILE * _freopen_r (struct _reent *, const char *, const char *, FILE *);
int _fprintf_r (struct _reent *, FILE *, const char *, ...)
                                                            ;
int _fpurge_r (struct _reent *, FILE *);
int _fputc_r (struct _reent *, int, FILE *);
int _fputc_unlocked_r (struct _reent *, int, FILE *);
int _fputs_r (struct _reent *, const char *, FILE *);
int _fputs_unlocked_r (struct _reent *, const char *, FILE *);
size_t _fread_r (struct _reent *, void * , size_t _size, size_t _n, FILE *);
size_t _fread_unlocked_r (struct _reent *, void * , size_t _size, size_t _n, FILE *);
int _fscanf_r (struct _reent *, FILE *, const char *, ...)
                                                           ;
int _fseek_r (struct _reent *, FILE *, long, int);
int _fseeko_r (struct _reent *, FILE *, _off_t, int);
long _ftell_r (struct _reent *, FILE *);
_off_t _ftello_r (struct _reent *, FILE *);
void _rewind_r (struct _reent *, FILE *);
size_t _fwrite_r (struct _reent *, const void * , size_t _size, size_t _n, FILE *);
size_t _fwrite_unlocked_r (struct _reent *, const void * , size_t _size, size_t _n, FILE *);
int _getc_r (struct _reent *, FILE *);
int _getc_unlocked_r (struct _reent *, FILE *);
int _getchar_r (struct _reent *);
int _getchar_unlocked_r (struct _reent *);
char * _gets_r (struct _reent *, char *);
int _iprintf_r (struct _reent *, const char *, ...)
                                                            ;
int _iscanf_r (struct _reent *, const char *, ...)
                                                           ;
FILE * _open_memstream_r (struct _reent *, char **, size_t *);
void _perror_r (struct _reent *, const char *);
int _printf_r (struct _reent *, const char *, ...)
                                                            ;
int _putc_r (struct _reent *, int, FILE *);
int _putc_unlocked_r (struct _reent *, int, FILE *);
int _putchar_unlocked_r (struct _reent *, int);
int _putchar_r (struct _reent *, int);
int _puts_r (struct _reent *, const char *);
int _remove_r (struct _reent *, const char *);
int _rename_r (struct _reent *, const char *_old, const char *_new)
                                          ;
int _scanf_r (struct _reent *, const char *, ...)
                                                           ;
int _siprintf_r (struct _reent *, char *, const char *, ...)
                                                            ;
int _siscanf_r (struct _reent *, const char *, const char *, ...)
                                                           ;
int _sniprintf_r (struct _reent *, char *, size_t, const char *, ...)
                                                            ;
int _snprintf_r (struct _reent *, char *, size_t, const char *, ...)
                                                            ;
int _sprintf_r (struct _reent *, char *, const char *, ...)
                                                            ;
int _sscanf_r (struct _reent *, const char *, const char *, ...)
                                                           ;
char * _tempnam_r (struct _reent *, const char *, const char *);
FILE * _tmpfile_r (struct _reent *);
char * _tmpnam_r (struct _reent *, char *);
int _ungetc_r (struct _reent *, int, FILE *);
int _vasiprintf_r (struct _reent *, char **, const char *, __gnuc_va_list)
                                                            ;
char * _vasniprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list)
                                                            ;
char * _vasnprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list)
                                                            ;
int _vasprintf_r (struct _reent *, char **, const char *, __gnuc_va_list)
                                                            ;
int _vdiprintf_r (struct _reent *, int, const char *, __gnuc_va_list)
                                                            ;
int _vdprintf_r (struct _reent *, int, const char *, __gnuc_va_list)
                                                            ;
int _vfiprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
                                                            ;
int _vfiscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
                                                           ;
int _vfprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
                                                            ;
int _vfscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
                                                           ;
int _viprintf_r (struct _reent *, const char *, __gnuc_va_list)
                                                            ;
int _viscanf_r (struct _reent *, const char *, __gnuc_va_list)
                                                           ;
int _vprintf_r (struct _reent *, const char *, __gnuc_va_list)
                                                            ;
int _vscanf_r (struct _reent *, const char *, __gnuc_va_list)
                                                           ;
int _vsiprintf_r (struct _reent *, char *, const char *, __gnuc_va_list)
                                                            ;
int _vsiscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list)
                                                           ;
int _vsniprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list)
                                                            ;
int _vsnprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list)
                                                            ;
int _vsprintf_r (struct _reent *, char *, const char *, __gnuc_va_list)
                                                            ;
int _vsscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list)
                                                           ;



int fpurge (FILE *);
ssize_t __getdelim (char **, size_t *, int, FILE *);
ssize_t __getline (char **, size_t *, FILE *);


void clearerr_unlocked (FILE *);
int feof_unlocked (FILE *);
int ferror_unlocked (FILE *);
int fileno_unlocked (FILE *);
int fflush_unlocked (FILE *);
int fgetc_unlocked (FILE *);
int fputc_unlocked (int, FILE *);
size_t fread_unlocked (void * , size_t _size, size_t _n, FILE *);
size_t fwrite_unlocked (const void * , size_t _size, size_t _n, FILE *);


int __srget_r (struct _reent *, FILE *);
int __swbuf_r (struct _reent *, int, FILE *);


FILE *funopen (const void * __cookie, int (*__readfn)(void * __cookie, char *__buf, int __n), int (*__writefn)(void * __cookie, const char *__buf, int __n), fpos_t (*__seekfn)(void * __cookie, fpos_t __off, int __whence), int (*__closefn)(void * __cookie))





                                   ;
FILE *_funopen_r (struct _reent *, const void * __cookie, int (*__readfn)(void * __cookie, char *__buf, int __n), int (*__writefn)(void * __cookie, const char *__buf, int __n), fpos_t (*__seekfn)(void * __cookie, fpos_t __off, int __whence), int (*__closefn)(void * __cookie))





                                   ;


static __inline__ int __sputc_r(struct _reent *_ptr, int _c, FILE *_p) {




 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf_r(_ptr, _c, _p));
}
/*  1506 "gen/tmp_mruby.h" */
typedef uint32_t mrb_sym;
typedef uint8_t mrb_bool;
struct mrb_state;
/*  1524 "gen/tmp_mruby.h" */
typedef struct {
  intmax_t quot;
  intmax_t rem;
} imaxdiv_t;





extern intmax_t imaxabs(intmax_t j);
extern imaxdiv_t imaxdiv(intmax_t numer, intmax_t denomer);
extern intmax_t strtoimax(const char *, char **, int);
extern uintmax_t strtoumax(const char *, char **, int);
extern intmax_t wcstoimax(const wchar_t *, wchar_t **, int);
extern uintmax_t wcstoumax(const wchar_t *, wchar_t **, int);







 typedef int32_t mrb_int;


extern double mrb_float_read(const char*, char**);



  typedef double mrb_float;


enum mrb_vtype {
  MRB_TT_FALSE = 0,
  MRB_TT_FREE,
  MRB_TT_TRUE,
  MRB_TT_FIXNUM,
  MRB_TT_SYMBOL,
  MRB_TT_UNDEF,
  MRB_TT_FLOAT,
  MRB_TT_CPTR,
  MRB_TT_OBJECT,
  MRB_TT_CLASS,
  MRB_TT_MODULE,
  MRB_TT_ICLASS,
  MRB_TT_SCLASS,
  MRB_TT_PROC,
  MRB_TT_ARRAY,
  MRB_TT_HASH,
  MRB_TT_STRING,
  MRB_TT_RANGE,
  MRB_TT_EXCEPTION,
  MRB_TT_FILE,
  MRB_TT_ENV,
  MRB_TT_DATA,
  MRB_TT_FIBER,
  MRB_TT_ISTRUCT,
  MRB_TT_BREAK,
  MRB_TT_MAXDEFINE
};





struct RBasic {
  enum mrb_vtype tt:8; uint32_t color:3; uint32_t flags:21; struct RClass *c; struct RBasic *gcnext;
};







struct RObject {
  enum mrb_vtype tt:8; uint32_t color:3; uint32_t flags:21; struct RClass *c; struct RBasic *gcnext;
  struct iv_tbl *iv;
};





struct RFiber {
  enum mrb_vtype tt:8; uint32_t color:3; uint32_t flags:21; struct RClass *c; struct RBasic *gcnext;
  struct mrb_context *cxt;
};
/*  1620 "gen/tmp_mruby.h" */
typedef struct mrb_value {
  union {

    mrb_float f;

    void *p;
    mrb_int i;
    mrb_sym sym;
  } value;
  enum mrb_vtype tt;
} mrb_value;




extern mrb_bool mrb_regexp_p(struct mrb_state*, mrb_value);





static inline mrb_value mrb_float_value(struct mrb_state *mrb, mrb_float f)
{
  mrb_value v;
  (void) mrb;
  do { (v).tt = MRB_TT_FLOAT; (v).value.f = (f);} while (0);
  return v;
}


static inline mrb_value
mrb_cptr_value(struct mrb_state *mrb, void *p)
{
  mrb_value v;
  (void) mrb;
  do { (v).tt = MRB_TT_CPTR; (v).value.p = p;} while (0);
  return v;
}




static inline mrb_value mrb_fixnum_value(mrb_int i)
{
  mrb_value v;
  do { (v).tt = MRB_TT_FIXNUM; (v).value.i = (i);} while (0);
  return v;
}

static inline mrb_value
mrb_symbol_value(mrb_sym i)
{
  mrb_value v;
  do { (v).tt = MRB_TT_SYMBOL; (v).value.sym = (i);} while (0);
  return v;
}

static inline mrb_value
mrb_obj_value(void *p)
{
  mrb_value v;
  do { (v).tt = (((struct RObject*)((struct RBasic*)p))->tt); (v).value.p = ((struct RBasic*)p);} while (0);
  ((void)0);
  ((void)0);
  return v;
}


static inline mrb_value mrb_nil_value(void)
{
  mrb_value v;
  do { (v).tt = MRB_TT_FALSE; (v).value.i = 0;} while (0);
  return v;
}




static inline mrb_value mrb_false_value(void)
{
  mrb_value v;
  do { (v).tt = MRB_TT_FALSE; (v).value.i = 1;} while (0);
  return v;
}




static inline mrb_value mrb_true_value(void)
{
  mrb_value v;
  do { (v).tt = MRB_TT_TRUE; (v).value.i = 1;} while (0);
  return v;
}

static inline mrb_value
mrb_bool_value(mrb_bool boolean)
{
  mrb_value v;
  do { (v).tt = boolean ? MRB_TT_TRUE : MRB_TT_FALSE; (v).value.i = 1;} while (0);
  return v;
}

static inline mrb_value
mrb_undef_value(void)
{
  mrb_value v;
  do { (v).tt = MRB_TT_UNDEF; (v).value.i = 0;} while (0);
  return v;
}
/*  1742 "gen/tmp_mruby.h" */
struct mrb_state;



typedef int (mrb_each_object_callback)(struct mrb_state *mrb, struct RBasic *obj, void *data);
void mrb_objspace_each_objects(struct mrb_state *mrb, mrb_each_object_callback *callback, void *data);
extern void mrb_free_context(struct mrb_state *mrb, struct mrb_context *c);





typedef enum {
  MRB_GC_STATE_ROOT = 0,
  MRB_GC_STATE_MARK,
  MRB_GC_STATE_SWEEP
} mrb_gc_state;


typedef struct mrb_heap_page {
  struct RBasic *freelist;
  struct mrb_heap_page *prev;
  struct mrb_heap_page *next;
  struct mrb_heap_page *free_next;
  struct mrb_heap_page *free_prev;
  mrb_bool old:1;
  void *objects[];
} mrb_heap_page;





typedef struct mrb_gc {
  mrb_heap_page *heaps;
  mrb_heap_page *sweeps;
  mrb_heap_page *free_heaps;
  size_t live;



  struct RBasic **arena;
  int arena_capa;

  int arena_idx;

  mrb_gc_state state;
  int current_white_part;
  struct RBasic *gray_list;
  struct RBasic *atomic_gray_list;
  size_t live_after_mark;
  size_t threshold;
  int interval_ratio;
  int step_ratio;
  mrb_bool iterating :1;
  mrb_bool disabled :1;
  mrb_bool full :1;
  mrb_bool generational :1;
  mrb_bool out_of_memory :1;
  size_t majorgc_old_threshold;
} mrb_gc;

extern mrb_bool
mrb_object_dead_p(struct mrb_state *mrb, struct RBasic *object);
/*  1826 "gen/tmp_mruby.h" */
typedef uint8_t mrb_code;




typedef uint32_t mrb_aspec;


struct mrb_irep;
struct mrb_state;


typedef void* (*mrb_allocf) (struct mrb_state *mrb, void*, size_t, void *ud);





typedef struct {
  mrb_sym mid;
  struct RProc *proc;
  mrb_value *stackent;
  uint16_t ridx;
  uint16_t epos;
  struct REnv *env;
  mrb_code *pc;
  mrb_code *err;
  int argc;
  int acc;
  struct RClass *target_class;
} mrb_callinfo;

enum mrb_fiber_state {
  MRB_FIBER_CREATED = 0,
  MRB_FIBER_RUNNING,
  MRB_FIBER_RESUMED,
  MRB_FIBER_SUSPENDED,
  MRB_FIBER_TRANSFERRED,
  MRB_FIBER_TERMINATED,
};

struct mrb_context {
  struct mrb_context *prev;

  mrb_value *stack;
  mrb_value *stbase, *stend;

  mrb_callinfo *ci;
  mrb_callinfo *cibase, *ciend;

  uint16_t *rescue;
  uint16_t rsize;
  struct RProc **ensure;
  uint16_t esize, eidx;

  enum mrb_fiber_state status;
  mrb_bool vmexec;
  struct RFiber *fib;
};


typedef mrb_value (*mrb_func_t)(struct mrb_state *mrb, mrb_value);




typedef struct {
  mrb_bool func_p;
  union {
    struct RProc *proc;
    mrb_func_t func;
  };
} mrb_method_t;


struct mrb_jmpbuf;

typedef void (*mrb_atexit_func)(struct mrb_state*);




typedef struct mrb_state {
  struct mrb_jmpbuf *jmp;

  uint32_t flags;
  mrb_allocf allocf;
  void *allocf_ud;

  struct mrb_context *c;
  struct mrb_context *root_c;
  struct iv_tbl *globals;

  struct RObject *exc;

  struct RObject *top_self;
  struct RClass *object_class;
  struct RClass *class_class;
  struct RClass *module_class;
  struct RClass *proc_class;
  struct RClass *string_class;
  struct RClass *array_class;
  struct RClass *hash_class;
  struct RClass *range_class;


  struct RClass *float_class;

  struct RClass *fixnum_class;
  struct RClass *true_class;
  struct RClass *false_class;
  struct RClass *nil_class;
  struct RClass *symbol_class;
  struct RClass *kernel_module;

  struct alloca_header *mems;
  mrb_gc gc;





  mrb_sym symidx;
  struct kh_n2s *name2sym;
  struct symbol_name *symtbl;
  size_t symcapa;


  struct RClass *eException_class;
  struct RClass *eStandardError_class;
  struct RObject *nomem_err;
  struct RObject *stack_err;




  void *ud;




  mrb_atexit_func *atexit_stack;

  uint16_t atexit_stack_len;
  uint16_t ecall_nest;
} mrb_state;


extern struct RClass *mrb_define_class(mrb_state *mrb, const char *name, struct RClass *super);


extern struct RClass *mrb_define_module(mrb_state *, const char*);
extern mrb_value mrb_singleton_class(mrb_state*, mrb_value);


extern void mrb_include_module(mrb_state*, struct RClass*, struct RClass*);


extern void mrb_prepend_module(mrb_state*, struct RClass*, struct RClass*);


extern void mrb_define_method(mrb_state *mrb, struct RClass *cla, const char *name, mrb_func_t func, mrb_aspec aspec);


extern void mrb_define_class_method(mrb_state *, struct RClass *, const char *, mrb_func_t, mrb_aspec);
extern void mrb_define_singleton_method(mrb_state*, struct RObject*, const char*, mrb_func_t, mrb_aspec);


extern void mrb_define_module_function(mrb_state*, struct RClass*, const char*, mrb_func_t, mrb_aspec);


extern void mrb_define_const(mrb_state*, struct RClass*, const char *name, mrb_value);


extern void mrb_undef_method(mrb_state*, struct RClass*, const char*);
extern void mrb_undef_method_id(mrb_state*, struct RClass*, mrb_sym);


extern void mrb_undef_class_method(mrb_state*, struct RClass*, const char*);


extern mrb_value mrb_obj_new(mrb_state *mrb, struct RClass *c, mrb_int argc, const mrb_value *argv);


static inline mrb_value mrb_class_new_instance(mrb_state *mrb, mrb_int argc, const mrb_value *argv, struct RClass *c)
{
  return mrb_obj_new(mrb,c,argc,argv);
}

extern mrb_value mrb_instance_new(mrb_state *mrb, mrb_value cv);


extern struct RClass * mrb_class_new(mrb_state *mrb, struct RClass *super);


extern struct RClass * mrb_module_new(mrb_state *mrb);


extern mrb_bool mrb_class_defined(mrb_state *mrb, const char *name);







extern struct RClass * mrb_class_get(mrb_state *mrb, const char *name);







extern struct RClass * mrb_exc_get(mrb_state *mrb, const char *name);


extern mrb_bool mrb_class_defined_under(mrb_state *mrb, struct RClass *outer, const char *name);


extern struct RClass * mrb_class_get_under(mrb_state *mrb, struct RClass *outer, const char *name);







extern struct RClass * mrb_module_get(mrb_state *mrb, const char *name);


extern struct RClass * mrb_module_get_under(mrb_state *mrb, struct RClass *outer, const char *name);
extern mrb_value mrb_notimplement_m(mrb_state*, mrb_value);


extern mrb_value mrb_obj_dup(mrb_state *mrb, mrb_value obj);


extern mrb_bool mrb_obj_respond_to(mrb_state *mrb, struct RClass* c, mrb_sym mid);


extern struct RClass * mrb_define_class_under(mrb_state *mrb, struct RClass *outer, const char *name, struct RClass *super);

extern struct RClass * mrb_define_module_under(mrb_state *mrb, struct RClass *outer, const char *name);


typedef const char *mrb_args_format;


extern mrb_int mrb_get_args(mrb_state *mrb, mrb_args_format format, ...);

static inline mrb_sym
mrb_get_mid(mrb_state *mrb)
{
  return mrb->c->ci->mid;
}






extern mrb_int mrb_get_argc(mrb_state *mrb);

extern mrb_value* mrb_get_argv(mrb_state *mrb);


extern mrb_value mrb_funcall(mrb_state*, mrb_value, const char*, mrb_int,...);


extern mrb_value mrb_funcall_argv(mrb_state*, mrb_value, mrb_sym, mrb_int, const mrb_value*);



extern mrb_value mrb_funcall_with_block(mrb_state*, mrb_value, mrb_sym, mrb_int, const mrb_value*, mrb_value);


extern mrb_sym mrb_intern_cstr(mrb_state*,const char*);
extern mrb_sym mrb_intern(mrb_state*,const char*,size_t);
extern mrb_sym mrb_intern_static(mrb_state*,const char*,size_t);

extern mrb_sym mrb_intern_str(mrb_state*,mrb_value);
extern mrb_value mrb_check_intern_cstr(mrb_state*,const char*);
extern mrb_value mrb_check_intern(mrb_state*,const char*,size_t);
extern mrb_value mrb_check_intern_str(mrb_state*,mrb_value);
extern const char *mrb_sym2name(mrb_state*,mrb_sym);
extern const char *mrb_sym2name_len(mrb_state*,mrb_sym,mrb_int*);
extern mrb_value mrb_sym2str(mrb_state*,mrb_sym);

extern void *mrb_malloc(mrb_state*, size_t);
extern void *mrb_calloc(mrb_state*, size_t, size_t);
extern void *mrb_realloc(mrb_state*, void*, size_t);
extern void *mrb_realloc_simple(mrb_state*, void*, size_t);
extern void *mrb_malloc_simple(mrb_state*, size_t);
extern struct RBasic *mrb_obj_alloc(mrb_state*, enum mrb_vtype, struct RClass*);
extern void mrb_free(mrb_state*, void*);

extern mrb_value mrb_str_new(mrb_state *mrb, const char *p, size_t len);




extern mrb_value mrb_str_new_cstr(mrb_state*, const char*);
extern mrb_value mrb_str_new_static(mrb_state *mrb, const char *p, size_t len);


extern mrb_state* mrb_open(void);


extern mrb_state* mrb_open_allocf(mrb_allocf f, void *ud);


extern mrb_state* mrb_open_core(mrb_allocf f, void *ud);







extern void mrb_close(mrb_state *mrb);






extern void* mrb_default_allocf(mrb_state*, void*, size_t, void*);

extern mrb_value mrb_top_self(mrb_state *);
extern mrb_value mrb_run(mrb_state*, struct RProc*, mrb_value);
extern mrb_value mrb_top_run(mrb_state*, struct RProc*, mrb_value, unsigned int);
extern mrb_value mrb_vm_run(mrb_state*, struct RProc*, mrb_value, unsigned int);
extern mrb_value mrb_vm_exec(mrb_state*, struct RProc*, mrb_code*);





extern void mrb_p(mrb_state*, mrb_value);
extern mrb_int mrb_obj_id(mrb_value obj);
extern mrb_sym mrb_obj_to_sym(mrb_state *mrb, mrb_value name);

extern mrb_bool mrb_obj_eq(mrb_state*, mrb_value, mrb_value);
extern mrb_bool mrb_obj_equal(mrb_state*, mrb_value, mrb_value);
extern mrb_bool mrb_equal(mrb_state *mrb, mrb_value obj1, mrb_value obj2);
extern mrb_value mrb_convert_to_integer(mrb_state *mrb, mrb_value val, mrb_int base);
extern mrb_value mrb_Integer(mrb_state *mrb, mrb_value val);

extern mrb_value mrb_Float(mrb_state *mrb, mrb_value val);

extern mrb_value mrb_inspect(mrb_state *mrb, mrb_value obj);
extern mrb_bool mrb_eql(mrb_state *mrb, mrb_value obj1, mrb_value obj2);

static inline int mrb_gc_arena_save(mrb_state*);
static inline void mrb_gc_arena_restore(mrb_state*,int);

static inline int
mrb_gc_arena_save(mrb_state *mrb)
{
  return mrb->gc.arena_idx;
}

static inline void
mrb_gc_arena_restore(mrb_state *mrb, int idx)
{
  mrb->gc.arena_idx = idx;
}

extern void mrb_garbage_collect(mrb_state*);
extern void mrb_full_gc(mrb_state*);
extern void mrb_incremental_gc(mrb_state *);
extern void mrb_gc_mark(mrb_state*,struct RBasic*);



extern void mrb_field_write_barrier(mrb_state *, struct RBasic*, struct RBasic*);



extern void mrb_write_barrier(mrb_state *, struct RBasic*);

extern mrb_value mrb_check_convert_type(mrb_state *mrb, mrb_value val, enum mrb_vtype type, const char *tname, const char *method);
extern mrb_value mrb_any_to_s(mrb_state *mrb, mrb_value obj);
extern const char * mrb_obj_classname(mrb_state *mrb, mrb_value obj);
extern struct RClass* mrb_obj_class(mrb_state *mrb, mrb_value obj);
extern mrb_value mrb_class_path(mrb_state *mrb, struct RClass *c);
extern mrb_value mrb_convert_type(mrb_state *mrb, mrb_value val, enum mrb_vtype type, const char *tname, const char *method);
extern mrb_bool mrb_obj_is_kind_of(mrb_state *mrb, mrb_value obj, struct RClass *c);
extern mrb_value mrb_obj_inspect(mrb_state *mrb, mrb_value self);
extern mrb_value mrb_obj_clone(mrb_state *mrb, mrb_value self);


extern mrb_value mrb_exc_new(mrb_state *mrb, struct RClass *c, const char *ptr, size_t len);
extern _Noreturn void mrb_exc_raise(mrb_state *mrb, mrb_value exc);

extern _Noreturn void mrb_raise(mrb_state *mrb, struct RClass *c, const char *msg);
extern _Noreturn void mrb_raisef(mrb_state *mrb, struct RClass *c, const char *fmt, ...);
extern _Noreturn void mrb_name_error(mrb_state *mrb, mrb_sym id, const char *fmt, ...);
extern void mrb_warn(mrb_state *mrb, const char *fmt, ...);
extern _Noreturn void mrb_bug(mrb_state *mrb, const char *fmt, ...);
extern void mrb_print_backtrace(mrb_state *mrb);
extern void mrb_print_error(mrb_state *mrb);


extern mrb_value mrb_yield(mrb_state *mrb, mrb_value b, mrb_value arg);
extern mrb_value mrb_yield_argv(mrb_state *mrb, mrb_value b, mrb_int argc, const mrb_value *argv);
extern mrb_value mrb_yield_with_class(mrb_state *mrb, mrb_value b, mrb_int argc, const mrb_value *argv, mrb_value self, struct RClass *c);




mrb_value mrb_yield_cont(mrb_state *mrb, mrb_value b, mrb_value self, mrb_int argc, const mrb_value *argv);


extern void mrb_gc_protect(mrb_state *mrb, mrb_value obj);

extern void mrb_gc_register(mrb_state *mrb, mrb_value obj);

extern void mrb_gc_unregister(mrb_state *mrb, mrb_value obj);

extern mrb_value mrb_to_int(mrb_state *mrb, mrb_value val);

extern mrb_value mrb_to_str(mrb_state *mrb, mrb_value val);
extern void mrb_check_type(mrb_state *mrb, mrb_value x, enum mrb_vtype t);

typedef enum call_type {
  CALL_PUBLIC,
  CALL_FCALL,
  CALL_VCALL,
  CALL_TYPE_MAX
} call_type;

extern void mrb_define_alias(mrb_state *mrb, struct RClass *c, const char *a, const char *b);
extern const char *mrb_class_name(mrb_state *mrb, struct RClass* klass);
extern void mrb_define_global_const(mrb_state *mrb, const char *name, mrb_value val);

extern mrb_value mrb_attr_get(mrb_state *mrb, mrb_value obj, mrb_sym id);

extern mrb_bool mrb_respond_to(mrb_state *mrb, mrb_value obj, mrb_sym mid);
extern mrb_bool mrb_obj_is_instance_of(mrb_state *mrb, mrb_value obj, struct RClass* c);
extern mrb_bool mrb_func_basic_p(mrb_state *mrb, mrb_value obj, mrb_sym mid, mrb_func_t func);







extern mrb_value mrb_fiber_resume(mrb_state *mrb, mrb_value fib, mrb_int argc, const mrb_value *argv);






extern mrb_value mrb_fiber_yield(mrb_state *mrb, mrb_int argc, const mrb_value *argv);






extern mrb_value mrb_fiber_alive_p(mrb_state *mrb, mrb_value fib);







extern void mrb_stack_extend(mrb_state*, mrb_int);


typedef struct mrb_pool mrb_pool;
extern struct mrb_pool* mrb_pool_open(mrb_state*);
extern void mrb_pool_close(struct mrb_pool*);
extern void* mrb_pool_alloc(struct mrb_pool*, size_t);
extern void* mrb_pool_realloc(struct mrb_pool*, void*, size_t oldlen, size_t newlen);
extern mrb_bool mrb_pool_can_realloc(struct mrb_pool*, void*, size_t);
extern void* mrb_alloca(mrb_state *mrb, size_t);

extern void mrb_state_atexit(mrb_state *mrb, mrb_atexit_func func);

extern void mrb_show_version(mrb_state *mrb);
extern void mrb_show_copyright(mrb_state *mrb);

extern mrb_value mrb_format(mrb_state *mrb, const char *format, ...);
/*  36 "gen/tmp_C_src.c" 2 */
