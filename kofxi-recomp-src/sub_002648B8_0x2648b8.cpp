#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002648B8
// Address: 0x2648b8 - 0x2649f8
void sub_002648B8_0x2648b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002648B8_0x2648b8");
#endif

    switch (ctx->pc) {
        case 0x2648b8u: goto label_2648b8;
        case 0x2648bcu: goto label_2648bc;
        case 0x2648c0u: goto label_2648c0;
        case 0x2648c4u: goto label_2648c4;
        case 0x2648c8u: goto label_2648c8;
        case 0x2648ccu: goto label_2648cc;
        case 0x2648d0u: goto label_2648d0;
        case 0x2648d4u: goto label_2648d4;
        case 0x2648d8u: goto label_2648d8;
        case 0x2648dcu: goto label_2648dc;
        case 0x2648e0u: goto label_2648e0;
        case 0x2648e4u: goto label_2648e4;
        case 0x2648e8u: goto label_2648e8;
        case 0x2648ecu: goto label_2648ec;
        case 0x2648f0u: goto label_2648f0;
        case 0x2648f4u: goto label_2648f4;
        case 0x2648f8u: goto label_2648f8;
        case 0x2648fcu: goto label_2648fc;
        case 0x264900u: goto label_264900;
        case 0x264904u: goto label_264904;
        case 0x264908u: goto label_264908;
        case 0x26490cu: goto label_26490c;
        case 0x264910u: goto label_264910;
        case 0x264914u: goto label_264914;
        case 0x264918u: goto label_264918;
        case 0x26491cu: goto label_26491c;
        case 0x264920u: goto label_264920;
        case 0x264924u: goto label_264924;
        case 0x264928u: goto label_264928;
        case 0x26492cu: goto label_26492c;
        case 0x264930u: goto label_264930;
        case 0x264934u: goto label_264934;
        case 0x264938u: goto label_264938;
        case 0x26493cu: goto label_26493c;
        case 0x264940u: goto label_264940;
        case 0x264944u: goto label_264944;
        case 0x264948u: goto label_264948;
        case 0x26494cu: goto label_26494c;
        case 0x264950u: goto label_264950;
        case 0x264954u: goto label_264954;
        case 0x264958u: goto label_264958;
        case 0x26495cu: goto label_26495c;
        case 0x264960u: goto label_264960;
        case 0x264964u: goto label_264964;
        case 0x264968u: goto label_264968;
        case 0x26496cu: goto label_26496c;
        case 0x264970u: goto label_264970;
        case 0x264974u: goto label_264974;
        case 0x264978u: goto label_264978;
        case 0x26497cu: goto label_26497c;
        case 0x264980u: goto label_264980;
        case 0x264984u: goto label_264984;
        case 0x264988u: goto label_264988;
        case 0x26498cu: goto label_26498c;
        case 0x264990u: goto label_264990;
        case 0x264994u: goto label_264994;
        case 0x264998u: goto label_264998;
        case 0x26499cu: goto label_26499c;
        case 0x2649a0u: goto label_2649a0;
        case 0x2649a4u: goto label_2649a4;
        case 0x2649a8u: goto label_2649a8;
        case 0x2649acu: goto label_2649ac;
        case 0x2649b0u: goto label_2649b0;
        case 0x2649b4u: goto label_2649b4;
        case 0x2649b8u: goto label_2649b8;
        case 0x2649bcu: goto label_2649bc;
        case 0x2649c0u: goto label_2649c0;
        case 0x2649c4u: goto label_2649c4;
        case 0x2649c8u: goto label_2649c8;
        case 0x2649ccu: goto label_2649cc;
        case 0x2649d0u: goto label_2649d0;
        case 0x2649d4u: goto label_2649d4;
        case 0x2649d8u: goto label_2649d8;
        case 0x2649dcu: goto label_2649dc;
        case 0x2649e0u: goto label_2649e0;
        case 0x2649e4u: goto label_2649e4;
        case 0x2649e8u: goto label_2649e8;
        case 0x2649ecu: goto label_2649ec;
        case 0x2649f0u: goto label_2649f0;
        case 0x2649f4u: goto label_2649f4;
        default: break;
    }

    ctx->pc = 0x2648b8u;

label_2648b8:
    // 0x2648b8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2648b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2648bc:
    // 0x2648bc: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2648bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_2648c0:
    // 0x2648c0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2648c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_2648c4:
    // 0x2648c4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2648c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2648c8:
    // 0x2648c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2648c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2648cc:
    // 0x2648cc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2648ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2648d0:
    // 0x2648d0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2648d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2648d4:
    // 0x2648d4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2648d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2648d8:
    // 0x2648d8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2648d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2648dc:
    // 0x2648dc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2648dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2648e0:
    // 0x2648e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2648e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2648e4:
    // 0x2648e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2648e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2648e8:
    // 0x2648e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2648e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2648ec:
    // 0x2648ec: 0xffa900e8  sd          $t1, 0xE8($sp)
    ctx->pc = 0x2648ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 9));
label_2648f0:
    // 0x2648f0: 0xffaa00f0  sd          $t2, 0xF0($sp)
    ctx->pc = 0x2648f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 10));
