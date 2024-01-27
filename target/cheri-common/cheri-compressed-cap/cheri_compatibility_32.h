// Macros for 128-bit arithmetic on 32-bit machines

#define SUBTRACT_128BIT(result, a, b)                                                                                  \
    do {                                                                                                               \
        (result).low = (a).low - (b).low;                                                                              \
        (result).high = (a).high - (b).high - ((a).low < (b).low);                                                     \
    } while (0)

#define ADD_128BIT(result, a, b)                                                                                       \
    do {                                                                                                               \
        (result).low = (a).low + (b).low;                                                                              \
        (result).high = (a).high + (b).high + ((result).low < (a).low);                                                \
    } while (0)

#define ASSIGN_128BIT(result, value)                                                                                   \
    do {                                                                                                               \
        (result).low = (value).low;                                                                                    \
        (result).high = (value).high;                                                                                  \
    } while (0)
