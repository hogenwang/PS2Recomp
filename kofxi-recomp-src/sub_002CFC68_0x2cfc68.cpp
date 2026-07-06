#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CFC68
// Address: 0x2cfc68 - 0x2cfcf8
void sub_002CFC68_0x2cfc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFC68_0x2cfc68");
#endif

    switch (ctx->pc) {
        case 0x2cfca0u: goto label_2cfca0;
        case 0x2cfcd8u: goto label_2cfcd8;
        default: break;
    }

    ctx->pc = 0x2cfc68u;

    // 0x2cfc68: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x2cfc68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cfc6c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2cfc6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cfc70: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2cfc70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cfc74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfc78: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x2cfc78u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2cfc7c: 0xc8182a  slt         $v1, $a2, $t0
    ctx->pc = 0x2cfc7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2cfc80: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x2cfc80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2cfc84: 0x1506001a  bne         $t0, $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CFC84u;
    {
        const bool branch_taken_0x2cfc84 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        ctx->pc = 0x2CFC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC84u;
            // 0x2cfc88: 0xe3100a  movz        $v0, $a3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfc84) {
            ctx->pc = 0x2CFCF0u;
            goto label_2cfcf0;
        }
    }
    ctx->pc = 0x2CFC8Cu;
    // 0x2cfc8c: 0x2507ffff  addiu       $a3, $t0, -0x1
    ctx->pc = 0x2cfc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2cfc90: 0x4e0000e  bltz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x2CFC90u;
    {
        const bool branch_taken_0x2cfc90 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x2cfc90) {
            ctx->pc = 0x2CFCCCu;
            goto label_2cfccc;
        }
    }
    ctx->pc = 0x2CFC98u;
    // 0x2cfc98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFC98u;
    {
        const bool branch_taken_0x2cfc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC98u;
            // 0x2cfc9c: 0x730c0  sll         $a2, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfc98) {
            ctx->pc = 0x2CFCA8u;
            goto label_2cfca8;
        }
    }
    ctx->pc = 0x2CFCA0u;
label_2cfca0:
    // 0x2cfca0: 0x4e0000a  bltz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2CFCA0u;
    {
        const bool branch_taken_0x2cfca0 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2CFCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFCA0u;
            // 0x2cfca4: 0x730c0  sll         $a2, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfca0) {
            ctx->pc = 0x2CFCCCu;
            goto label_2cfccc;
        }
    }
    ctx->pc = 0x2CFCA8u;
label_2cfca8:
    // 0x2cfca8: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x2cfca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2cfcac: 0xc92021  addu        $a0, $a2, $t1
    ctx->pc = 0x2cfcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2cfcb0: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x2cfcb0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cfcb4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2cfcb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cfcb8: 0x0  nop
    ctx->pc = 0x2cfcb8u;
    // NOP
    // 0x2cfcbc: 0x50a2fff8  beql        $a1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CFCBCu;
    {
        const bool branch_taken_0x2cfcbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cfcbc) {
            ctx->pc = 0x2CFCC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFCBCu;
            // 0x2cfcc0: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFCA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cfca0;
        }
    }
    ctx->pc = 0x2CFCC4u;
    // 0x2cfcc4: 0x4e30004  bgezl       $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFCC4u;
    {
        const bool branch_taken_0x2cfcc4 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2cfcc4) {
            ctx->pc = 0x2CFCC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFCC4u;
            // 0x2cfcc8: 0xca1021  addu        $v0, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFCD8u;
            goto label_2cfcd8;
        }
    }
    ctx->pc = 0x2CFCCCu;
label_2cfccc:
    // 0x2cfccc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFCCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFCCCu;
            // 0x2cfcd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CFCD4u;
    // 0x2cfcd4: 0x0  nop
    ctx->pc = 0x2cfcd4u;
    // NOP
label_2cfcd8:
    // 0x2cfcd8: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x2cfcd8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfcdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfce0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2cfce0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cfce4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2cfce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cfce8: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x2cfce8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2cfcec: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x2cfcecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_2cfcf0:
    // 0x2cfcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CFCF8u;
    ctx->pc = 0x2cfcf8u;
}
