#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC938
// Address: 0x1ac938 - 0x1ad118
void sub_001AC938_0x1ac938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC938_0x1ac938");
#endif

    switch (ctx->pc) {
        case 0x1ac938u: goto label_1ac938;
        case 0x1ac93cu: goto label_1ac93c;
        case 0x1ac940u: goto label_1ac940;
        case 0x1ac944u: goto label_1ac944;
        case 0x1ac948u: goto label_1ac948;
        case 0x1ac94cu: goto label_1ac94c;
        case 0x1ac950u: goto label_1ac950;
        case 0x1ac954u: goto label_1ac954;
        case 0x1ac958u: goto label_1ac958;
        case 0x1ac95cu: goto label_1ac95c;
        case 0x1ac960u: goto label_1ac960;
        case 0x1ac964u: goto label_1ac964;
        case 0x1ac968u: goto label_1ac968;
        case 0x1ac96cu: goto label_1ac96c;
        case 0x1ac970u: goto label_1ac970;
        case 0x1ac974u: goto label_1ac974;
        case 0x1ac978u: goto label_1ac978;
        case 0x1ac97cu: goto label_1ac97c;
        case 0x1ac980u: goto label_1ac980;
        case 0x1ac984u: goto label_1ac984;
        case 0x1ac988u: goto label_1ac988;
        case 0x1ac98cu: goto label_1ac98c;
        case 0x1ac990u: goto label_1ac990;
        case 0x1ac994u: goto label_1ac994;
        case 0x1ac998u: goto label_1ac998;
        case 0x1ac99cu: goto label_1ac99c;
        case 0x1ac9a0u: goto label_1ac9a0;
        case 0x1ac9a4u: goto label_1ac9a4;
        case 0x1ac9a8u: goto label_1ac9a8;
        case 0x1ac9acu: goto label_1ac9ac;
        case 0x1ac9b0u: goto label_1ac9b0;
        case 0x1ac9b4u: goto label_1ac9b4;
        case 0x1ac9b8u: goto label_1ac9b8;
        case 0x1ac9bcu: goto label_1ac9bc;
        case 0x1ac9c0u: goto label_1ac9c0;
        case 0x1ac9c4u: goto label_1ac9c4;
        case 0x1ac9c8u: goto label_1ac9c8;
        case 0x1ac9ccu: goto label_1ac9cc;
        case 0x1ac9d0u: goto label_1ac9d0;
        case 0x1ac9d4u: goto label_1ac9d4;
        case 0x1ac9d8u: goto label_1ac9d8;
        case 0x1ac9dcu: goto label_1ac9dc;
        case 0x1ac9e0u: goto label_1ac9e0;
        case 0x1ac9e4u: goto label_1ac9e4;
        case 0x1ac9e8u: goto label_1ac9e8;
        case 0x1ac9ecu: goto label_1ac9ec;
        case 0x1ac9f0u: goto label_1ac9f0;
        case 0x1ac9f4u: goto label_1ac9f4;
        case 0x1ac9f8u: goto label_1ac9f8;
        case 0x1ac9fcu: goto label_1ac9fc;
        case 0x1aca00u: goto label_1aca00;
        case 0x1aca04u: goto label_1aca04;
        case 0x1aca08u: goto label_1aca08;
        case 0x1aca0cu: goto label_1aca0c;
        case 0x1aca10u: goto label_1aca10;
        case 0x1aca14u: goto label_1aca14;
        case 0x1aca18u: goto label_1aca18;
        case 0x1aca1cu: goto label_1aca1c;
        case 0x1aca20u: goto label_1aca20;
        case 0x1aca24u: goto label_1aca24;
        case 0x1aca28u: goto label_1aca28;
        case 0x1aca2cu: goto label_1aca2c;
        case 0x1aca30u: goto label_1aca30;
        case 0x1aca34u: goto label_1aca34;
        case 0x1aca38u: goto label_1aca38;
        case 0x1aca3cu: goto label_1aca3c;
        case 0x1aca40u: goto label_1aca40;
        case 0x1aca44u: goto label_1aca44;
        case 0x1aca48u: goto label_1aca48;
        case 0x1aca4cu: goto label_1aca4c;
        case 0x1aca50u: goto label_1aca50;
        case 0x1aca54u: goto label_1aca54;
        case 0x1aca58u: goto label_1aca58;
        case 0x1aca5cu: goto label_1aca5c;
        case 0x1aca60u: goto label_1aca60;
        case 0x1aca64u: goto label_1aca64;
        case 0x1aca68u: goto label_1aca68;
        case 0x1aca6cu: goto label_1aca6c;
        case 0x1aca70u: goto label_1aca70;
        case 0x1aca74u: goto label_1aca74;
        case 0x1aca78u: goto label_1aca78;
        case 0x1aca7cu: goto label_1aca7c;
        case 0x1aca80u: goto label_1aca80;
        case 0x1aca84u: goto label_1aca84;
        case 0x1aca88u: goto label_1aca88;
        case 0x1aca8cu: goto label_1aca8c;
        case 0x1aca90u: goto label_1aca90;
        case 0x1aca94u: goto label_1aca94;
        case 0x1aca98u: goto label_1aca98;
        case 0x1aca9cu: goto label_1aca9c;
        case 0x1acaa0u: goto label_1acaa0;
        case 0x1acaa4u: goto label_1acaa4;
        case 0x1acaa8u: goto label_1acaa8;
        case 0x1acaacu: goto label_1acaac;
        case 0x1acab0u: goto label_1acab0;
        case 0x1acab4u: goto label_1acab4;
        case 0x1acab8u: goto label_1acab8;
        case 0x1acabcu: goto label_1acabc;
        case 0x1acac0u: goto label_1acac0;
        case 0x1acac4u: goto label_1acac4;
        case 0x1acac8u: goto label_1acac8;
        case 0x1acaccu: goto label_1acacc;
        case 0x1acad0u: goto label_1acad0;
        case 0x1acad4u: goto label_1acad4;
        case 0x1acad8u: goto label_1acad8;
        case 0x1acadcu: goto label_1acadc;
        case 0x1acae0u: goto label_1acae0;
        case 0x1acae4u: goto label_1acae4;
        case 0x1acae8u: goto label_1acae8;
        case 0x1acaecu: goto label_1acaec;
        case 0x1acaf0u: goto label_1acaf0;
        case 0x1acaf4u: goto label_1acaf4;
        case 0x1acaf8u: goto label_1acaf8;
        case 0x1acafcu: goto label_1acafc;
        case 0x1acb00u: goto label_1acb00;
        case 0x1acb04u: goto label_1acb04;
        case 0x1acb08u: goto label_1acb08;
        case 0x1acb0cu: goto label_1acb0c;
        case 0x1acb10u: goto label_1acb10;
        case 0x1acb14u: goto label_1acb14;
        case 0x1acb18u: goto label_1acb18;
        case 0x1acb1cu: goto label_1acb1c;
        case 0x1acb20u: goto label_1acb20;
        case 0x1acb24u: goto label_1acb24;
        case 0x1acb28u: goto label_1acb28;
        case 0x1acb2cu: goto label_1acb2c;
        case 0x1acb30u: goto label_1acb30;
        case 0x1acb34u: goto label_1acb34;
        case 0x1acb38u: goto label_1acb38;
        case 0x1acb3cu: goto label_1acb3c;
        case 0x1acb40u: goto label_1acb40;
        case 0x1acb44u: goto label_1acb44;
        case 0x1acb48u: goto label_1acb48;
        case 0x1acb4cu: goto label_1acb4c;
        case 0x1acb50u: goto label_1acb50;
        case 0x1acb54u: goto label_1acb54;
        case 0x1acb58u: goto label_1acb58;
        case 0x1acb5cu: goto label_1acb5c;
        case 0x1acb60u: goto label_1acb60;
        case 0x1acb64u: goto label_1acb64;
        case 0x1acb68u: goto label_1acb68;
        case 0x1acb6cu: goto label_1acb6c;
        case 0x1acb70u: goto label_1acb70;
        case 0x1acb74u: goto label_1acb74;
        case 0x1acb78u: goto label_1acb78;
        case 0x1acb7cu: goto label_1acb7c;
        case 0x1acb80u: goto label_1acb80;
        case 0x1acb84u: goto label_1acb84;
        case 0x1acb88u: goto label_1acb88;
        case 0x1acb8cu: goto label_1acb8c;
        case 0x1acb90u: goto label_1acb90;
        case 0x1acb94u: goto label_1acb94;
        case 0x1acb98u: goto label_1acb98;
        case 0x1acb9cu: goto label_1acb9c;
        case 0x1acba0u: goto label_1acba0;
        case 0x1acba4u: goto label_1acba4;
        case 0x1acba8u: goto label_1acba8;
        case 0x1acbacu: goto label_1acbac;
        case 0x1acbb0u: goto label_1acbb0;
        case 0x1acbb4u: goto label_1acbb4;
        case 0x1acbb8u: goto label_1acbb8;
        case 0x1acbbcu: goto label_1acbbc;
        case 0x1acbc0u: goto label_1acbc0;
        case 0x1acbc4u: goto label_1acbc4;
        case 0x1acbc8u: goto label_1acbc8;
        case 0x1acbccu: goto label_1acbcc;
        case 0x1acbd0u: goto label_1acbd0;
        case 0x1acbd4u: goto label_1acbd4;
        case 0x1acbd8u: goto label_1acbd8;
        case 0x1acbdcu: goto label_1acbdc;
        case 0x1acbe0u: goto label_1acbe0;
        case 0x1acbe4u: goto label_1acbe4;
        case 0x1acbe8u: goto label_1acbe8;
        case 0x1acbecu: goto label_1acbec;
        case 0x1acbf0u: goto label_1acbf0;
        case 0x1acbf4u: goto label_1acbf4;
        case 0x1acbf8u: goto label_1acbf8;
        case 0x1acbfcu: goto label_1acbfc;
        case 0x1acc00u: goto label_1acc00;
        case 0x1acc04u: goto label_1acc04;
        case 0x1acc08u: goto label_1acc08;
        case 0x1acc0cu: goto label_1acc0c;
        case 0x1acc10u: goto label_1acc10;
        case 0x1acc14u: goto label_1acc14;
        case 0x1acc18u: goto label_1acc18;
        case 0x1acc1cu: goto label_1acc1c;
        case 0x1acc20u: goto label_1acc20;
        case 0x1acc24u: goto label_1acc24;
        case 0x1acc28u: goto label_1acc28;
        case 0x1acc2cu: goto label_1acc2c;
        case 0x1acc30u: goto label_1acc30;
        case 0x1acc34u: goto label_1acc34;
        case 0x1acc38u: goto label_1acc38;
        case 0x1acc3cu: goto label_1acc3c;
        case 0x1acc40u: goto label_1acc40;
        case 0x1acc44u: goto label_1acc44;
        case 0x1acc48u: goto label_1acc48;
        case 0x1acc4cu: goto label_1acc4c;
        case 0x1acc50u: goto label_1acc50;
        case 0x1acc54u: goto label_1acc54;
        case 0x1acc58u: goto label_1acc58;
        case 0x1acc5cu: goto label_1acc5c;
        case 0x1acc60u: goto label_1acc60;
        case 0x1acc64u: goto label_1acc64;
        case 0x1acc68u: goto label_1acc68;
        case 0x1acc6cu: goto label_1acc6c;
        case 0x1acc70u: goto label_1acc70;
        case 0x1acc74u: goto label_1acc74;
        case 0x1acc78u: goto label_1acc78;
        case 0x1acc7cu: goto label_1acc7c;
        case 0x1acc80u: goto label_1acc80;
        case 0x1acc84u: goto label_1acc84;
        case 0x1acc88u: goto label_1acc88;
        case 0x1acc8cu: goto label_1acc8c;
        case 0x1acc90u: goto label_1acc90;
        case 0x1acc94u: goto label_1acc94;
        case 0x1acc98u: goto label_1acc98;
        case 0x1acc9cu: goto label_1acc9c;
        case 0x1acca0u: goto label_1acca0;
        case 0x1acca4u: goto label_1acca4;
        case 0x1acca8u: goto label_1acca8;
        case 0x1accacu: goto label_1accac;
        case 0x1accb0u: goto label_1accb0;
        case 0x1accb4u: goto label_1accb4;
        case 0x1accb8u: goto label_1accb8;
        case 0x1accbcu: goto label_1accbc;
        case 0x1accc0u: goto label_1accc0;
        case 0x1accc4u: goto label_1accc4;
        case 0x1accc8u: goto label_1accc8;
        case 0x1accccu: goto label_1acccc;
        case 0x1accd0u: goto label_1accd0;
        case 0x1accd4u: goto label_1accd4;
        case 0x1accd8u: goto label_1accd8;
        case 0x1accdcu: goto label_1accdc;
        case 0x1acce0u: goto label_1acce0;
        case 0x1acce4u: goto label_1acce4;
        case 0x1acce8u: goto label_1acce8;
        case 0x1accecu: goto label_1accec;
        case 0x1accf0u: goto label_1accf0;
        case 0x1accf4u: goto label_1accf4;
        case 0x1accf8u: goto label_1accf8;
        case 0x1accfcu: goto label_1accfc;
        case 0x1acd00u: goto label_1acd00;
        case 0x1acd04u: goto label_1acd04;
        case 0x1acd08u: goto label_1acd08;
        case 0x1acd0cu: goto label_1acd0c;
        case 0x1acd10u: goto label_1acd10;
        case 0x1acd14u: goto label_1acd14;
        case 0x1acd18u: goto label_1acd18;
        case 0x1acd1cu: goto label_1acd1c;
        case 0x1acd20u: goto label_1acd20;
        case 0x1acd24u: goto label_1acd24;
        case 0x1acd28u: goto label_1acd28;
        case 0x1acd2cu: goto label_1acd2c;
        case 0x1acd30u: goto label_1acd30;
        case 0x1acd34u: goto label_1acd34;
        case 0x1acd38u: goto label_1acd38;
        case 0x1acd3cu: goto label_1acd3c;
        case 0x1acd40u: goto label_1acd40;
        case 0x1acd44u: goto label_1acd44;
        case 0x1acd48u: goto label_1acd48;
        case 0x1acd4cu: goto label_1acd4c;
        case 0x1acd50u: goto label_1acd50;
        case 0x1acd54u: goto label_1acd54;
        case 0x1acd58u: goto label_1acd58;
        case 0x1acd5cu: goto label_1acd5c;
        case 0x1acd60u: goto label_1acd60;
        case 0x1acd64u: goto label_1acd64;
        case 0x1acd68u: goto label_1acd68;
        case 0x1acd6cu: goto label_1acd6c;
        case 0x1acd70u: goto label_1acd70;
        case 0x1acd74u: goto label_1acd74;
        case 0x1acd78u: goto label_1acd78;
        case 0x1acd7cu: goto label_1acd7c;
        case 0x1acd80u: goto label_1acd80;
        case 0x1acd84u: goto label_1acd84;
        case 0x1acd88u: goto label_1acd88;
        case 0x1acd8cu: goto label_1acd8c;
        case 0x1acd90u: goto label_1acd90;
        case 0x1acd94u: goto label_1acd94;
        case 0x1acd98u: goto label_1acd98;
        case 0x1acd9cu: goto label_1acd9c;
        case 0x1acda0u: goto label_1acda0;
        case 0x1acda4u: goto label_1acda4;
        case 0x1acda8u: goto label_1acda8;
        case 0x1acdacu: goto label_1acdac;
        case 0x1acdb0u: goto label_1acdb0;
        case 0x1acdb4u: goto label_1acdb4;
        case 0x1acdb8u: goto label_1acdb8;
        case 0x1acdbcu: goto label_1acdbc;
        case 0x1acdc0u: goto label_1acdc0;
        case 0x1acdc4u: goto label_1acdc4;
        case 0x1acdc8u: goto label_1acdc8;
        case 0x1acdccu: goto label_1acdcc;
        case 0x1acdd0u: goto label_1acdd0;
        case 0x1acdd4u: goto label_1acdd4;
        case 0x1acdd8u: goto label_1acdd8;
        case 0x1acddcu: goto label_1acddc;
        case 0x1acde0u: goto label_1acde0;
        case 0x1acde4u: goto label_1acde4;
        case 0x1acde8u: goto label_1acde8;
        case 0x1acdecu: goto label_1acdec;
        case 0x1acdf0u: goto label_1acdf0;
        case 0x1acdf4u: goto label_1acdf4;
        case 0x1acdf8u: goto label_1acdf8;
        case 0x1acdfcu: goto label_1acdfc;
        case 0x1ace00u: goto label_1ace00;
        case 0x1ace04u: goto label_1ace04;
        case 0x1ace08u: goto label_1ace08;
        case 0x1ace0cu: goto label_1ace0c;
        case 0x1ace10u: goto label_1ace10;
        case 0x1ace14u: goto label_1ace14;
        case 0x1ace18u: goto label_1ace18;
        case 0x1ace1cu: goto label_1ace1c;
        case 0x1ace20u: goto label_1ace20;
        case 0x1ace24u: goto label_1ace24;
        case 0x1ace28u: goto label_1ace28;
        case 0x1ace2cu: goto label_1ace2c;
        case 0x1ace30u: goto label_1ace30;
        case 0x1ace34u: goto label_1ace34;
        case 0x1ace38u: goto label_1ace38;
        case 0x1ace3cu: goto label_1ace3c;
        case 0x1ace40u: goto label_1ace40;
        case 0x1ace44u: goto label_1ace44;
        case 0x1ace48u: goto label_1ace48;
        case 0x1ace4cu: goto label_1ace4c;
        case 0x1ace50u: goto label_1ace50;
        case 0x1ace54u: goto label_1ace54;
        case 0x1ace58u: goto label_1ace58;
        case 0x1ace5cu: goto label_1ace5c;
        case 0x1ace60u: goto label_1ace60;
        case 0x1ace64u: goto label_1ace64;
        case 0x1ace68u: goto label_1ace68;
        case 0x1ace6cu: goto label_1ace6c;
        case 0x1ace70u: goto label_1ace70;
        case 0x1ace74u: goto label_1ace74;
        case 0x1ace78u: goto label_1ace78;
        case 0x1ace7cu: goto label_1ace7c;
        case 0x1ace80u: goto label_1ace80;
        case 0x1ace84u: goto label_1ace84;
        case 0x1ace88u: goto label_1ace88;
        case 0x1ace8cu: goto label_1ace8c;
        case 0x1ace90u: goto label_1ace90;
        case 0x1ace94u: goto label_1ace94;
        case 0x1ace98u: goto label_1ace98;
        case 0x1ace9cu: goto label_1ace9c;
        case 0x1acea0u: goto label_1acea0;
        case 0x1acea4u: goto label_1acea4;
        case 0x1acea8u: goto label_1acea8;
        case 0x1aceacu: goto label_1aceac;
        case 0x1aceb0u: goto label_1aceb0;
        case 0x1aceb4u: goto label_1aceb4;
        case 0x1aceb8u: goto label_1aceb8;
        case 0x1acebcu: goto label_1acebc;
        case 0x1acec0u: goto label_1acec0;
        case 0x1acec4u: goto label_1acec4;
        case 0x1acec8u: goto label_1acec8;
        case 0x1aceccu: goto label_1acecc;
        case 0x1aced0u: goto label_1aced0;
        case 0x1aced4u: goto label_1aced4;
        case 0x1aced8u: goto label_1aced8;
        case 0x1acedcu: goto label_1acedc;
        case 0x1acee0u: goto label_1acee0;
        case 0x1acee4u: goto label_1acee4;
        case 0x1acee8u: goto label_1acee8;
        case 0x1aceecu: goto label_1aceec;
        case 0x1acef0u: goto label_1acef0;
        case 0x1acef4u: goto label_1acef4;
        case 0x1acef8u: goto label_1acef8;
        case 0x1acefcu: goto label_1acefc;
        case 0x1acf00u: goto label_1acf00;
        case 0x1acf04u: goto label_1acf04;
        case 0x1acf08u: goto label_1acf08;
        case 0x1acf0cu: goto label_1acf0c;
        case 0x1acf10u: goto label_1acf10;
        case 0x1acf14u: goto label_1acf14;
        case 0x1acf18u: goto label_1acf18;
        case 0x1acf1cu: goto label_1acf1c;
        case 0x1acf20u: goto label_1acf20;
        case 0x1acf24u: goto label_1acf24;
        case 0x1acf28u: goto label_1acf28;
        case 0x1acf2cu: goto label_1acf2c;
        case 0x1acf30u: goto label_1acf30;
        case 0x1acf34u: goto label_1acf34;
        case 0x1acf38u: goto label_1acf38;
        case 0x1acf3cu: goto label_1acf3c;
        case 0x1acf40u: goto label_1acf40;
        case 0x1acf44u: goto label_1acf44;
        case 0x1acf48u: goto label_1acf48;
        case 0x1acf4cu: goto label_1acf4c;
        case 0x1acf50u: goto label_1acf50;
        case 0x1acf54u: goto label_1acf54;
        case 0x1acf58u: goto label_1acf58;
        case 0x1acf5cu: goto label_1acf5c;
        case 0x1acf60u: goto label_1acf60;
        case 0x1acf64u: goto label_1acf64;
        case 0x1acf68u: goto label_1acf68;
        case 0x1acf6cu: goto label_1acf6c;
        case 0x1acf70u: goto label_1acf70;
        case 0x1acf74u: goto label_1acf74;
        case 0x1acf78u: goto label_1acf78;
        case 0x1acf7cu: goto label_1acf7c;
        case 0x1acf80u: goto label_1acf80;
        case 0x1acf84u: goto label_1acf84;
        case 0x1acf88u: goto label_1acf88;
        case 0x1acf8cu: goto label_1acf8c;
        case 0x1acf90u: goto label_1acf90;
        case 0x1acf94u: goto label_1acf94;
        case 0x1acf98u: goto label_1acf98;
        case 0x1acf9cu: goto label_1acf9c;
        case 0x1acfa0u: goto label_1acfa0;
        case 0x1acfa4u: goto label_1acfa4;
        case 0x1acfa8u: goto label_1acfa8;
        case 0x1acfacu: goto label_1acfac;
        case 0x1acfb0u: goto label_1acfb0;
        case 0x1acfb4u: goto label_1acfb4;
        case 0x1acfb8u: goto label_1acfb8;
        case 0x1acfbcu: goto label_1acfbc;
        case 0x1acfc0u: goto label_1acfc0;
        case 0x1acfc4u: goto label_1acfc4;
        case 0x1acfc8u: goto label_1acfc8;
        case 0x1acfccu: goto label_1acfcc;
        case 0x1acfd0u: goto label_1acfd0;
        case 0x1acfd4u: goto label_1acfd4;
        case 0x1acfd8u: goto label_1acfd8;
        case 0x1acfdcu: goto label_1acfdc;
        case 0x1acfe0u: goto label_1acfe0;
        case 0x1acfe4u: goto label_1acfe4;
        case 0x1acfe8u: goto label_1acfe8;
        case 0x1acfecu: goto label_1acfec;
        case 0x1acff0u: goto label_1acff0;
        case 0x1acff4u: goto label_1acff4;
        case 0x1acff8u: goto label_1acff8;
        case 0x1acffcu: goto label_1acffc;
        case 0x1ad000u: goto label_1ad000;
        case 0x1ad004u: goto label_1ad004;
        case 0x1ad008u: goto label_1ad008;
        case 0x1ad00cu: goto label_1ad00c;
        case 0x1ad010u: goto label_1ad010;
        case 0x1ad014u: goto label_1ad014;
        case 0x1ad018u: goto label_1ad018;
        case 0x1ad01cu: goto label_1ad01c;
        case 0x1ad020u: goto label_1ad020;
        case 0x1ad024u: goto label_1ad024;
        case 0x1ad028u: goto label_1ad028;
        case 0x1ad02cu: goto label_1ad02c;
        case 0x1ad030u: goto label_1ad030;
        case 0x1ad034u: goto label_1ad034;
        case 0x1ad038u: goto label_1ad038;
        case 0x1ad03cu: goto label_1ad03c;
        case 0x1ad040u: goto label_1ad040;
        case 0x1ad044u: goto label_1ad044;
        case 0x1ad048u: goto label_1ad048;
        case 0x1ad04cu: goto label_1ad04c;
        case 0x1ad050u: goto label_1ad050;
        case 0x1ad054u: goto label_1ad054;
        case 0x1ad058u: goto label_1ad058;
        case 0x1ad05cu: goto label_1ad05c;
        case 0x1ad060u: goto label_1ad060;
        case 0x1ad064u: goto label_1ad064;
        case 0x1ad068u: goto label_1ad068;
        case 0x1ad06cu: goto label_1ad06c;
        case 0x1ad070u: goto label_1ad070;
        case 0x1ad074u: goto label_1ad074;
        case 0x1ad078u: goto label_1ad078;
        case 0x1ad07cu: goto label_1ad07c;
        case 0x1ad080u: goto label_1ad080;
        case 0x1ad084u: goto label_1ad084;
        case 0x1ad088u: goto label_1ad088;
        case 0x1ad08cu: goto label_1ad08c;
        case 0x1ad090u: goto label_1ad090;
        case 0x1ad094u: goto label_1ad094;
        case 0x1ad098u: goto label_1ad098;
        case 0x1ad09cu: goto label_1ad09c;
        case 0x1ad0a0u: goto label_1ad0a0;
        case 0x1ad0a4u: goto label_1ad0a4;
        case 0x1ad0a8u: goto label_1ad0a8;
        case 0x1ad0acu: goto label_1ad0ac;
        case 0x1ad0b0u: goto label_1ad0b0;
        case 0x1ad0b4u: goto label_1ad0b4;
        case 0x1ad0b8u: goto label_1ad0b8;
        case 0x1ad0bcu: goto label_1ad0bc;
        case 0x1ad0c0u: goto label_1ad0c0;
        case 0x1ad0c4u: goto label_1ad0c4;
        case 0x1ad0c8u: goto label_1ad0c8;
        case 0x1ad0ccu: goto label_1ad0cc;
        case 0x1ad0d0u: goto label_1ad0d0;
        case 0x1ad0d4u: goto label_1ad0d4;
        case 0x1ad0d8u: goto label_1ad0d8;
        case 0x1ad0dcu: goto label_1ad0dc;
        case 0x1ad0e0u: goto label_1ad0e0;
        case 0x1ad0e4u: goto label_1ad0e4;
        case 0x1ad0e8u: goto label_1ad0e8;
        case 0x1ad0ecu: goto label_1ad0ec;
        case 0x1ad0f0u: goto label_1ad0f0;
        case 0x1ad0f4u: goto label_1ad0f4;
        case 0x1ad0f8u: goto label_1ad0f8;
        case 0x1ad0fcu: goto label_1ad0fc;
        case 0x1ad100u: goto label_1ad100;
        case 0x1ad104u: goto label_1ad104;
        case 0x1ad108u: goto label_1ad108;
        case 0x1ad10cu: goto label_1ad10c;
        case 0x1ad110u: goto label_1ad110;
        case 0x1ad114u: goto label_1ad114;
        default: break;
    }

    ctx->pc = 0x1ac938u;

