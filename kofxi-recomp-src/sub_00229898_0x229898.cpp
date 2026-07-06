#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00229898
// Address: 0x229898 - 0x229a90
void sub_00229898_0x229898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229898_0x229898");
#endif

    switch (ctx->pc) {
        case 0x2298c4u: goto label_2298c4;
        case 0x229908u: goto label_229908;
        case 0x229934u: goto label_229934;
        case 0x229958u: goto label_229958;
        case 0x229970u: goto label_229970;
        case 0x2299a4u: goto label_2299a4;
        case 0x2299acu: goto label_2299ac;
        case 0x2299c4u: goto label_2299c4;
        case 0x2299e8u: goto label_2299e8;
        case 0x229a0cu: goto label_229a0c;
        case 0x229a50u: goto label_229a50;
        case 0x229a60u: goto label_229a60;
        case 0x229a74u: goto label_229a74;
        default: break;
    }

    ctx->pc = 0x229898u;

    // 0x229898: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x229898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22989c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22989cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2298a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2298a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2298a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2298a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2298a8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2298a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2298ac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2298acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2298b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2298b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2298b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2298b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2298b8: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x2298b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x2298bc: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2298BCu;
    SET_GPR_U32(ctx, 31, 0x2298C4u);
    ctx->pc = 0x2298C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2298BCu;
            // 0x2298c0: 0x8e04a730  lw          $a0, -0x58D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2298C4u; }
        if (ctx->pc != 0x2298C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2298C4u; }
        if (ctx->pc != 0x2298C4u) { return; }
    }
    ctx->pc = 0x2298C4u;
label_2298c4:
    // 0x2298c4: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x2298c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x2298c8: 0x3c1201c1  lui         $s2, 0x1C1
    ctx->pc = 0x2298c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)449 << 16));
    // 0x2298cc: 0x8ce2a788  lw          $v0, -0x5878($a3)
    ctx->pc = 0x2298ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944648)));
    // 0x2298d0: 0x8e44a738  lw          $a0, -0x58C8($s2)
    ctx->pc = 0x2298d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944568)));
    // 0x2298d4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2298d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2298d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2298d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2298dc: 0x24634498  addiu       $v1, $v1, 0x4498
    ctx->pc = 0x2298dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17560));
    // 0x2298e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2298e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2298e4: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x2298e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x2298e8: 0xace2a788  sw          $v0, -0x5878($a3)
    ctx->pc = 0x2298e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294944648), GPR_U32(ctx, 2));
    // 0x2298ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2298ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2298f0: 0xaca3a784  sw          $v1, -0x587C($a1)
    ctx->pc = 0x2298f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294944644), GPR_U32(ctx, 3));
    // 0x2298f4: 0x10860008  beq         $a0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2298F4u;
    {
        const bool branch_taken_0x2298f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x2298F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2298F4u;
            // 0x2298f8: 0xae44a738  sw          $a0, -0x58C8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294944568), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298f4) {
            ctx->pc = 0x229918u;
            goto label_229918;
        }
    }
    ctx->pc = 0x2298FCu;
    // 0x2298fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2298fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x229900: 0xc08a2b4  jal         func_228AD0
    ctx->pc = 0x229900u;
    SET_GPR_U32(ctx, 31, 0x229908u);
    ctx->pc = 0x229904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229900u;
            // 0x229904: 0x248444b0  addiu       $a0, $a0, 0x44B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228AD0u;
    if (runtime->hasFunction(0x228AD0u)) {
        auto targetFn = runtime->lookupFunction(0x228AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229908u; }
        if (ctx->pc != 0x229908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228AD0_0x228ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229908u; }
        if (ctx->pc != 0x229908u) { return; }
    }
    ctx->pc = 0x229908u;
label_229908:
    // 0x229908: 0x8e42a738  lw          $v0, -0x58C8($s2)
    ctx->pc = 0x229908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944568)));
    // 0x22990c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22990cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x229910: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x229910u;
    {
        const bool branch_taken_0x229910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229910u;
            // 0x229914: 0xae42a738  sw          $v0, -0x58C8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294944568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229910) {
            ctx->pc = 0x2299BCu;
            goto label_2299bc;
        }
    }
    ctx->pc = 0x229918u;
