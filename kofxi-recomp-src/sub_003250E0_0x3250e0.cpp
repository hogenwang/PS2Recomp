#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003250E0
// Address: 0x3250e0 - 0x325f6c
void sub_003250E0_0x3250e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003250E0_0x3250e0");
#endif

    switch (ctx->pc) {
        case 0x325500u: goto label_325500;
        case 0x32551cu: goto label_32551c;
        case 0x325538u: goto label_325538;
        case 0x325554u: goto label_325554;
        case 0x325570u: goto label_325570;
        case 0x32558cu: goto label_32558c;
        case 0x3255a8u: goto label_3255a8;
        case 0x3255c4u: goto label_3255c4;
        case 0x3255e0u: goto label_3255e0;
        case 0x3255fcu: goto label_3255fc;
        case 0x325618u: goto label_325618;
        case 0x325634u: goto label_325634;
        case 0x325650u: goto label_325650;
        case 0x32566cu: goto label_32566c;
        case 0x325688u: goto label_325688;
        case 0x3256a4u: goto label_3256a4;
        case 0x3256c0u: goto label_3256c0;
        case 0x3256dcu: goto label_3256dc;
        case 0x3256f8u: goto label_3256f8;
        case 0x325714u: goto label_325714;
        case 0x325730u: goto label_325730;
        case 0x32574cu: goto label_32574c;
        case 0x325768u: goto label_325768;
        case 0x325784u: goto label_325784;
        case 0x3257a0u: goto label_3257a0;
        case 0x3257bcu: goto label_3257bc;
        case 0x3257d8u: goto label_3257d8;
        case 0x3257f4u: goto label_3257f4;
        case 0x325810u: goto label_325810;
        case 0x32582cu: goto label_32582c;
        case 0x325848u: goto label_325848;
        case 0x325864u: goto label_325864;
        case 0x325880u: goto label_325880;
        case 0x32589cu: goto label_32589c;
        case 0x325ed0u: goto label_325ed0;
        case 0x325eecu: goto label_325eec;
        case 0x325f08u: goto label_325f08;
        case 0x325f24u: goto label_325f24;
        case 0x325f40u: goto label_325f40;
        case 0x325f5cu: goto label_325f5c;
        default: break;
    }

    ctx->pc = 0x3250e0u;

    // 0x3250e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3250e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3250e4: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x3250e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3250e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3250e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3250ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3250ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3250f0: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x3250f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x3250f4: 0x2c61011b  sltiu       $at, $v1, 0x11B
    ctx->pc = 0x3250f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)283) ? 1 : 0);
    // 0x3250f8: 0x1020084b  beqz        $at, . + 4 + (0x84B << 2)
    ctx->pc = 0x3250F8u;
    {
        const bool branch_taken_0x3250f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3250FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3250F8u;
            // 0x3250fc: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3250f8) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325100u;
    // 0x325100: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x325100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x325104: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x325104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x325108: 0x24843f40  addiu       $a0, $a0, 0x3F40
    ctx->pc = 0x325108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16192));
    // 0x32510c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32510cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x325110: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x325110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x325114: 0x600008  jr          $v1
    ctx->pc = 0x325114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x32511Cu: goto label_32511c;
            case 0x32513Cu: goto label_32513c;
            case 0x325178u: goto label_325178;
            case 0x325198u: goto label_325198;
            case 0x3251D4u: goto label_3251d4;
            case 0x325204u: goto label_325204;
            case 0x325250u: goto label_325250;
            case 0x325288u: goto label_325288;
            case 0x3252C0u: goto label_3252c0;
            case 0x3252F8u: goto label_3252f8;
            case 0x325330u: goto label_325330;
            case 0x325368u: goto label_325368;
            case 0x3253A0u: goto label_3253a0;
            case 0x325410u: goto label_325410;
            case 0x325480u: goto label_325480;
            case 0x3254F0u: goto label_3254f0;
            case 0x32550Cu: goto label_32550c;
            case 0x325528u: goto label_325528;
            case 0x325544u: goto label_325544;
            case 0x325560u: goto label_325560;
            case 0x32557Cu: goto label_32557c;
            case 0x325598u: goto label_325598;
            case 0x3255B4u: goto label_3255b4;
            case 0x3255D0u: goto label_3255d0;
            case 0x3255ECu: goto label_3255ec;
            case 0x325608u: goto label_325608;
            case 0x325624u: goto label_325624;
            case 0x325640u: goto label_325640;
            case 0x32565Cu: goto label_32565c;
            case 0x325678u: goto label_325678;
            case 0x325694u: goto label_325694;
            case 0x3256B0u: goto label_3256b0;
            case 0x3256CCu: goto label_3256cc;
            case 0x3256E8u: goto label_3256e8;
            case 0x325704u: goto label_325704;
            case 0x325720u: goto label_325720;
            case 0x32573Cu: goto label_32573c;
            case 0x325758u: goto label_325758;
            case 0x325774u: goto label_325774;
            case 0x325790u: goto label_325790;
            case 0x3257ACu: goto label_3257ac;
            case 0x3257C8u: goto label_3257c8;
            case 0x3257E4u: goto label_3257e4;
            case 0x325800u: goto label_325800;
            case 0x32581Cu: goto label_32581c;
            case 0x325838u: goto label_325838;
            case 0x325854u: goto label_325854;
            case 0x325870u: goto label_325870;
            case 0x32588Cu: goto label_32588c;
            case 0x3258A8u: goto label_3258a8;
            case 0x3258C8u: goto label_3258c8;
            case 0x3258E8u: goto label_3258e8;
            case 0x325908u: goto label_325908;
            case 0x325928u: goto label_325928;
            case 0x325948u: goto label_325948;
            case 0x325968u: goto label_325968;
            case 0x325988u: goto label_325988;
            case 0x3259A8u: goto label_3259a8;
            case 0x3259C8u: goto label_3259c8;
            case 0x3259E8u: goto label_3259e8;
            case 0x325A08u: goto label_325a08;
            case 0x325A28u: goto label_325a28;
            case 0x325A48u: goto label_325a48;
            case 0x325A68u: goto label_325a68;
            case 0x325A88u: goto label_325a88;
            case 0x325AA8u: goto label_325aa8;
            case 0x325AC8u: goto label_325ac8;
            case 0x325AE8u: goto label_325ae8;
            case 0x325B08u: goto label_325b08;
            case 0x325B28u: goto label_325b28;
            case 0x325B48u: goto label_325b48;
            case 0x325B68u: goto label_325b68;
            case 0x325B88u: goto label_325b88;
            case 0x325BA8u: goto label_325ba8;
            case 0x325BC8u: goto label_325bc8;
            case 0x325BE8u: goto label_325be8;
            case 0x325C08u: goto label_325c08;
            case 0x325C28u: goto label_325c28;
            case 0x325C48u: goto label_325c48;
            case 0x325C68u: goto label_325c68;
            case 0x325C7Cu: goto label_325c7c;
            case 0x325C90u: goto label_325c90;
            case 0x325CA4u: goto label_325ca4;
            case 0x325CB8u: goto label_325cb8;
            case 0x325CCCu: goto label_325ccc;
            case 0x325CE0u: goto label_325ce0;
            case 0x325CF4u: goto label_325cf4;
            case 0x325D08u: goto label_325d08;
            case 0x325D1Cu: goto label_325d1c;
            case 0x325D30u: goto label_325d30;
            case 0x325D44u: goto label_325d44;
            case 0x325D58u: goto label_325d58;
            case 0x325D6Cu: goto label_325d6c;
            case 0x325D80u: goto label_325d80;
            case 0x325D94u: goto label_325d94;
            case 0x325DA8u: goto label_325da8;
            case 0x325DBCu: goto label_325dbc;
            case 0x325DD0u: goto label_325dd0;
            case 0x325DE4u: goto label_325de4;
            case 0x325DF8u: goto label_325df8;
            case 0x325E0Cu: goto label_325e0c;
            case 0x325E20u: goto label_325e20;
            case 0x325E34u: goto label_325e34;
            case 0x325E48u: goto label_325e48;
            case 0x325E5Cu: goto label_325e5c;
            case 0x325E70u: goto label_325e70;
            case 0x325E84u: goto label_325e84;
            case 0x325E98u: goto label_325e98;
            case 0x325EACu: goto label_325eac;
            case 0x325EC0u: goto label_325ec0;
            case 0x325EDCu: goto label_325edc;
            case 0x325EF8u: goto label_325ef8;
            case 0x325F14u: goto label_325f14;
            case 0x325F30u: goto label_325f30;
            case 0x325F4Cu: goto label_325f4c;
            case 0x325F68u: goto label_325f68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x32511Cu;
