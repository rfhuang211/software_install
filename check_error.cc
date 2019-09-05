#define CHECK_ERROR(error)           \
if(error != 0)                       \
{                                    \
    fprintf(stderr,                  \
            "Error:  at %s:%d\n",    \
            __FILE__,                \
            __LINE__);               \
    exit(1);                         \
 }