label_229918:
    // 0x229918: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x229918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x22991c: 0x8c43a734  lw          $v1, -0x58CC($v0)
    ctx->pc = 0x22991cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944564)));
    // 0x229920: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x229920u;
    {
        const bool branch_taken_0x229920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x229924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229920u;
            // 0x229924: 0x3c1401c1  lui         $s4, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229920) {
            ctx->pc = 0x22993Cu;
            goto label_22993c;
        }
    }
    ctx->pc = 0x229928u;
    // 0x229928: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x229928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22992c: 0xc08a2b4  jal         func_228AD0
    ctx->pc = 0x22992Cu;
    SET_GPR_U32(ctx, 31, 0x229934u);
    ctx->pc = 0x229930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22992Cu;
            // 0x229930: 0x248444c8  addiu       $a0, $a0, 0x44C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228AD0u;
    if (runtime->hasFunction(0x228AD0u)) {
        auto targetFn = runtime->lookupFunction(0x228AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229934u; }
        if (ctx->pc != 0x229934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228AD0_0x228ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229934u; }
        if (ctx->pc != 0x229934u) { return; }
    }
    ctx->pc = 0x229934u;
label_229934:
    // 0x229934: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x229934u;
    {
        const bool branch_taken_0x229934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229934) {
            ctx->pc = 0x2299BCu;
            goto label_2299bc;
        }
    }
    ctx->pc = 0x22993Cu;
label_22993c:
    // 0x22993c: 0x8e82a774  lw          $v0, -0x588C($s4)
    ctx->pc = 0x22993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944628)));
    // 0x229940: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229940u;
    {
        const bool branch_taken_0x229940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229940) {
            ctx->pc = 0x229950u;
            goto label_229950;
        }
    }
    ctx->pc = 0x229948u;
    // 0x229948: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x229948u;
    {
        const bool branch_taken_0x229948 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22994Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229948u;
            // 0x22994c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229948) {
            ctx->pc = 0x22995Cu;
            goto label_22995c;
        }
    }
    ctx->pc = 0x229950u;
label_229950:
    // 0x229950: 0xc08a45c  jal         func_229170
    ctx->pc = 0x229950u;
    SET_GPR_U32(ctx, 31, 0x229958u);
    ctx->pc = 0x229954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229950u;
            // 0x229954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229170u;
    if (runtime->hasFunction(0x229170u)) {
        auto targetFn = runtime->lookupFunction(0x229170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229958u; }
        if (ctx->pc != 0x229958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229170_0x229170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229958u; }
        if (ctx->pc != 0x229958u) { return; }
    }
    ctx->pc = 0x229958u;
label_229958:
    // 0x229958: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x229958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22995c:
    // 0x22995c: 0x8e42a738  lw          $v0, -0x58C8($s2)
    ctx->pc = 0x22995cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944568)));
    // 0x229960: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x229960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x229964: 0xae42a738  sw          $v0, -0x58C8($s2)
    ctx->pc = 0x229964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294944568), GPR_U32(ctx, 2));
    // 0x229968: 0xc043320  jal         func_10CC80
    ctx->pc = 0x229968u;
    SET_GPR_U32(ctx, 31, 0x229970u);
    ctx->pc = 0x22996Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229968u;
            // 0x22996c: 0x8e04a730  lw          $a0, -0x58D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229970u; }
        if (ctx->pc != 0x229970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229970u; }
        if (ctx->pc != 0x229970u) { return; }
    }
    ctx->pc = 0x229970u;
