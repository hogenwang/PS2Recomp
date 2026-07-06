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

// Function: sub_002E9BC8
// Address: 0x2e9bc8 - 0x2e9c20
void sub_002E9BC8_0x2e9bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9BC8_0x2e9bc8");
#endif

    switch (ctx->pc) {
        case 0x2e9be0u: goto label_2e9be0;
        default: break;
    }

    ctx->pc = 0x2e9bc8u;

    // 0x2e9bc8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2e9bc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9bcc: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2e9bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2e9bd0: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E9BD0u;
    {
        const bool branch_taken_0x2e9bd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9BD0u;
        // 0x2e9bd4: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9bd0) {
            ctx->pc = 0x2E9C14u;
            goto label_2e9c14;
        }
    }
    ctx->pc = 0x2E9BD8u;
    // 0x2e9bd8: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x2e9bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x2e9bdc: 0x0  nop
    ctx->pc = 0x2e9bdcu;
    // NOP
label_2e9be0:
    // 0x2e9be0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2e9be0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e9be4: 0x2525ea38  addiu       $a1, $t1, -0x15C8
    ctx->pc = 0x2e9be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961720));
    // 0x2e9be8: 0x33202  srl         $a2, $v1, 8
    ctx->pc = 0x2e9be8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2e9bec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e9becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e9bf0: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x2e9bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2e9bf4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2e9bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2e9bf8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e9bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e9bfc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e9bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e9c00: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e9c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e9c04: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2e9c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e9c08: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2e9c08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e9c0c: 0x14e4fff4  bne         $a3, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E9C0Cu;
    {
        const bool branch_taken_0x2e9c0c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E9C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C0Cu;
        // 0x2e9c10: 0x661826  xor         $v1, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9c0c) {
            ctx->pc = 0x2E9BE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e9be0;
        }
    }
    ctx->pc = 0x2E9C14u;
label_2e9c14:
    // 0x2e9c14: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C14u;
        // 0x2e9c18: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9C1Cu;
    // 0x2e9c1c: 0x0  nop
    ctx->pc = 0x2e9c1cu;
    // NOP
}
