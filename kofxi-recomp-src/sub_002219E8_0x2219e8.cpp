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

// Function: sub_002219E8
// Address: 0x2219e8 - 0x221a58
void sub_002219E8_0x2219e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002219E8_0x2219e8");
#endif

    ctx->pc = 0x2219e8u;

    // 0x2219e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2219e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2219ec: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x2219ecu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2219f0: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x2219f0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2219f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2219f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2219f8: 0x240500d1  addiu       $a1, $zero, 0xD1
    ctx->pc = 0x2219f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    // 0x2219fc: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2219FCu;
    {
        const bool branch_taken_0x2219fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x221A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219FCu;
        // 0x221a00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219fc) {
            ctx->pc = 0x221A28u;
            goto label_221a28;
        }
    }
    ctx->pc = 0x221A04u;
    // 0x221a04: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221a0c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x221a10: 0x24842b80  addiu       $a0, $a0, 0x2B80
    ctx->pc = 0x221a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11136));
    // 0x221a14: 0x25082a00  addiu       $t0, $t0, 0x2A00
    ctx->pc = 0x221a14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10752));
    // 0x221a18: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x221a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
    // 0x221a1c: 0x8089794  j           func_225E50
    ctx->pc = 0x221A1Cu;
    ctx->pc = 0x221A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A1Cu;
    // 0x221a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    ctx->pc = 0x221A24u;
    // 0x221a24: 0x0  nop
    ctx->pc = 0x221a24u;
    // NOP
label_221a28:
    // 0x221a28: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x221a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x221a2c: 0x104e0007  beq         $v0, $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x221A2Cu;
    {
        const bool branch_taken_0x221a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 14));
        ctx->pc = 0x221A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A2Cu;
        // 0x221a30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a2c) {
            ctx->pc = 0x221A4Cu;
            goto label_221a4c;
        }
    }
    ctx->pc = 0x221A34u;
    // 0x221a34: 0xac8f0024  sw          $t7, 0x24($a0)
    ctx->pc = 0x221a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 15));
    // 0x221a38: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x221a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x221a3c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x221a3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221a40: 0xac8e0004  sw          $t6, 0x4($a0)
    ctx->pc = 0x221a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 14));
    // 0x221a44: 0xac8f0028  sw          $t7, 0x28($a0)
    ctx->pc = 0x221a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 15));
    // 0x221a48: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x221a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_221a4c:
    // 0x221a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x221A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A4Cu;
        // 0x221a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221A54u;
    // 0x221a54: 0x0  nop
    ctx->pc = 0x221a54u;
    // NOP
}
