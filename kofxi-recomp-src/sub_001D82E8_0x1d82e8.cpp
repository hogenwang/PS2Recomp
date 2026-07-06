#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D82E8
// Address: 0x1d82e8 - 0x1d8350
void sub_001D82E8_0x1d82e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D82E8_0x1d82e8");
#endif

    switch (ctx->pc) {
        case 0x1d8300u: goto label_1d8300;
        default: break;
    }

    ctx->pc = 0x1d82e8u;

    // 0x1d82e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d82ec: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1d82ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1d82f0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1d82f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d82f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D82F4u;
    {
        const bool branch_taken_0x1d82f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D82F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D82F4u;
            // 0x1d82f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82f4) {
            ctx->pc = 0x1D8344u;
            goto label_1d8344;
        }
    }
    ctx->pc = 0x1D82FCu;
    // 0x1d82fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d82fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8300:
    // 0x1d8300: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1d8300u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d8304: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1D8304u;
    {
        const bool branch_taken_0x1d8304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8304) {
            ctx->pc = 0x1D8308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8304u;
            // 0x1d8308: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8334u;
            goto label_1d8334;
        }
    }
    ctx->pc = 0x1D830Cu;
    // 0x1d830c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1d830cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1d8310: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8310u;
    {
        const bool branch_taken_0x1d8310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8310) {
            ctx->pc = 0x1D8314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8310u;
            // 0x1d8314: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8334u;
            goto label_1d8334;
        }
    }
    ctx->pc = 0x1D8318u;
    // 0x1d8318: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1d8318u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d831c: 0x54480005  bnel        $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D831Cu;
    {
        const bool branch_taken_0x1d831c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1d831c) {
            ctx->pc = 0x1D8320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D831Cu;
            // 0x1d8320: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8334u;
            goto label_1d8334;
        }
    }
    ctx->pc = 0x1D8324u;
    // 0x1d8324: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1d8324u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1d8328: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8328u;
    {
        const bool branch_taken_0x1d8328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1D832Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8328u;
            // 0x1d832c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8328) {
            ctx->pc = 0x1D8348u;
            goto label_1d8348;
        }
    }
    ctx->pc = 0x1D8330u;
    // 0x1d8330: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d8330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1d8334:
    // 0x1d8334: 0x24e20003  addiu       $v0, $a3, 0x3
    ctx->pc = 0x1d8334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x1d8338: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1d8338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d833c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D833Cu;
    {
        const bool branch_taken_0x1d833c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D833Cu;
            // 0x1d8340: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d833c) {
            ctx->pc = 0x1D8300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8300;
        }
    }
    ctx->pc = 0x1D8344u;
label_1d8344:
    // 0x1d8344: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d8344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8348:
    // 0x1d8348: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8350u;
    ctx->pc = 0x1d8350u;
}
