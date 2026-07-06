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

// Function: sub_00230B28
// Address: 0x230b28 - 0x230cc0
void sub_00230B28_0x230b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230B28_0x230b28");
#endif

    switch (ctx->pc) {
        case 0x230b58u: goto label_230b58;
        case 0x230c18u: goto label_230c18;
        case 0x230c28u: goto label_230c28;
        default: break;
    }

    ctx->pc = 0x230b28u;

    // 0x230b28: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x230b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b2c: 0x10c00030  beqz        $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x230B2Cu;
    {
        const bool branch_taken_0x230b2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x230b2c) {
            ctx->pc = 0x230BF0u;
            goto label_230bf0;
        }
    }
    ctx->pc = 0x230B34u;
    // 0x230b34: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x230b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x230b38: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x230B38u;
    {
        const bool branch_taken_0x230b38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B38u;
        // 0x230b3c: 0x8cc9000c  lw          $t1, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b38) {
            ctx->pc = 0x230B7Cu;
            goto label_230b7c;
        }
    }
    ctx->pc = 0x230B40u;
    // 0x230b40: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x230b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x230b44: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x230B44u;
    {
        const bool branch_taken_0x230b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x230b44) {
            ctx->pc = 0x230B7Cu;
            goto label_230b7c;
        }
    }
    ctx->pc = 0x230B4Cu;
    // 0x230b4c: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x230b4cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x230b50: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x230b50u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x230b54: 0x0  nop
    ctx->pc = 0x230b54u;
    // NOP
label_230b58:
    // 0x230b58: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x230b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b5c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x230b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x230b60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x230b60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b64: 0x0  nop
    ctx->pc = 0x230b64u;
    // NOP
    // 0x230b68: 0x0  nop
    ctx->pc = 0x230b68u;
    // NOP
    // 0x230b6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x230B6Cu;
    {
        const bool branch_taken_0x230b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230b6c) {
            ctx->pc = 0x230B58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230b58;
        }
    }
    ctx->pc = 0x230B74u;
    // 0x230b74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x230B74u;
    {
        const bool branch_taken_0x230b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B74u;
        // 0x230b78: 0x109102d  daddu       $v0, $t0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b74) {
            ctx->pc = 0x230B88u;
            goto label_230b88;
        }
    }
    ctx->pc = 0x230B7Cu;
label_230b7c:
    // 0x230b7c: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x230b7cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x230b80: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x230b80u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x230b84: 0x109102d  daddu       $v0, $t0, $t1
    ctx->pc = 0x230b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 9));
label_230b88:
    // 0x230b88: 0x64e30100  daddiu      $v1, $a3, 0x100
    ctx->pc = 0x230b88u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)256);
    // 0x230b8c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x230b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x230b90: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x230b90u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x230b94: 0x94c20012  lhu         $v0, 0x12($a2)
    ctx->pc = 0x230b94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x230b98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x230b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x230b9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x230B9Cu;
    {
        const bool branch_taken_0x230b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230b9c) {
            ctx->pc = 0x230BB0u;
            goto label_230bb0;
        }
    }
    ctx->pc = 0x230BA4u;
    // 0x230ba4: 0x9cc2002c  lwu         $v0, 0x2C($a2)
    ctx->pc = 0x230ba4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x230ba8: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x230ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x230bac: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x230bacu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_230bb0:
    // 0x230bb0: 0x50a00002  beql        $a1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x230BB0u;
    {
        const bool branch_taken_0x230bb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x230bb0) {
            ctx->pc = 0x230BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230BB0u;
            // 0x230bb4: 0xac860028  sw          $a2, 0x28($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230BBCu;
            goto label_230bbc;
        }
    }
    ctx->pc = 0x230BB8u;
    // 0x230bb8: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x230bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_230bbc:
    // 0x230bbc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x230bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x230bc0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x230BC0u;
    {
        const bool branch_taken_0x230bc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BC0u;
        // 0x230bc4: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230bc0) {
            ctx->pc = 0x230BE8u;
            goto label_230be8;
        }
    }
    ctx->pc = 0x230BC8u;
    // 0x230bc8: 0x94c30012  lhu         $v1, 0x12($a2)
    ctx->pc = 0x230bc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x230bcc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x230bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x230bd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230BD0u;
    {
        const bool branch_taken_0x230bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BD0u;
        // 0x230bd4: 0x3063fffb  andi        $v1, $v1, 0xFFFB (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230bd0) {
            ctx->pc = 0x230BE8u;
            goto label_230be8;
        }
    }
    ctx->pc = 0x230BD8u;
    // 0x230bd8: 0xa4c30012  sh          $v1, 0x12($a2)
    ctx->pc = 0x230bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x230bdc: 0x94a20012  lhu         $v0, 0x12($a1)
    ctx->pc = 0x230bdcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x230be0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x230be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x230be4: 0xa4a20012  sh          $v0, 0x12($a1)
    ctx->pc = 0x230be4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 2));
label_230be8:
    // 0x230be8: 0x808c444  j           func_231110
    ctx->pc = 0x230BE8u;
    ctx->pc = 0x231110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231110u, 0x230BE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x230BF0u;