label_32511c:
    // 0x32511c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32511cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x325120: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x325120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x325124: 0x9042db59  lbu         $v0, -0x24A7($v0)
    ctx->pc = 0x325124u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957913)));
    // 0x325128: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x325128u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x32512c: 0x1010  mfhi        $v0
    ctx->pc = 0x32512cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x325130: 0x24420025  addiu       $v0, $v0, 0x25
    ctx->pc = 0x325130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 37));
    // 0x325134: 0x1000083c  b           . + 4 + (0x83C << 2)
    ctx->pc = 0x325134u;
    {
        const bool branch_taken_0x325134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325134u;
            // 0x325138: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325134) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x32513Cu;
label_32513c:
    // 0x32513c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32513cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x325140: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x325140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x325144: 0x9043db59  lbu         $v1, -0x24A7($v0)
    ctx->pc = 0x325144u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957913)));
    // 0x325148: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x325148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x32514c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x32514cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x325150: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x325150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x325154: 0x1010  mfhi        $v0
    ctx->pc = 0x325154u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x325158: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x325158u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x32515c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x32515cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x325160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x325160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x325164: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x325164u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x325168: 0x1010  mfhi        $v0
    ctx->pc = 0x325168u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32516c: 0x24420025  addiu       $v0, $v0, 0x25
    ctx->pc = 0x32516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 37));
    // 0x325170: 0x1000082d  b           . + 4 + (0x82D << 2)
    ctx->pc = 0x325170u;
    {
        const bool branch_taken_0x325170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325170u;
            // 0x325174: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325170) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325178u;
label_325178:
    // 0x325178: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x325178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32517c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x32517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x325180: 0x9042dda1  lbu         $v0, -0x225F($v0)
    ctx->pc = 0x325180u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958497)));
    // 0x325184: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x325184u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x325188: 0x1010  mfhi        $v0
    ctx->pc = 0x325188u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32518c: 0x24420025  addiu       $v0, $v0, 0x25
    ctx->pc = 0x32518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 37));
    // 0x325190: 0x10000825  b           . + 4 + (0x825 << 2)
    ctx->pc = 0x325190u;
    {
        const bool branch_taken_0x325190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325190u;
            // 0x325194: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325190) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325198u;
label_325198:
    // 0x325198: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x325198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32519c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x32519cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3251a0: 0x9043dda1  lbu         $v1, -0x225F($v0)
    ctx->pc = 0x3251a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958497)));
    // 0x3251a4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3251a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3251a8: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3251a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3251ac: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3251acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3251b0: 0x1010  mfhi        $v0
    ctx->pc = 0x3251b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3251b4: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x3251b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3251b8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3251b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3251bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3251bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3251c0: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x3251c0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3251c4: 0x1010  mfhi        $v0
    ctx->pc = 0x3251c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3251c8: 0x24420025  addiu       $v0, $v0, 0x25
    ctx->pc = 0x3251c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 37));
    // 0x3251cc: 0x10000816  b           . + 4 + (0x816 << 2)
    ctx->pc = 0x3251CCu;
    {
        const bool branch_taken_0x3251cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3251D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3251CCu;
            // 0x3251d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3251cc) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3251D4u;
label_3251d4:
    // 0x3251d4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3251d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3251d8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3251d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3251dc: 0x8445da60  lh          $a1, -0x25A0($v0)
    ctx->pc = 0x3251dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957664)));
    // 0x3251e0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3251e0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3251e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3251e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3251e8: 0x8443da62  lh          $v1, -0x259E($v0)
    ctx->pc = 0x3251e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957666)));
    // 0x3251ec: 0x1010  mfhi        $v0
    ctx->pc = 0x3251ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3251f0: 0x24420015  addiu       $v0, $v0, 0x15
    ctx->pc = 0x3251f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21));
    // 0x3251f4: 0x461080c  bgez        $v1, . + 4 + (0x80C << 2)
    ctx->pc = 0x3251F4u;
    {
        const bool branch_taken_0x3251f4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3251F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3251F4u;
            // 0x3251f8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3251f4) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3251FCu;
    // 0x3251fc: 0x1000080a  b           . + 4 + (0x80A << 2)
    ctx->pc = 0x3251FCu;
    {
        const bool branch_taken_0x3251fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3251FCu;
            // 0x325200: 0x640200b1  daddiu      $v0, $zero, 0xB1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)177);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3251fc) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325204u;
label_325204:
    // 0x325204: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x325204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x325208: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x325208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x32520c: 0x8446da60  lh          $a2, -0x25A0($v0)
    ctx->pc = 0x32520cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957664)));
    // 0x325210: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x325210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x325214: 0x34446667  ori         $a0, $v0, 0x6667
    ctx->pc = 0x325214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x325218: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x325218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32521c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32521cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x325220: 0x8443da62  lh          $v1, -0x259E($v0)
    ctx->pc = 0x325220u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957666)));
    // 0x325224: 0x1010  mfhi        $v0
    ctx->pc = 0x325224u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x325228: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x325228u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x32522c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x32522cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x325230: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x325230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x325234: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x325234u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x325238: 0x1010  mfhi        $v0
    ctx->pc = 0x325238u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32523c: 0x24420015  addiu       $v0, $v0, 0x15
    ctx->pc = 0x32523cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21));
    // 0x325240: 0x46107f9  bgez        $v1, . + 4 + (0x7F9 << 2)
    ctx->pc = 0x325240u;
    {
        const bool branch_taken_0x325240 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x325244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325240u;
            // 0x325244: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325240) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325248u;
    // 0x325248: 0x100007f7  b           . + 4 + (0x7F7 << 2)
    ctx->pc = 0x325248u;
    {
        const bool branch_taken_0x325248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32524Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325248u;
            // 0x32524c: 0x640200b0  daddiu      $v0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)176);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325248) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325250u;
label_325250:
    // 0x325250: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x325250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x325254: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x325254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x325258: 0x9042db78  lbu         $v0, -0x2488($v0)
    ctx->pc = 0x325258u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957944)));
    // 0x32525c: 0x2463dc9d  addiu       $v1, $v1, -0x2363
    ctx->pc = 0x32525cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958237));
    // 0x325260: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x325260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x325264: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x325264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x325268: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x325268u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32526c: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x32526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x325270: 0x28830029  slti        $v1, $a0, 0x29
    ctx->pc = 0x325270u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325274: 0x146007ec  bnez        $v1, . + 4 + (0x7EC << 2)
    ctx->pc = 0x325274u;
    {
        const bool branch_taken_0x325274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x325278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325274u;
            // 0x325278: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325274) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x32527Cu;
    // 0x32527c: 0x24820079  addiu       $v0, $a0, 0x79
    ctx->pc = 0x32527cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 121));
    // 0x325280: 0x100007e9  b           . + 4 + (0x7E9 << 2)
    ctx->pc = 0x325280u;
    {
        const bool branch_taken_0x325280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325280u;
            // 0x325284: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325280) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325288u;
label_325288:
    // 0x325288: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x325288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32528c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32528cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x325290: 0x9042db79  lbu         $v0, -0x2487($v0)
    ctx->pc = 0x325290u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957945)));
    // 0x325294: 0x2463dc9d  addiu       $v1, $v1, -0x2363
    ctx->pc = 0x325294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958237));
    // 0x325298: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x325298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x32529c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3252a0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3252a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3252a4: 0x24820079  addiu       $v0, $a0, 0x79
    ctx->pc = 0x3252a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 121));
    // 0x3252a8: 0x28830029  slti        $v1, $a0, 0x29
    ctx->pc = 0x3252a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3252ac: 0x146007de  bnez        $v1, . + 4 + (0x7DE << 2)
    ctx->pc = 0x3252ACu;
    {
        const bool branch_taken_0x3252ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3252B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3252ACu;
            // 0x3252b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3252ac) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3252B4u;
    // 0x3252b4: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x3252b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x3252b8: 0x100007db  b           . + 4 + (0x7DB << 2)
    ctx->pc = 0x3252B8u;
    {
        const bool branch_taken_0x3252b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3252BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3252B8u;
            // 0x3252bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3252b8) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3252C0u;
label_3252c0:
    // 0x3252c0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3252c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3252c4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3252c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3252c8: 0x9042db7a  lbu         $v0, -0x2486($v0)
    ctx->pc = 0x3252c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957946)));
    // 0x3252cc: 0x2463dc9d  addiu       $v1, $v1, -0x2363
    ctx->pc = 0x3252ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958237));
    // 0x3252d0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3252d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3252d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3252d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3252d8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3252d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3252dc: 0x24820079  addiu       $v0, $a0, 0x79
    ctx->pc = 0x3252dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 121));
    // 0x3252e0: 0x28830029  slti        $v1, $a0, 0x29
    ctx->pc = 0x3252e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3252e4: 0x146007d0  bnez        $v1, . + 4 + (0x7D0 << 2)
    ctx->pc = 0x3252E4u;
    {
        const bool branch_taken_0x3252e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3252E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3252E4u;
            // 0x3252e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3252e4) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3252ECu;
    // 0x3252ec: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x3252ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x3252f0: 0x100007cd  b           . + 4 + (0x7CD << 2)
    ctx->pc = 0x3252F0u;
    {
        const bool branch_taken_0x3252f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3252F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3252F0u;
            // 0x3252f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3252f0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3252F8u;
label_3252f8:
    // 0x3252f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3252f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3252fc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3252fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x325300: 0x9042ddc0  lbu         $v0, -0x2240($v0)
    ctx->pc = 0x325300u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958528)));
    // 0x325304: 0x2463dee5  addiu       $v1, $v1, -0x211B
    ctx->pc = 0x325304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958821));
    // 0x325308: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x325308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x32530c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32530cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x325310: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x325310u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325314: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x325314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x325318: 0x28830029  slti        $v1, $a0, 0x29
    ctx->pc = 0x325318u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x32531c: 0x146007c2  bnez        $v1, . + 4 + (0x7C2 << 2)
    ctx->pc = 0x32531Cu;
    {
        const bool branch_taken_0x32531c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x325320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32531Cu;
            // 0x325320: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32531c) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325324u;
    // 0x325324: 0x24820079  addiu       $v0, $a0, 0x79
    ctx->pc = 0x325324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 121));
    // 0x325328: 0x100007bf  b           . + 4 + (0x7BF << 2)
    ctx->pc = 0x325328u;
    {
        const bool branch_taken_0x325328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32532Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325328u;
            // 0x32532c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325328) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325330u;
label_325330:
    // 0x325330: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x325330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x325334: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x325334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x325338: 0x9042ddc1  lbu         $v0, -0x223F($v0)
    ctx->pc = 0x325338u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958529)));
    // 0x32533c: 0x2463dee5  addiu       $v1, $v1, -0x211B
    ctx->pc = 0x32533cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958821));
    // 0x325340: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x325340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x325344: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x325344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x325348: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x325348u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32534c: 0x24820079  addiu       $v0, $a0, 0x79
    ctx->pc = 0x32534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 121));
    // 0x325350: 0x28830029  slti        $v1, $a0, 0x29
    ctx->pc = 0x325350u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325354: 0x146007b4  bnez        $v1, . + 4 + (0x7B4 << 2)
    ctx->pc = 0x325354u;
    {
        const bool branch_taken_0x325354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x325358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325354u;
            // 0x325358: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325354) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x32535Cu;
    // 0x32535c: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x32535cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x325360: 0x100007b1  b           . + 4 + (0x7B1 << 2)
    ctx->pc = 0x325360u;
    {
        const bool branch_taken_0x325360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325360u;
            // 0x325364: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325360) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325368u;
label_325368:
    // 0x325368: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x325368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32536c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32536cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x325370: 0x9042ddc2  lbu         $v0, -0x223E($v0)
    ctx->pc = 0x325370u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958530)));
    // 0x325374: 0x2463dee5  addiu       $v1, $v1, -0x211B
    ctx->pc = 0x325374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958821));
    // 0x325378: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x325378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x32537c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x325380: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x325380u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325384: 0x24820079  addiu       $v0, $a0, 0x79
    ctx->pc = 0x325384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 121));
    // 0x325388: 0x28830029  slti        $v1, $a0, 0x29
    ctx->pc = 0x325388u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x32538c: 0x146007a6  bnez        $v1, . + 4 + (0x7A6 << 2)
    ctx->pc = 0x32538Cu;
    {
        const bool branch_taken_0x32538c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x325390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32538Cu;
            // 0x325390: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32538c) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325394u;
    // 0x325394: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x325394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x325398: 0x100007a3  b           . + 4 + (0x7A3 << 2)
    ctx->pc = 0x325398u;
    {
        const bool branch_taken_0x325398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32539Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325398u;
            // 0x32539c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325398) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3253A0u;
label_3253a0:
    // 0x3253a0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x3253a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x3253a4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3253a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3253a8: 0x90454174  lbu         $a1, 0x4174($v0)
    ctx->pc = 0x3253a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16756)));
    // 0x3253ac: 0x54a30012  bnel        $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3253ACu;
    {
        const bool branch_taken_0x3253ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3253ac) {
            ctx->pc = 0x3253B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3253ACu;
            // 0x3253b0: 0x24a20043  addiu       $v0, $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 67));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3253F8u;
            goto label_3253f8;
        }
    }
    ctx->pc = 0x3253B4u;
    // 0x3253b4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3253b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3253b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3253b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3253bc: 0x9044f35f  lbu         $a0, -0xCA1($v0)
    ctx->pc = 0x3253bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964063)));
    // 0x3253c0: 0x50830799  beql        $a0, $v1, . + 4 + (0x799 << 2)
    ctx->pc = 0x3253C0u;
    {
        const bool branch_taken_0x3253c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3253c0) {
            ctx->pc = 0x3253C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3253C0u;
            // 0x3253c4: 0x6402006b  daddiu      $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)107);
        ctx->in_delay_slot = false;
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3253C8u;
    // 0x3253c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3253c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3253cc: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3253CCu;
    {
        const bool branch_taken_0x3253cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3253cc) {
            ctx->pc = 0x3253ECu;
            goto label_3253ec;
        }
    }
    ctx->pc = 0x3253D4u;
    // 0x3253d4: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3253D4u;
    {
        const bool branch_taken_0x3253d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3253d4) {
            ctx->pc = 0x3253D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3253D4u;
            // 0x3253d8: 0x24a20043  addiu       $v0, $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 67));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3253E4u;
            goto label_3253e4;
        }
    }
    ctx->pc = 0x3253DCu;
    // 0x3253dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3253DCu;
    {
        const bool branch_taken_0x3253dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3253dc) {
            ctx->pc = 0x3253ECu;
            goto label_3253ec;
        }
    }
    ctx->pc = 0x3253E4u;