label_1ac938:
    // 0x1ac938: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ac938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ac93c:
    // 0x1ac93c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ac940:
    // 0x1ac940: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ac940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac944:
    // 0x1ac944: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ac944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1ac948:
    // 0x1ac948: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1ac948u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
label_1ac94c:
    // 0x1ac94c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ac94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1ac950:
    // 0x1ac950: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ac950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ac954:
    // 0x1ac954: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ac954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1ac958:
    // 0x1ac958: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ac958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac95c:
    // 0x1ac95c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1ac95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1ac960:
    // 0x1ac960: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1ac960u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ac964:
    // 0x1ac964: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1ac964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_1ac968:
    // 0x1ac968: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1ac968u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1ac96c:
    // 0x1ac96c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1ac96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_1ac970:
    // 0x1ac970: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1ac970u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1ac974:
    // 0x1ac974: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1ac974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_1ac978:
    // 0x1ac978: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1ac978u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ac97c:
    // 0x1ac97c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1ac97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1ac980:
    // 0x1ac980: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1ac980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_1ac984:
    // 0x1ac984: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x1ac984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_1ac988:
    // 0x1ac988: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x1ac988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
label_1ac98c:
    // 0x1ac98c: 0x0  nop
    ctx->pc = 0x1ac98cu;
    // NOP
