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

// Function: sub_00236700
// Address: 0x236700 - 0x236778
void sub_00236700_0x236700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236700_0x236700");
#endif

    switch (ctx->pc) {
        case 0x236720u: goto label_236720;
        default: break;
    }

    ctx->pc = 0x236700u;

    // 0x236700: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x236700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x236704: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x236704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x236708: 0x2442ad48  addiu       $v0, $v0, -0x52B8
    ctx->pc = 0x236708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946120));
    // 0x23670c: 0x2468fd08  addiu       $t0, $v1, -0x2F8
    ctx->pc = 0x23670cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966536));
    // 0x236710: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x236710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x236714: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x236714u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x236718: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x236718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23671c: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x23671cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_236720:
    // 0x236720: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x236720u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236724: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x236724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x236728: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x236728u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x23672c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x23672cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x236730: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x236730u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236734: 0xa0a3fffe  sb          $v1, -0x2($a1)
    ctx->pc = 0x236734u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967294), (uint8_t)GPR_U32(ctx, 3));
    // 0x236738: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x236738u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23673c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23673cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x236740: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x236740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x236744: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x236744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x236748: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x236748u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23674c: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x23674cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x236750: 0xa0a90000  sb          $t1, 0x0($a1)
    ctx->pc = 0x236750u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x236754: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x236754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x236758: 0x4c1fff1  bgez        $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x236758u;
    {
        const bool branch_taken_0x236758 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x23675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236758u;
        // 0x23675c: 0x24a50003  addiu       $a1, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236758) {
            ctx->pc = 0x236720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_236720;
        }
    }
    ctx->pc = 0x236760u;
    // 0x236760: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x236760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x236764: 0x2463ad48  addiu       $v1, $v1, -0x52B8
    ctx->pc = 0x236764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946120));
    // 0x236768: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x236768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23676c: 0x3e00008  jr          $ra
    ctx->pc = 0x23676Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23676Cu;
        // 0x236770: 0xa0600011  sb          $zero, 0x11($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23676Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236774u;
    // 0x236774: 0x0  nop
    ctx->pc = 0x236774u;
    // NOP
}