label_3253e4:
    // 0x3253e4: 0x10000790  b           . + 4 + (0x790 << 2)
    ctx->pc = 0x3253E4u;
    {
        const bool branch_taken_0x3253e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3253E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3253E4u;
            // 0x3253e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3253e4) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3253ECu;
label_3253ec:
    // 0x3253ec: 0x6402006b  daddiu      $v0, $zero, 0x6B
    ctx->pc = 0x3253ecu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)107);
    // 0x3253f0: 0x1000078d  b           . + 4 + (0x78D << 2)
    ctx->pc = 0x3253F0u;
    {
        const bool branch_taken_0x3253f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3253f0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3253F8u;
label_3253f8:
    // 0x3253f8: 0x28a30029  slti        $v1, $a1, 0x29
    ctx->pc = 0x3253f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3253fc: 0x1460078a  bnez        $v1, . + 4 + (0x78A << 2)
    ctx->pc = 0x3253FCu;
    {
        const bool branch_taken_0x3253fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x325400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3253FCu;
            // 0x325400: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3253fc) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325404u;
    // 0x325404: 0x24a200c4  addiu       $v0, $a1, 0xC4
    ctx->pc = 0x325404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 196));
    // 0x325408: 0x10000787  b           . + 4 + (0x787 << 2)
    ctx->pc = 0x325408u;
    {
        const bool branch_taken_0x325408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32540Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325408u;
            // 0x32540c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325408) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325410u;
label_325410:
    // 0x325410: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325414: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x325414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x325418: 0x90454173  lbu         $a1, 0x4173($v0)
    ctx->pc = 0x325418u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16755)));
    // 0x32541c: 0x54a30012  bnel        $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x32541Cu;
    {
        const bool branch_taken_0x32541c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x32541c) {
            ctx->pc = 0x325420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32541Cu;
            // 0x325420: 0x24a20043  addiu       $v0, $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 67));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325468u;
            goto label_325468;
        }
    }
    ctx->pc = 0x325424u;
    // 0x325424: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325428: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x325428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32542c: 0x9044f35f  lbu         $a0, -0xCA1($v0)
    ctx->pc = 0x32542cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964063)));
    // 0x325430: 0x5083077d  beql        $a0, $v1, . + 4 + (0x77D << 2)
    ctx->pc = 0x325430u;
    {
        const bool branch_taken_0x325430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x325430) {
            ctx->pc = 0x325434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325430u;
            // 0x325434: 0x6402006b  daddiu      $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)107);
        ctx->in_delay_slot = false;
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325438u;
    // 0x325438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x325438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32543c: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32543Cu;
    {
        const bool branch_taken_0x32543c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x32543c) {
            ctx->pc = 0x32545Cu;
            goto label_32545c;
        }
    }
    ctx->pc = 0x325444u;
    // 0x325444: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x325444u;
    {
        const bool branch_taken_0x325444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x325444) {
            ctx->pc = 0x325448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325444u;
            // 0x325448: 0x24a20043  addiu       $v0, $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 67));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325454u;
            goto label_325454;
        }
    }
    ctx->pc = 0x32544Cu;
    // 0x32544c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32544Cu;
    {
        const bool branch_taken_0x32544c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32544c) {
            ctx->pc = 0x32545Cu;
            goto label_32545c;
        }
    }
    ctx->pc = 0x325454u;
label_325454:
    // 0x325454: 0x10000774  b           . + 4 + (0x774 << 2)
    ctx->pc = 0x325454u;
    {
        const bool branch_taken_0x325454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325454u;
            // 0x325458: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325454) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x32545Cu;
label_32545c:
    // 0x32545c: 0x6402006b  daddiu      $v0, $zero, 0x6B
    ctx->pc = 0x32545cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)107);
    // 0x325460: 0x10000771  b           . + 4 + (0x771 << 2)
    ctx->pc = 0x325460u;
    {
        const bool branch_taken_0x325460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325460) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325468u;
label_325468:
    // 0x325468: 0x28a30029  slti        $v1, $a1, 0x29
    ctx->pc = 0x325468u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x32546c: 0x1460076e  bnez        $v1, . + 4 + (0x76E << 2)
    ctx->pc = 0x32546Cu;
    {
        const bool branch_taken_0x32546c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x325470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32546Cu;
            // 0x325470: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32546c) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325474u;
    // 0x325474: 0x24a200c4  addiu       $v0, $a1, 0xC4
    ctx->pc = 0x325474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 196));
    // 0x325478: 0x1000076b  b           . + 4 + (0x76B << 2)
    ctx->pc = 0x325478u;
    {
        const bool branch_taken_0x325478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32547Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325478u;
            // 0x32547c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325478) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325480u;
label_325480:
    // 0x325480: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325484: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x325484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x325488: 0x90454172  lbu         $a1, 0x4172($v0)
    ctx->pc = 0x325488u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16754)));
    // 0x32548c: 0x54a30012  bnel        $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x32548Cu;
    {
        const bool branch_taken_0x32548c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x32548c) {
            ctx->pc = 0x325490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32548Cu;
            // 0x325490: 0x24a20043  addiu       $v0, $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 67));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3254D8u;
            goto label_3254d8;
        }
    }
    ctx->pc = 0x325494u;
    // 0x325494: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325498: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x325498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32549c: 0x9044f35f  lbu         $a0, -0xCA1($v0)
    ctx->pc = 0x32549cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964063)));
    // 0x3254a0: 0x50830761  beql        $a0, $v1, . + 4 + (0x761 << 2)
    ctx->pc = 0x3254A0u;
    {
        const bool branch_taken_0x3254a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3254a0) {
            ctx->pc = 0x3254A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3254A0u;
            // 0x3254a4: 0x6402006b  daddiu      $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)107);
        ctx->in_delay_slot = false;
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3254A8u;
    // 0x3254a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3254a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3254ac: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3254ACu;
    {
        const bool branch_taken_0x3254ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3254ac) {
            ctx->pc = 0x3254CCu;
            goto label_3254cc;
        }
    }
    ctx->pc = 0x3254B4u;
    // 0x3254b4: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3254B4u;
    {
        const bool branch_taken_0x3254b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3254b4) {
            ctx->pc = 0x3254B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3254B4u;
            // 0x3254b8: 0x24a20043  addiu       $v0, $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 67));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3254C4u;
            goto label_3254c4;
        }
    }
    ctx->pc = 0x3254BCu;
    // 0x3254bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3254BCu;
    {
        const bool branch_taken_0x3254bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3254bc) {
            ctx->pc = 0x3254CCu;
            goto label_3254cc;
        }
    }
    ctx->pc = 0x3254C4u;
label_3254c4:
    // 0x3254c4: 0x10000758  b           . + 4 + (0x758 << 2)
    ctx->pc = 0x3254C4u;
    {
        const bool branch_taken_0x3254c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3254C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3254C4u;
            // 0x3254c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3254c4) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3254CCu;
label_3254cc:
    // 0x3254cc: 0x6402006b  daddiu      $v0, $zero, 0x6B
    ctx->pc = 0x3254ccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)107);
    // 0x3254d0: 0x10000755  b           . + 4 + (0x755 << 2)
    ctx->pc = 0x3254D0u;
    {
        const bool branch_taken_0x3254d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3254d0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3254D8u;
label_3254d8:
    // 0x3254d8: 0x28a30029  slti        $v1, $a1, 0x29
    ctx->pc = 0x3254d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3254dc: 0x14600752  bnez        $v1, . + 4 + (0x752 << 2)
    ctx->pc = 0x3254DCu;
    {
        const bool branch_taken_0x3254dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3254E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3254DCu;
            // 0x3254e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3254dc) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3254E4u;
    // 0x3254e4: 0x24a200c4  addiu       $v0, $a1, 0xC4
    ctx->pc = 0x3254e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 196));
    // 0x3254e8: 0x1000074f  b           . + 4 + (0x74F << 2)
    ctx->pc = 0x3254E8u;
    {
        const bool branch_taken_0x3254e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3254ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3254E8u;
            // 0x3254ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3254e8) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3254F0u;
label_3254f0:
    // 0x3254f0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x3254f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x3254f4: 0x8c444158  lw          $a0, 0x4158($v0)
    ctx->pc = 0x3254f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16728)));
    // 0x3254f8: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3254F8u;
    SET_GPR_U32(ctx, 31, 0x325500u);
    ctx->pc = 0x3254FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3254F8u;
            // 0x3254fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325500u; }
        if (ctx->pc != 0x325500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325500u; }
        if (ctx->pc != 0x325500u) { return; }
    }
    ctx->pc = 0x325500u;
label_325500:
    // 0x325500: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x325500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x325504: 0x10000748  b           . + 4 + (0x748 << 2)
    ctx->pc = 0x325504u;
    {
        const bool branch_taken_0x325504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325504u;
            // 0x325508: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325504) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x32550Cu;
label_32550c:
    // 0x32550c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x32550cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325510: 0x8c444158  lw          $a0, 0x4158($v0)
    ctx->pc = 0x325510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16728)));
    // 0x325514: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325514u;
    SET_GPR_U32(ctx, 31, 0x32551Cu);
    ctx->pc = 0x325518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325514u;
            // 0x325518: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32551Cu; }
        if (ctx->pc != 0x32551Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32551Cu; }
        if (ctx->pc != 0x32551Cu) { return; }
    }
    ctx->pc = 0x32551Cu;
label_32551c:
    // 0x32551c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x32551cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x325520: 0x10000741  b           . + 4 + (0x741 << 2)
    ctx->pc = 0x325520u;
    {
        const bool branch_taken_0x325520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325520u;
            // 0x325524: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325520) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325528u;
label_325528:
    // 0x325528: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x32552c: 0x8c444158  lw          $a0, 0x4158($v0)
    ctx->pc = 0x32552cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16728)));
    // 0x325530: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325530u;
    SET_GPR_U32(ctx, 31, 0x325538u);
    ctx->pc = 0x325534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325530u;
            // 0x325534: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325538u; }
        if (ctx->pc != 0x325538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325538u; }
        if (ctx->pc != 0x325538u) { return; }
    }
    ctx->pc = 0x325538u;
label_325538:
    // 0x325538: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x325538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x32553c: 0x1000073a  b           . + 4 + (0x73A << 2)
    ctx->pc = 0x32553Cu;
    {
        const bool branch_taken_0x32553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32553Cu;
            // 0x325540: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32553c) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325544u;
label_325544:
    // 0x325544: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325548: 0x8c444158  lw          $a0, 0x4158($v0)
    ctx->pc = 0x325548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16728)));
    // 0x32554c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x32554Cu;
    SET_GPR_U32(ctx, 31, 0x325554u);
    ctx->pc = 0x325550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32554Cu;
            // 0x325550: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325554u; }
        if (ctx->pc != 0x325554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325554u; }
        if (ctx->pc != 0x325554u) { return; }
    }
    ctx->pc = 0x325554u;
label_325554:
    // 0x325554: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x325554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x325558: 0x10000733  b           . + 4 + (0x733 << 2)
    ctx->pc = 0x325558u;
    {
        const bool branch_taken_0x325558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32555Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325558u;
            // 0x32555c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325558) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325560u;
label_325560:
    // 0x325560: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325564: 0x8c444158  lw          $a0, 0x4158($v0)
    ctx->pc = 0x325564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16728)));
    // 0x325568: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325568u;
    SET_GPR_U32(ctx, 31, 0x325570u);
    ctx->pc = 0x32556Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325568u;
            // 0x32556c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325570u; }
        if (ctx->pc != 0x325570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325570u; }
        if (ctx->pc != 0x325570u) { return; }
    }
    ctx->pc = 0x325570u;
label_325570:
    // 0x325570: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x325570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x325574: 0x1000072c  b           . + 4 + (0x72C << 2)
    ctx->pc = 0x325574u;
    {
        const bool branch_taken_0x325574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325574u;
            // 0x325578: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325574) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x32557Cu;
label_32557c:
    // 0x32557c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x32557cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325580: 0x8c444158  lw          $a0, 0x4158($v0)
    ctx->pc = 0x325580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16728)));
    // 0x325584: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325584u;
    SET_GPR_U32(ctx, 31, 0x32558Cu);
    ctx->pc = 0x325588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325584u;
            // 0x325588: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32558Cu; }
        if (ctx->pc != 0x32558Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32558Cu; }
        if (ctx->pc != 0x32558Cu) { return; }
    }
    ctx->pc = 0x32558Cu;
label_32558c:
    // 0x32558c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x32558cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x325590: 0x10000725  b           . + 4 + (0x725 << 2)
    ctx->pc = 0x325590u;
    {
        const bool branch_taken_0x325590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325590u;
            // 0x325594: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325590) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325598u;
label_325598:
    // 0x325598: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x32559c: 0x8c44415c  lw          $a0, 0x415C($v0)
    ctx->pc = 0x32559cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16732)));
    // 0x3255a0: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3255A0u;
    SET_GPR_U32(ctx, 31, 0x3255A8u);
    ctx->pc = 0x3255A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3255A0u;
            // 0x3255a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255A8u; }
        if (ctx->pc != 0x3255A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255A8u; }
        if (ctx->pc != 0x3255A8u) { return; }
    }
    ctx->pc = 0x3255A8u;
label_3255a8:
    // 0x3255a8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3255a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3255ac: 0x1000071e  b           . + 4 + (0x71E << 2)
    ctx->pc = 0x3255ACu;
    {
        const bool branch_taken_0x3255ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3255B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3255ACu;
            // 0x3255b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3255ac) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3255B4u;
label_3255b4:
    // 0x3255b4: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x3255b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x3255b8: 0x8c44415c  lw          $a0, 0x415C($v0)
    ctx->pc = 0x3255b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16732)));
    // 0x3255bc: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3255BCu;
    SET_GPR_U32(ctx, 31, 0x3255C4u);
    ctx->pc = 0x3255C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3255BCu;
            // 0x3255c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255C4u; }
        if (ctx->pc != 0x3255C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255C4u; }
        if (ctx->pc != 0x3255C4u) { return; }
    }
    ctx->pc = 0x3255C4u;