label_1ac990:
    // 0x1ac990: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1ac990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1ac994:
    // 0x1ac994: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ac998:
    if (ctx->pc == 0x1AC998u) {
        ctx->pc = 0x1AC998u;
            // 0x1ac998: 0x8e25f6e8  lw          $a1, -0x918($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294964968)));
        ctx->pc = 0x1AC99Cu;
        goto label_1ac99c;
    }
    ctx->pc = 0x1AC994u;
    {
        const bool branch_taken_0x1ac994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC994u;
            // 0x1ac998: 0x8e25f6e8  lw          $a1, -0x918($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294964968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac994) {
            ctx->pc = 0x1AC9B0u;
            goto label_1ac9b0;
        }
    }
    ctx->pc = 0x1AC99Cu;
label_1ac99c:
    // 0x1ac99c: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x1ac99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1ac9a0:
    // 0x1ac9a0: 0xc049c22  jal         func_127088
label_1ac9a4:
    if (ctx->pc == 0x1AC9A4u) {
        ctx->pc = 0x1AC9A4u;
            // 0x1ac9a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1AC9A8u;
        goto label_1ac9a8;
    }
    ctx->pc = 0x1AC9A0u;
    SET_GPR_U32(ctx, 31, 0x1AC9A8u);
    ctx->pc = 0x1AC9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9A0u;
            // 0x1ac9a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9A8u; }
        if (ctx->pc != 0x1AC9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9A8u; }
        if (ctx->pc != 0x1AC9A8u) { return; }
    }
    ctx->pc = 0x1AC9A8u;
label_1ac9a8:
    // 0x1ac9a8: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_1ac9ac:
    if (ctx->pc == 0x1AC9ACu) {
        ctx->pc = 0x1AC9ACu;
            // 0x1ac9ac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x1AC9B0u;
        goto label_1ac9b0;
    }
    ctx->pc = 0x1AC9A8u;
    {
        const bool branch_taken_0x1ac9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac9a8) {
            ctx->pc = 0x1AC9ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9A8u;
            // 0x1ac9ac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ac990;
        }
    }
    ctx->pc = 0x1AC9B0u;
label_1ac9b0:
    // 0x1ac9b0: 0x12120061  beq         $s0, $s2, . + 4 + (0x61 << 2)
label_1ac9b4:
    if (ctx->pc == 0x1AC9B4u) {
        ctx->pc = 0x1AC9B4u;
            // 0x1ac9b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AC9B8u;
        goto label_1ac9b8;
    }
    ctx->pc = 0x1AC9B0u;
    {
        const bool branch_taken_0x1ac9b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x1AC9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9B0u;
            // 0x1ac9b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac9b0) {
            ctx->pc = 0x1ACB38u;
            goto label_1acb38;
        }
    }
    ctx->pc = 0x1AC9B8u;
label_1ac9b8:
    // 0x1ac9b8: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x1ac9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_1ac9bc:
    // 0x1ac9bc: 0x5460005f  bnel        $v1, $zero, . + 4 + (0x5F << 2)
label_1ac9c0:
    if (ctx->pc == 0x1AC9C0u) {
        ctx->pc = 0x1AC9C0u;
            // 0x1ac9c0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1AC9C4u;
        goto label_1ac9c4;
    }
    ctx->pc = 0x1AC9BCu;
    {
        const bool branch_taken_0x1ac9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac9bc) {
            ctx->pc = 0x1AC9C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9BCu;
            // 0x1ac9c0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACB3Cu;
            goto label_1acb3c;
        }
    }
    ctx->pc = 0x1AC9C4u;
label_1ac9c4:
    // 0x1ac9c4: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x1ac9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1ac9c8:
    // 0x1ac9c8: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1ac9c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1ac9cc:
    // 0x1ac9cc: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x1ac9ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac9d0:
    // 0x1ac9d0: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1ac9d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ac9d4:
    // 0x1ac9d4: 0x50600059  beql        $v1, $zero, . + 4 + (0x59 << 2)
label_1ac9d8:
    if (ctx->pc == 0x1AC9D8u) {
        ctx->pc = 0x1AC9D8u;
            // 0x1ac9d8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1AC9DCu;
        goto label_1ac9dc;
    }
    ctx->pc = 0x1AC9D4u;
    {
        const bool branch_taken_0x1ac9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac9d4) {
            ctx->pc = 0x1AC9D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9D4u;
            // 0x1ac9d8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACB3Cu;
            goto label_1acb3c;
        }
    }
    ctx->pc = 0x1AC9DCu;
label_1ac9dc:
    // 0x1ac9dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ac9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac9e0:
    // 0x1ac9e0: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1ac9e0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1ac9e4:
    // 0x1ac9e4: 0x0  nop
    ctx->pc = 0x1ac9e4u;
    // NOP
