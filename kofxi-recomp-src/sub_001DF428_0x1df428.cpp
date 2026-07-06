#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DF428
// Address: 0x1df428 - 0x1df608
void sub_001DF428_0x1df428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF428_0x1df428");
#endif

    switch (ctx->pc) {
        case 0x1df470u: goto label_1df470;
        case 0x1df49cu: goto label_1df49c;
        case 0x1df4ccu: goto label_1df4cc;
        case 0x1df4e0u: goto label_1df4e0;
        case 0x1df4f0u: goto label_1df4f0;
        case 0x1df504u: goto label_1df504;
        case 0x1df578u: goto label_1df578;
        case 0x1df588u: goto label_1df588;
        case 0x1df59cu: goto label_1df59c;
        default: break;
    }

    ctx->pc = 0x1df428u;

    // 0x1df428: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1df428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1df42c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1df42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1df430: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1df430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df434: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1df434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1df438: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1df438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df43c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1df43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1df440: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1df440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1df444: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1df444u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df448: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1df448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1df44c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1df44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1df450: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x1df450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x1df454: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1df454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1df458: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x1df458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x1df45c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1df45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1df460: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x1df460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1df464: 0x8e90003c  lw          $s0, 0x3C($s4)
    ctx->pc = 0x1df464u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x1df468: 0xc077db4  jal         func_1DF6D0
    ctx->pc = 0x1DF468u;
    SET_GPR_U32(ctx, 31, 0x1DF470u);
    ctx->pc = 0x1DF46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF468u;
            // 0x1df46c: 0x8e570020  lw          $s7, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF6D0u;
    if (runtime->hasFunction(0x1DF6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DF6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF470u; }
        if (ctx->pc != 0x1DF470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF6D0_0x1df6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF470u; }
        if (ctx->pc != 0x1DF470u) { return; }
    }
    ctx->pc = 0x1DF470u;
label_1df470:
    // 0x1df470: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1df470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1df474: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1df474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1df478: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1df478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1df47c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1df47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1df480: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1df480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1df484: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x1df484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x1df488: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1df488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1df48c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1df48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1df490: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1df490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1df494: 0xc077dc4  jal         func_1DF710
    ctx->pc = 0x1DF494u;
    SET_GPR_U32(ctx, 31, 0x1DF49Cu);
    ctx->pc = 0x1DF498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF494u;
            // 0x1df498: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF710u;
    if (runtime->hasFunction(0x1DF710u)) {
        auto targetFn = runtime->lookupFunction(0x1DF710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF49Cu; }
        if (ctx->pc != 0x1DF49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF710_0x1df710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF49Cu; }
        if (ctx->pc != 0x1DF49Cu) { return; }
    }
    ctx->pc = 0x1DF49Cu;
label_1df49c:
    // 0x1df49c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1df49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1df4a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1df4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df4a8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1df4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1df4ac: 0x8e530018  lw          $s3, 0x18($s2)
    ctx->pc = 0x1df4acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1df4b0: 0x8e550034  lw          $s5, 0x34($s2)
    ctx->pc = 0x1df4b0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1df4b4: 0x8e560030  lw          $s6, 0x30($s2)
    ctx->pc = 0x1df4b4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1df4b8: 0x8e5e002c  lw          $fp, 0x2C($s2)
    ctx->pc = 0x1df4b8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1df4bc: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1df4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1df4c0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1df4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1df4c4: 0xc07f2a8  jal         func_1FCAA0
    ctx->pc = 0x1DF4C4u;
    SET_GPR_U32(ctx, 31, 0x1DF4CCu);
    ctx->pc = 0x1DF4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF4C4u;
            // 0x1df4c8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCAA0u;
    if (runtime->hasFunction(0x1FCAA0u)) {
        auto targetFn = runtime->lookupFunction(0x1FCAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4CCu; }
        if (ctx->pc != 0x1DF4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCAA0_0x1fcaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4CCu; }
        if (ctx->pc != 0x1DF4CCu) { return; }
    }
    ctx->pc = 0x1DF4CCu;
