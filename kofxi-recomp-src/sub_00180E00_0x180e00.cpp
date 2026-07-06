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

// Function: sub_00180E00
// Address: 0x180e00 - 0x180e60
void sub_00180E00_0x180e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180E00_0x180e00");
#endif

    switch (ctx->pc) {
        case 0x180e38u: goto label_180e38;
        case 0x180e4cu: goto label_180e4c;
        default: break;
    }

    ctx->pc = 0x180e00u;

    // 0x180e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180e04: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x180e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x180e08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x180e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180e0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x180e10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e14: 0x948400ea  lhu         $a0, 0xEA($a0)
    ctx->pc = 0x180e14u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 234)));
    // 0x180e18: 0x5483000d  bnel        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x180E18u;
    {
        const bool branch_taken_0x180e18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x180e18) {
            ctx->pc = 0x180E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180E18u;
            // 0x180e1c: 0xa20000f7  sb          $zero, 0xF7($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 247), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180E50u;
            goto label_180e50;
        }
    }
    ctx->pc = 0x180E20u;
    // 0x180e20: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x180e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x180e24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x180e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180e28: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x180E28u;
    {
        const bool branch_taken_0x180e28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x180e28) {
            ctx->pc = 0x180E4Cu;
            goto label_180e4c;
        }
    }
    ctx->pc = 0x180E30u;
    // 0x180e30: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x180E30u;
    SET_GPR_U32(ctx, 31, 0x180E38u);
    ctx->pc = 0x180E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180E30u;
    // 0x180e34: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F20u, 0x180E30u, 0x180E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180E38u;
label_180e38:
    // 0x180e38: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x180e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x180e3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x180e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x180e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e44: 0xc05721c  jal         func_15C870
    ctx->pc = 0x180E44u;
    SET_GPR_U32(ctx, 31, 0x180E4Cu);
    ctx->pc = 0x180E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180E44u;
    // 0x180e48: 0x24070078  addiu       $a3, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C870u, 0x180E44u, 0x180E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180E4Cu;
label_180e4c:
    // 0x180e4c: 0xa20000f7  sb          $zero, 0xF7($s0)
    ctx->pc = 0x180e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 247), (uint8_t)GPR_U32(ctx, 0));
label_180e50:
    // 0x180e50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180e54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180e58: 0x3e00008  jr          $ra
    ctx->pc = 0x180E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E58u;
        // 0x180e5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180E60u;
}