label_3255c4:
    // 0x3255c4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3255c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3255c8: 0x10000717  b           . + 4 + (0x717 << 2)
    ctx->pc = 0x3255C8u;
    {
        const bool branch_taken_0x3255c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3255CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3255C8u;
            // 0x3255cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3255c8) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3255D0u;
label_3255d0:
    // 0x3255d0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x3255d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x3255d4: 0x8c44415c  lw          $a0, 0x415C($v0)
    ctx->pc = 0x3255d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16732)));
    // 0x3255d8: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3255D8u;
    SET_GPR_U32(ctx, 31, 0x3255E0u);
    ctx->pc = 0x3255DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3255D8u;
            // 0x3255dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255E0u; }
        if (ctx->pc != 0x3255E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255E0u; }
        if (ctx->pc != 0x3255E0u) { return; }
    }
    ctx->pc = 0x3255E0u;
label_3255e0:
    // 0x3255e0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3255e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3255e4: 0x10000710  b           . + 4 + (0x710 << 2)
    ctx->pc = 0x3255E4u;
    {
        const bool branch_taken_0x3255e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3255E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3255E4u;
            // 0x3255e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3255e4) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3255ECu;
label_3255ec:
    // 0x3255ec: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x3255ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x3255f0: 0x8c44415c  lw          $a0, 0x415C($v0)
    ctx->pc = 0x3255f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16732)));
    // 0x3255f4: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3255F4u;
    SET_GPR_U32(ctx, 31, 0x3255FCu);
    ctx->pc = 0x3255F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3255F4u;
            // 0x3255f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255FCu; }
        if (ctx->pc != 0x3255FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255FCu; }
        if (ctx->pc != 0x3255FCu) { return; }
    }
    ctx->pc = 0x3255FCu;
label_3255fc:
    // 0x3255fc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3255fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x325600: 0x10000709  b           . + 4 + (0x709 << 2)
    ctx->pc = 0x325600u;
    {
        const bool branch_taken_0x325600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325600u;
            // 0x325604: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325600) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325608u;
label_325608:
    // 0x325608: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x32560c: 0x8c44415c  lw          $a0, 0x415C($v0)
    ctx->pc = 0x32560cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16732)));
    // 0x325610: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325610u;
    SET_GPR_U32(ctx, 31, 0x325618u);
    ctx->pc = 0x325614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325610u;
            // 0x325614: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325618u; }
        if (ctx->pc != 0x325618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325618u; }
        if (ctx->pc != 0x325618u) { return; }
    }
    ctx->pc = 0x325618u;
label_325618:
    // 0x325618: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x325618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x32561c: 0x10000702  b           . + 4 + (0x702 << 2)
    ctx->pc = 0x32561Cu;
    {
        const bool branch_taken_0x32561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32561Cu;
            // 0x325620: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32561c) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325624u;
label_325624:
    // 0x325624: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325628: 0x8c44415c  lw          $a0, 0x415C($v0)
    ctx->pc = 0x325628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16732)));
    // 0x32562c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x32562Cu;
    SET_GPR_U32(ctx, 31, 0x325634u);
    ctx->pc = 0x325630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32562Cu;
            // 0x325630: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325634u; }
        if (ctx->pc != 0x325634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325634u; }
        if (ctx->pc != 0x325634u) { return; }
    }
    ctx->pc = 0x325634u;
label_325634:
    // 0x325634: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x325634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x325638: 0x100006fb  b           . + 4 + (0x6FB << 2)
    ctx->pc = 0x325638u;
    {
        const bool branch_taken_0x325638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32563Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325638u;
            // 0x32563c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325638) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325640u;
label_325640:
    // 0x325640: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325644: 0x8c444160  lw          $a0, 0x4160($v0)
    ctx->pc = 0x325644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16736)));
    // 0x325648: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325648u;
    SET_GPR_U32(ctx, 31, 0x325650u);
    ctx->pc = 0x32564Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325648u;
            // 0x32564c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325650u; }
        if (ctx->pc != 0x325650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325650u; }
        if (ctx->pc != 0x325650u) { return; }
    }
    ctx->pc = 0x325650u;
label_325650:
    // 0x325650: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x325650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x325654: 0x100006f4  b           . + 4 + (0x6F4 << 2)
    ctx->pc = 0x325654u;
    {
        const bool branch_taken_0x325654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325654u;
            // 0x325658: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325654) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x32565Cu;
label_32565c:
    // 0x32565c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x32565cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325660: 0x8c444160  lw          $a0, 0x4160($v0)
    ctx->pc = 0x325660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16736)));
    // 0x325664: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325664u;
    SET_GPR_U32(ctx, 31, 0x32566Cu);
    ctx->pc = 0x325668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325664u;
            // 0x325668: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32566Cu; }
        if (ctx->pc != 0x32566Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32566Cu; }
        if (ctx->pc != 0x32566Cu) { return; }
    }
    ctx->pc = 0x32566Cu;
label_32566c:
    // 0x32566c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x32566cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x325670: 0x100006ed  b           . + 4 + (0x6ED << 2)
    ctx->pc = 0x325670u;
    {
        const bool branch_taken_0x325670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325670u;
            // 0x325674: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325670) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325678u;
label_325678:
    // 0x325678: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x32567c: 0x8c444160  lw          $a0, 0x4160($v0)
    ctx->pc = 0x32567cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16736)));
    // 0x325680: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325680u;
    SET_GPR_U32(ctx, 31, 0x325688u);
    ctx->pc = 0x325684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325680u;
            // 0x325684: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325688u; }
        if (ctx->pc != 0x325688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325688u; }
        if (ctx->pc != 0x325688u) { return; }
    }
    ctx->pc = 0x325688u;
label_325688:
    // 0x325688: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x325688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x32568c: 0x100006e6  b           . + 4 + (0x6E6 << 2)
    ctx->pc = 0x32568Cu;
    {
        const bool branch_taken_0x32568c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32568Cu;
            // 0x325690: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32568c) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325694u;
label_325694:
    // 0x325694: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325698: 0x8c444160  lw          $a0, 0x4160($v0)
    ctx->pc = 0x325698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16736)));
    // 0x32569c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x32569Cu;
    SET_GPR_U32(ctx, 31, 0x3256A4u);
    ctx->pc = 0x3256A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32569Cu;
            // 0x3256a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3256A4u; }
        if (ctx->pc != 0x3256A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3256A4u; }
        if (ctx->pc != 0x3256A4u) { return; }
    }
    ctx->pc = 0x3256A4u;
label_3256a4:
    // 0x3256a4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3256a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3256a8: 0x100006df  b           . + 4 + (0x6DF << 2)
    ctx->pc = 0x3256A8u;
    {
        const bool branch_taken_0x3256a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3256ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3256A8u;
            // 0x3256ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3256a8) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3256B0u;
label_3256b0:
    // 0x3256b0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x3256b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x3256b4: 0x8c444160  lw          $a0, 0x4160($v0)
    ctx->pc = 0x3256b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16736)));
    // 0x3256b8: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3256B8u;
    SET_GPR_U32(ctx, 31, 0x3256C0u);
    ctx->pc = 0x3256BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3256B8u;
            // 0x3256bc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3256C0u; }
        if (ctx->pc != 0x3256C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3256C0u; }
        if (ctx->pc != 0x3256C0u) { return; }
    }
    ctx->pc = 0x3256C0u;
label_3256c0:
    // 0x3256c0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3256c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3256c4: 0x100006d8  b           . + 4 + (0x6D8 << 2)
    ctx->pc = 0x3256C4u;
    {
        const bool branch_taken_0x3256c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3256C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3256C4u;
            // 0x3256c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3256c4) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3256CCu;
label_3256cc:
    // 0x3256cc: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x3256ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x3256d0: 0x8c444160  lw          $a0, 0x4160($v0)
    ctx->pc = 0x3256d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16736)));
    // 0x3256d4: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3256D4u;
    SET_GPR_U32(ctx, 31, 0x3256DCu);
    ctx->pc = 0x3256D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3256D4u;
            // 0x3256d8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3256DCu; }
        if (ctx->pc != 0x3256DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3256DCu; }
        if (ctx->pc != 0x3256DCu) { return; }
    }
    ctx->pc = 0x3256DCu;
label_3256dc:
    // 0x3256dc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3256dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3256e0: 0x100006d1  b           . + 4 + (0x6D1 << 2)
    ctx->pc = 0x3256E0u;
    {
        const bool branch_taken_0x3256e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3256E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3256E0u;
            // 0x3256e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3256e0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3256E8u;
label_3256e8:
    // 0x3256e8: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x3256e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x3256ec: 0x8c444164  lw          $a0, 0x4164($v0)
    ctx->pc = 0x3256ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16740)));
    // 0x3256f0: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3256F0u;
    SET_GPR_U32(ctx, 31, 0x3256F8u);
    ctx->pc = 0x3256F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3256F0u;
            // 0x3256f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3256F8u; }
        if (ctx->pc != 0x3256F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3256F8u; }
        if (ctx->pc != 0x3256F8u) { return; }
    }
    ctx->pc = 0x3256F8u;
label_3256f8:
    // 0x3256f8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3256f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3256fc: 0x100006ca  b           . + 4 + (0x6CA << 2)
    ctx->pc = 0x3256FCu;
    {
        const bool branch_taken_0x3256fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3256FCu;
            // 0x325700: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3256fc) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325704u;
label_325704:
    // 0x325704: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325708: 0x8c444164  lw          $a0, 0x4164($v0)
    ctx->pc = 0x325708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16740)));
    // 0x32570c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x32570Cu;
    SET_GPR_U32(ctx, 31, 0x325714u);
    ctx->pc = 0x325710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32570Cu;
            // 0x325710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325714u; }
        if (ctx->pc != 0x325714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325714u; }
        if (ctx->pc != 0x325714u) { return; }
    }
    ctx->pc = 0x325714u;
label_325714:
    // 0x325714: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x325714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x325718: 0x100006c3  b           . + 4 + (0x6C3 << 2)
    ctx->pc = 0x325718u;
    {
        const bool branch_taken_0x325718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32571Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325718u;
            // 0x32571c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325718) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325720u;
label_325720:
    // 0x325720: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325724: 0x8c444164  lw          $a0, 0x4164($v0)
    ctx->pc = 0x325724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16740)));
    // 0x325728: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325728u;
    SET_GPR_U32(ctx, 31, 0x325730u);
    ctx->pc = 0x32572Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325728u;
            // 0x32572c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325730u; }
        if (ctx->pc != 0x325730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325730u; }
        if (ctx->pc != 0x325730u) { return; }
    }
    ctx->pc = 0x325730u;
label_325730:
    // 0x325730: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x325730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x325734: 0x100006bc  b           . + 4 + (0x6BC << 2)
    ctx->pc = 0x325734u;
    {
        const bool branch_taken_0x325734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325734u;
            // 0x325738: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325734) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x32573Cu;
label_32573c:
    // 0x32573c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x32573cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325740: 0x8c444164  lw          $a0, 0x4164($v0)
    ctx->pc = 0x325740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16740)));
    // 0x325744: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325744u;
    SET_GPR_U32(ctx, 31, 0x32574Cu);
    ctx->pc = 0x325748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325744u;
            // 0x325748: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32574Cu; }
        if (ctx->pc != 0x32574Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32574Cu; }
        if (ctx->pc != 0x32574Cu) { return; }
    }
    ctx->pc = 0x32574Cu;
label_32574c:
    // 0x32574c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x32574cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x325750: 0x100006b5  b           . + 4 + (0x6B5 << 2)
    ctx->pc = 0x325750u;
    {
        const bool branch_taken_0x325750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325750u;
            // 0x325754: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325750) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325758u;
label_325758:
    // 0x325758: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x32575c: 0x8c444164  lw          $a0, 0x4164($v0)
    ctx->pc = 0x32575cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16740)));
    // 0x325760: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325760u;
    SET_GPR_U32(ctx, 31, 0x325768u);
    ctx->pc = 0x325764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325760u;
            // 0x325764: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325768u; }
        if (ctx->pc != 0x325768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325768u; }
        if (ctx->pc != 0x325768u) { return; }
    }
    ctx->pc = 0x325768u;
