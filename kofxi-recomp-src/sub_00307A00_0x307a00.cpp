#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00307A00
// Address: 0x307a00 - 0x307a90
void sub_00307A00_0x307a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307A00_0x307a00");
#endif

    switch (ctx->pc) {
        case 0x307a28u: goto label_307a28;
        case 0x307a34u: goto label_307a34;
        default: break;
    }

    ctx->pc = 0x307a00u;

    // 0x307a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x307a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x307a04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x307a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x307a08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x307a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x307a0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x307a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x307a10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x307a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x307a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x307a18: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x307a18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x307a1c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x307A1Cu;
    {
        const bool branch_taken_0x307a1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x307A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307A1Cu;
            // 0x307a20: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a1c) {
            ctx->pc = 0x307A68u;
            goto label_307a68;
        }
    }
    ctx->pc = 0x307A24u;
    // 0x307a24: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x307a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_307a28:
    // 0x307a28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x307a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a2c: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x307A2Cu;
    SET_GPR_U32(ctx, 31, 0x307A34u);
    ctx->pc = 0x307A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307A2Cu;
            // 0x307a30: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307A34u; }
        if (ctx->pc != 0x307A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307A34u; }
        if (ctx->pc != 0x307A34u) { return; }
    }
    ctx->pc = 0x307A34u;
label_307a34:
    // 0x307a34: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307A34u;
    {
        const bool branch_taken_0x307a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307a34) {
            ctx->pc = 0x307A38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x307A34u;
            // 0x307a38: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x307A5Cu;
            goto label_307a5c;
        }
    }
    ctx->pc = 0x307A3Cu;
    // 0x307a3c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x307A3Cu;
    {
        const bool branch_taken_0x307a3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x307a3c) {
            ctx->pc = 0x307A50u;
            goto label_307a50;
        }
    }
    ctx->pc = 0x307A44u;
    // 0x307a44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x307A44u;
    {
        const bool branch_taken_0x307a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307A44u;
            // 0x307a48: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a44) {
            ctx->pc = 0x307A58u;
            goto label_307a58;
        }
    }
    ctx->pc = 0x307A4Cu;
    // 0x307a4c: 0x0  nop
    ctx->pc = 0x307a4cu;
    // NOP
label_307a50:
    // 0x307a50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x307A50u;
    {
        const bool branch_taken_0x307a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307A50u;
            // 0x307a54: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a50) {
            ctx->pc = 0x307A6Cu;
            goto label_307a6c;
        }
    }
    ctx->pc = 0x307A58u;
label_307a58:
    // 0x307a58: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x307a58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_307a5c:
    // 0x307a5c: 0x5600fff2  bnel        $s0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x307A5Cu;
    {
        const bool branch_taken_0x307a5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x307a5c) {
            ctx->pc = 0x307A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x307A5Cu;
            // 0x307a60: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x307A28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_307a28;
        }
    }
    ctx->pc = 0x307A64u;
    // 0x307a64: 0x0  nop
    ctx->pc = 0x307a64u;
    // NOP
label_307a68:
    // 0x307a68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x307a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307a6c:
    // 0x307a6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x307a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x307a70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x307a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x307a74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x307a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x307a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x307A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307A7Cu;
            // 0x307a80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307A84u;
    // 0x307a84: 0x0  nop
    ctx->pc = 0x307a84u;
    // NOP
    // 0x307a88: 0x0  nop
    ctx->pc = 0x307a88u;
    // NOP
    // 0x307a8c: 0x0  nop
    ctx->pc = 0x307a8cu;
    // NOP
    ctx->pc = 0x307a90u;
}