label_1ac9e8:
    // 0x1ac9e8: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1ac9e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1ac9ec:
    // 0x1ac9ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ac9f0:
    if (ctx->pc == 0x1AC9F0u) {
        ctx->pc = 0x1AC9F0u;
            // 0x1ac9f0: 0x8ea5f6ec  lw          $a1, -0x914($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294964972)));
        ctx->pc = 0x1AC9F4u;
        goto label_1ac9f4;
    }
    ctx->pc = 0x1AC9ECu;
    {
        const bool branch_taken_0x1ac9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9ECu;
            // 0x1ac9f0: 0x8ea5f6ec  lw          $a1, -0x914($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294964972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac9ec) {
            ctx->pc = 0x1ACA08u;
            goto label_1aca08;
        }
    }
    ctx->pc = 0x1AC9F4u;
label_1ac9f4:
    // 0x1ac9f4: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x1ac9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1ac9f8:
    // 0x1ac9f8: 0xc049c22  jal         func_127088
label_1ac9fc:
    if (ctx->pc == 0x1AC9FCu) {
        ctx->pc = 0x1AC9FCu;
            // 0x1ac9fc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1ACA00u;
        goto label_1aca00;
    }
    ctx->pc = 0x1AC9F8u;
    SET_GPR_U32(ctx, 31, 0x1ACA00u);
    ctx->pc = 0x1AC9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9F8u;
            // 0x1ac9fc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA00u; }
        if (ctx->pc != 0x1ACA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA00u; }
        if (ctx->pc != 0x1ACA00u) { return; }
    }
    ctx->pc = 0x1ACA00u;
label_1aca00:
    // 0x1aca00: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_1aca04:
    if (ctx->pc == 0x1ACA04u) {
        ctx->pc = 0x1ACA04u;
            // 0x1aca04: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x1ACA08u;
        goto label_1aca08;
    }
    ctx->pc = 0x1ACA00u;
    {
        const bool branch_taken_0x1aca00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aca00) {
            ctx->pc = 0x1ACA04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA00u;
            // 0x1aca04: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC9E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ac9e8;
        }
    }
    ctx->pc = 0x1ACA08u;
label_1aca08:
    // 0x1aca08: 0x1212004b  beq         $s0, $s2, . + 4 + (0x4B << 2)
label_1aca0c:
    if (ctx->pc == 0x1ACA0Cu) {
        ctx->pc = 0x1ACA0Cu;
            // 0x1aca0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1ACA10u;
        goto label_1aca10;
    }
    ctx->pc = 0x1ACA08u;
    {
        const bool branch_taken_0x1aca08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x1ACA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA08u;
            // 0x1aca0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca08) {
            ctx->pc = 0x1ACB38u;
            goto label_1acb38;
        }
    }
    ctx->pc = 0x1ACA10u;
label_1aca10:
    // 0x1aca10: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x1aca10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1aca14:
    // 0x1aca14: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x1aca14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1aca18:
    // 0x1aca18: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x1aca18u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
label_1aca1c:
    // 0x1aca1c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1aca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1aca20:
    // 0x1aca20: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1aca20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1aca24:
    // 0x1aca24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1aca24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aca28:
    // 0x1aca28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1aca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1aca2c:
    // 0x1aca2c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1aca2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1aca30:
    // 0x1aca30: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x1aca30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_1aca34:
    // 0x1aca34: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1aca34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1aca38:
    // 0x1aca38: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1aca38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1aca3c:
    // 0x1aca3c: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x1aca3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1aca40:
    // 0x1aca40: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1aca40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1aca44:
    // 0x1aca44: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x1aca44u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
label_1aca48:
    // 0x1aca48: 0x9222000e  lbu         $v0, 0xE($s1)
    ctx->pc = 0x1aca48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
label_1aca4c:
    // 0x1aca4c: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x1aca4cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_1aca50:
    // 0x1aca50: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x1aca50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_1aca54:
    // 0x1aca54: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1aca54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1aca58:
    // 0x1aca58: 0xa2e30000  sb          $v1, 0x0($s7)
    ctx->pc = 0x1aca58u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
label_1aca5c:
    // 0x1aca5c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1aca5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1aca60:
    // 0x1aca60: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x1aca60u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1aca64:
    // 0x1aca64: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1aca68:
    if (ctx->pc == 0x1ACA68u) {
        ctx->pc = 0x1ACA68u;
            // 0x1aca68: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1ACA6Cu;
        goto label_1aca6c;
    }
    ctx->pc = 0x1ACA64u;
    {
        const bool branch_taken_0x1aca64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aca64) {
            ctx->pc = 0x1ACA68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA64u;
            // 0x1aca68: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACA6Cu;
            goto label_1aca6c;
        }
    }
    ctx->pc = 0x1ACA6Cu;
label_1aca6c:
    // 0x1aca6c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1aca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1aca70:
    // 0x1aca70: 0x1812  mflo        $v1
    ctx->pc = 0x1aca70u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1aca74:
    // 0x1aca74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1aca74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1aca78:
    // 0x1aca78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1aca78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1aca7c:
    // 0x1aca7c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x1aca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_1aca80:
    // 0x1aca80: 0x82850000  lb          $a1, 0x0($s4)
    ctx->pc = 0x1aca80u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1aca84:
    // 0x1aca84: 0x14a80004  bne         $a1, $t0, . + 4 + (0x4 << 2)
label_1aca88:
    if (ctx->pc == 0x1ACA88u) {
        ctx->pc = 0x1ACA88u;
            // 0x1aca88: 0x92830000  lbu         $v1, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x1ACA8Cu;
        goto label_1aca8c;
    }
    ctx->pc = 0x1ACA84u;
    {
        const bool branch_taken_0x1aca84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        ctx->pc = 0x1ACA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA84u;
            // 0x1aca88: 0x92830000  lbu         $v1, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca84) {
            ctx->pc = 0x1ACA98u;
            goto label_1aca98;
        }
    }
    ctx->pc = 0x1ACA8Cu;
label_1aca8c:
    // 0x1aca8c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1aca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1aca90:
    // 0x1aca90: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1aca94:
    if (ctx->pc == 0x1ACA94u) {
        ctx->pc = 0x1ACA94u;
            // 0x1aca94: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1ACA98u;
        goto label_1aca98;
    }
    ctx->pc = 0x1ACA90u;
    {
        const bool branch_taken_0x1aca90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA90u;
            // 0x1aca94: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca90) {
            ctx->pc = 0x1ACB00u;
            goto label_1acb00;
        }
    }
    ctx->pc = 0x1ACA98u;
label_1aca98:
    // 0x1aca98: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1aca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1aca9c:
    // 0x1aca9c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_1acaa0:
    if (ctx->pc == 0x1ACAA0u) {
        ctx->pc = 0x1ACAA0u;
            // 0x1acaa0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1ACAA4u;
        goto label_1acaa4;
    }
    ctx->pc = 0x1ACA9Cu;
    {
        const bool branch_taken_0x1aca9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ACAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA9Cu;
            // 0x1acaa0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca9c) {
            ctx->pc = 0x1ACAB0u;
            goto label_1acab0;
        }
    }
    ctx->pc = 0x1ACAA4u;
label_1acaa4:
    // 0x1acaa4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1acaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1acaa8:
    // 0x1acaa8: 0x10000015  b           . + 4 + (0x15 << 2)
label_1acaac:
    if (ctx->pc == 0x1ACAACu) {
        ctx->pc = 0x1ACAACu;
            // 0x1acaac: 0xa4870000  sh          $a3, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->pc = 0x1ACAB0u;
        goto label_1acab0;
    }
    ctx->pc = 0x1ACAA8u;
    {
        const bool branch_taken_0x1acaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAA8u;
            // 0x1acaac: 0xa4870000  sh          $a3, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acaa8) {
            ctx->pc = 0x1ACB00u;
            goto label_1acb00;
        }
    }
    ctx->pc = 0x1ACAB0u;
label_1acab0:
    // 0x1acab0: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
label_1acab4:
    if (ctx->pc == 0x1ACAB4u) {
        ctx->pc = 0x1ACAB4u;
            // 0x1acab4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1ACAB8u;
        goto label_1acab8;
    }
    ctx->pc = 0x1ACAB0u;
    {
        const bool branch_taken_0x1acab0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ACAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAB0u;
            // 0x1acab4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acab0) {
            ctx->pc = 0x1ACB04u;
            goto label_1acb04;
        }
    }
    ctx->pc = 0x1ACAB8u;
label_1acab8:
    // 0x1acab8: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x1acab8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_1acabc:
    // 0x1acabc: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x1acabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1acac0:
    // 0x1acac0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1acac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1acac4:
    // 0x1acac4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1acac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1acac8:
    // 0x1acac8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1acac8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1acacc:
    // 0x1acacc: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x1acaccu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
label_1acad0:
    // 0x1acad0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1acad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1acad4:
    // 0x1acad4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1acad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1acad8:
    // 0x1acad8: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x1acad8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_1acadc:
    // 0x1acadc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1acadcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1acae0:
    // 0x1acae0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1acae4:
    if (ctx->pc == 0x1ACAE4u) {
        ctx->pc = 0x1ACAE4u;
            // 0x1acae4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1ACAE8u;
        goto label_1acae8;
    }
    ctx->pc = 0x1ACAE0u;
    {
        const bool branch_taken_0x1acae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acae0) {
            ctx->pc = 0x1ACAE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAE0u;
            // 0x1acae4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACAE8u;
            goto label_1acae8;
        }
    }
    ctx->pc = 0x1ACAE8u;
label_1acae8:
    // 0x1acae8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1acae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1acaec:
    // 0x1acaec: 0x1812  mflo        $v1
    ctx->pc = 0x1acaecu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1acaf0:
    // 0x1acaf0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1acaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1acaf4:
    // 0x1acaf4: 0xa2880000  sb          $t0, 0x0($s4)
    ctx->pc = 0x1acaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 8));
label_1acaf8:
    // 0x1acaf8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1acaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1acafc:
    // 0x1acafc: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x1acafcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_1acb00:
    // 0x1acb00: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x1acb00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1acb04:
    // 0x1acb04: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1acb08:
    if (ctx->pc == 0x1ACB08u) {
        ctx->pc = 0x1ACB08u;
            // 0x1acb08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1ACB0Cu;
        goto label_1acb0c;
    }
    ctx->pc = 0x1ACB04u;
    {
        const bool branch_taken_0x1acb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB04u;
            // 0x1acb08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb04) {
            ctx->pc = 0x1ACB38u;
            goto label_1acb38;
        }
    }
    ctx->pc = 0x1ACB0Cu;
label_1acb0c:
    // 0x1acb0c: 0x82e30000  lb          $v1, 0x0($s7)
    ctx->pc = 0x1acb0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_1acb10:
    // 0x1acb10: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1acb14:
    if (ctx->pc == 0x1ACB14u) {
        ctx->pc = 0x1ACB14u;
            // 0x1acb14: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1ACB18u;
        goto label_1acb18;
    }
    ctx->pc = 0x1ACB10u;
    {
        const bool branch_taken_0x1acb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB10u;
            // 0x1acb14: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb10) {
            ctx->pc = 0x1ACB3Cu;
            goto label_1acb3c;
        }
    }
    ctx->pc = 0x1ACB18u;
