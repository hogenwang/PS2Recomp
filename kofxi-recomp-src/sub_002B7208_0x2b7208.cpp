#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B7208
// Address: 0x2b7208 - 0x2b7320
void sub_002B7208_0x2b7208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7208_0x2b7208");
#endif

    switch (ctx->pc) {
        case 0x2b7310u: goto label_2b7310;
        default: break;
    }

    ctx->pc = 0x2b7208u;

    // 0x2b7208: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b7208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b720c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2b720cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b7210: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b7210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b7214: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2b7214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b7218: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B7218u;
    {
        const bool branch_taken_0x2b7218 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7218) {
            ctx->pc = 0x2B721Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7218u;
            // 0x2b721c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B7220u;
            goto label_2b7220;
        }
    }
    ctx->pc = 0x2B7220u;
label_2b7220:
    // 0x2b7220: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b7220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b7224: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2b7224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b7228: 0x244dd458  addiu       $t5, $v0, -0x2BA8
    ctx->pc = 0x2b7228u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956120));
    // 0x2b722c: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x2b722cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2b7230: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x2b7230u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b7234: 0x8c8c0004  lw          $t4, 0x4($a0)
    ctx->pc = 0x2b7234u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b7238: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x2b7238u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2b723c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b723cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7240: 0x8c8b000c  lw          $t3, 0xC($a0)
    ctx->pc = 0x2b7240u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b7244: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2b7244u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b7248: 0x2810  mfhi        $a1
    ctx->pc = 0x2b7248u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2b724c: 0x1812  mflo        $v1
    ctx->pc = 0x2b724cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2b7250: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x2b7250u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2b7254: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2b7254u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b7258: 0x462018  mult        $a0, $v0, $a2
    ctx->pc = 0x2b7258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b725c: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x2b725cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b7260: 0x1032821  addu        $a1, $t0, $v1
    ctx->pc = 0x2b7260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2b7264: 0x24a4076c  addiu       $a0, $a1, 0x76C
    ctx->pc = 0x2b7264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1900));
    // 0x2b7268: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x2b7268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2b726c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B726Cu;
    {
        const bool branch_taken_0x2b726c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B726Cu;
            // 0x2b7270: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b726c) {
            ctx->pc = 0x2B72B0u;
            goto label_2b72b0;
        }
    }
    ctx->pc = 0x2B7274u;
    // 0x2b7274: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2b7274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b7278: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2b7278u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b727c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B727Cu;
    {
        const bool branch_taken_0x2b727c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b727c) {
            ctx->pc = 0x2B7280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B727Cu;
            // 0x2b7280: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B7284u;
            goto label_2b7284;
        }
    }
    ctx->pc = 0x2B7284u;
label_2b7284:
    // 0x2b7284: 0x1810  mfhi        $v1
    ctx->pc = 0x2b7284u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b7288: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B7288u;
    {
        const bool branch_taken_0x2b7288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7288) {
            ctx->pc = 0x2B728Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7288u;
            // 0x2b728c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B72B0u;
            goto label_2b72b0;
        }
    }
    ctx->pc = 0x2B7290u;
    // 0x2b7290: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2b7290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2b7294: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2b7294u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b7298: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B7298u;
    {
        const bool branch_taken_0x2b7298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7298) {
            ctx->pc = 0x2B729Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7298u;
            // 0x2b729c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B72A0u;
            goto label_2b72a0;
        }
    }
    ctx->pc = 0x2B72A0u;
label_2b72a0:
    // 0x2b72a0: 0x1810  mfhi        $v1
    ctx->pc = 0x2b72a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b72a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B72A4u;
    {
        const bool branch_taken_0x2b72a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B72A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B72A4u;
            // 0x2b72a8: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72a4) {
            ctx->pc = 0x2B72B4u;
            goto label_2b72b4;
        }
    }
    ctx->pc = 0x2B72ACu;
    // 0x2b72ac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2b72acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b72b0:
    // 0x2b72b0: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x2b72b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2b72b4:
    // 0x2b72b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b72b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b72b8: 0x1232018  mult        $a0, $t1, $v1
    ctx->pc = 0x2b72b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b72bc: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x2b72bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2b72c0: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x2b72c0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x2b72c4: 0x2408003b  addiu       $t0, $zero, 0x3B
    ctx->pc = 0x2b72c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2b72c8: 0x28e2003c  slti        $v0, $a3, 0x3C
    ctx->pc = 0x2b72c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2b72cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2b72ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2b72d0: 0xe2400b  movn        $t0, $a3, $v0
    ctx->pc = 0x2b72d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 7));
    // 0x2b72d4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2b72d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2b72d8: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2b72d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b72dc: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x2b72dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b72e0: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x2b72e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b72e4: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x2b72e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x2b72e8: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x2b72e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x2b72ec: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x2b72ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b72f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b72f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b72f4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2b72f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2b72f8: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x2b72f8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b72fc: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2b72fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7300: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2b7300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2b7304: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x2b7304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x2b7308: 0xc0adcc8  jal         func_2B7320
    ctx->pc = 0x2B7308u;
    SET_GPR_U32(ctx, 31, 0x2B7310u);
    ctx->pc = 0x2B730Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7308u;
            // 0x2b730c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7320u;
    if (runtime->hasFunction(0x2B7320u)) {
        auto targetFn = runtime->lookupFunction(0x2B7320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7310u; }
        if (ctx->pc != 0x2B7310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7320_0x2b7320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7310u; }
        if (ctx->pc != 0x2B7310u) { return; }
    }
    ctx->pc = 0x2B7310u;
label_2b7310:
    // 0x2b7310: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b7310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7314: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7314u;
            // 0x2b7318: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B731Cu;
    // 0x2b731c: 0x0  nop
    ctx->pc = 0x2b731cu;
    // NOP
    ctx->pc = 0x2b7320u;
}
