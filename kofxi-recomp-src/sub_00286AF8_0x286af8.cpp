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

// Function: sub_00286AF8
// Address: 0x286af8 - 0x286b68
void sub_00286AF8_0x286af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286AF8_0x286af8");
#endif

    switch (ctx->pc) {
        case 0x286b18u: goto label_286b18;
        case 0x286b24u: goto label_286b24;
        default: break;
    }

    ctx->pc = 0x286af8u;

    // 0x286af8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x286af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x286afc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x286afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x286b00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x286b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x286b04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x286b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286b0c: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x286b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x286b10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x286b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x286b14: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x286b14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_286b18:
    // 0x286b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b1c: 0xc0a1a14  jal         func_286850
    ctx->pc = 0x286B1Cu;
    SET_GPR_U32(ctx, 31, 0x286B24u);
    ctx->pc = 0x286B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286B1Cu;
    // 0x286b20: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x286B1Cu, 0x286B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B24u;
label_286b24:
    // 0x286b24: 0x621fffc  bgez        $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x286B24u;
    {
        const bool branch_taken_0x286b24 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x286B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B24u;
        // 0x286b28: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b24) {
            ctx->pc = 0x286B18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_286b18;
        }
    }
    ctx->pc = 0x286B2Cu;
    // 0x286b2c: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x286b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x286b30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286b34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x286B34u;
    {
        const bool branch_taken_0x286b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B34u;
        // 0x286b38: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b34) {
            ctx->pc = 0x286B54u;
            goto label_286b54;
        }
    }
    ctx->pc = 0x286B3Cu;
    // 0x286b3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x286b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x286b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286b44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x286b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286b48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286b4c: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x286B4Cu;
    ctx->pc = 0x286B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286B4Cu;
    // 0x286b50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x286B54u;
label_286b54:
    // 0x286b54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x286b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286b58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x286b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286b60: 0x3e00008  jr          $ra
    ctx->pc = 0x286B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B60u;
        // 0x286b64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286B68u;
}