label_1acb18:
    // 0x1acb18: 0x92c30000  lbu         $v1, 0x0($s6)
    ctx->pc = 0x1acb18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_1acb1c:
    // 0x1acb1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1acb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1acb20:
    // 0x1acb20: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x1acb20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1acb24:
    // 0x1acb24: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1acb28:
    if (ctx->pc == 0x1ACB28u) {
        ctx->pc = 0x1ACB28u;
            // 0x1acb28: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x1ACB2Cu;
        goto label_1acb2c;
    }
    ctx->pc = 0x1ACB24u;
    {
        const bool branch_taken_0x1acb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB24u;
            // 0x1acb28: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb24) {
            ctx->pc = 0x1ACB40u;
            goto label_1acb40;
        }
    }
    ctx->pc = 0x1ACB2Cu;
label_1acb2c:
    // 0x1acb2c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1acb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1acb30:
    // 0x1acb30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1acb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1acb34:
    // 0x1acb34: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1acb34u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1acb38:
    // 0x1acb38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1acb38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1acb3c:
    // 0x1acb3c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1acb3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1acb40:
    // 0x1acb40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1acb40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1acb44:
    // 0x1acb44: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1acb44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1acb48:
    // 0x1acb48: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1acb48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1acb4c:
    // 0x1acb4c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1acb4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1acb50:
    // 0x1acb50: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1acb50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1acb54:
    // 0x1acb54: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1acb54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1acb58:
    // 0x1acb58: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1acb58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1acb5c:
    // 0x1acb5c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1acb5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1acb60:
    // 0x1acb60: 0x3e00008  jr          $ra
label_1acb64:
    if (ctx->pc == 0x1ACB64u) {
        ctx->pc = 0x1ACB64u;
            // 0x1acb64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1ACB68u;
        goto label_1acb68;
    }
    ctx->pc = 0x1ACB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB60u;
            // 0x1acb64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ACB68u;
label_1acb68:
    // 0x1acb68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1acb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1acb6c:
    // 0x1acb6c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1acb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1acb70:
    // 0x1acb70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1acb70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1acb74:
    // 0x1acb74: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1acb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1acb78:
    // 0x1acb78: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1acb78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acb7c:
    // 0x1acb7c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1acb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_1acb80:
    // 0x1acb80: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x1acb80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_1acb84:
    // 0x1acb84: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1acb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1acb88:
    // 0x1acb88: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x1acb88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1acb8c:
    // 0x1acb8c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1acb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_1acb90:
    // 0x1acb90: 0x2613000f  addiu       $s3, $s0, 0xF
    ctx->pc = 0x1acb90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_1acb94:
    // 0x1acb94: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1acb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_1acb98:
    // 0x1acb98: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1acb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1acb9c:
    // 0x1acb9c: 0xa6140002  sh          $s4, 0x2($s0)
    ctx->pc = 0x1acb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 20));
label_1acba0:
    // 0x1acba0: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x1acba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1acba4:
    // 0x1acba4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1acba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1acba8:
    // 0x1acba8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1acba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1acbac:
    // 0x1acbac: 0x2603009c  addiu       $v1, $s0, 0x9C
    ctx->pc = 0x1acbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
label_1acbb0:
    // 0x1acbb0: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x1acbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1acbb4:
    // 0x1acbb4: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x1acbb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_1acbb8:
    // 0x1acbb8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1acbb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1acbbc:
    // 0x1acbbc: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1acbbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1acbc0:
    // 0x1acbc0: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x1acbc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1acbc4:
    // 0x1acbc4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1acbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1acbc8:
    // 0x1acbc8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1acbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1acbcc:
    // 0x1acbcc: 0xc06b24e  jal         func_1AC938
label_1acbd0:
    if (ctx->pc == 0x1ACBD0u) {
        ctx->pc = 0x1ACBD0u;
            // 0x1acbd0: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
        ctx->pc = 0x1ACBD4u;
        goto label_1acbd4;
    }
    ctx->pc = 0x1ACBCCu;
    SET_GPR_U32(ctx, 31, 0x1ACBD4u);
    ctx->pc = 0x1ACBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBCCu;
            // 0x1acbd0: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC938u;
    goto label_1ac938;
    ctx->pc = 0x1ACBD4u;
label_1acbd4:
    // 0x1acbd4: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_1acbd8:
    if (ctx->pc == 0x1ACBD8u) {
        ctx->pc = 0x1ACBD8u;
            // 0x1acbd8: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x1ACBDCu;
        goto label_1acbdc;
    }
    ctx->pc = 0x1ACBD4u;
    {
        const bool branch_taken_0x1acbd4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1acbd4) {
            ctx->pc = 0x1ACBD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBD4u;
            // 0x1acbd8: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACBE8u;
            goto label_1acbe8;
        }
    }
    ctx->pc = 0x1ACBDCu;
label_1acbdc:
    // 0x1acbdc: 0x10000019  b           . + 4 + (0x19 << 2)
label_1acbe0:
    if (ctx->pc == 0x1ACBE0u) {
        ctx->pc = 0x1ACBE0u;
            // 0x1acbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ACBE4u;
        goto label_1acbe4;
    }
    ctx->pc = 0x1ACBDCu;
    {
        const bool branch_taken_0x1acbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBDCu;
            // 0x1acbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acbdc) {
            ctx->pc = 0x1ACC44u;
            goto label_1acc44;
        }
    }
    ctx->pc = 0x1ACBE4u;
label_1acbe4:
    // 0x1acbe4: 0x0  nop
    ctx->pc = 0x1acbe4u;
    // NOP
label_1acbe8:
    // 0x1acbe8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1acbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1acbec:
    // 0x1acbec: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1acbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1acbf0:
    // 0x1acbf0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1acbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1acbf4:
    // 0x1acbf4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1acbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1acbf8:
    // 0x1acbf8: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x1acbf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_1acbfc:
    // 0x1acbfc: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x1acbfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_1acc00:
    // 0x1acc00: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x1acc00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_1acc04:
    // 0x1acc04: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1acc04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1acc08:
    // 0x1acc08: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1acc08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1acc0c:
    // 0x1acc0c: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x1acc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1acc10:
    // 0x1acc10: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x1acc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_1acc14:
    // 0x1acc14: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x1acc14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1acc18:
    // 0x1acc18: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x1acc18u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1acc1c:
    // 0x1acc1c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1acc1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_1acc20:
    // 0x1acc20: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x1acc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_1acc24:
    // 0x1acc24: 0xa6140098  sh          $s4, 0x98($s0)
    ctx->pc = 0x1acc24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 20));
label_1acc28:
    // 0x1acc28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1acc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1acc2c:
    // 0x1acc2c: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x1acc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
label_1acc30:
    // 0x1acc30: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x1acc30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_1acc34:
    // 0x1acc34: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x1acc34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_1acc38:
    // 0x1acc38: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x1acc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_1acc3c:
    // 0x1acc3c: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1acc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_1acc40:
    // 0x1acc40: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1acc40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_1acc44:
    // 0x1acc44: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1acc44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1acc48:
    // 0x1acc48: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1acc48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1acc4c:
    // 0x1acc4c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1acc4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1acc50:
    // 0x1acc50: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1acc50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1acc54:
    // 0x1acc54: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1acc54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1acc58:
    // 0x1acc58: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1acc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1acc5c:
    // 0x1acc5c: 0x3e00008  jr          $ra
label_1acc60:
    if (ctx->pc == 0x1ACC60u) {
        ctx->pc = 0x1ACC60u;
            // 0x1acc60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1ACC64u;
        goto label_1acc64;
    }
    ctx->pc = 0x1ACC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC5Cu;
            // 0x1acc60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ACC64u;
label_1acc64:
    // 0x1acc64: 0x0  nop
    ctx->pc = 0x1acc64u;
    // NOP
label_1acc68:
    // 0x1acc68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1acc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1acc6c:
    // 0x1acc6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acc70:
    // 0x1acc70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1acc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1acc74:
    // 0x1acc74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1acc74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1acc78:
    // 0x1acc78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1acc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1acc7c:
    // 0x1acc7c: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x1acc7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_1acc80:
    // 0x1acc80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1acc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1acc84:
    // 0x1acc84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1acc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1acc88:
    // 0x1acc88: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1acc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1acc8c:
    // 0x1acc8c: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
label_1acc90:
    if (ctx->pc == 0x1ACC90u) {
        ctx->pc = 0x1ACC90u;
            // 0x1acc90: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1ACC94u;
        goto label_1acc94;
    }
    ctx->pc = 0x1ACC8Cu;
    {
        const bool branch_taken_0x1acc8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ACC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC8Cu;
            // 0x1acc90: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc8c) {
            ctx->pc = 0x1ACD9Cu;
            goto label_1acd9c;
        }
    }
    ctx->pc = 0x1ACC94u;
label_1acc94:
    // 0x1acc94: 0xc06f700  jal         func_1BDC00
label_1acc98:
    if (ctx->pc == 0x1ACC98u) {
        ctx->pc = 0x1ACC98u;
            // 0x1acc98: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1ACC9Cu;
        goto label_1acc9c;
    }
    ctx->pc = 0x1ACC94u;
    SET_GPR_U32(ctx, 31, 0x1ACC9Cu);
    ctx->pc = 0x1ACC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC94u;
            // 0x1acc98: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC00u;
    if (runtime->hasFunction(0x1BDC00u)) {
        auto targetFn = runtime->lookupFunction(0x1BDC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC9Cu; }
        if (ctx->pc != 0x1ACC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDC00_0x1bdc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC9Cu; }
        if (ctx->pc != 0x1ACC9Cu) { return; }
    }
    ctx->pc = 0x1ACC9Cu;
label_1acc9c:
    // 0x1acc9c: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
label_1acca0:
    if (ctx->pc == 0x1ACCA0u) {
        ctx->pc = 0x1ACCA0u;
            // 0x1acca0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1ACCA4u;
        goto label_1acca4;
    }
    ctx->pc = 0x1ACC9Cu;
    {
        const bool branch_taken_0x1acc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acc9c) {
            ctx->pc = 0x1ACCA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC9Cu;
            // 0x1acca0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACD9Cu;
            goto label_1acd9c;
        }
    }
    ctx->pc = 0x1ACCA4u;
label_1acca4:
    // 0x1acca4: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1acca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1acca8:
    // 0x1acca8: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x1acca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_1accac:
    // 0x1accac: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1accacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1accb0:
    // 0x1accb0: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x1accb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_1accb4:
    // 0x1accb4: 0x40f809  jalr        $v0
label_1accb8:
    if (ctx->pc == 0x1ACCB8u) {
        ctx->pc = 0x1ACCB8u;
            // 0x1accb8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x1ACCBCu;
        goto label_1accbc;
    }
    ctx->pc = 0x1ACCB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACCBCu);
        ctx->pc = 0x1ACCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACCB4u;
            // 0x1accb8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ACCBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCBCu; }
            if (ctx->pc != 0x1ACCBCu) { return; }
        }
        }
    }
    ctx->pc = 0x1ACCBCu;