label_229970:
    // 0x229970: 0x16600015  bnez        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x229970u;
    {
        const bool branch_taken_0x229970 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x229974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229970u;
            // 0x229974: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229970) {
            ctx->pc = 0x2299C8u;
            goto label_2299c8;
        }
    }
    ctx->pc = 0x229978u;
    // 0x229978: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x229978u;
    {
        const bool branch_taken_0x229978 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22997Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229978u;
            // 0x22997c: 0x3c0201c1  lui         $v0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229978) {
            ctx->pc = 0x229990u;
            goto label_229990;
        }
    }
    ctx->pc = 0x229980u;
    // 0x229980: 0x8e82a774  lw          $v0, -0x588C($s4)
    ctx->pc = 0x229980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944628)));
    // 0x229984: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x229984u;
    {
        const bool branch_taken_0x229984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229984u;
            // 0x229988: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229984) {
            ctx->pc = 0x2299C8u;
            goto label_2299c8;
        }
    }
    ctx->pc = 0x22998Cu;
    // 0x22998c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x22998cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
label_229990:
    // 0x229990: 0x8c43a770  lw          $v1, -0x5890($v0)
    ctx->pc = 0x229990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944624)));
    // 0x229994: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x229994u;
    {
        const bool branch_taken_0x229994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229994u;
            // 0x229998: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229994) {
            ctx->pc = 0x2299A4u;
            goto label_2299a4;
        }
    }
    ctx->pc = 0x22999Cu;
    // 0x22999c: 0xc08a29c  jal         func_228A70
    ctx->pc = 0x22999Cu;
    SET_GPR_U32(ctx, 31, 0x2299A4u);
    ctx->pc = 0x2299A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22999Cu;
            // 0x2299a0: 0x248444f0  addiu       $a0, $a0, 0x44F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228A70u;
    if (runtime->hasFunction(0x228A70u)) {
        auto targetFn = runtime->lookupFunction(0x228A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2299A4u; }
        if (ctx->pc != 0x2299A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228A70_0x228a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2299A4u; }
        if (ctx->pc != 0x2299A4u) { return; }
    }
    ctx->pc = 0x2299A4u;
label_2299a4:
    // 0x2299a4: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2299A4u;
    SET_GPR_U32(ctx, 31, 0x2299ACu);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2299ACu; }
        if (ctx->pc != 0x2299ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2299ACu; }
        if (ctx->pc != 0x2299ACu) { return; }
    }
    ctx->pc = 0x2299ACu;
label_2299ac:
    // 0x2299ac: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2299acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2299b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2299b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2299b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2299B4u;
    {
        const bool branch_taken_0x2299b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2299B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2299B4u;
            // 0x2299b8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2299b4) {
            ctx->pc = 0x2299C8u;
            goto label_2299c8;
        }
    }
    ctx->pc = 0x2299BCu;
label_2299bc:
    // 0x2299bc: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2299BCu;
    SET_GPR_U32(ctx, 31, 0x2299C4u);
    ctx->pc = 0x2299C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2299BCu;
            // 0x2299c0: 0x8e04a730  lw          $a0, -0x58D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2299C4u; }
        if (ctx->pc != 0x2299C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2299C4u; }
        if (ctx->pc != 0x2299C4u) { return; }
    }
    ctx->pc = 0x2299C4u;
label_2299c4:
    // 0x2299c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2299c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2299c8:
    // 0x2299c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2299c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2299cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2299ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2299d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2299d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2299d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2299d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2299d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2299d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2299dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2299dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2299e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2299E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2299E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2299E0u;
            // 0x2299e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2299E8u;
label_2299e8:
    // 0x2299e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2299e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2299ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2299ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2299f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2299f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2299f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2299f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2299f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2299f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2299fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2299fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x229a00: 0x3c1101c1  lui         $s1, 0x1C1
    ctx->pc = 0x229a00u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)449 << 16));
    // 0x229a04: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x229A04u;
    SET_GPR_U32(ctx, 31, 0x229A0Cu);
    ctx->pc = 0x229A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229A04u;
            // 0x229a08: 0x8e24a730  lw          $a0, -0x58D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A0Cu; }
        if (ctx->pc != 0x229A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A0Cu; }
        if (ctx->pc != 0x229A0Cu) { return; }
    }
    ctx->pc = 0x229A0Cu;