label_325768:
    // 0x325768: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x325768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x32576c: 0x100006ae  b           . + 4 + (0x6AE << 2)
    ctx->pc = 0x32576Cu;
    {
        const bool branch_taken_0x32576c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32576Cu;
            // 0x325770: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32576c) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325774u;
label_325774:
    // 0x325774: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325778: 0x8c444164  lw          $a0, 0x4164($v0)
    ctx->pc = 0x325778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16740)));
    // 0x32577c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x32577Cu;
    SET_GPR_U32(ctx, 31, 0x325784u);
    ctx->pc = 0x325780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32577Cu;
            // 0x325780: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325784u; }
        if (ctx->pc != 0x325784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325784u; }
        if (ctx->pc != 0x325784u) { return; }
    }
    ctx->pc = 0x325784u;
label_325784:
    // 0x325784: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x325784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x325788: 0x100006a7  b           . + 4 + (0x6A7 << 2)
    ctx->pc = 0x325788u;
    {
        const bool branch_taken_0x325788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32578Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325788u;
            // 0x32578c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325788) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325790u;
label_325790:
    // 0x325790: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325794: 0x8c444168  lw          $a0, 0x4168($v0)
    ctx->pc = 0x325794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16744)));
    // 0x325798: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325798u;
    SET_GPR_U32(ctx, 31, 0x3257A0u);
    ctx->pc = 0x32579Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325798u;
            // 0x32579c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3257A0u; }
        if (ctx->pc != 0x3257A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3257A0u; }
        if (ctx->pc != 0x3257A0u) { return; }
    }
    ctx->pc = 0x3257A0u;
label_3257a0:
    // 0x3257a0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3257a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3257a4: 0x100006a0  b           . + 4 + (0x6A0 << 2)
    ctx->pc = 0x3257A4u;
    {
        const bool branch_taken_0x3257a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3257A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3257A4u;
            // 0x3257a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3257a4) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3257ACu;
label_3257ac:
    // 0x3257ac: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x3257acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x3257b0: 0x8c444168  lw          $a0, 0x4168($v0)
    ctx->pc = 0x3257b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16744)));
    // 0x3257b4: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3257B4u;
    SET_GPR_U32(ctx, 31, 0x3257BCu);
    ctx->pc = 0x3257B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3257B4u;
            // 0x3257b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3257BCu; }
        if (ctx->pc != 0x3257BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3257BCu; }
        if (ctx->pc != 0x3257BCu) { return; }
    }
    ctx->pc = 0x3257BCu;
label_3257bc:
    // 0x3257bc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3257bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3257c0: 0x10000699  b           . + 4 + (0x699 << 2)
    ctx->pc = 0x3257C0u;
    {
        const bool branch_taken_0x3257c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3257C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3257C0u;
            // 0x3257c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3257c0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3257C8u;
label_3257c8:
    // 0x3257c8: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x3257c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x3257cc: 0x8c444168  lw          $a0, 0x4168($v0)
    ctx->pc = 0x3257ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16744)));
    // 0x3257d0: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3257D0u;
    SET_GPR_U32(ctx, 31, 0x3257D8u);
    ctx->pc = 0x3257D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3257D0u;
            // 0x3257d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3257D8u; }
        if (ctx->pc != 0x3257D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3257D8u; }
        if (ctx->pc != 0x3257D8u) { return; }
    }
    ctx->pc = 0x3257D8u;
label_3257d8:
    // 0x3257d8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3257d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3257dc: 0x10000692  b           . + 4 + (0x692 << 2)
    ctx->pc = 0x3257DCu;
    {
        const bool branch_taken_0x3257dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3257E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3257DCu;
            // 0x3257e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3257dc) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3257E4u;
label_3257e4:
    // 0x3257e4: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x3257e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x3257e8: 0x8c444168  lw          $a0, 0x4168($v0)
    ctx->pc = 0x3257e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16744)));
    // 0x3257ec: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3257ECu;
    SET_GPR_U32(ctx, 31, 0x3257F4u);
    ctx->pc = 0x3257F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3257ECu;
            // 0x3257f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3257F4u; }
        if (ctx->pc != 0x3257F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3257F4u; }
        if (ctx->pc != 0x3257F4u) { return; }
    }
    ctx->pc = 0x3257F4u;
label_3257f4:
    // 0x3257f4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3257f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3257f8: 0x1000068b  b           . + 4 + (0x68B << 2)
    ctx->pc = 0x3257F8u;
    {
        const bool branch_taken_0x3257f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3257FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3257F8u;
            // 0x3257fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3257f8) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325800u;
label_325800:
    // 0x325800: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325804: 0x8c444168  lw          $a0, 0x4168($v0)
    ctx->pc = 0x325804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16744)));
    // 0x325808: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325808u;
    SET_GPR_U32(ctx, 31, 0x325810u);
    ctx->pc = 0x32580Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325808u;
            // 0x32580c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325810u; }
        if (ctx->pc != 0x325810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325810u; }
        if (ctx->pc != 0x325810u) { return; }
    }
    ctx->pc = 0x325810u;
label_325810:
    // 0x325810: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x325810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x325814: 0x10000684  b           . + 4 + (0x684 << 2)
    ctx->pc = 0x325814u;
    {
        const bool branch_taken_0x325814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325814u;
            // 0x325818: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325814) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x32581Cu;
label_32581c:
    // 0x32581c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x32581cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325820: 0x8c444168  lw          $a0, 0x4168($v0)
    ctx->pc = 0x325820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16744)));
    // 0x325824: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325824u;
    SET_GPR_U32(ctx, 31, 0x32582Cu);
    ctx->pc = 0x325828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325824u;
            // 0x325828: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32582Cu; }
        if (ctx->pc != 0x32582Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32582Cu; }
        if (ctx->pc != 0x32582Cu) { return; }
    }
    ctx->pc = 0x32582Cu;
label_32582c:
    // 0x32582c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x32582cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x325830: 0x1000067d  b           . + 4 + (0x67D << 2)
    ctx->pc = 0x325830u;
    {
        const bool branch_taken_0x325830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325830u;
            // 0x325834: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325830) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325838u;
label_325838:
    // 0x325838: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x32583c: 0x8c444168  lw          $a0, 0x4168($v0)
    ctx->pc = 0x32583cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16744)));
    // 0x325840: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325840u;
    SET_GPR_U32(ctx, 31, 0x325848u);
    ctx->pc = 0x325844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325840u;
            // 0x325844: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325848u; }
        if (ctx->pc != 0x325848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325848u; }
        if (ctx->pc != 0x325848u) { return; }
    }
    ctx->pc = 0x325848u;
label_325848:
    // 0x325848: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x325848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x32584c: 0x10000676  b           . + 4 + (0x676 << 2)
    ctx->pc = 0x32584Cu;
    {
        const bool branch_taken_0x32584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32584Cu;
            // 0x325850: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32584c) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325854u;
label_325854:
    // 0x325854: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325858: 0x8c444168  lw          $a0, 0x4168($v0)
    ctx->pc = 0x325858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16744)));
    // 0x32585c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x32585Cu;
    SET_GPR_U32(ctx, 31, 0x325864u);
    ctx->pc = 0x325860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32585Cu;
            // 0x325860: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325864u; }
        if (ctx->pc != 0x325864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325864u; }
        if (ctx->pc != 0x325864u) { return; }
    }
    ctx->pc = 0x325864u;
label_325864:
    // 0x325864: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x325864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x325868: 0x1000066f  b           . + 4 + (0x66F << 2)
    ctx->pc = 0x325868u;
    {
        const bool branch_taken_0x325868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32586Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325868u;
            // 0x32586c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325868) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325870u;
label_325870:
    // 0x325870: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x325870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325874: 0x8c44416c  lw          $a0, 0x416C($v0)
    ctx->pc = 0x325874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16748)));
    // 0x325878: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325878u;
    SET_GPR_U32(ctx, 31, 0x325880u);
    ctx->pc = 0x32587Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325878u;
            // 0x32587c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325880u; }
        if (ctx->pc != 0x325880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325880u; }
        if (ctx->pc != 0x325880u) { return; }
    }
    ctx->pc = 0x325880u;
label_325880:
    // 0x325880: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x325880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x325884: 0x10000668  b           . + 4 + (0x668 << 2)
    ctx->pc = 0x325884u;
    {
        const bool branch_taken_0x325884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325884u;
            // 0x325888: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325884) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x32588Cu;
label_32588c:
    // 0x32588c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x32588cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x325890: 0x8c44416c  lw          $a0, 0x416C($v0)
    ctx->pc = 0x325890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16748)));
    // 0x325894: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325894u;
    SET_GPR_U32(ctx, 31, 0x32589Cu);
    ctx->pc = 0x325898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325894u;
            // 0x325898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32589Cu; }
        if (ctx->pc != 0x32589Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32589Cu; }
        if (ctx->pc != 0x32589Cu) { return; }
    }
    ctx->pc = 0x32589Cu;
