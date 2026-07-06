#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00176BF0
// Address: 0x176bf0 - 0x176cb0
void sub_00176BF0_0x176bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176BF0_0x176bf0");
#endif

    switch (ctx->pc) {
        case 0x176c1cu: goto label_176c1c;
        default: break;
    }

    ctx->pc = 0x176bf0u;

    // 0x176bf0: 0x857821  addu        $t7, $a0, $a1
    ctx->pc = 0x176bf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x176bf4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x176bf4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176bf8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x176bf8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176bfc: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x176bfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x176c00: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x176c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x176c04: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x176c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x176c08: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x176c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x176c0c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x176c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x176c10: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x176c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x176c14: 0x240b0015  addiu       $t3, $zero, 0x15
    ctx->pc = 0x176c14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x176c18: 0x81ec0000  lb          $t4, 0x0($t7)
    ctx->pc = 0x176c18u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_176c1c:
    // 0x176c1c: 0x158b000a  bne         $t4, $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x176C1Cu;
    {
        const bool branch_taken_0x176c1c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 11));
        if (branch_taken_0x176c1c) {
            ctx->pc = 0x176C48u;
            goto label_176c48;
        }
    }
    ctx->pc = 0x176C24u;
    // 0x176c24: 0x85e90002  lh          $t1, 0x2($t7)
    ctx->pc = 0x176c24u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x176c28: 0x8c88a7b0  lw          $t0, -0x5850($a0)
    ctx->pc = 0x176c28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944688)));
    // 0x176c2c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x176c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x176c30: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x176c30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x176c34: 0x10e4021  addu        $t0, $t0, $t6
    ctx->pc = 0x176c34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x176c38: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x176c38u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x176c3c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x176C3Cu;
    {
        const bool branch_taken_0x176c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176C3Cu;
            // 0x176c40: 0x25ce0004  addiu       $t6, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c3c) {
            ctx->pc = 0x176C90u;
            goto label_176c90;
        }
    }
    ctx->pc = 0x176C44u;
    // 0x176c44: 0x0  nop
    ctx->pc = 0x176c44u;
    // NOP
label_176c48:
    // 0x176c48: 0x158a0009  bne         $t4, $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x176C48u;
    {
        const bool branch_taken_0x176c48 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 10));
        if (branch_taken_0x176c48) {
            ctx->pc = 0x176C70u;
            goto label_176c70;
        }
    }
    ctx->pc = 0x176C50u;
    // 0x176c50: 0x85e90002  lh          $t1, 0x2($t7)
    ctx->pc = 0x176c50u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x176c54: 0x8c68a7b0  lw          $t0, -0x5850($v1)
    ctx->pc = 0x176c54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944688)));
    // 0x176c58: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x176c58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x176c5c: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x176c5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x176c60: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x176c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x176c64: 0xa5090002  sh          $t1, 0x2($t0)
    ctx->pc = 0x176c64u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 9));
    // 0x176c68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x176C68u;
    {
        const bool branch_taken_0x176c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176C68u;
            // 0x176c6c: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c68) {
            ctx->pc = 0x176C90u;
            goto label_176c90;
        }
    }
    ctx->pc = 0x176C70u;
label_176c70:
    // 0x176c70: 0x11870003  beq         $t4, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x176C70u;
    {
        const bool branch_taken_0x176c70 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 7));
        if (branch_taken_0x176c70) {
            ctx->pc = 0x176C80u;
            goto label_176c80;
        }
    }
    ctx->pc = 0x176C78u;
    // 0x176c78: 0x15860003  bne         $t4, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x176C78u;
    {
        const bool branch_taken_0x176c78 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 6));
        if (branch_taken_0x176c78) {
            ctx->pc = 0x176C88u;
            goto label_176c88;
        }
    }
    ctx->pc = 0x176C80u;
label_176c80:
    // 0x176c80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x176C80u;
    {
        const bool branch_taken_0x176c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176C80u;
            // 0x176c84: 0x25ef0002  addiu       $t7, $t7, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c80) {
            ctx->pc = 0x176C90u;
            goto label_176c90;
        }
    }
    ctx->pc = 0x176C88u;
label_176c88:
    // 0x176c88: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x176c88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x176c8c: 0x0  nop
    ctx->pc = 0x176c8cu;
    // NOP
label_176c90:
    // 0x176c90: 0x5585ffe2  bnel        $t4, $a1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x176C90u;
    {
        const bool branch_taken_0x176c90 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 5));
        if (branch_taken_0x176c90) {
            ctx->pc = 0x176C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176C90u;
            // 0x176c94: 0x81ec0000  lb          $t4, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176C1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_176c1c;
        }
    }
    ctx->pc = 0x176C98u;
    // 0x176c98: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x176c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x176c9c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x176c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x176ca0: 0xa48037f0  sh          $zero, 0x37F0($a0)
    ctx->pc = 0x176ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14320), (uint16_t)GPR_U32(ctx, 0));
    // 0x176ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x176CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176CA4u;
            // 0x176ca8: 0xa46037f8  sh          $zero, 0x37F8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14328), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176CACu;
    // 0x176cac: 0x0  nop
    ctx->pc = 0x176cacu;
    // NOP
    ctx->pc = 0x176cb0u;
}