label_1accbc:
    // 0x1accbc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1accbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1accc0:
    // 0x1accc0: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x1accc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1accc4:
    // 0x1accc4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1accc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1accc8:
    // 0x1accc8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1accc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1acccc:
    // 0x1acccc: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x1accccu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1accd0:
    // 0x1accd0: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x1accd0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1accd4:
    // 0x1accd4: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x1accd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1accd8:
    // 0x1accd8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1accd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1accdc:
    // 0x1accdc: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x1accdcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_1acce0:
    // 0x1acce0: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1acce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1acce4:
    // 0x1acce4: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x1acce4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1acce8:
    // 0x1acce8: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x1acce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1accec:
    // 0x1accec: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x1accecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_1accf0:
    // 0x1accf0: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x1accf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_1accf4:
    // 0x1accf4: 0x14860016  bne         $a0, $a2, . + 4 + (0x16 << 2)
label_1accf8:
    if (ctx->pc == 0x1ACCF8u) {
        ctx->pc = 0x1ACCF8u;
            // 0x1accf8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1ACCFCu;
        goto label_1accfc;
    }
    ctx->pc = 0x1ACCF4u;
    {
        const bool branch_taken_0x1accf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1ACCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACCF4u;
            // 0x1accf8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1accf4) {
            ctx->pc = 0x1ACD50u;
            goto label_1acd50;
        }
    }
    ctx->pc = 0x1ACCFCu;
label_1accfc:
    // 0x1accfc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1accfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1acd00:
    // 0x1acd00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1acd00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acd04:
    // 0x1acd04: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1acd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1acd08:
    // 0x1acd08: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1acd08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1acd0c:
    // 0x1acd0c: 0x1920001b  blez        $t1, . + 4 + (0x1B << 2)
label_1acd10:
    if (ctx->pc == 0x1ACD10u) {
        ctx->pc = 0x1ACD10u;
            // 0x1acd10: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x1ACD14u;
        goto label_1acd14;
    }
    ctx->pc = 0x1ACD0Cu;
    {
        const bool branch_taken_0x1acd0c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1ACD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD0Cu;
            // 0x1acd10: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd0c) {
            ctx->pc = 0x1ACD7Cu;
            goto label_1acd7c;
        }
    }
    ctx->pc = 0x1ACD14u;
label_1acd14:
    // 0x1acd14: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1acd14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1acd18:
    // 0x1acd18: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x1acd18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1acd1c:
    // 0x1acd1c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1acd1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1acd20:
    // 0x1acd20: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x1acd20u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1acd24:
    // 0x1acd24: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x1acd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1acd28:
    // 0x1acd28: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x1acd28u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1acd2c:
    // 0x1acd2c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1acd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1acd30:
    // 0x1acd30: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x1acd30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_1acd34:
    // 0x1acd34: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x1acd34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_1acd38:
    // 0x1acd38: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1acd38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_1acd3c:
    // 0x1acd3c: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
label_1acd40:
    if (ctx->pc == 0x1ACD40u) {
        ctx->pc = 0x1ACD40u;
            // 0x1acd40: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1ACD44u;
        goto label_1acd44;
    }
    ctx->pc = 0x1ACD3Cu;
    {
        const bool branch_taken_0x1acd3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD3Cu;
            // 0x1acd40: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd3c) {
            ctx->pc = 0x1ACD18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1acd18;
        }
    }
    ctx->pc = 0x1ACD44u;
label_1acd44:
    // 0x1acd44: 0x1000000d  b           . + 4 + (0xD << 2)
label_1acd48:
    if (ctx->pc == 0x1ACD48u) {
        ctx->pc = 0x1ACD48u;
            // 0x1acd48: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1ACD4Cu;
        goto label_1acd4c;
    }
    ctx->pc = 0x1ACD44u;
    {
        const bool branch_taken_0x1acd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD44u;
            // 0x1acd48: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd44) {
            ctx->pc = 0x1ACD7Cu;
            goto label_1acd7c;
        }
    }
    ctx->pc = 0x1ACD4Cu;
label_1acd4c:
    // 0x1acd4c: 0x0  nop
    ctx->pc = 0x1acd4cu;
    // NOP
label_1acd50:
    // 0x1acd50: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_1acd54:
    if (ctx->pc == 0x1ACD54u) {
        ctx->pc = 0x1ACD54u;
            // 0x1acd54: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD58u;
        goto label_1acd58;
    }
    ctx->pc = 0x1ACD50u;
    {
        const bool branch_taken_0x1acd50 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1ACD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD50u;
            // 0x1acd54: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd50) {
            ctx->pc = 0x1ACD7Cu;
            goto label_1acd7c;
        }
    }
    ctx->pc = 0x1ACD58u;
label_1acd58:
    // 0x1acd58: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x1acd58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1acd5c:
    // 0x1acd5c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1acd5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1acd60:
    // 0x1acd60: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1acd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1acd64:
    // 0x1acd64: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1acd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1acd68:
    // 0x1acd68: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1acd68u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1acd6c:
    // 0x1acd6c: 0x109282a  slt         $a1, $t0, $t1
    ctx->pc = 0x1acd6cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1acd70:
    // 0x1acd70: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
label_1acd74:
    if (ctx->pc == 0x1ACD74u) {
        ctx->pc = 0x1ACD74u;
            // 0x1acd74: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x1ACD78u;
        goto label_1acd78;
    }
    ctx->pc = 0x1ACD70u;
    {
        const bool branch_taken_0x1acd70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD70u;
            // 0x1acd74: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd70) {
            ctx->pc = 0x1ACD58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1acd58;
        }
    }
    ctx->pc = 0x1ACD78u;
label_1acd78:
    // 0x1acd78: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x1acd78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1acd7c:
    // 0x1acd7c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1acd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1acd80:
    // 0x1acd80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1acd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1acd84:
    // 0x1acd84: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1acd84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1acd88:
    // 0x1acd88: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1acd88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1acd8c:
    // 0x1acd8c: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x1acd8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1acd90:
    // 0x1acd90: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x1acd90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_1acd94:
    // 0x1acd94: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1acd94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1acd98:
    // 0x1acd98: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1acd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1acd9c:
    // 0x1acd9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1acd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1acda0:
    // 0x1acda0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1acda4:
    if (ctx->pc == 0x1ACDA4u) {
        ctx->pc = 0x1ACDA4u;
            // 0x1acda4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1ACDA8u;
        goto label_1acda8;
    }
    ctx->pc = 0x1ACDA0u;
    {
        const bool branch_taken_0x1acda0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1acda0) {
            ctx->pc = 0x1ACDA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDA0u;
            // 0x1acda4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACDC8u;
            goto label_1acdc8;
        }
    }
    ctx->pc = 0x1ACDA8u;
label_1acda8:
    // 0x1acda8: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1acda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1acdac:
    // 0x1acdac: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1acdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1acdb0:
    // 0x1acdb0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1acdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1acdb4:
    // 0x1acdb4: 0x60f809  jalr        $v1
label_1acdb8:
    if (ctx->pc == 0x1ACDB8u) {
        ctx->pc = 0x1ACDB8u;
            // 0x1acdb8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x1ACDBCu;
        goto label_1acdbc;
    }
    ctx->pc = 0x1ACDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ACDBCu);
        ctx->pc = 0x1ACDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDB4u;
            // 0x1acdb8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ACDBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDBCu; }
            if (ctx->pc != 0x1ACDBCu) { return; }
        }
        }
    }
    ctx->pc = 0x1ACDBCu;
label_1acdbc:
    // 0x1acdbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1acdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1acdc0:
    // 0x1acdc0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1acdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1acdc4:
    // 0x1acdc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1acdc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1acdc8:
    // 0x1acdc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1acdc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1acdcc:
    // 0x1acdcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1acdccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1acdd0:
    // 0x1acdd0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1acdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1acdd4:
    // 0x1acdd4: 0x3e00008  jr          $ra
label_1acdd8:
    if (ctx->pc == 0x1ACDD8u) {
        ctx->pc = 0x1ACDD8u;
            // 0x1acdd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1ACDDCu;
        goto label_1acddc;
    }
    ctx->pc = 0x1ACDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDD4u;
            // 0x1acdd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ACDDCu;
label_1acddc:
    // 0x1acddc: 0x0  nop
    ctx->pc = 0x1acddcu;
    // NOP
label_1acde0:
    // 0x1acde0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1acde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1acde4:
    // 0x1acde4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acde8:
    // 0x1acde8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1acde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1acdec:
    // 0x1acdec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1acdecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1acdf0:
    // 0x1acdf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1acdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1acdf4:
    // 0x1acdf4: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x1acdf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_1acdf8:
    // 0x1acdf8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1acdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1acdfc:
    // 0x1acdfc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1acdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1ace00:
    // 0x1ace00: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ace00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ace04:
    // 0x1ace04: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
label_1ace08:
    if (ctx->pc == 0x1ACE08u) {
        ctx->pc = 0x1ACE08u;
            // 0x1ace08: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1ACE0Cu;
        goto label_1ace0c;
    }
    ctx->pc = 0x1ACE04u;
    {
        const bool branch_taken_0x1ace04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ACE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE04u;
            // 0x1ace08: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace04) {
            ctx->pc = 0x1ACF34u;
            goto label_1acf34;
        }
    }
    ctx->pc = 0x1ACE0Cu;
label_1ace0c:
    // 0x1ace0c: 0xc06f700  jal         func_1BDC00
label_1ace10:
    if (ctx->pc == 0x1ACE10u) {
        ctx->pc = 0x1ACE10u;
            // 0x1ace10: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1ACE14u;
        goto label_1ace14;
    }
    ctx->pc = 0x1ACE0Cu;
    SET_GPR_U32(ctx, 31, 0x1ACE14u);
    ctx->pc = 0x1ACE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE0Cu;
            // 0x1ace10: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC00u;
    if (runtime->hasFunction(0x1BDC00u)) {
        auto targetFn = runtime->lookupFunction(0x1BDC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE14u; }
        if (ctx->pc != 0x1ACE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDC00_0x1bdc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE14u; }
        if (ctx->pc != 0x1ACE14u) { return; }
    }
    ctx->pc = 0x1ACE14u;
label_1ace14:
    // 0x1ace14: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
label_1ace18:
    if (ctx->pc == 0x1ACE18u) {
        ctx->pc = 0x1ACE18u;
            // 0x1ace18: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1ACE1Cu;
        goto label_1ace1c;
    }
    ctx->pc = 0x1ACE14u;
    {
        const bool branch_taken_0x1ace14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ace14) {
            ctx->pc = 0x1ACE18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE14u;
            // 0x1ace18: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACF34u;
            goto label_1acf34;
        }
    }
    ctx->pc = 0x1ACE1Cu;
label_1ace1c:
    // 0x1ace1c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1ace1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1ace20:
    // 0x1ace20: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x1ace20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_1ace24:
    // 0x1ace24: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1ace24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1ace28:
    // 0x1ace28: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x1ace28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_1ace2c:
    // 0x1ace2c: 0x40f809  jalr        $v0