label_32589c:
    // 0x32589c: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x32589cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x3258a0: 0x10000661  b           . + 4 + (0x661 << 2)
    ctx->pc = 0x3258A0u;
    {
        const bool branch_taken_0x3258a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3258A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3258A0u;
            // 0x3258a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3258a0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3258A8u;
label_3258a8:
    // 0x3258a8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3258a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3258ac: 0x8443ee90  lh          $v1, -0x1170($v0)
    ctx->pc = 0x3258acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962832)));
    // 0x3258b0: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x3258b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3258b4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3258B4u;
    {
        const bool branch_taken_0x3258b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3258b4) {
            ctx->pc = 0x3258B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3258B4u;
            // 0x3258b8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3258C0u;
            goto label_3258c0;
        }
    }
    ctx->pc = 0x3258BCu;
    // 0x3258bc: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x3258bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_3258c0:
    // 0x3258c0: 0x10000659  b           . + 4 + (0x659 << 2)
    ctx->pc = 0x3258C0u;
    {
        const bool branch_taken_0x3258c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3258C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3258C0u;
            // 0x3258c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3258c0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3258C8u;
label_3258c8:
    // 0x3258c8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3258c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3258cc: 0x8443ee92  lh          $v1, -0x116E($v0)
    ctx->pc = 0x3258ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962834)));
    // 0x3258d0: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x3258d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3258d4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3258D4u;
    {
        const bool branch_taken_0x3258d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3258d4) {
            ctx->pc = 0x3258D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3258D4u;
            // 0x3258d8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3258E0u;
            goto label_3258e0;
        }
    }
    ctx->pc = 0x3258DCu;
    // 0x3258dc: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x3258dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_3258e0:
    // 0x3258e0: 0x10000651  b           . + 4 + (0x651 << 2)
    ctx->pc = 0x3258E0u;
    {
        const bool branch_taken_0x3258e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3258E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3258E0u;
            // 0x3258e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3258e0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3258E8u;
label_3258e8:
    // 0x3258e8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3258e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3258ec: 0x8443ee94  lh          $v1, -0x116C($v0)
    ctx->pc = 0x3258ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962836)));
    // 0x3258f0: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x3258f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3258f4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3258F4u;
    {
        const bool branch_taken_0x3258f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3258f4) {
            ctx->pc = 0x3258F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3258F4u;
            // 0x3258f8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325900u;
            goto label_325900;
        }
    }
    ctx->pc = 0x3258FCu;
    // 0x3258fc: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x3258fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325900:
    // 0x325900: 0x10000649  b           . + 4 + (0x649 << 2)
    ctx->pc = 0x325900u;
    {
        const bool branch_taken_0x325900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325900u;
            // 0x325904: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325900) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325908u;
label_325908:
    // 0x325908: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32590c: 0x8443eea0  lh          $v1, -0x1160($v0)
    ctx->pc = 0x32590cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962848)));
    // 0x325910: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325914: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325914u;
    {
        const bool branch_taken_0x325914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325914) {
            ctx->pc = 0x325918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325914u;
            // 0x325918: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325920u;
            goto label_325920;
        }
    }
    ctx->pc = 0x32591Cu;
    // 0x32591c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x32591cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325920:
    // 0x325920: 0x10000641  b           . + 4 + (0x641 << 2)
    ctx->pc = 0x325920u;
    {
        const bool branch_taken_0x325920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325920u;
            // 0x325924: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325920) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325928u;
label_325928:
    // 0x325928: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32592c: 0x8443eea2  lh          $v1, -0x115E($v0)
    ctx->pc = 0x32592cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962850)));
    // 0x325930: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325934: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325934u;
    {
        const bool branch_taken_0x325934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325934) {
            ctx->pc = 0x325938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325934u;
            // 0x325938: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325940u;
            goto label_325940;
        }
    }
    ctx->pc = 0x32593Cu;
    // 0x32593c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x32593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325940:
    // 0x325940: 0x10000639  b           . + 4 + (0x639 << 2)
    ctx->pc = 0x325940u;
    {
        const bool branch_taken_0x325940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325940u;
            // 0x325944: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325940) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325948u;
label_325948:
    // 0x325948: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32594c: 0x8443eea4  lh          $v1, -0x115C($v0)
    ctx->pc = 0x32594cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962852)));
    // 0x325950: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325954: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325954u;
    {
        const bool branch_taken_0x325954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325954) {
            ctx->pc = 0x325958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325954u;
            // 0x325958: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325960u;
            goto label_325960;
        }
    }
    ctx->pc = 0x32595Cu;
    // 0x32595c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x32595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325960:
    // 0x325960: 0x10000631  b           . + 4 + (0x631 << 2)
    ctx->pc = 0x325960u;
    {
        const bool branch_taken_0x325960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325960u;
            // 0x325964: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325960) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325968u;
label_325968:
    // 0x325968: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32596c: 0x8443eeb0  lh          $v1, -0x1150($v0)
    ctx->pc = 0x32596cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962864)));
    // 0x325970: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325974: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325974u;
    {
        const bool branch_taken_0x325974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325974) {
            ctx->pc = 0x325978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325974u;
            // 0x325978: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325980u;
            goto label_325980;
        }
    }
    ctx->pc = 0x32597Cu;
    // 0x32597c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x32597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325980:
    // 0x325980: 0x10000629  b           . + 4 + (0x629 << 2)
    ctx->pc = 0x325980u;
    {
        const bool branch_taken_0x325980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325980u;
            // 0x325984: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325980) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325988u;
label_325988:
    // 0x325988: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32598c: 0x8443eeb2  lh          $v1, -0x114E($v0)
    ctx->pc = 0x32598cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962866)));
    // 0x325990: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325994: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325994u;
    {
        const bool branch_taken_0x325994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325994) {
            ctx->pc = 0x325998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325994u;
            // 0x325998: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3259A0u;
            goto label_3259a0;
        }
    }
    ctx->pc = 0x32599Cu;
    // 0x32599c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x32599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_3259a0:
    // 0x3259a0: 0x10000621  b           . + 4 + (0x621 << 2)
    ctx->pc = 0x3259A0u;
    {
        const bool branch_taken_0x3259a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3259A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3259A0u;
            // 0x3259a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3259a0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3259A8u;
label_3259a8:
    // 0x3259a8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3259a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3259ac: 0x8443eeb4  lh          $v1, -0x114C($v0)
    ctx->pc = 0x3259acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962868)));
    // 0x3259b0: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x3259b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3259b4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3259B4u;
    {
        const bool branch_taken_0x3259b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3259b4) {
            ctx->pc = 0x3259B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3259B4u;
            // 0x3259b8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3259C0u;
            goto label_3259c0;
        }
    }
    ctx->pc = 0x3259BCu;
    // 0x3259bc: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x3259bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_3259c0:
    // 0x3259c0: 0x10000619  b           . + 4 + (0x619 << 2)
    ctx->pc = 0x3259C0u;
    {
        const bool branch_taken_0x3259c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3259C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3259C0u;
            // 0x3259c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3259c0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3259C8u;
label_3259c8:
    // 0x3259c8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3259c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3259cc: 0x8443eec0  lh          $v1, -0x1140($v0)
    ctx->pc = 0x3259ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962880)));
    // 0x3259d0: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x3259d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3259d4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3259D4u;
    {
        const bool branch_taken_0x3259d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3259d4) {
            ctx->pc = 0x3259D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3259D4u;
            // 0x3259d8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3259E0u;
            goto label_3259e0;
        }
    }
    ctx->pc = 0x3259DCu;
    // 0x3259dc: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x3259dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_3259e0:
    // 0x3259e0: 0x10000611  b           . + 4 + (0x611 << 2)
    ctx->pc = 0x3259E0u;
    {
        const bool branch_taken_0x3259e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3259E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3259E0u;
            // 0x3259e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3259e0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x3259E8u;
label_3259e8:
    // 0x3259e8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3259e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3259ec: 0x8443eec2  lh          $v1, -0x113E($v0)
    ctx->pc = 0x3259ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962882)));
    // 0x3259f0: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x3259f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3259f4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3259F4u;
    {
        const bool branch_taken_0x3259f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3259f4) {
            ctx->pc = 0x3259F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3259F4u;
            // 0x3259f8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325A00u;
            goto label_325a00;
        }
    }
    ctx->pc = 0x3259FCu;
    // 0x3259fc: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x3259fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325a00:
    // 0x325a00: 0x10000609  b           . + 4 + (0x609 << 2)
    ctx->pc = 0x325A00u;
    {
        const bool branch_taken_0x325a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325A00u;
            // 0x325a04: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a00) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325A08u;
label_325a08:
    // 0x325a08: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325a0c: 0x8443eec4  lh          $v1, -0x113C($v0)
    ctx->pc = 0x325a0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962884)));
    // 0x325a10: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325a14: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325A14u;
    {
        const bool branch_taken_0x325a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325a14) {
            ctx->pc = 0x325A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325A14u;
            // 0x325a18: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325A20u;
            goto label_325a20;
        }
    }
    ctx->pc = 0x325A1Cu;
    // 0x325a1c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325a20:
    // 0x325a20: 0x10000601  b           . + 4 + (0x601 << 2)
    ctx->pc = 0x325A20u;
    {
        const bool branch_taken_0x325a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325A20u;
            // 0x325a24: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a20) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325A28u;
label_325a28:
    // 0x325a28: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325a2c: 0x8443eed0  lh          $v1, -0x1130($v0)
    ctx->pc = 0x325a2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962896)));
    // 0x325a30: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325a34: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325A34u;
    {
        const bool branch_taken_0x325a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325a34) {
            ctx->pc = 0x325A38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325A34u;
            // 0x325a38: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325A40u;
            goto label_325a40;
        }
    }
    ctx->pc = 0x325A3Cu;
    // 0x325a3c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325a40:
    // 0x325a40: 0x100005f9  b           . + 4 + (0x5F9 << 2)
    ctx->pc = 0x325A40u;
    {
        const bool branch_taken_0x325a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325A40u;
            // 0x325a44: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a40) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325A48u;
label_325a48:
    // 0x325a48: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325a4c: 0x8443eed2  lh          $v1, -0x112E($v0)
    ctx->pc = 0x325a4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962898)));
    // 0x325a50: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325a54: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325A54u;
    {
        const bool branch_taken_0x325a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325a54) {
            ctx->pc = 0x325A58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325A54u;
            // 0x325a58: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325A60u;
            goto label_325a60;
        }
    }
    ctx->pc = 0x325A5Cu;
    // 0x325a5c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325a60:
    // 0x325a60: 0x100005f1  b           . + 4 + (0x5F1 << 2)
    ctx->pc = 0x325A60u;
    {
        const bool branch_taken_0x325a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325A60u;
            // 0x325a64: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a60) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325A68u;
label_325a68:
    // 0x325a68: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325a6c: 0x8443eed4  lh          $v1, -0x112C($v0)
    ctx->pc = 0x325a6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962900)));
    // 0x325a70: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325a74: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325A74u;
    {
        const bool branch_taken_0x325a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325a74) {
            ctx->pc = 0x325A78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325A74u;
            // 0x325a78: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325A80u;
            goto label_325a80;
        }
    }
    ctx->pc = 0x325A7Cu;
    // 0x325a7c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325a80:
    // 0x325a80: 0x100005e9  b           . + 4 + (0x5E9 << 2)
    ctx->pc = 0x325A80u;
    {
        const bool branch_taken_0x325a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325A80u;
            // 0x325a84: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a80) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325A88u;
label_325a88:
    // 0x325a88: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325a8c: 0x8443eee0  lh          $v1, -0x1120($v0)
    ctx->pc = 0x325a8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962912)));
    // 0x325a90: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325a90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325a94: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325A94u;
    {
        const bool branch_taken_0x325a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325a94) {
            ctx->pc = 0x325A98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325A94u;
            // 0x325a98: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325AA0u;
            goto label_325aa0;
        }
    }
    ctx->pc = 0x325A9Cu;
    // 0x325a9c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325aa0:
    // 0x325aa0: 0x100005e1  b           . + 4 + (0x5E1 << 2)
    ctx->pc = 0x325AA0u;
    {
        const bool branch_taken_0x325aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325AA0u;
            // 0x325aa4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325aa0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325AA8u;
label_325aa8:
    // 0x325aa8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325aac: 0x8443eee2  lh          $v1, -0x111E($v0)
    ctx->pc = 0x325aacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962914)));
    // 0x325ab0: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325ab4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325AB4u;
    {
        const bool branch_taken_0x325ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325ab4) {
            ctx->pc = 0x325AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325AB4u;
            // 0x325ab8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325AC0u;
            goto label_325ac0;
        }
    }
    ctx->pc = 0x325ABCu;
    // 0x325abc: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325ac0:
    // 0x325ac0: 0x100005d9  b           . + 4 + (0x5D9 << 2)
    ctx->pc = 0x325AC0u;
    {
        const bool branch_taken_0x325ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325AC0u;
            // 0x325ac4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ac0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325AC8u;
label_325ac8:
    // 0x325ac8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325acc: 0x8443eee4  lh          $v1, -0x111C($v0)
    ctx->pc = 0x325accu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962916)));
    // 0x325ad0: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325ad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325ad4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325AD4u;
    {
        const bool branch_taken_0x325ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325ad4) {
            ctx->pc = 0x325AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325AD4u;
            // 0x325ad8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325AE0u;
            goto label_325ae0;
        }
    }
    ctx->pc = 0x325ADCu;
    // 0x325adc: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325ae0:
    // 0x325ae0: 0x100005d1  b           . + 4 + (0x5D1 << 2)
    ctx->pc = 0x325AE0u;
    {
        const bool branch_taken_0x325ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325AE0u;
            // 0x325ae4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ae0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325AE8u;
label_325ae8:
    // 0x325ae8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325aec: 0x8443eef0  lh          $v1, -0x1110($v0)
    ctx->pc = 0x325aecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962928)));
    // 0x325af0: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325af0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325af4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325AF4u;
    {
        const bool branch_taken_0x325af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325af4) {
            ctx->pc = 0x325AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325AF4u;
            // 0x325af8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325B00u;
            goto label_325b00;
        }
    }
    ctx->pc = 0x325AFCu;
    // 0x325afc: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325b00:
    // 0x325b00: 0x100005c9  b           . + 4 + (0x5C9 << 2)
    ctx->pc = 0x325B00u;
    {
        const bool branch_taken_0x325b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325B00u;
            // 0x325b04: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b00) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325B08u;
label_325b08:
    // 0x325b08: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325b0c: 0x8443eef2  lh          $v1, -0x110E($v0)
    ctx->pc = 0x325b0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962930)));
    // 0x325b10: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325b14: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325B14u;
    {
        const bool branch_taken_0x325b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325b14) {
            ctx->pc = 0x325B18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325B14u;
            // 0x325b18: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325B20u;
            goto label_325b20;
        }
    }
    ctx->pc = 0x325B1Cu;
    // 0x325b1c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325b20:
    // 0x325b20: 0x100005c1  b           . + 4 + (0x5C1 << 2)
    ctx->pc = 0x325B20u;
    {
        const bool branch_taken_0x325b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325B20u;
            // 0x325b24: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b20) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325B28u;
label_325b28:
    // 0x325b28: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325b2c: 0x8443eef4  lh          $v1, -0x110C($v0)
    ctx->pc = 0x325b2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962932)));
    // 0x325b30: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325b34: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325B34u;
    {
        const bool branch_taken_0x325b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325b34) {
            ctx->pc = 0x325B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325B34u;
            // 0x325b38: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325B40u;
            goto label_325b40;
        }
    }
    ctx->pc = 0x325B3Cu;
    // 0x325b3c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325b40:
    // 0x325b40: 0x100005b9  b           . + 4 + (0x5B9 << 2)
    ctx->pc = 0x325B40u;
    {
        const bool branch_taken_0x325b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325B40u;
            // 0x325b44: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b40) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325B48u;
label_325b48:
    // 0x325b48: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325b4c: 0x8443ef00  lh          $v1, -0x1100($v0)
    ctx->pc = 0x325b4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962944)));
    // 0x325b50: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325b50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325b54: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325B54u;
    {
        const bool branch_taken_0x325b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325b54) {
            ctx->pc = 0x325B58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325B54u;
            // 0x325b58: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325B60u;
            goto label_325b60;
        }
    }
    ctx->pc = 0x325B5Cu;
    // 0x325b5c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325b60:
    // 0x325b60: 0x100005b1  b           . + 4 + (0x5B1 << 2)
    ctx->pc = 0x325B60u;
    {
        const bool branch_taken_0x325b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325B60u;
            // 0x325b64: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b60) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325B68u;
label_325b68:
    // 0x325b68: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325b6c: 0x8443ef02  lh          $v1, -0x10FE($v0)
    ctx->pc = 0x325b6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962946)));
    // 0x325b70: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325b70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325b74: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325B74u;
    {
        const bool branch_taken_0x325b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325b74) {
            ctx->pc = 0x325B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325B74u;
            // 0x325b78: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325B80u;
            goto label_325b80;
        }
    }
    ctx->pc = 0x325B7Cu;
    // 0x325b7c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325b80:
    // 0x325b80: 0x100005a9  b           . + 4 + (0x5A9 << 2)
    ctx->pc = 0x325B80u;
    {
        const bool branch_taken_0x325b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325B80u;
            // 0x325b84: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b80) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325B88u;
label_325b88:
    // 0x325b88: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325b8c: 0x8443ef04  lh          $v1, -0x10FC($v0)
    ctx->pc = 0x325b8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962948)));
    // 0x325b90: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325b94: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325B94u;
    {
        const bool branch_taken_0x325b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325b94) {
            ctx->pc = 0x325B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325B94u;
            // 0x325b98: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325BA0u;
            goto label_325ba0;
        }
    }
    ctx->pc = 0x325B9Cu;
    // 0x325b9c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325ba0:
    // 0x325ba0: 0x100005a1  b           . + 4 + (0x5A1 << 2)
    ctx->pc = 0x325BA0u;
    {
        const bool branch_taken_0x325ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325BA0u;
            // 0x325ba4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ba0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325BA8u;
label_325ba8:
    // 0x325ba8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325bac: 0x8443ef10  lh          $v1, -0x10F0($v0)
    ctx->pc = 0x325bacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962960)));
    // 0x325bb0: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325bb4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325BB4u;
    {
        const bool branch_taken_0x325bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325bb4) {
            ctx->pc = 0x325BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325BB4u;
            // 0x325bb8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325BC0u;
            goto label_325bc0;
        }
    }
    ctx->pc = 0x325BBCu;
    // 0x325bbc: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325bc0:
    // 0x325bc0: 0x10000599  b           . + 4 + (0x599 << 2)
    ctx->pc = 0x325BC0u;
    {
        const bool branch_taken_0x325bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325BC0u;
            // 0x325bc4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325bc0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325BC8u;
label_325bc8:
    // 0x325bc8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325bcc: 0x8443ef12  lh          $v1, -0x10EE($v0)
    ctx->pc = 0x325bccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962962)));
    // 0x325bd0: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325bd4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325BD4u;
    {
        const bool branch_taken_0x325bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325bd4) {
            ctx->pc = 0x325BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325BD4u;
            // 0x325bd8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325BE0u;
            goto label_325be0;
        }
    }
    ctx->pc = 0x325BDCu;
    // 0x325bdc: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325be0:
    // 0x325be0: 0x10000591  b           . + 4 + (0x591 << 2)
    ctx->pc = 0x325BE0u;
    {
        const bool branch_taken_0x325be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325BE0u;
            // 0x325be4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325be0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325BE8u;
label_325be8:
    // 0x325be8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325bec: 0x8443ef14  lh          $v1, -0x10EC($v0)
    ctx->pc = 0x325becu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962964)));
    // 0x325bf0: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325bf4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325BF4u;
    {
        const bool branch_taken_0x325bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325bf4) {
            ctx->pc = 0x325BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325BF4u;
            // 0x325bf8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325C00u;
            goto label_325c00;
        }
    }
    ctx->pc = 0x325BFCu;
    // 0x325bfc: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325c00:
    // 0x325c00: 0x10000589  b           . + 4 + (0x589 << 2)
    ctx->pc = 0x325C00u;
    {
        const bool branch_taken_0x325c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325C00u;
            // 0x325c04: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c00) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325C08u;
label_325c08:
    // 0x325c08: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325c0c: 0x8443ef20  lh          $v1, -0x10E0($v0)
    ctx->pc = 0x325c0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962976)));
    // 0x325c10: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325c14: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325C14u;
    {
        const bool branch_taken_0x325c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325c14) {
            ctx->pc = 0x325C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325C14u;
            // 0x325c18: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325C20u;
            goto label_325c20;
        }
    }
    ctx->pc = 0x325C1Cu;
    // 0x325c1c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325c20:
    // 0x325c20: 0x10000581  b           . + 4 + (0x581 << 2)
    ctx->pc = 0x325C20u;
    {
        const bool branch_taken_0x325c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325C20u;
            // 0x325c24: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c20) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325C28u;
label_325c28:
    // 0x325c28: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325c2c: 0x8443ef22  lh          $v1, -0x10DE($v0)
    ctx->pc = 0x325c2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962978)));
    // 0x325c30: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325c34: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325C34u;
    {
        const bool branch_taken_0x325c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325c34) {
            ctx->pc = 0x325C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325C34u;
            // 0x325c38: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325C40u;
            goto label_325c40;
        }
    }
    ctx->pc = 0x325C3Cu;
    // 0x325c3c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325c40:
    // 0x325c40: 0x10000579  b           . + 4 + (0x579 << 2)
    ctx->pc = 0x325C40u;
    {
        const bool branch_taken_0x325c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325C40u;
            // 0x325c44: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c40) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325C48u;
label_325c48:
    // 0x325c48: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325c4c: 0x8443ef24  lh          $v1, -0x10DC($v0)
    ctx->pc = 0x325c4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962980)));
    // 0x325c50: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x325c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x325c54: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x325C54u;
    {
        const bool branch_taken_0x325c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325c54) {
            ctx->pc = 0x325C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325C54u;
            // 0x325c58: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x325C60u;
            goto label_325c60;
        }
    }
    ctx->pc = 0x325C5Cu;
    // 0x325c5c: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x325c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_325c60:
    // 0x325c60: 0x10000571  b           . + 4 + (0x571 << 2)
    ctx->pc = 0x325C60u;
    {
        const bool branch_taken_0x325c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325C60u;
            // 0x325c64: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c60) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325C68u;
label_325c68:
    // 0x325c68: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325c6c: 0x8042ee96  lb          $v0, -0x116A($v0)
    ctx->pc = 0x325c6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962838)));
    // 0x325c70: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325c74: 0x1000056c  b           . + 4 + (0x56C << 2)
    ctx->pc = 0x325C74u;
    {
        const bool branch_taken_0x325c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325C74u;
            // 0x325c78: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c74) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325C7Cu;
label_325c7c:
    // 0x325c7c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325c80: 0x8042ee97  lb          $v0, -0x1169($v0)
    ctx->pc = 0x325c80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962839)));
    // 0x325c84: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325c88: 0x10000567  b           . + 4 + (0x567 << 2)
    ctx->pc = 0x325C88u;
    {
        const bool branch_taken_0x325c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325C88u;
            // 0x325c8c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c88) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325C90u;
label_325c90:
    // 0x325c90: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325c94: 0x8042ee98  lb          $v0, -0x1168($v0)
    ctx->pc = 0x325c94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962840)));
    // 0x325c98: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325c9c: 0x10000562  b           . + 4 + (0x562 << 2)
    ctx->pc = 0x325C9Cu;
    {
        const bool branch_taken_0x325c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325C9Cu;
            // 0x325ca0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c9c) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325CA4u;
label_325ca4:
    // 0x325ca4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325ca8: 0x8042eea6  lb          $v0, -0x115A($v0)
    ctx->pc = 0x325ca8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962854)));
    // 0x325cac: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325cb0: 0x1000055d  b           . + 4 + (0x55D << 2)
    ctx->pc = 0x325CB0u;
    {
        const bool branch_taken_0x325cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325CB0u;
            // 0x325cb4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325cb0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325CB8u;
label_325cb8:
    // 0x325cb8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325cbc: 0x8042eea7  lb          $v0, -0x1159($v0)
    ctx->pc = 0x325cbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962855)));
    // 0x325cc0: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325cc4: 0x10000558  b           . + 4 + (0x558 << 2)
    ctx->pc = 0x325CC4u;
    {
        const bool branch_taken_0x325cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325CC4u;
            // 0x325cc8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325cc4) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325CCCu;
label_325ccc:
    // 0x325ccc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325cd0: 0x8042eea8  lb          $v0, -0x1158($v0)
    ctx->pc = 0x325cd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962856)));
    // 0x325cd4: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325cd8: 0x10000553  b           . + 4 + (0x553 << 2)
    ctx->pc = 0x325CD8u;
    {
        const bool branch_taken_0x325cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325CD8u;
            // 0x325cdc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325cd8) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325CE0u;
label_325ce0:
    // 0x325ce0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325ce4: 0x8042eeb6  lb          $v0, -0x114A($v0)
    ctx->pc = 0x325ce4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962870)));
    // 0x325ce8: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325cec: 0x1000054e  b           . + 4 + (0x54E << 2)
    ctx->pc = 0x325CECu;
    {
        const bool branch_taken_0x325cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325CECu;
            // 0x325cf0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325cec) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325CF4u;
label_325cf4:
    // 0x325cf4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325cf8: 0x8042eeb7  lb          $v0, -0x1149($v0)
    ctx->pc = 0x325cf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962871)));
    // 0x325cfc: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325d00: 0x10000549  b           . + 4 + (0x549 << 2)
    ctx->pc = 0x325D00u;
    {
        const bool branch_taken_0x325d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325D00u;
            // 0x325d04: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d00) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325D08u;
label_325d08:
    // 0x325d08: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325d0c: 0x8042eeb8  lb          $v0, -0x1148($v0)
    ctx->pc = 0x325d0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962872)));
    // 0x325d10: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325d14: 0x10000544  b           . + 4 + (0x544 << 2)
    ctx->pc = 0x325D14u;
    {
        const bool branch_taken_0x325d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325D14u;
            // 0x325d18: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d14) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325D1Cu;
label_325d1c:
    // 0x325d1c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325d20: 0x8042eec6  lb          $v0, -0x113A($v0)
    ctx->pc = 0x325d20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962886)));
    // 0x325d24: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325d28: 0x1000053f  b           . + 4 + (0x53F << 2)
    ctx->pc = 0x325D28u;
    {
        const bool branch_taken_0x325d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325D28u;
            // 0x325d2c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d28) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325D30u;
label_325d30:
    // 0x325d30: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325d34: 0x8042eec7  lb          $v0, -0x1139($v0)
    ctx->pc = 0x325d34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962887)));
    // 0x325d38: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325d3c: 0x1000053a  b           . + 4 + (0x53A << 2)
    ctx->pc = 0x325D3Cu;
    {
        const bool branch_taken_0x325d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325D3Cu;
            // 0x325d40: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d3c) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325D44u;
label_325d44:
    // 0x325d44: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325d48: 0x8042eec8  lb          $v0, -0x1138($v0)
    ctx->pc = 0x325d48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962888)));
    // 0x325d4c: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325d50: 0x10000535  b           . + 4 + (0x535 << 2)
    ctx->pc = 0x325D50u;
    {
        const bool branch_taken_0x325d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325D50u;
            // 0x325d54: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d50) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325D58u;
label_325d58:
    // 0x325d58: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325d5c: 0x8042eed6  lb          $v0, -0x112A($v0)
    ctx->pc = 0x325d5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962902)));
    // 0x325d60: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325d64: 0x10000530  b           . + 4 + (0x530 << 2)
    ctx->pc = 0x325D64u;
    {
        const bool branch_taken_0x325d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325D64u;
            // 0x325d68: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d64) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325D6Cu;
label_325d6c:
    // 0x325d6c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325d70: 0x8042eed7  lb          $v0, -0x1129($v0)
    ctx->pc = 0x325d70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962903)));
    // 0x325d74: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325d78: 0x1000052b  b           . + 4 + (0x52B << 2)
    ctx->pc = 0x325D78u;
    {
        const bool branch_taken_0x325d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325D78u;
            // 0x325d7c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d78) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325D80u;
label_325d80:
    // 0x325d80: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325d84: 0x8042eed8  lb          $v0, -0x1128($v0)
    ctx->pc = 0x325d84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962904)));
    // 0x325d88: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325d8c: 0x10000526  b           . + 4 + (0x526 << 2)
    ctx->pc = 0x325D8Cu;
    {
        const bool branch_taken_0x325d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325D8Cu;
            // 0x325d90: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d8c) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325D94u;
label_325d94:
    // 0x325d94: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325d98: 0x8042eee6  lb          $v0, -0x111A($v0)
    ctx->pc = 0x325d98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962918)));
    // 0x325d9c: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325da0: 0x10000521  b           . + 4 + (0x521 << 2)
    ctx->pc = 0x325DA0u;
    {
        const bool branch_taken_0x325da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325DA0u;
            // 0x325da4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325da0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325DA8u;
label_325da8:
    // 0x325da8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325dac: 0x8042eee7  lb          $v0, -0x1119($v0)
    ctx->pc = 0x325dacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962919)));
    // 0x325db0: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325db4: 0x1000051c  b           . + 4 + (0x51C << 2)
    ctx->pc = 0x325DB4u;
    {
        const bool branch_taken_0x325db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325DB4u;
            // 0x325db8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325db4) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325DBCu;
label_325dbc:
    // 0x325dbc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325dc0: 0x8042eee8  lb          $v0, -0x1118($v0)
    ctx->pc = 0x325dc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962920)));
    // 0x325dc4: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325dc8: 0x10000517  b           . + 4 + (0x517 << 2)
    ctx->pc = 0x325DC8u;
    {
        const bool branch_taken_0x325dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325DC8u;
            // 0x325dcc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325dc8) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325DD0u;
label_325dd0:
    // 0x325dd0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325dd4: 0x8042eef6  lb          $v0, -0x110A($v0)
    ctx->pc = 0x325dd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962934)));
    // 0x325dd8: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325ddc: 0x10000512  b           . + 4 + (0x512 << 2)
    ctx->pc = 0x325DDCu;
    {
        const bool branch_taken_0x325ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325DDCu;
            // 0x325de0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ddc) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325DE4u;
label_325de4:
    // 0x325de4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325de8: 0x8042eef7  lb          $v0, -0x1109($v0)
    ctx->pc = 0x325de8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962935)));
    // 0x325dec: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325df0: 0x1000050d  b           . + 4 + (0x50D << 2)
    ctx->pc = 0x325DF0u;
    {
        const bool branch_taken_0x325df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325DF0u;
            // 0x325df4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325df0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325DF8u;
label_325df8:
    // 0x325df8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325dfc: 0x8042eef8  lb          $v0, -0x1108($v0)
    ctx->pc = 0x325dfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962936)));
    // 0x325e00: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325e04: 0x10000508  b           . + 4 + (0x508 << 2)
    ctx->pc = 0x325E04u;
    {
        const bool branch_taken_0x325e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325E04u;
            // 0x325e08: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e04) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325E0Cu;
label_325e0c:
    // 0x325e0c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325e10: 0x8042ef06  lb          $v0, -0x10FA($v0)
    ctx->pc = 0x325e10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962950)));
    // 0x325e14: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325e18: 0x10000503  b           . + 4 + (0x503 << 2)
    ctx->pc = 0x325E18u;
    {
        const bool branch_taken_0x325e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325E18u;
            // 0x325e1c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e18) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325E20u;
label_325e20:
    // 0x325e20: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325e24: 0x8042ef07  lb          $v0, -0x10F9($v0)
    ctx->pc = 0x325e24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962951)));
    // 0x325e28: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325e2c: 0x100004fe  b           . + 4 + (0x4FE << 2)
    ctx->pc = 0x325E2Cu;
    {
        const bool branch_taken_0x325e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325E2Cu;
            // 0x325e30: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e2c) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325E34u;
label_325e34:
    // 0x325e34: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325e38: 0x8042ef08  lb          $v0, -0x10F8($v0)
    ctx->pc = 0x325e38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962952)));
    // 0x325e3c: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325e40: 0x100004f9  b           . + 4 + (0x4F9 << 2)
    ctx->pc = 0x325E40u;
    {
        const bool branch_taken_0x325e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325E40u;
            // 0x325e44: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e40) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325E48u;
label_325e48:
    // 0x325e48: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325e4c: 0x8042ef16  lb          $v0, -0x10EA($v0)
    ctx->pc = 0x325e4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962966)));
    // 0x325e50: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325e54: 0x100004f4  b           . + 4 + (0x4F4 << 2)
    ctx->pc = 0x325E54u;
    {
        const bool branch_taken_0x325e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325E54u;
            // 0x325e58: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e54) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325E5Cu;
label_325e5c:
    // 0x325e5c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325e60: 0x8042ef17  lb          $v0, -0x10E9($v0)
    ctx->pc = 0x325e60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962967)));
    // 0x325e64: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325e68: 0x100004ef  b           . + 4 + (0x4EF << 2)
    ctx->pc = 0x325E68u;
    {
        const bool branch_taken_0x325e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325E68u;
            // 0x325e6c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e68) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325E70u;
label_325e70:
    // 0x325e70: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325e74: 0x8042ef18  lb          $v0, -0x10E8($v0)
    ctx->pc = 0x325e74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962968)));
    // 0x325e78: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325e7c: 0x100004ea  b           . + 4 + (0x4EA << 2)
    ctx->pc = 0x325E7Cu;
    {
        const bool branch_taken_0x325e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325E7Cu;
            // 0x325e80: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e7c) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325E84u;
label_325e84:
    // 0x325e84: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325e88: 0x8042ef26  lb          $v0, -0x10DA($v0)
    ctx->pc = 0x325e88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962982)));
    // 0x325e8c: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325e90: 0x100004e5  b           . + 4 + (0x4E5 << 2)
    ctx->pc = 0x325E90u;
    {
        const bool branch_taken_0x325e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325E90u;
            // 0x325e94: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e90) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325E98u;
label_325e98:
    // 0x325e98: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325e9c: 0x8042ef27  lb          $v0, -0x10D9($v0)
    ctx->pc = 0x325e9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962983)));
    // 0x325ea0: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325ea4: 0x100004e0  b           . + 4 + (0x4E0 << 2)
    ctx->pc = 0x325EA4u;
    {
        const bool branch_taken_0x325ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325EA4u;
            // 0x325ea8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ea4) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325EACu;
label_325eac:
    // 0x325eac: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325eb0: 0x8042ef28  lb          $v0, -0x10D8($v0)
    ctx->pc = 0x325eb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962984)));
    // 0x325eb4: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x325eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x325eb8: 0x100004db  b           . + 4 + (0x4DB << 2)
    ctx->pc = 0x325EB8u;
    {
        const bool branch_taken_0x325eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325EB8u;
            // 0x325ebc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325eb8) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325EC0u;
label_325ec0:
    // 0x325ec0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325ec4: 0x8c44ee9c  lw          $a0, -0x1164($v0)
    ctx->pc = 0x325ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962844)));
    // 0x325ec8: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325EC8u;
    SET_GPR_U32(ctx, 31, 0x325ED0u);
    ctx->pc = 0x325ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325EC8u;
            // 0x325ecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325ED0u; }
        if (ctx->pc != 0x325ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325ED0u; }
        if (ctx->pc != 0x325ED0u) { return; }
    }
    ctx->pc = 0x325ED0u;
