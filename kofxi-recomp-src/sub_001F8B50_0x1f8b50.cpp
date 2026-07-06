#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F8B50
// Address: 0x1f8b50 - 0x1f8bf0
void sub_001F8B50_0x1f8b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8B50_0x1f8b50");
#endif

    switch (ctx->pc) {
        case 0x1f8b64u: goto label_1f8b64;
        case 0x1f8b88u: goto label_1f8b88;
        case 0x1f8b90u: goto label_1f8b90;
        case 0x1f8b98u: goto label_1f8b98;
        case 0x1f8ba0u: goto label_1f8ba0;
        case 0x1f8ba8u: goto label_1f8ba8;
        case 0x1f8bb8u: goto label_1f8bb8;
        default: break;
    }

    ctx->pc = 0x1f8b50u;

    // 0x1f8b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f8b54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f8b58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f8b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f8b5c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F8B5Cu;
    SET_GPR_U32(ctx, 31, 0x1F8B64u);
    ctx->pc = 0x1F8B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B5Cu;
            // 0x1f8b60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B64u; }
        if (ctx->pc != 0x1F8B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B64u; }
        if (ctx->pc != 0x1F8B64u) { return; }
    }
    ctx->pc = 0x1F8B64u;
label_1f8b64:
    // 0x1f8b64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8B64u;
    {
        const bool branch_taken_0x1f8b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B64u;
            // 0x1f8b68: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b64) {
            ctx->pc = 0x1F8B88u;
            goto label_1f8b88;
        }
    }
    ctx->pc = 0x1F8B6Cu;
    // 0x1f8b6c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f8b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f8b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8b74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f8b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b78: 0x34a50131  ori         $a1, $a1, 0x131
    ctx->pc = 0x1f8b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)305);
    // 0x1f8b7c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F8B7Cu;
    ctx->pc = 0x1F8B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B7Cu;
            // 0x1f8b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F8B84u;
    // 0x1f8b84: 0x0  nop
    ctx->pc = 0x1f8b84u;
    // NOP
label_1f8b88:
    // 0x1f8b88: 0xc07e34a  jal         func_1F8D28
    ctx->pc = 0x1F8B88u;
    SET_GPR_U32(ctx, 31, 0x1F8B90u);
    ctx->pc = 0x1F8B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B88u;
            // 0x1f8b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8D28u;
    if (runtime->hasFunction(0x1F8D28u)) {
        auto targetFn = runtime->lookupFunction(0x1F8D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B90u; }
        if (ctx->pc != 0x1F8B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F8D28_0x1f8d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B90u; }
        if (ctx->pc != 0x1F8B90u) { return; }
    }
    ctx->pc = 0x1F8B90u;
label_1f8b90:
    // 0x1f8b90: 0xc07b28e  jal         func_1ECA38
    ctx->pc = 0x1F8B90u;
    SET_GPR_U32(ctx, 31, 0x1F8B98u);
    ctx->pc = 0x1F8B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B90u;
            // 0x1f8b94: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECA38u;
    if (runtime->hasFunction(0x1ECA38u)) {
        auto targetFn = runtime->lookupFunction(0x1ECA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B98u; }
        if (ctx->pc != 0x1F8B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECA38_0x1eca38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B98u; }
        if (ctx->pc != 0x1F8B98u) { return; }
    }
    ctx->pc = 0x1F8B98u;
label_1f8b98:
    // 0x1f8b98: 0xc07a8a8  jal         func_1EA2A0
    ctx->pc = 0x1F8B98u;
    SET_GPR_U32(ctx, 31, 0x1F8BA0u);
    ctx->pc = 0x1F8B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B98u;
            // 0x1f8b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2A0u;
    if (runtime->hasFunction(0x1EA2A0u)) {
        auto targetFn = runtime->lookupFunction(0x1EA2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8BA0u; }
        if (ctx->pc != 0x1F8BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA2A0_0x1ea2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8BA0u; }
        if (ctx->pc != 0x1F8BA0u) { return; }
    }
    ctx->pc = 0x1F8BA0u;
label_1f8ba0:
    // 0x1f8ba0: 0xc07e2fc  jal         func_1F8BF0
    ctx->pc = 0x1F8BA0u;
    SET_GPR_U32(ctx, 31, 0x1F8BA8u);
    ctx->pc = 0x1F8BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8BA0u;
            // 0x1f8ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8BF0u;
    if (runtime->hasFunction(0x1F8BF0u)) {
        auto targetFn = runtime->lookupFunction(0x1F8BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8BA8u; }
        if (ctx->pc != 0x1F8BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F8BF0_0x1f8bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8BA8u; }
        if (ctx->pc != 0x1F8BA8u) { return; }
    }
    ctx->pc = 0x1F8BA8u;
label_1f8ba8:
    // 0x1f8ba8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1f8ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f8bac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f8bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8bb0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f8bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f8bb4: 0x2443174c  addiu       $v1, $v0, 0x174C
    ctx->pc = 0x1f8bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5964));
label_1f8bb8:
    // 0x1f8bb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8bbc: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F8BBCu;
    {
        const bool branch_taken_0x1f8bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1f8bbc) {
            ctx->pc = 0x1F8BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8BBCu;
            // 0x1f8bc0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8BC4u;
            goto label_1f8bc4;
        }
    }
    ctx->pc = 0x1F8BC4u;
label_1f8bc4:
    // 0x1f8bc4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f8bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f8bc8: 0x0  nop
    ctx->pc = 0x1f8bc8u;
    // NOP
    // 0x1f8bcc: 0x0  nop
    ctx->pc = 0x1f8bccu;
    // NOP
    // 0x1f8bd0: 0x0  nop
    ctx->pc = 0x1f8bd0u;
    // NOP
    // 0x1f8bd4: 0x481fff8  bgez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F8BD4u;
    {
        const bool branch_taken_0x1f8bd4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1F8BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8BD4u;
            // 0x1f8bd8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bd4) {
            ctx->pc = 0x1F8BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8bb8;
        }
    }
    ctx->pc = 0x1F8BDCu;
    // 0x1f8bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8be0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1f8be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8be4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f8be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8be8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8BE8u;
            // 0x1f8bec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F8BF0u;
    ctx->pc = 0x1f8bf0u;
}