label_2648f4:
    // 0x2648f4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_2648f8:
    if (ctx->pc == 0x2648F8u) {
        ctx->pc = 0x2648F8u;
            // 0x2648f8: 0xffab00f8  sd          $t3, 0xF8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 11));
        ctx->pc = 0x2648FCu;
        goto label_2648fc;
    }
    ctx->pc = 0x2648F4u;
    {
        const bool branch_taken_0x2648f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2648F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2648F4u;
            // 0x2648f8: 0xffab00f8  sd          $t3, 0xF8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2648f4) {
            ctx->pc = 0x264904u;
            goto label_264904;
        }
    }
    ctx->pc = 0x2648FCu;
label_2648fc:
    // 0x2648fc: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
label_264900:
    if (ctx->pc == 0x264900u) {
        ctx->pc = 0x264900u;
            // 0x264900: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->pc = 0x264904u;
        goto label_264904;
    }
    ctx->pc = 0x2648FCu;
    {
        const bool branch_taken_0x2648fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2648fc) {
            ctx->pc = 0x264900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2648FCu;
            // 0x264900: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26490Cu;
            goto label_26490c;
        }
    }
    ctx->pc = 0x264904u;
label_264904:
    // 0x264904: 0x1000002f  b           . + 4 + (0x2F << 2)
label_264908:
    if (ctx->pc == 0x264908u) {
        ctx->pc = 0x264908u;
            // 0x264908: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x26490Cu;
        goto label_26490c;
    }
    ctx->pc = 0x264904u;
    {
        const bool branch_taken_0x264904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264904u;
            // 0x264908: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264904) {
            ctx->pc = 0x2649C4u;
            goto label_2649c4;
        }
    }
    ctx->pc = 0x26490Cu;
label_26490c:
    // 0x26490c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_264910:
    if (ctx->pc == 0x264910u) {
        ctx->pc = 0x264910u;
            // 0x264910: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x264914u;
        goto label_264914;
    }
    ctx->pc = 0x26490Cu;
    {
        const bool branch_taken_0x26490c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26490Cu;
            // 0x264910: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26490c) {
            ctx->pc = 0x264934u;
            goto label_264934;
        }
    }
    ctx->pc = 0x264914u;
label_264914:
    // 0x264914: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x264914u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_264918:
    // 0x264918: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x264918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_26491c:
    // 0x26491c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x26491cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_264920:
    // 0x264920: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_264924:
    // 0x264924: 0x0  nop
    ctx->pc = 0x264924u;
    // NOP
label_264928:
    // 0x264928: 0x0  nop
    ctx->pc = 0x264928u;
    // NOP
label_26492c:
    // 0x26492c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_264930:
    if (ctx->pc == 0x264930u) {
        ctx->pc = 0x264934u;
        goto label_264934;
    }
    ctx->pc = 0x26492Cu;
    {
        const bool branch_taken_0x26492c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26492c) {
            ctx->pc = 0x264918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264918;
        }
    }
    ctx->pc = 0x264934u;
label_264934:
    // 0x264934: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x264934u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264938:
    // 0x264938: 0x1aa00020  blez        $s5, . + 4 + (0x20 << 2)
label_26493c:
    if (ctx->pc == 0x26493Cu) {
        ctx->pc = 0x26493Cu;
            // 0x26493c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x264940u;
        goto label_264940;
    }
    ctx->pc = 0x264938u;
    {
        const bool branch_taken_0x264938 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x26493Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264938u;
            // 0x26493c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264938) {
            ctx->pc = 0x2649BCu;
            goto label_2649bc;
        }
    }
    ctx->pc = 0x264940u;
label_264940:
    // 0x264940: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x264940u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_264944:
    // 0x264944: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x264944u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_264948:
    // 0x264948: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x264948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26494c:
    // 0x26494c: 0x10000003  b           . + 4 + (0x3 << 2)
label_264950:
    if (ctx->pc == 0x264950u) {
        ctx->pc = 0x264950u;
            // 0x264950: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x264954u;
        goto label_264954;
    }
    ctx->pc = 0x26494Cu;
    {
        const bool branch_taken_0x26494c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26494Cu;
            // 0x264950: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26494c) {
            ctx->pc = 0x26495Cu;
            goto label_26495c;
        }
    }
    ctx->pc = 0x264954u;
label_264954:
    // 0x264954: 0x0  nop
    ctx->pc = 0x264954u;
    // NOP
label_264958:
    // 0x264958: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x264958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_26495c:
    // 0x26495c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26495cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_264960:
    // 0x264960: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_264964:
    if (ctx->pc == 0x264964u) {
        ctx->pc = 0x264964u;
            // 0x264964: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x264968u;
        goto label_264968;
    }
    ctx->pc = 0x264960u;
    {
        const bool branch_taken_0x264960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x264964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264960u;
            // 0x264964: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264960) {
            ctx->pc = 0x264978u;
            goto label_264978;
        }
    }
    ctx->pc = 0x264968u;
label_264968:
    // 0x264968: 0xc04a6b2  jal         func_129AC8