label_1df4cc:
    // 0x1df4cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF4CCu;
    {
        const bool branch_taken_0x1df4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF4CCu;
            // 0x1df4d0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4cc) {
            ctx->pc = 0x1DF4E4u;
            goto label_1df4e4;
        }
    }
    ctx->pc = 0x1DF4D4u;
    // 0x1df4d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1df4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1df4d8: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DF4D8u;
    SET_GPR_U32(ctx, 31, 0x1DF4E0u);
    ctx->pc = 0x1DF4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF4D8u;
            // 0x1df4dc: 0x2484caa8  addiu       $a0, $a0, -0x3558 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4E0u; }
        if (ctx->pc != 0x1DF4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4E0u; }
        if (ctx->pc != 0x1DF4E0u) { return; }
    }
    ctx->pc = 0x1DF4E0u;
label_1df4e0:
    // 0x1df4e0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1df4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1df4e4:
    // 0x1df4e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1df4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df4e8: 0xc077da8  jal         func_1DF6A0
    ctx->pc = 0x1DF4E8u;
    SET_GPR_U32(ctx, 31, 0x1DF4F0u);
    ctx->pc = 0x1DF4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF4E8u;
            // 0x1df4ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF6A0u;
    if (runtime->hasFunction(0x1DF6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DF6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4F0u; }
        if (ctx->pc != 0x1DF4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF6A0_0x1df6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4F0u; }
        if (ctx->pc != 0x1DF4F0u) { return; }
    }
    ctx->pc = 0x1DF4F0u;
label_1df4f0:
    // 0x1df4f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1df4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df4f4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1df4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df4f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1df4f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df4fc: 0xc077da8  jal         func_1DF6A0
    ctx->pc = 0x1DF4FCu;
    SET_GPR_U32(ctx, 31, 0x1DF504u);
    ctx->pc = 0x1DF500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF4FCu;
            // 0x1df500: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF6A0u;
    if (runtime->hasFunction(0x1DF6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DF6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF504u; }
        if (ctx->pc != 0x1DF504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF6A0_0x1df6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF504u; }
        if (ctx->pc != 0x1DF504u) { return; }
    }
    ctx->pc = 0x1DF504u;
label_1df504:
    // 0x1df504: 0xae370000  sw          $s7, 0x0($s1)
    ctx->pc = 0x1df504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
    // 0x1df508: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1df508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df50c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1df50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df510: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1df510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df514: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1df514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df518: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x1df518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x1df51c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1df51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1df520: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1df520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1df524: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1df524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df528: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1df528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1df52c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1df52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1df530: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1df530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1df534: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1df534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df538: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1df538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1df53c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1df53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1df540: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1df540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1df544: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1df544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df548: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x1df548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x1df54c: 0xae300024  sw          $s0, 0x24($s1)
    ctx->pc = 0x1df54cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
    // 0x1df550: 0xae350028  sw          $s5, 0x28($s1)
    ctx->pc = 0x1df550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 21));
    // 0x1df554: 0xae33002c  sw          $s3, 0x2C($s1)
    ctx->pc = 0x1df554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 19));
    // 0x1df558: 0xae3e0030  sw          $fp, 0x30($s1)
    ctx->pc = 0x1df558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
    // 0x1df55c: 0xae360038  sw          $s6, 0x38($s1)
    ctx->pc = 0x1df55cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 22));
    // 0x1df560: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1df560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1df564: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1df564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1df568: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1df568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x1df56c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1df56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df570: 0xc077d82  jal         func_1DF608
    ctx->pc = 0x1DF570u;
    SET_GPR_U32(ctx, 31, 0x1DF578u);
    ctx->pc = 0x1DF574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF570u;
            // 0x1df574: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF608u;
    if (runtime->hasFunction(0x1DF608u)) {
        auto targetFn = runtime->lookupFunction(0x1DF608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF578u; }
        if (ctx->pc != 0x1DF578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF608_0x1df608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF578u; }
        if (ctx->pc != 0x1DF578u) { return; }
    }
    ctx->pc = 0x1DF578u;