label_229a0c:
    // 0x229a0c: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x229a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x229a10: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x229a10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x229a14: 0x8ce2a790  lw          $v0, -0x5870($a3)
    ctx->pc = 0x229a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944656)));
    // 0x229a18: 0x8e04a738  lw          $a0, -0x58C8($s0)
    ctx->pc = 0x229a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944568)));
    // 0x229a1c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x229a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x229a20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x229a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x229a24: 0x24634500  addiu       $v1, $v1, 0x4500
    ctx->pc = 0x229a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17664));
    // 0x229a28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x229a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x229a2c: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x229a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x229a30: 0xace2a790  sw          $v0, -0x5870($a3)
    ctx->pc = 0x229a30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294944656), GPR_U32(ctx, 2));
    // 0x229a34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x229a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229a38: 0xaca3a784  sw          $v1, -0x587C($a1)
    ctx->pc = 0x229a38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294944644), GPR_U32(ctx, 3));
    // 0x229a3c: 0x10860006  beq         $a0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x229A3Cu;
    {
        const bool branch_taken_0x229a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x229A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229A3Cu;
            // 0x229a40: 0xae04a738  sw          $a0, -0x58C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294944568), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a3c) {
            ctx->pc = 0x229A58u;
            goto label_229a58;
        }
    }
    ctx->pc = 0x229A44u;
    // 0x229a44: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x229a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x229a48: 0xc08a2b4  jal         func_228AD0
    ctx->pc = 0x229A48u;
    SET_GPR_U32(ctx, 31, 0x229A50u);
    ctx->pc = 0x229A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229A48u;
            // 0x229a4c: 0x248444b0  addiu       $a0, $a0, 0x44B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228AD0u;
    if (runtime->hasFunction(0x228AD0u)) {
        auto targetFn = runtime->lookupFunction(0x228AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A50u; }
        if (ctx->pc != 0x229A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228AD0_0x228ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A50u; }
        if (ctx->pc != 0x229A50u) { return; }
    }
    ctx->pc = 0x229A50u;
label_229a50:
    // 0x229a50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x229A50u;
    {
        const bool branch_taken_0x229a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229A50u;
            // 0x229a54: 0x8e02a738  lw          $v0, -0x58C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a50) {
            ctx->pc = 0x229A64u;
            goto label_229a64;
        }
    }
    ctx->pc = 0x229A58u;
label_229a58:
    // 0x229a58: 0xc08a534  jal         func_2294D0
    ctx->pc = 0x229A58u;
    SET_GPR_U32(ctx, 31, 0x229A60u);
    ctx->pc = 0x229A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229A58u;
            // 0x229a5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2294D0u;
    if (runtime->hasFunction(0x2294D0u)) {
        auto targetFn = runtime->lookupFunction(0x2294D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A60u; }
        if (ctx->pc != 0x229A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002294D0_0x2294d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A60u; }
        if (ctx->pc != 0x229A60u) { return; }
    }
    ctx->pc = 0x229A60u;
label_229a60:
    // 0x229a60: 0x8e02a738  lw          $v0, -0x58C8($s0)
    ctx->pc = 0x229a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944568)));
label_229a64:
    // 0x229a64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x229a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x229a68: 0xae02a738  sw          $v0, -0x58C8($s0)
    ctx->pc = 0x229a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294944568), GPR_U32(ctx, 2));
    // 0x229a6c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x229A6Cu;
    SET_GPR_U32(ctx, 31, 0x229A74u);
    ctx->pc = 0x229A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229A6Cu;
            // 0x229a70: 0x8e24a730  lw          $a0, -0x58D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A74u; }
        if (ctx->pc != 0x229A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A74u; }
        if (ctx->pc != 0x229A74u) { return; }
    }
    ctx->pc = 0x229A74u;
label_229a74:
    // 0x229a74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x229a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229a78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x229a78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229a7c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x229a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229a80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229a84: 0x3e00008  jr          $ra
    ctx->pc = 0x229A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229A84u;
            // 0x229a88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x229A8Cu;
    // 0x229a8c: 0x0  nop
    ctx->pc = 0x229a8cu;
    // NOP
    ctx->pc = 0x229a90u;
}
