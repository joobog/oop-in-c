#define DEBUG

#ifdef DEBUG
#define DEBUGMSG(...) \
{\
printf("[DEBUG] %s:%d - ", __PRETTY_FUNCTION__, __LINE__); \
printf(__VA_ARGS__); \
printf("\n"); \
}
#else
#define DEBUGMSG(...)
#endif