label_1ace30:
    if (ctx->pc == 0x1ACE30u) {
        ctx->pc = 0x1ACE30u;
            // 0x1ace30: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x1ACE34u;
        goto label_1ace34;
    }
    ctx->pc = 0x1ACE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACE34u);
        ctx->pc = 0x1ACE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE2Cu;
            // 0x1ace30: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ACE34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE34u; }
            if (ctx->pc != 0x1ACE34u) { return; }
        }
        }
    }
    ctx->pc = 0x1ACE34u;
label_1ace34:
    // 0x1ace34: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1ace34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1ace38:
    // 0x1ace38: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x1ace38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1ace3c:
    // 0x1ace3c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ace3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ace40:
    // 0x1ace40: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1ace40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1ace44:
    // 0x1ace44: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x1ace44u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1ace48:
    // 0x1ace48: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x1ace48u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1ace4c:
    // 0x1ace4c: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x1ace4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1ace50:
    // 0x1ace50: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1ace50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ace54:
    // 0x1ace54: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x1ace54u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_1ace58:
    // 0x1ace58: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1ace58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1ace5c:
    // 0x1ace5c: 0x8e2a0014  lw          $t2, 0x14($s1)
    ctx->pc = 0x1ace5cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1ace60:
    // 0x1ace60: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x1ace60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1ace64:
    // 0x1ace64: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x1ace64u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_1ace68:
    // 0x1ace68: 0x1435821  addu        $t3, $t2, $v1
    ctx->pc = 0x1ace68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_1ace6c:
    // 0x1ace6c: 0x1486001c  bne         $a0, $a2, . + 4 + (0x1C << 2)
label_1ace70:
    if (ctx->pc == 0x1ACE70u) {
        ctx->pc = 0x1ACE70u;
            // 0x1ace70: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1ACE74u;
        goto label_1ace74;
    }
    ctx->pc = 0x1ACE6Cu;
    {
        const bool branch_taken_0x1ace6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1ACE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE6Cu;
            // 0x1ace70: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace6c) {
            ctx->pc = 0x1ACEE0u;
            goto label_1acee0;
        }
    }
    ctx->pc = 0x1ACE74u;
label_1ace74:
    // 0x1ace74: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1ace74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1ace78:
    // 0x1ace78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ace78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ace7c:
    // 0x1ace7c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1ace7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1ace80:
    // 0x1ace80: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ace80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ace84:
    // 0x1ace84: 0x19200024  blez        $t1, . + 4 + (0x24 << 2)
label_1ace88:
    if (ctx->pc == 0x1ACE88u) {
        ctx->pc = 0x1ACE88u;
            // 0x1ace88: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->pc = 0x1ACE8Cu;
        goto label_1ace8c;
    }
    ctx->pc = 0x1ACE84u;
    {
        const bool branch_taken_0x1ace84 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1ACE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE84u;
            // 0x1ace88: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace84) {
            ctx->pc = 0x1ACF18u;
            goto label_1acf18;
        }
    }
    ctx->pc = 0x1ACE8Cu;
label_1ace8c:
    // 0x1ace8c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ace8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ace90:
    // 0x1ace90: 0x340aff80  ori         $t2, $zero, 0xFF80
    ctx->pc = 0x1ace90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
label_1ace94:
    // 0x1ace94: 0x0  nop
    ctx->pc = 0x1ace94u;
    // NOP
label_1ace98:
    // 0x1ace98: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1ace98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1ace9c:
    // 0x1ace9c: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x1ace9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1acea0:
    // 0x1acea0: 0x8b2821  addu        $a1, $a0, $t3
    ctx->pc = 0x1acea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1acea4:
    // 0x1acea4: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x1acea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1acea8:
    // 0x1acea8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1acea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1aceac:
    // 0x1aceac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1aceacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1aceb0:
    // 0x1aceb0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1aceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1aceb4:
    // 0x1aceb4: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x1aceb4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1aceb8:
    // 0x1aceb8: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1aceb8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1acebc:
    // 0x1acebc: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x1acebcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_1acec0:
    // 0x1acec0: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1acec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_1acec4:
    // 0x1acec4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1acec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1acec8:
    // 0x1acec8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1acec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1acecc:
    // 0x1acecc: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
label_1aced0:
    if (ctx->pc == 0x1ACED0u) {
        ctx->pc = 0x1ACED0u;
            // 0x1aced0: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1ACED4u;
        goto label_1aced4;
    }
    ctx->pc = 0x1ACECCu;
    {
        const bool branch_taken_0x1acecc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACECCu;
            // 0x1aced0: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acecc) {
            ctx->pc = 0x1ACE98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ace98;
        }
    }
    ctx->pc = 0x1ACED4u;
label_1aced4:
    // 0x1aced4: 0x10000010  b           . + 4 + (0x10 << 2)
label_1aced8:
    if (ctx->pc == 0x1ACED8u) {
        ctx->pc = 0x1ACED8u;
            // 0x1aced8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1ACEDCu;
        goto label_1acedc;
    }
    ctx->pc = 0x1ACED4u;
    {
        const bool branch_taken_0x1aced4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACED4u;
            // 0x1aced8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aced4) {
            ctx->pc = 0x1ACF18u;
            goto label_1acf18;
        }
    }
    ctx->pc = 0x1ACEDCu;
label_1acedc:
    // 0x1acedc: 0x0  nop
    ctx->pc = 0x1acedcu;
    // NOP
label_1acee0:
    // 0x1acee0: 0x1920000d  blez        $t1, . + 4 + (0xD << 2)
label_1acee4:
    if (ctx->pc == 0x1ACEE4u) {
        ctx->pc = 0x1ACEE4u;
            // 0x1acee4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ACEE8u;
        goto label_1acee8;
    }
    ctx->pc = 0x1ACEE0u;
    {
        const bool branch_taken_0x1acee0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1ACEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACEE0u;
            // 0x1acee4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acee0) {
            ctx->pc = 0x1ACF18u;
            goto label_1acf18;
        }
    }
    ctx->pc = 0x1ACEE8u;
label_1acee8:
    // 0x1acee8: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1acee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1aceec:
    // 0x1aceec: 0x3406ff80  ori         $a2, $zero, 0xFF80
    ctx->pc = 0x1aceecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
label_1acef0:
    // 0x1acef0: 0x2481021  addu        $v0, $s2, $t0
    ctx->pc = 0x1acef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_1acef4:
    // 0x1acef4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1acef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1acef8:
    // 0x1acef8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1acef8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1acefc:
    // 0x1acefc: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x1acefcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1acf00:
    // 0x1acf00: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1acf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1acf04:
    // 0x1acf04: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1acf04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1acf08:
    // 0x1acf08: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1acf08u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1acf0c:
    // 0x1acf0c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_1acf10:
    if (ctx->pc == 0x1ACF10u) {
        ctx->pc = 0x1ACF10u;
            // 0x1acf10: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x1ACF14u;
        goto label_1acf14;
    }
    ctx->pc = 0x1ACF0Cu;
    {
        const bool branch_taken_0x1acf0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF0Cu;
            // 0x1acf10: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf0c) {
            ctx->pc = 0x1ACEF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1acef0;
        }
    }
    ctx->pc = 0x1ACF14u;
label_1acf14:
    // 0x1acf14: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x1acf14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1acf18:
    // 0x1acf18: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1acf18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1acf1c:
    // 0x1acf1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1acf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1acf20:
    // 0x1acf20: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1acf20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1acf24:
    // 0x1acf24: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1acf24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1acf28:
    // 0x1acf28: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x1acf28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1acf2c:
    // 0x1acf2c: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x1acf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_1acf30:
    // 0x1acf30: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1acf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1acf34:
    // 0x1acf34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1acf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1acf38:
    // 0x1acf38: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1acf3c:
    if (ctx->pc == 0x1ACF3Cu) {
        ctx->pc = 0x1ACF3Cu;
            // 0x1acf3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1ACF40u;
        goto label_1acf40;
    }
    ctx->pc = 0x1ACF38u;
    {
        const bool branch_taken_0x1acf38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1acf38) {
            ctx->pc = 0x1ACF3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF38u;
            // 0x1acf3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACF60u;
            goto label_1acf60;
        }
    }
    ctx->pc = 0x1ACF40u;
label_1acf40:
    // 0x1acf40: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1acf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1acf44:
    // 0x1acf44: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1acf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1acf48:
    // 0x1acf48: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1acf48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1acf4c:
    // 0x1acf4c: 0x60f809  jalr        $v1
label_1acf50:
    if (ctx->pc == 0x1ACF50u) {
        ctx->pc = 0x1ACF50u;
            // 0x1acf50: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x1ACF54u;
        goto label_1acf54;
    }
    ctx->pc = 0x1ACF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ACF54u);
        ctx->pc = 0x1ACF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF4Cu;
            // 0x1acf50: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ACF54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ACF54u; }
            if (ctx->pc != 0x1ACF54u) { return; }
        }
        }
    }
    ctx->pc = 0x1ACF54u;
label_1acf54:
    // 0x1acf54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1acf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1acf58:
    // 0x1acf58: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1acf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1acf5c:
    // 0x1acf5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1acf5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1acf60:
    // 0x1acf60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1acf60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1acf64:
    // 0x1acf64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1acf64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1acf68:
    // 0x1acf68: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1acf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1acf6c:
    // 0x1acf6c: 0x3e00008  jr          $ra
label_1acf70:
    if (ctx->pc == 0x1ACF70u) {
        ctx->pc = 0x1ACF70u;
            // 0x1acf70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1ACF74u;
        goto label_1acf74;
    }
    ctx->pc = 0x1ACF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF6Cu;
            // 0x1acf70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ACF74u;
label_1acf74:
    // 0x1acf74: 0x0  nop
    ctx->pc = 0x1acf74u;
    // NOP
label_1acf78:
    // 0x1acf78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1acf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1acf7c:
    // 0x1acf7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acf80:
    // 0x1acf80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1acf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1acf84:
    // 0x1acf84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1acf84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1acf88:
    // 0x1acf88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1acf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1acf8c:
    // 0x1acf8c: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x1acf8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_1acf90:
    // 0x1acf90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1acf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1acf94:
    // 0x1acf94: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1acf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1acf98:
    // 0x1acf98: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1acf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1acf9c:
    // 0x1acf9c: 0x1462004d  bne         $v1, $v0, . + 4 + (0x4D << 2)
label_1acfa0:
    if (ctx->pc == 0x1ACFA0u) {
        ctx->pc = 0x1ACFA0u;
            // 0x1acfa0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1ACFA4u;
        goto label_1acfa4;
    }
    ctx->pc = 0x1ACF9Cu;
    {
        const bool branch_taken_0x1acf9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ACFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF9Cu;
            // 0x1acfa0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf9c) {
            ctx->pc = 0x1AD0D4u;
            goto label_1ad0d4;
        }
    }
    ctx->pc = 0x1ACFA4u;
label_1acfa4:
    // 0x1acfa4: 0xc06f700  jal         func_1BDC00
