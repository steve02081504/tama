﻿
#define VERSION_NUM1 1
#define VERSION_NUM2 0
#define VERSION_NUM3 3
#define VERSION_NUM4 5
#define CONSTRUCTION_TIMES 38

#define STRINGIZER_HELPER(a) #a
#define STRINGIZER(a) STRINGIZER_HELPER(a)

#define VERSION_NUMS VERSION_NUM1,VERSION_NUM2,VERSION_NUM3,VERSION_NUM4
#define VERSION_STRING STRINGIZER(VERSION_NUM1) "." STRINGIZER(VERSION_NUM2) "." STRINGIZER(VERSION_NUM3) "." STRINGIZER(VERSION_NUM4)

#define VERSION_STRING_WITH_V "v" VERSION_STRING
#define U8_VERSION_STRING_FOR_TAG_CHECK u8"" VERSION_STRING_WITH_V
#define CONSTRUCTION_TIMES_STRING(construction_times) "tama construction " STRINGIZER(construction_times)

#define RC_VERSION_STRING(num1,num2,num3,num4) STRINGIZER(num1) "." STRINGIZER(num2) "." STRINGIZER(num3) "." STRINGIZER(num4)
