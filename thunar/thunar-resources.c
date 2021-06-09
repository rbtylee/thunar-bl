#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.thunar"), aligned (8)))
#else
# define SECTION
#endif

#ifdef _MSC_VER
static const SECTION union { const guint8 data[507]; const double alignment; void * const ptr;}  thunar_resource_data = { {
  0107, 0126, 0141, 0162, 0151, 0141, 0156, 0164, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 
  0030, 0000, 0000, 0000, 0254, 0000, 0000, 0000, 0000, 0000, 0000, 0050, 0005, 0000, 0000, 0000, 
  0000, 0000, 0000, 0000, 0003, 0000, 0000, 0000, 0003, 0000, 0000, 0000, 0003, 0000, 0000, 0000, 
  0004, 0000, 0000, 0000, 0113, 0120, 0220, 0013, 0002, 0000, 0000, 0000, 0254, 0000, 0000, 0000, 
  0004, 0000, 0114, 0000, 0260, 0000, 0000, 0000, 0264, 0000, 0000, 0000, 0241, 0031, 0050, 0256, 
  0003, 0000, 0000, 0000, 0264, 0000, 0000, 0000, 0007, 0000, 0114, 0000, 0274, 0000, 0000, 0000, 
  0300, 0000, 0000, 0000, 0324, 0265, 0002, 0000, 0377, 0377, 0377, 0377, 0300, 0000, 0000, 0000, 
  0001, 0000, 0114, 0000, 0304, 0000, 0000, 0000, 0310, 0000, 0000, 0000, 0240, 0124, 0352, 0031, 
  0000, 0000, 0000, 0000, 0310, 0000, 0000, 0000, 0005, 0000, 0114, 0000, 0320, 0000, 0000, 0000, 
  0324, 0000, 0000, 0000, 0260, 0335, 0161, 0167, 0001, 0000, 0000, 0000, 0324, 0000, 0000, 0000, 
  0023, 0000, 0166, 0000, 0350, 0000, 0000, 0000, 0372, 0001, 0000, 0000, 0157, 0162, 0147, 0057, 
  0003, 0000, 0000, 0000, 0164, 0150, 0165, 0156, 0141, 0162, 0057, 0000, 0004, 0000, 0000, 0000, 
  0057, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0170, 0146, 0143, 0145, 0057, 0000, 0000, 0000, 
  0001, 0000, 0000, 0000, 0164, 0150, 0165, 0155, 0142, 0156, 0141, 0151, 0154, 0055, 0146, 0162, 
  0141, 0155, 0145, 0056, 0160, 0156, 0147, 0000, 0115, 0001, 0000, 0000, 0001, 0000, 0000, 0000, 
  0170, 0332, 0353, 0014, 0360, 0163, 0347, 0345, 0222, 0342, 0142, 0140, 0140, 0340, 0365, 0364, 
  0160, 0011, 0002, 0322, 0016, 0040, 0314, 0301, 0014, 0044, 0347, 0156, 0157, 0174, 0003, 0244, 
  0070, 0013, 0074, 0042, 0213, 0031, 0030, 0270, 0205, 0101, 0230, 0221, 0141, 0326, 0034, 0011, 
  0240, 0040, 0173, 0211, 0247, 0257, 0053, 0373, 0035, 0036, 0161, 0106, 0026, 0331, 0345, 0373, 
  0314, 0055, 0201, 0102, 0036, 0001, 0076, 0041, 0256, 0014, 0224, 0201, 0360, 0010, 0377, 0007, 
  0017, 0257, 0374, 0377, 0377, 0137, 0331, 0177, 0302, 0067, 0040, 0137, 0264, 0044, 0310, 0057, 
  0230, 0201, 0221, 0211, 0231, 0205, 0215, 0233, 0217, 0137, 0120, 0110, 0132, 0111, 0105, 0103, 
  0123, 0113, 0317, 0326, 0325, 0303, 0372, 0210, 0261, 0012, 0120, 0001, 0143, 0222, 0267, 0273, 
  0213, 0070, 0367, 0265, 0031, 0375, 0100, 0116, 0226, 0247, 0213, 0143, 0110, 0304, 0341, 0267, 
  0327, 0255, 0305, 0032, 0024, 0170, 0134, 0056, 0152, 0010, 0034, 0370, 0040, 0030, 0360, 0175, 
  0177, 0210, 0164, 0377, 0336, 0205, 0033, 0147, 0154, 0157, 0250, 0136, 0046, 0273, 0350, 0247, 
  0137, 0055, 0177, 0101, 0146, 0065, 0343, 0323, 0022, 0124, 0253, 0077, 0324, 0067, 0244, 0076, 
  0062, 0347, 0212, 0376, 0224, 0371, 0150, 0247, 0132, 0176, 0347, 0322, 0257, 0205, 0031, 0122, 
  0173, 0071, 0245, 0213, 0034, 0213, 0126, 0376, 0376, 0236, 0165, 0122, 0350, 0216, 0327, 0261, 
  0302, 0216, 0331, 0313, 0044, 0156, 0314, 0154, 0115, 0333, 0315, 0270, 0342, 0241, 0141, 0250, 
  0243, 0106, 0304, 0174, 0220, 0116, 0117, 0127, 0077, 0227, 0165, 0116, 0011, 0115, 0000, 0012, 
  0301, 0123, 0274, 0000, 0050, 0165, 0165, 0141, 0171, 0051
} };
#else /* _MSC_VER */
static const SECTION union { const guint8 data[507]; const double alignment; void * const ptr;}  thunar_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\254\000\000\000\000\000\000\050\005\000\000\000"
  "\000\000\000\000\003\000\000\000\003\000\000\000\003\000\000\000"
  "\004\000\000\000\113\120\220\013\002\000\000\000\254\000\000\000"
  "\004\000\114\000\260\000\000\000\264\000\000\000\241\031\050\256"
  "\003\000\000\000\264\000\000\000\007\000\114\000\274\000\000\000"
  "\300\000\000\000\324\265\002\000\377\377\377\377\300\000\000\000"
  "\001\000\114\000\304\000\000\000\310\000\000\000\240\124\352\031"
  "\000\000\000\000\310\000\000\000\005\000\114\000\320\000\000\000"
  "\324\000\000\000\260\335\161\167\001\000\000\000\324\000\000\000"
  "\023\000\166\000\350\000\000\000\372\001\000\000\157\162\147\057"
  "\003\000\000\000\164\150\165\156\141\162\057\000\004\000\000\000"
  "\057\000\000\000\000\000\000\000\170\146\143\145\057\000\000\000"
  "\001\000\000\000\164\150\165\155\142\156\141\151\154\055\146\162"
  "\141\155\145\056\160\156\147\000\115\001\000\000\001\000\000\000"
  "\170\332\353\014\360\163\347\345\222\342\142\140\140\340\365\364"
  "\160\011\002\322\016\040\314\301\014\044\347\156\157\174\003\244"
  "\070\013\074\042\213\031\030\270\205\101\230\221\141\326\034\011"
  "\240\040\173\211\247\257\053\373\035\036\161\106\026\331\345\373"
  "\314\055\201\102\036\001\076\041\256\014\224\201\360\010\377\007"
  "\017\257\374\377\377\137\331\177\302\067\040\137\264\044\310\057"
  "\230\201\221\211\231\205\215\233\217\137\120\110\132\111\105\103"
  "\123\113\317\326\325\303\372\210\261\012\120\001\143\222\267\273"
  "\213\070\367\265\031\375\100\116\226\247\213\143\110\304\341\267"
  "\327\255\305\032\024\170\134\056\152\010\034\370\040\030\360\175"
  "\177\210\164\377\336\205\033\147\154\157\250\136\046\273\350\247"
  "\137\055\177\101\146\065\343\323\022\124\253\077\324\067\244\076"
  "\062\347\212\376\224\371\150\247\132\176\347\322\257\205\031\122"
  "\173\071\245\213\034\213\126\376\376\236\165\122\350\216\327\261"
  "\302\216\331\313\044\156\314\154\115\333\315\270\342\241\141\250"
  "\243\106\304\174\220\116\117\127\077\227\165\116\011\115\000\012"
  "\301\123\274\000\050\165\165\141\171\051" };
#endif /* !_MSC_VER */

static GStaticResource static_resource = { thunar_resource_data.data, sizeof (thunar_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };
extern GResource *thunar_get_resource (void);
GResource *thunar_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a sane way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for Win32 (x86) and x64 programs, as symbols on Win32 are prefixed
 * with an underscore but symbols on x64 are not.
 */
#ifdef _WIN64
#define G_MSVC_SYMBOL_PREFIX ""
#else
#define G_MSVC_SYMBOL_PREFIX "_"
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
