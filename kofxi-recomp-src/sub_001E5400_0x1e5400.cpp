#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5400
// Address: 0x1e5400 - 0x1e54d8
void sub_001E5400_0x1e5400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5400_0x1e5400");
#endif

    switch (ctx->pc) {
        case 0x1e5420u: goto label_1e5420;
        case 0x1e5450u: goto label_1e5450;
        case 0x1e5478u: goto label_1e5478;
        case 0x1e5480u: goto label_1e5480;
        case 0x1e5488u: goto label_1e5488;
        case 0x1e5494u: goto label_1e5494;
        case 0x1e54a0u: goto label_1e54a0;
        case 0x1e54a8u: goto label_1e54a8;
        default: break;
    }

    ctx->pc = 0x1e5400u;

    // 0x1e5400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e5404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e5408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e5408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e540c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e540cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e5410: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e5410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e5414: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e5414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e5418: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E5418u;
    SET_GPR_U32(ctx, 31, 0x1E5420u);
    ctx->pc = 0x1E541Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5418u;
            // 0x1e541c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5420u; }
        if (ctx->pc != 0x1E5420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5420u; }
        if (ctx->pc != 0x1E5420u) { return; }
    }
    ctx->pc = 0x1E5420u;
label_1e5420:
    // 0x1e5420: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e5420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5428: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e5428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e542c: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E542Cu;
    {
        const bool branch_taken_0x1e542c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E542Cu;
            // 0x1e5430: 0x2484e1a0  addiu       $a0, $a0, -0x1E60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e542c) {
            ctx->pc = 0x1E5450u;
            goto label_1e5450;
        }
    }
    ctx->pc = 0x1E5434u;
    // 0x1e5434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5438: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e543c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e543cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5440: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e5440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e5444: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E5444u;
    ctx->pc = 0x1E5448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5444u;
            // 0x1e5448: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E544Cu;
    // 0x1e544c: 0x0  nop
    ctx->pc = 0x1e544cu;
    // NOP
label_1e5450:
    // 0x1e5450: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E5450u;
    {
        const bool branch_taken_0x1e5450 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5450u;
            // 0x1e5454: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5450) {
            ctx->pc = 0x1E5478u;
            goto label_1e5478;
        }
    }
    ctx->pc = 0x1E5458u;
    // 0x1e5458: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e5458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e545c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e545cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5460: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5464: 0x2484e1d0  addiu       $a0, $a0, -0x1E30
    ctx->pc = 0x1e5464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959568));
    // 0x1e5468: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e5468u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e546c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e546cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e5470: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E5470u;
    ctx->pc = 0x1E5474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5470u;
            // 0x1e5474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E5478u;
label_1e5478:
    // 0x1e5478: 0xc0786b2  jal         func_1E1AC8
    ctx->pc = 0x1E5478u;
    SET_GPR_U32(ctx, 31, 0x1E5480u);
    ctx->pc = 0x1E547Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5478u;
            // 0x1e547c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1AC8u;
    if (runtime->hasFunction(0x1E1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1E1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5480u; }
        if (ctx->pc != 0x1E5480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1AC8_0x1e1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5480u; }
        if (ctx->pc != 0x1E5480u) { return; }
    }
    ctx->pc = 0x1E5480u;
label_1e5480:
    // 0x1e5480: 0xc0718ae  jal         func_1C62B8
    ctx->pc = 0x1E5480u;
    SET_GPR_U32(ctx, 31, 0x1E5488u);
    ctx->pc = 0x1E5484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5480u;
            // 0x1e5484: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C62B8u;
    if (runtime->hasFunction(0x1C62B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C62B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5488u; }
        if (ctx->pc != 0x1E5488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C62B8_0x1c62b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5488u; }
        if (ctx->pc != 0x1E5488u) { return; }
    }
    ctx->pc = 0x1E5488u;
label_1e5488:
    // 0x1e5488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e548c: 0xc079490  jal         func_1E5240
    ctx->pc = 0x1E548Cu;
    SET_GPR_U32(ctx, 31, 0x1E5494u);
    ctx->pc = 0x1E5490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E548Cu;
            // 0x1e5490: 0x8e0503a8  lw          $a1, 0x3A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5240u;
    if (runtime->hasFunction(0x1E5240u)) {
        auto targetFn = runtime->lookupFunction(0x1E5240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5494u; }
        if (ctx->pc != 0x1E5494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5240_0x1e5240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5494u; }
        if (ctx->pc != 0x1E5494u) { return; }
    }
    ctx->pc = 0x1E5494u;
label_1e5494:
    // 0x1e5494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5498: 0xc0794e8  jal         func_1E53A0
    ctx->pc = 0x1E5498u;
    SET_GPR_U32(ctx, 31, 0x1E54A0u);
    ctx->pc = 0x1E549Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5498u;
            // 0x1e549c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E53A0u;
    if (runtime->hasFunction(0x1E53A0u)) {
        auto targetFn = runtime->lookupFunction(0x1E53A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E54A0u; }
        if (ctx->pc != 0x1E54A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E53A0_0x1e53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E54A0u; }
        if (ctx->pc != 0x1E54A0u) { return; }
    }
    ctx->pc = 0x1E54A0u;
label_1e54a0:
    // 0x1e54a0: 0xc0794c0  jal         func_1E5300
    ctx->pc = 0x1E54A0u;
    SET_GPR_U32(ctx, 31, 0x1E54A8u);
    ctx->pc = 0x1E54A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E54A0u;
            // 0x1e54a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5300u;
    if (runtime->hasFunction(0x1E5300u)) {
        auto targetFn = runtime->lookupFunction(0x1E5300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E54A8u; }
        if (ctx->pc != 0x1E54A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5300_0x1e5300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E54A8u; }
        if (ctx->pc != 0x1E54A8u) { return; }
    }
    ctx->pc = 0x1E54A8u;
label_1e54a8:
    // 0x1e54a8: 0xae1104e8  sw          $s1, 0x4E8($s0)
    ctx->pc = 0x1e54a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1256), GPR_U32(ctx, 17));
    // 0x1e54ac: 0x8e0204e4  lw          $v0, 0x4E4($s0)
    ctx->pc = 0x1e54acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1252)));
    // 0x1e54b0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E54B0u;
    {
        const bool branch_taken_0x1e54b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E54B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E54B0u;
            // 0x1e54b4: 0xae1104e0  sw          $s1, 0x4E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1248), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e54b0) {
            ctx->pc = 0x1E54BCu;
            goto label_1e54bc;
        }
    }
    ctx->pc = 0x1E54B8u;
    // 0x1e54b8: 0xae1104ec  sw          $s1, 0x4EC($s0)
    ctx->pc = 0x1e54b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1260), GPR_U32(ctx, 17));
label_1e54bc:
    // 0x1e54bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e54bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e54c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e54c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e54c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e54c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e54c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e54c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e54cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E54CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E54D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E54CCu;
            // 0x1e54d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E54D4u;
    // 0x1e54d4: 0x0  nop
    ctx->pc = 0x1e54d4u;
    // NOP
    ctx->pc = 0x1e54d8u;
}
