#define INFO

#ifdef INFO
#define INFOMSG(...) \
{\
printf("[INFO] %s:%d - ", __PRETTY_FUNCTION__, __LINE__); \
printf(__VA_ARGS__); \
printf("\n"); \
}
#else
#define INFOMSG(...)
#endif
