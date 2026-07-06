#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7D00
// Address: 0x1b7d00 - 0x1b7da0
void sub_001B7D00_0x1b7d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7D00_0x1b7d00");
#endif

    switch (ctx->pc) {
        case 0x1b7d14u: goto label_1b7d14;
        case 0x1b7d74u: goto label_1b7d74;
        case 0x1b7d80u: goto label_1b7d80;
        case 0x1b7d88u: goto label_1b7d88;
        default: break;
    }

    ctx->pc = 0x1b7d00u;

    // 0x1b7d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7d04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7d08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b7d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b7d0c: 0xc06fb9a  jal         func_1BEE68
    ctx->pc = 0x1B7D0Cu;
    SET_GPR_U32(ctx, 31, 0x1B7D14u);
    ctx->pc = 0x1B7D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7D0Cu;
    // 0x1b7d10: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE68u, 0x1B7D0Cu, 0x1B7D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7D14u;
label_1b7d14:
    // 0x1b7d14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b7d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7d1c: 0x24a607ff  addiu       $a2, $a1, 0x7FF
    ctx->pc = 0x1b7d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
    // 0x1b7d20: 0x28a40000  slti        $a0, $a1, 0x0
    ctx->pc = 0x1b7d20u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b7d24: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1b7d24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d28: 0xc4180b  movn        $v1, $a2, $a0
    ctx->pc = 0x1b7d28u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1b7d2c: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x1b7d2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x1b7d30: 0x322c0  sll         $a0, $v1, 11
    ctx->pc = 0x1b7d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x1b7d34: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1b7d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b7d38: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x1b7d38u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b7d3c: 0x18a00002  blez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B7D3Cu;
    {
        const bool branch_taken_0x1b7d3c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1B7D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D3Cu;
        // 0x1b7d40: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d3c) {
            ctx->pc = 0x1B7D48u;
            goto label_1b7d48;
        }
    }
    ctx->pc = 0x1B7D44u;
    // 0x1b7d44: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1b7d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_1b7d48:
    // 0x1b7d48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7d4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b7d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7d50: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D50u;
        // 0x1b7d54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7D58u;
    // 0x1b7d58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7d5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7d60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b7d68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7d6c: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B7D6Cu;
    SET_GPR_U32(ctx, 31, 0x1B7D74u);
    ctx->pc = 0x1B7D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7D6Cu;
    // 0x1b7d70: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B7D6Cu, 0x1B7D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7D74u;
label_1b7d74:
    // 0x1b7d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d78: 0xc06df68  jal         func_1B7DA0
    ctx->pc = 0x1B7D78u;
    SET_GPR_U32(ctx, 31, 0x1B7D80u);
    ctx->pc = 0x1B7D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7D78u;
    // 0x1b7d7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DA0u, 0x1B7D78u, 0x1B7D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7D80u;
label_1b7d80:
    // 0x1b7d80: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B7D80u;
    SET_GPR_U32(ctx, 31, 0x1B7D88u);
    ctx->pc = 0x1B7D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7D80u;
    // 0x1b7d84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8168u, 0x1B7D80u, 0x1B7D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7D88u;
label_1b7d88:
    // 0x1b7d88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7d8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b7d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7d94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7d98: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D98u;
        // 0x1b7d9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7DA0u;
}
