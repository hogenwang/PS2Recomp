#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3E70
// Address: 0x1f3e70 - 0x1f3f18
void sub_001F3E70_0x1f3e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3E70_0x1f3e70");
#endif

    switch (ctx->pc) {
        case 0x1f3eacu: goto label_1f3eac;
        case 0x1f3ec0u: goto label_1f3ec0;
        case 0x1f3ee4u: goto label_1f3ee4;
        case 0x1f3f00u: goto label_1f3f00;
        default: break;
    }

    ctx->pc = 0x1f3e70u;

    // 0x1f3e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f3e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f3e74: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f3e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f3e78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f3e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e7c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f3e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f3e80: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f3e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f3e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f3e88: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f3e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f3e8c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1f3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1f3e90: 0x8c922018  lw          $s2, 0x2018($a0)
    ctx->pc = 0x1f3e90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f3e94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f3e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f3e98: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f3e98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f3e9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3E9Cu;
    {
        const bool branch_taken_0x1f3e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E9Cu;
            // 0x1f3ea0: 0x26441094  addiu       $a0, $s2, 0x1094 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e9c) {
            ctx->pc = 0x1F3EACu;
            goto label_1f3eac;
        }
    }
    ctx->pc = 0x1F3EA4u;
    // 0x1f3ea4: 0xc07d024  jal         func_1F4090
    ctx->pc = 0x1F3EA4u;
    SET_GPR_U32(ctx, 31, 0x1F3EACu);
    ctx->pc = 0x1F3EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3EA4u;
            // 0x1f3ea8: 0x8e050054  lw          $a1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4090u;
    if (runtime->hasFunction(0x1F4090u)) {
        auto targetFn = runtime->lookupFunction(0x1F4090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EACu; }
        if (ctx->pc != 0x1F3EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4090_0x1f4090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EACu; }
        if (ctx->pc != 0x1F3EACu) { return; }
    }
    ctx->pc = 0x1F3EACu;
label_1f3eac:
    // 0x1f3eac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f3eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3eb4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1f3eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1f3eb8: 0xc07cfc6  jal         func_1F3F18
    ctx->pc = 0x1F3EB8u;
    SET_GPR_U32(ctx, 31, 0x1F3EC0u);
    ctx->pc = 0x1F3EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3EB8u;
            // 0x1f3ebc: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3F18u;
    if (runtime->hasFunction(0x1F3F18u)) {
        auto targetFn = runtime->lookupFunction(0x1F3F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EC0u; }
        if (ctx->pc != 0x1F3EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3F18_0x1f3f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EC0u; }
        if (ctx->pc != 0x1F3EC0u) { return; }
    }
    ctx->pc = 0x1F3EC0u;
label_1f3ec0:
    // 0x1f3ec0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f3ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3ec4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f3ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f3ec8: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F3EC8u;
    {
        const bool branch_taken_0x1f3ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3EC8u;
            // 0x1f3ecc: 0x26451094  addiu       $a1, $s2, 0x1094 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ec8) {
            ctx->pc = 0x1F3EF8u;
            goto label_1f3ef8;
        }
    }
    ctx->pc = 0x1F3ED0u;
    // 0x1f3ed0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1f3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1f3ed4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1f3ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f3ed8: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1f3ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f3edc: 0xc049c48  jal         func_127120
    ctx->pc = 0x1F3EDCu;
    SET_GPR_U32(ctx, 31, 0x1F3EE4u);
    ctx->pc = 0x1F3EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3EDCu;
            // 0x1f3ee0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EE4u; }
        if (ctx->pc != 0x1F3EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EE4u; }
        if (ctx->pc != 0x1F3EE4u) { return; }
    }
    ctx->pc = 0x1F3EE4u;
label_1f3ee4:
    // 0x1f3ee4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1f3ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1f3ee8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1f3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f3eec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3EECu;
    {
        const bool branch_taken_0x1f3eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3EECu;
            // 0x1f3ef0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3eec) {
            ctx->pc = 0x1F3F00u;
            goto label_1f3f00;
        }
    }
    ctx->pc = 0x1F3EF4u;
    // 0x1f3ef4: 0x0  nop
    ctx->pc = 0x1f3ef4u;
    // NOP
label_1f3ef8:
    // 0x1f3ef8: 0xc07d024  jal         func_1F4090
    ctx->pc = 0x1F3EF8u;
    SET_GPR_U32(ctx, 31, 0x1F3F00u);
    ctx->pc = 0x1F3EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3EF8u;
            // 0x1f3efc: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4090u;
    if (runtime->hasFunction(0x1F4090u)) {
        auto targetFn = runtime->lookupFunction(0x1F4090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F00u; }
        if (ctx->pc != 0x1F3F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4090_0x1f4090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F00u; }
        if (ctx->pc != 0x1F3F00u) { return; }
    }
    ctx->pc = 0x1F3F00u;
label_1f3f00:
    // 0x1f3f00: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f3f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3f04: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f3f04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f3f08: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f3f08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3f0c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f3f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f3f10: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3F10u;
            // 0x1f3f14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3F18u;
    ctx->pc = 0x1f3f18u;
}