label_1acfa8:
    if (ctx->pc == 0x1ACFA8u) {
        ctx->pc = 0x1ACFA8u;
            // 0x1acfa8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1ACFACu;
        goto label_1acfac;
    }
    ctx->pc = 0x1ACFA4u;
    SET_GPR_U32(ctx, 31, 0x1ACFACu);
    ctx->pc = 0x1ACFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACFA4u;
            // 0x1acfa8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC00u;
    if (runtime->hasFunction(0x1BDC00u)) {
        auto targetFn = runtime->lookupFunction(0x1BDC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACFACu; }
        if (ctx->pc != 0x1ACFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDC00_0x1bdc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACFACu; }
        if (ctx->pc != 0x1ACFACu) { return; }
    }
    ctx->pc = 0x1ACFACu;
label_1acfac:
    // 0x1acfac: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
label_1acfb0:
    if (ctx->pc == 0x1ACFB0u) {
        ctx->pc = 0x1ACFB0u;
            // 0x1acfb0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1ACFB4u;
        goto label_1acfb4;
    }
    ctx->pc = 0x1ACFACu;
    {
        const bool branch_taken_0x1acfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acfac) {
            ctx->pc = 0x1ACFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACFACu;
            // 0x1acfb0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD0D4u;
            goto label_1ad0d4;
        }
    }
    ctx->pc = 0x1ACFB4u;
label_1acfb4:
    // 0x1acfb4: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1acfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1acfb8:
    // 0x1acfb8: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x1acfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_1acfbc:
    // 0x1acfbc: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1acfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1acfc0:
    // 0x1acfc0: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x1acfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_1acfc4:
    // 0x1acfc4: 0x40f809  jalr        $v0
label_1acfc8:
    if (ctx->pc == 0x1ACFC8u) {
        ctx->pc = 0x1ACFC8u;
            // 0x1acfc8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x1ACFCCu;
        goto label_1acfcc;
    }
    ctx->pc = 0x1ACFC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACFCCu);
        ctx->pc = 0x1ACFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACFC4u;
            // 0x1acfc8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ACFCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ACFCCu; }
            if (ctx->pc != 0x1ACFCCu) { return; }
        }
        }
    }
    ctx->pc = 0x1ACFCCu;
label_1acfcc:
    // 0x1acfcc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1acfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1acfd0:
    // 0x1acfd0: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x1acfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1acfd4:
    // 0x1acfd4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1acfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1acfd8:
    // 0x1acfd8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1acfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1acfdc:
    // 0x1acfdc: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x1acfdcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1acfe0:
    // 0x1acfe0: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x1acfe0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1acfe4:
    // 0x1acfe4: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x1acfe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1acfe8:
    // 0x1acfe8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1acfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1acfec:
    // 0x1acfec: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x1acfecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_1acff0:
    // 0x1acff0: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1acff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1acff4:
    // 0x1acff4: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x1acff4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1acff8:
    // 0x1acff8: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x1acff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1acffc:
    // 0x1acffc: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x1acffcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_1ad000:
    // 0x1ad000: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x1ad000u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_1ad004:
    // 0x1ad004: 0x1486001c  bne         $a0, $a2, . + 4 + (0x1C << 2)
label_1ad008:
    if (ctx->pc == 0x1AD008u) {
        ctx->pc = 0x1AD008u;
            // 0x1ad008: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1AD00Cu;
        goto label_1ad00c;
    }
    ctx->pc = 0x1AD004u;
    {
        const bool branch_taken_0x1ad004 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1AD008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD004u;
            // 0x1ad008: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad004) {
            ctx->pc = 0x1AD078u;
            goto label_1ad078;
        }
    }
    ctx->pc = 0x1AD00Cu;
label_1ad00c:
    // 0x1ad00c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1ad00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1ad010:
    // 0x1ad010: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ad010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad014:
    // 0x1ad014: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1ad014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1ad018:
    // 0x1ad018: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ad018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ad01c:
    // 0x1ad01c: 0x19200025  blez        $t1, . + 4 + (0x25 << 2)
label_1ad020:
    if (ctx->pc == 0x1AD020u) {
        ctx->pc = 0x1AD020u;
            // 0x1ad020: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AD024u;
        goto label_1ad024;
    }
    ctx->pc = 0x1AD01Cu;
    {
        const bool branch_taken_0x1ad01c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1AD020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD01Cu;
            // 0x1ad020: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad01c) {
            ctx->pc = 0x1AD0B4u;
            goto label_1ad0b4;
        }
    }
    ctx->pc = 0x1AD024u;
label_1ad024:
    // 0x1ad024: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ad024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ad028:
    // 0x1ad028: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x1ad028u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_1ad02c:
    // 0x1ad02c: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x1ad02cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1ad030:
    // 0x1ad030: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1ad030u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1ad034:
    // 0x1ad034: 0x8a2821  addu        $a1, $a0, $t2
    ctx->pc = 0x1ad034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_1ad038:
    // 0x1ad038: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1ad038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1ad03c:
    // 0x1ad03c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ad03cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ad040:
    // 0x1ad040: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ad040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ad044:
    // 0x1ad044: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1ad044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1ad048:
    // 0x1ad048: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1ad048u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1ad04c:
    // 0x1ad04c: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x1ad04cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1ad050:
    // 0x1ad050: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x1ad050u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_1ad054:
    // 0x1ad054: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x1ad054u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_1ad058:
    // 0x1ad058: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1ad058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_1ad05c:
    // 0x1ad05c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1ad05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1ad060:
    // 0x1ad060: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ad060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ad064:
    // 0x1ad064: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_1ad068:
    if (ctx->pc == 0x1AD068u) {
        ctx->pc = 0x1AD068u;
            // 0x1ad068: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1AD06Cu;
        goto label_1ad06c;
    }
    ctx->pc = 0x1AD064u;
    {
        const bool branch_taken_0x1ad064 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD064u;
            // 0x1ad068: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad064) {
            ctx->pc = 0x1AD028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ad028;
        }
    }
    ctx->pc = 0x1AD06Cu;
label_1ad06c:
    // 0x1ad06c: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ad070:
    if (ctx->pc == 0x1AD070u) {
        ctx->pc = 0x1AD070u;
            // 0x1ad070: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1AD074u;
        goto label_1ad074;
    }
    ctx->pc = 0x1AD06Cu;
    {
        const bool branch_taken_0x1ad06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD06Cu;
            // 0x1ad070: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad06c) {
            ctx->pc = 0x1AD0B4u;
            goto label_1ad0b4;
        }
    }
    ctx->pc = 0x1AD074u;
label_1ad074:
    // 0x1ad074: 0x0  nop
    ctx->pc = 0x1ad074u;
    // NOP
label_1ad078:
    // 0x1ad078: 0x1920000e  blez        $t1, . + 4 + (0xE << 2)
label_1ad07c:
    if (ctx->pc == 0x1AD07Cu) {
        ctx->pc = 0x1AD07Cu;
            // 0x1ad07c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD080u;
        goto label_1ad080;
    }
    ctx->pc = 0x1AD078u;
    {
        const bool branch_taken_0x1ad078 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1AD07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD078u;
            // 0x1ad07c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad078) {
            ctx->pc = 0x1AD0B4u;
            goto label_1ad0b4;
        }
    }
    ctx->pc = 0x1AD080u;
label_1ad080:
    // 0x1ad080: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ad080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ad084:
    // 0x1ad084: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1ad084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1ad088:
    // 0x1ad088: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x1ad088u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1ad08c:
    // 0x1ad08c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ad08cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ad090:
    // 0x1ad090: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1ad090u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1ad094:
    // 0x1ad094: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1ad094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1ad098:
    // 0x1ad098: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1ad098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1ad09c:
    // 0x1ad09c: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x1ad09cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1ad0a0:
    // 0x1ad0a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ad0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ad0a4:
    // 0x1ad0a4: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x1ad0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_1ad0a8:
    // 0x1ad0a8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_1ad0ac:
    if (ctx->pc == 0x1AD0ACu) {
        ctx->pc = 0x1AD0ACu;
            // 0x1ad0ac: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x1AD0B0u;
        goto label_1ad0b0;
    }
    ctx->pc = 0x1AD0A8u;
    {
        const bool branch_taken_0x1ad0a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD0A8u;
            // 0x1ad0ac: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad0a8) {
            ctx->pc = 0x1AD088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ad088;
        }
    }
    ctx->pc = 0x1AD0B0u;
label_1ad0b0:
    // 0x1ad0b0: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x1ad0b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1ad0b4:
    // 0x1ad0b4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1ad0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1ad0b8:
    // 0x1ad0b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ad0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ad0bc:
    // 0x1ad0bc: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1ad0bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1ad0c0:
    // 0x1ad0c0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1ad0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1ad0c4:
    // 0x1ad0c4: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x1ad0c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1ad0c8:
    // 0x1ad0c8: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x1ad0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_1ad0cc:
    // 0x1ad0cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ad0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ad0d0:
    // 0x1ad0d0: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1ad0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1ad0d4:
    // 0x1ad0d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ad0d8:
    // 0x1ad0d8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1ad0dc:
    if (ctx->pc == 0x1AD0DCu) {
        ctx->pc = 0x1AD0DCu;
            // 0x1ad0dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1AD0E0u;
        goto label_1ad0e0;
    }
    ctx->pc = 0x1AD0D8u;
    {
        const bool branch_taken_0x1ad0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad0d8) {
            ctx->pc = 0x1AD0DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD0D8u;
            // 0x1ad0dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD100u;
            goto label_1ad100;
        }
    }
    ctx->pc = 0x1AD0E0u;
label_1ad0e0:
    // 0x1ad0e0: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1ad0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1ad0e4:
    // 0x1ad0e4: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1ad0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1ad0e8:
    // 0x1ad0e8: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1ad0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1ad0ec:
    // 0x1ad0ec: 0x60f809  jalr        $v1
label_1ad0f0:
    if (ctx->pc == 0x1AD0F0u) {
        ctx->pc = 0x1AD0F0u;
            // 0x1ad0f0: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x1AD0F4u;
        goto label_1ad0f4;
    }
    ctx->pc = 0x1AD0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AD0F4u);
        ctx->pc = 0x1AD0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD0ECu;
            // 0x1ad0f0: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AD0F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0F4u; }
            if (ctx->pc != 0x1AD0F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1AD0F4u;
label_1ad0f4:
    // 0x1ad0f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ad0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ad0f8:
    // 0x1ad0f8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ad0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ad0fc:
    // 0x1ad0fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad0fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ad100:
    // 0x1ad100: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ad100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ad104:
    // 0x1ad104: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ad104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ad108:
    // 0x1ad108: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ad108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ad10c:
    // 0x1ad10c: 0x3e00008  jr          $ra
label_1ad110:
    if (ctx->pc == 0x1AD110u) {
        ctx->pc = 0x1AD110u;
            // 0x1ad110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1AD114u;
        goto label_1ad114;
    }
    ctx->pc = 0x1AD10Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD10Cu;
            // 0x1ad110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD114u;
label_1ad114:
    // 0x1ad114: 0x0  nop
    ctx->pc = 0x1ad114u;
    // NOP
    ctx->pc = 0x1ad118u;
}