label_325ed0:
    // 0x325ed0: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x325ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x325ed4: 0x100004d4  b           . + 4 + (0x4D4 << 2)
    ctx->pc = 0x325ED4u;
    {
        const bool branch_taken_0x325ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325ED4u;
            // 0x325ed8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ed4) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325EDCu;
label_325edc:
    // 0x325edc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325ee0: 0x8c44ee9c  lw          $a0, -0x1164($v0)
    ctx->pc = 0x325ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962844)));
    // 0x325ee4: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325EE4u;
    SET_GPR_U32(ctx, 31, 0x325EECu);
    ctx->pc = 0x325EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325EE4u;
            // 0x325ee8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325EECu; }
        if (ctx->pc != 0x325EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325EECu; }
        if (ctx->pc != 0x325EECu) { return; }
    }
    ctx->pc = 0x325EECu;
label_325eec:
    // 0x325eec: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x325eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x325ef0: 0x100004cd  b           . + 4 + (0x4CD << 2)
    ctx->pc = 0x325EF0u;
    {
        const bool branch_taken_0x325ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325EF0u;
            // 0x325ef4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ef0) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325EF8u;
label_325ef8:
    // 0x325ef8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325efc: 0x8c44ee9c  lw          $a0, -0x1164($v0)
    ctx->pc = 0x325efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962844)));
    // 0x325f00: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325F00u;
    SET_GPR_U32(ctx, 31, 0x325F08u);
    ctx->pc = 0x325F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325F00u;
            // 0x325f04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F08u; }
        if (ctx->pc != 0x325F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F08u; }
        if (ctx->pc != 0x325F08u) { return; }
    }
    ctx->pc = 0x325F08u;
