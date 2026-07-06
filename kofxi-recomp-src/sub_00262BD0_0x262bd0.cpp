#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00262BD0
// Address: 0x262bd0 - 0x262c48
void sub_00262BD0_0x262bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262BD0_0x262bd0");
#endif

    switch (ctx->pc) {
        case 0x262bf8u: goto label_262bf8;
        case 0x262c00u: goto label_262c00;
        case 0x262c04u: goto label_262c04;
        case 0x262c10u: goto label_262c10;
        case 0x262c20u: goto label_262c20;
        default: break;
    }

    ctx->pc = 0x262bd0u;

    // 0x262bd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x262bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x262bd4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x262bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x262bd8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x262bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x262bdc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x262bdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262be0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262be4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x262be4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262be8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x262be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x262bec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x262BECu;
    {
        const bool branch_taken_0x262bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262BECu;
            // 0x262bf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262bec) {
            ctx->pc = 0x262C00u;
            goto label_262c00;
        }
    }
    ctx->pc = 0x262BF4u;
    // 0x262bf4: 0x0  nop
    ctx->pc = 0x262bf4u;
    // NOP
label_262bf8:
    // 0x262bf8: 0xc043736  jal         func_10DCD8
    ctx->pc = 0x262BF8u;
    SET_GPR_U32(ctx, 31, 0x262C00u);
    ctx->pc = 0x10DCD8u;
    if (runtime->hasFunction(0x10DCD8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C00u; }
        if (ctx->pc != 0x262C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010DCD8_0x10dcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C00u; }
        if (ctx->pc != 0x262C00u) { return; }
    }
    ctx->pc = 0x262C00u;
label_262c00:
    // 0x262c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262c04:
    // 0x262c04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x262c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c08: 0xc0442d4  jal         func_110B50
    ctx->pc = 0x262C08u;
    SET_GPR_U32(ctx, 31, 0x262C10u);
    ctx->pc = 0x262C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262C08u;
            // 0x262c0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (runtime->hasFunction(0x110B50u)) {
        auto targetFn = runtime->lookupFunction(0x110B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C10u; }
        if (ctx->pc != 0x262C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110B50_0x110b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C10u; }
        if (ctx->pc != 0x262C10u) { return; }
    }
    ctx->pc = 0x262C10u;
label_262c10:
    // 0x262c10: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x262C10u;
    {
        const bool branch_taken_0x262c10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x262C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262C10u;
            // 0x262c14: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c10) {
            ctx->pc = 0x262C28u;
            goto label_262c28;
        }
    }
    ctx->pc = 0x262C18u;
    // 0x262c18: 0xc043736  jal         func_10DCD8
    ctx->pc = 0x262C18u;
    SET_GPR_U32(ctx, 31, 0x262C20u);
    ctx->pc = 0x10DCD8u;
    if (runtime->hasFunction(0x10DCD8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C20u; }
        if (ctx->pc != 0x262C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010DCD8_0x10dcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C20u; }
        if (ctx->pc != 0x262C20u) { return; }
    }
    ctx->pc = 0x262C20u;
label_262c20:
    // 0x262c20: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x262C20u;
    {
        const bool branch_taken_0x262c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262C20u;
            // 0x262c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c20) {
            ctx->pc = 0x262C04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262c04;
        }
    }
    ctx->pc = 0x262C28u;
label_262c28:
    // 0x262c28: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x262c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x262c2c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x262C2Cu;
    {
        const bool branch_taken_0x262c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262C2Cu;
            // 0x262c30: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c2c) {
            ctx->pc = 0x262BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262bf8;
        }
    }
    ctx->pc = 0x262C34u;
    // 0x262c34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x262c34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262c38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x262c38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262c3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x262c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262c40: 0x3e00008  jr          $ra
    ctx->pc = 0x262C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262C40u;
            // 0x262c44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262C48u;
    ctx->pc = 0x262c48u;
}