label_26496c:
    if (ctx->pc == 0x26496Cu) {
        ctx->pc = 0x26496Cu;
            // 0x26496c: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x264970u;
        goto label_264970;
    }
    ctx->pc = 0x264968u;
    SET_GPR_U32(ctx, 31, 0x264970u);
    ctx->pc = 0x26496Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264968u;
            // 0x26496c: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129AC8u;
    if (runtime->hasFunction(0x129AC8u)) {
        auto targetFn = runtime->lookupFunction(0x129AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264970u; }
        if (ctx->pc != 0x264970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129AC8_0x129ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264970u; }
        if (ctx->pc != 0x264970u) { return; }
    }
    ctx->pc = 0x264970u;
label_264970:
    // 0x264970: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_264974:
    if (ctx->pc == 0x264974u) {
        ctx->pc = 0x264974u;
            // 0x264974: 0x2651000c  addiu       $s1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x264978u;
        goto label_264978;
    }
    ctx->pc = 0x264970u;
    {
        const bool branch_taken_0x264970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264970) {
            ctx->pc = 0x264974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x264970u;
            // 0x264974: 0x2651000c  addiu       $s1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x264958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264958;
        }
    }
    ctx->pc = 0x264978u;
label_264978:
    // 0x264978: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x264978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_26497c:
    // 0x26497c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_264980:
    if (ctx->pc == 0x264980u) {
        ctx->pc = 0x264980u;
            // 0x264980: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x264984u;
        goto label_264984;
    }
    ctx->pc = 0x26497Cu;
    {
        const bool branch_taken_0x26497c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26497Cu;
            // 0x264980: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26497c) {
            ctx->pc = 0x2649A8u;
            goto label_2649a8;
        }
    }
    ctx->pc = 0x264984u;
label_264984:
    // 0x264984: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x264984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_264988:
    // 0x264988: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x264988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26498c:
    // 0x26498c: 0x40f809  jalr        $v0
label_264990:
    if (ctx->pc == 0x264990u) {
        ctx->pc = 0x264990u;
            // 0x264990: 0x27a600e8  addiu       $a2, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->pc = 0x264994u;
        goto label_264994;
    }
    ctx->pc = 0x26498Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x264994u);
        ctx->pc = 0x264990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26498Cu;
            // 0x264990: 0x27a600e8  addiu       $a2, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x264994u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x264994u; }
            if (ctx->pc != 0x264994u) { return; }
        }
        }
    }
    ctx->pc = 0x264994u;
label_264994:
    // 0x264994: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x264994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_264998:
    // 0x264998: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x264998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26499c:
    // 0x26499c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26499cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2649a0:
    // 0x2649a0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_2649a4:
    if (ctx->pc == 0x2649A4u) {
        ctx->pc = 0x2649A4u;
            // 0x2649a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2649A8u;
        goto label_2649a8;
    }
    ctx->pc = 0x2649A0u;
    {
        const bool branch_taken_0x2649a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2649A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2649A0u;
            // 0x2649a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2649a0) {
            ctx->pc = 0x2649C0u;
            goto label_2649c0;
        }
    }
    ctx->pc = 0x2649A8u;
label_2649a8:
    // 0x2649a8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2649a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2649ac:
    // 0x2649ac: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2649acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_2649b0:
    // 0x2649b0: 0x2d5102a  slt         $v0, $s6, $s5
    ctx->pc = 0x2649b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_2649b4:
    // 0x2649b4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_2649b8:
    if (ctx->pc == 0x2649B8u) {
        ctx->pc = 0x2649B8u;
            // 0x2649b8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x2649BCu;
        goto label_2649bc;
    }
    ctx->pc = 0x2649B4u;
    {
        const bool branch_taken_0x2649b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2649B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2649B4u;
            // 0x2649b8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2649b4) {
            ctx->pc = 0x264948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264948;
        }
    }
    ctx->pc = 0x2649BCu;
label_2649bc:
    // 0x2649bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2649bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2649c0:
    // 0x2649c0: 0x84100b  movn        $v0, $a0, $a0
    ctx->pc = 0x2649c0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2649c4:
    // 0x2649c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2649c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2649c8:
    // 0x2649c8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2649c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2649cc:
    // 0x2649cc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2649ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2649d0:
    // 0x2649d0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2649d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2649d4:
    // 0x2649d4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2649d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2649d8:
    // 0x2649d8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2649d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2649dc:
    // 0x2649dc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2649dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2649e0:
    // 0x2649e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2649e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2649e4:
    // 0x2649e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2649e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2649e8:
    // 0x2649e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2649e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2649ec:
    // 0x2649ec: 0x3e00008  jr          $ra
label_2649f0:
    if (ctx->pc == 0x2649F0u) {
        ctx->pc = 0x2649F0u;
            // 0x2649f0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x2649F4u;
        goto label_2649f4;
    }
    ctx->pc = 0x2649ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2649F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2649ECu;
            // 0x2649f0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2649F4u;
label_2649f4:
    // 0x2649f4: 0x0  nop
    ctx->pc = 0x2649f4u;
    // NOP
    ctx->pc = 0x2649f8u;
}