label_325f08:
    // 0x325f08: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x325f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x325f0c: 0x100004c6  b           . + 4 + (0x4C6 << 2)
    ctx->pc = 0x325F0Cu;
    {
        const bool branch_taken_0x325f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325F0Cu;
            // 0x325f10: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f0c) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325F14u;
label_325f14:
    // 0x325f14: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325f18: 0x8c44ee9c  lw          $a0, -0x1164($v0)
    ctx->pc = 0x325f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962844)));
    // 0x325f1c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325F1Cu;
    SET_GPR_U32(ctx, 31, 0x325F24u);
    ctx->pc = 0x325F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325F1Cu;
            // 0x325f20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F24u; }
        if (ctx->pc != 0x325F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F24u; }
        if (ctx->pc != 0x325F24u) { return; }
    }
    ctx->pc = 0x325F24u;
label_325f24:
    // 0x325f24: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x325f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x325f28: 0x100004bf  b           . + 4 + (0x4BF << 2)
    ctx->pc = 0x325F28u;
    {
        const bool branch_taken_0x325f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325F28u;
            // 0x325f2c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f28) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325F30u;
label_325f30:
    // 0x325f30: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325f34: 0x8c44ee9c  lw          $a0, -0x1164($v0)
    ctx->pc = 0x325f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962844)));
    // 0x325f38: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325F38u;
    SET_GPR_U32(ctx, 31, 0x325F40u);
    ctx->pc = 0x325F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325F38u;
            // 0x325f3c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F40u; }
        if (ctx->pc != 0x325F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F40u; }
        if (ctx->pc != 0x325F40u) { return; }
    }
    ctx->pc = 0x325F40u;
label_325f40:
    // 0x325f40: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x325f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x325f44: 0x100004b8  b           . + 4 + (0x4B8 << 2)
    ctx->pc = 0x325F44u;
    {
        const bool branch_taken_0x325f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325F44u;
            // 0x325f48: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f44) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325F4Cu;
label_325f4c:
    // 0x325f4c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325f50: 0x8c44ee9c  lw          $a0, -0x1164($v0)
    ctx->pc = 0x325f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962844)));
    // 0x325f54: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325F54u;
    SET_GPR_U32(ctx, 31, 0x325F5Cu);
    ctx->pc = 0x325F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325F54u;
            // 0x325f58: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (runtime->hasFunction(0x321EC0u)) {
        auto targetFn = runtime->lookupFunction(0x321EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F5Cu; }
        if (ctx->pc != 0x325F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321EC0_0x321ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F5Cu; }
        if (ctx->pc != 0x325F5Cu) { return; }
    }
    ctx->pc = 0x325F5Cu;
label_325f5c:
    // 0x325f5c: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x325f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x325f60: 0x100004b1  b           . + 4 + (0x4B1 << 2)
    ctx->pc = 0x325F60u;
    {
        const bool branch_taken_0x325f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325F60u;
            // 0x325f64: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f60) {
            ctx->pc = 0x327228u;
            return;
        }
    }
    ctx->pc = 0x325F68u;
label_325f68:
    // 0x325f68: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    ctx->pc = 0x325f6cu;
}