label_1df578:
    // 0x1df578: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1df578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df57c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1df57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df580: 0xc077e1e  jal         func_1DF878
    ctx->pc = 0x1DF580u;
    SET_GPR_U32(ctx, 31, 0x1DF588u);
    ctx->pc = 0x1DF584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF580u;
            // 0x1df584: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF878u;
    if (runtime->hasFunction(0x1DF878u)) {
        auto targetFn = runtime->lookupFunction(0x1DF878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF588u; }
        if (ctx->pc != 0x1DF588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF878_0x1df878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF588u; }
        if (ctx->pc != 0x1DF588u) { return; }
    }
    ctx->pc = 0x1DF588u;
label_1df588:
    // 0x1df588: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1df588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df58c: 0x8e260098  lw          $a2, 0x98($s1)
    ctx->pc = 0x1df58cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x1df590: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1df590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df594: 0xc077dde  jal         func_1DF778
    ctx->pc = 0x1DF594u;
    SET_GPR_U32(ctx, 31, 0x1DF59Cu);
    ctx->pc = 0x1DF598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF594u;
            // 0x1df598: 0x8e27009c  lw          $a3, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF778u;
    if (runtime->hasFunction(0x1DF778u)) {
        auto targetFn = runtime->lookupFunction(0x1DF778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF59Cu; }
        if (ctx->pc != 0x1DF59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF778_0x1df778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF59Cu; }
        if (ctx->pc != 0x1DF59Cu) { return; }
    }
    ctx->pc = 0x1DF59Cu;
label_1df59c:
    // 0x1df59c: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x1df59cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x1df5a0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1df5a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df5a4: 0xde420048  ld          $v0, 0x48($s2)
    ctx->pc = 0x1df5a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1df5a8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1df5a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1df5ac: 0xfe220060  sd          $v0, 0x60($s1)
    ctx->pc = 0x1df5acu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 2));
    // 0x1df5b0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1df5b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df5b4: 0xde430050  ld          $v1, 0x50($s2)
    ctx->pc = 0x1df5b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1df5b8: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1df5b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1df5bc: 0xfe230068  sd          $v1, 0x68($s1)
    ctx->pc = 0x1df5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 3));
    // 0x1df5c0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1df5c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1df5c4: 0xde420058  ld          $v0, 0x58($s2)
    ctx->pc = 0x1df5c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1df5c8: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x1df5c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df5cc: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x1df5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x1df5d0: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x1df5d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1df5d4: 0xde430060  ld          $v1, 0x60($s2)
    ctx->pc = 0x1df5d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1df5d8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1df5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1df5dc: 0xfe230078  sd          $v1, 0x78($s1)
    ctx->pc = 0x1df5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 3));
    // 0x1df5e0: 0xde420068  ld          $v0, 0x68($s2)
    ctx->pc = 0x1df5e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1df5e4: 0xfe220080  sd          $v0, 0x80($s1)
    ctx->pc = 0x1df5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 2));
    // 0x1df5e8: 0xde430070  ld          $v1, 0x70($s2)
    ctx->pc = 0x1df5e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1df5ec: 0xfe230088  sd          $v1, 0x88($s1)
    ctx->pc = 0x1df5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 3));
    // 0x1df5f0: 0xde420078  ld          $v0, 0x78($s2)
    ctx->pc = 0x1df5f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1df5f4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1df5f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df5f8: 0xfe220090  sd          $v0, 0x90($s1)
    ctx->pc = 0x1df5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 144), GPR_U64(ctx, 2));
    // 0x1df5fc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1df5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1df600: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF600u;
            // 0x1df604: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DF608u;
    ctx->pc = 0x1df608u;
}