label_230bf0:
    // 0x230bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x230BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230BF8u;
    // 0x230bf8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x230bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230bfc: 0x10c0002d  beqz        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x230BFCu;
    {
        const bool branch_taken_0x230bfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BFCu;
        // 0x230c00: 0x24880028  addiu       $t0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230bfc) {
            ctx->pc = 0x230CB4u;
            goto label_230cb4;
        }
    }
    ctx->pc = 0x230C04u;
    // 0x230c04: 0x8ccb000c  lw          $t3, 0xC($a2)
    ctx->pc = 0x230c04u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x230c08: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x230c08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x230c0c: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x230c0cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x230c10: 0xdc890010  ld          $t1, 0x10($a0)
    ctx->pc = 0x230c10u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x230c14: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x230c14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_230c18:
    // 0x230c18: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x230c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x230c1c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x230C1Cu;
    {
        const bool branch_taken_0x230c1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C1Cu;
        // 0x230c20: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c1c) {
            ctx->pc = 0x230C48u;
            goto label_230c48;
        }
    }
    ctx->pc = 0x230C24u;
    // 0x230c24: 0x84a30010  lh          $v1, 0x10($a1)
    ctx->pc = 0x230c24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_230c28:
    // 0x230c28: 0x506c0005  beql        $v1, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x230C28u;
    {
        const bool branch_taken_0x230c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        if (branch_taken_0x230c28) {
            ctx->pc = 0x230C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230C28u;
            // 0x230c2c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230C40u;
            goto label_230c40;
        }
    }
    ctx->pc = 0x230C30u;
    // 0x230c30: 0x546a0006  bnel        $v1, $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x230C30u;
    {
        const bool branch_taken_0x230c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x230c30) {
            ctx->pc = 0x230C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230C30u;
            // 0x230c34: 0x4b102d  daddu       $v0, $v0, $t3 (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230C4Cu;
            goto label_230c4c;
        }
    }
    ctx->pc = 0x230C38u;
    // 0x230c38: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x230C38u;
    {
        const bool branch_taken_0x230c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C38u;
        // 0x230c3c: 0x24e80004  addiu       $t0, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c38) {
            ctx->pc = 0x230C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230c18;
        }
    }
    ctx->pc = 0x230C40u;
label_230c40:
    // 0x230c40: 0x54a0fff9  bnel        $a1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x230C40u;
    {
        const bool branch_taken_0x230c40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x230c40) {
            ctx->pc = 0x230C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230C40u;
            // 0x230c44: 0x84a30010  lh          $v1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230C28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230c28;
        }
    }
    ctx->pc = 0x230C48u;
label_230c48:
    // 0x230c48: 0x4b102d  daddu       $v0, $v0, $t3
    ctx->pc = 0x230c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 11));
label_230c4c:
    // 0x230c4c: 0x65230100  daddiu      $v1, $t1, 0x100
    ctx->pc = 0x230c4cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)256);
    // 0x230c50: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x230c50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x230c54: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x230c54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x230c58: 0x94c20012  lhu         $v0, 0x12($a2)
    ctx->pc = 0x230c58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x230c5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x230c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x230c60: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x230C60u;
    {
        const bool branch_taken_0x230c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230c60) {
            ctx->pc = 0x230C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230C60u;
            // 0x230c64: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230C78u;
            goto label_230c78;
        }
    }
    ctx->pc = 0x230C68u;
    // 0x230c68: 0x9cc2002c  lwu         $v0, 0x2C($a2)
    ctx->pc = 0x230c68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x230c6c: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x230c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x230c70: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x230c70u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x230c74: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x230c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_230c78:
    // 0x230c78: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x230c78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x230c7c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x230c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x230c80: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x230c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x230c84: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x230C84u;
    {
        const bool branch_taken_0x230c84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C84u;
        // 0x230c88: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c84) {
            ctx->pc = 0x230CACu;
            goto label_230cac;
        }
    }
    ctx->pc = 0x230C8Cu;
    // 0x230c8c: 0x94c30012  lhu         $v1, 0x12($a2)
    ctx->pc = 0x230c8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x230c90: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x230c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x230c94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230C94u;
    {
        const bool branch_taken_0x230c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C94u;
        // 0x230c98: 0x3063fffb  andi        $v1, $v1, 0xFFFB (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c94) {
            ctx->pc = 0x230CACu;
            goto label_230cac;
        }
    }
    ctx->pc = 0x230C9Cu;
    // 0x230c9c: 0xa4c30012  sh          $v1, 0x12($a2)
    ctx->pc = 0x230c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x230ca0: 0x94a20012  lhu         $v0, 0x12($a1)
    ctx->pc = 0x230ca0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x230ca4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x230ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x230ca8: 0xa4a20012  sh          $v0, 0x12($a1)
    ctx->pc = 0x230ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 2));
label_230cac:
    // 0x230cac: 0x808c444  j           func_231110
    ctx->pc = 0x230CACu;
    ctx->pc = 0x231110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231110u, 0x230CACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x230CB4u;
label_230cb4:
    // 0x230cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x230CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230CBCu;
    // 0x230cbc: 0x0  nop
    ctx->pc = 0x230cbcu;
    // NOP
    if (ctx->pc == 0x230cbcu) { ctx->pc = 0x230cc0u; }
}
