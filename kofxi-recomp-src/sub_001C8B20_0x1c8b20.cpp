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

// Function: sub_001C8B20
// Address: 0x1c8b20 - 0x1c91d8
void sub_001C8B20_0x1c8b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8B20_0x1c8b20");
#endif

    switch (ctx->pc) {
        case 0x1c8b30u: goto label_1c8b30;
        case 0x1c8b60u: goto label_1c8b60;
        case 0x1c8bc8u: goto label_1c8bc8;
        case 0x1c8db8u: goto label_1c8db8;
        case 0x1c8eb0u: goto label_1c8eb0;
        case 0x1c8f28u: goto label_1c8f28;
        case 0x1c8f30u: goto label_1c8f30;
        case 0x1c8f38u: goto label_1c8f38;
        case 0x1c8f40u: goto label_1c8f40;
        case 0x1c8f48u: goto label_1c8f48;
        case 0x1c8f58u: goto label_1c8f58;
        case 0x1c8f80u: goto label_1c8f80;
        case 0x1c8f98u: goto label_1c8f98;
        case 0x1c8fd0u: goto label_1c8fd0;
        case 0x1c9000u: goto label_1c9000;
        case 0x1c9014u: goto label_1c9014;
        case 0x1c9018u: goto label_1c9018;
        case 0x1c9054u: goto label_1c9054;
        case 0x1c906cu: goto label_1c906c;
        case 0x1c90a4u: goto label_1c90a4;
        case 0x1c90bcu: goto label_1c90bc;
        case 0x1c90c0u: goto label_1c90c0;
        case 0x1c90f0u: goto label_1c90f0;
        case 0x1c9140u: goto label_1c9140;
        case 0x1c9180u: goto label_1c9180;
        case 0x1c91c8u: goto label_1c91c8;
        default: break;
    }

    ctx->pc = 0x1c8b20u;

    // 0x1c8b20: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B20u;
        // 0x1c8b24: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8B28u;
    // 0x1c8b28: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8B28u;
    {
        const bool branch_taken_0x1c8b28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8b28) {
            ctx->pc = 0x1C8B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8B28u;
            // 0x1c8b2c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8B50u;
            goto label_1c8b50;
        }
    }
    ctx->pc = 0x1C8B30u;
label_1c8b30:
    // 0x1c8b30: 0x0  nop
    ctx->pc = 0x1c8b30u;
    // NOP
    // 0x1c8b34: 0x0  nop
    ctx->pc = 0x1c8b34u;
    // NOP
    // 0x1c8b38: 0x0  nop
    ctx->pc = 0x1c8b38u;
    // NOP
    // 0x1c8b3c: 0x0  nop
    ctx->pc = 0x1c8b3cu;
    // NOP
    // 0x1c8b40: 0x0  nop
    ctx->pc = 0x1c8b40u;
    // NOP
    // 0x1c8b44: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C8B44u;
    {
        const bool branch_taken_0x1c8b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8b44) {
            ctx->pc = 0x1C8B30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8b30;
        }
    }
    ctx->pc = 0x1C8B4Cu;
    // 0x1c8b4c: 0x0  nop
    ctx->pc = 0x1c8b4cu;
    // NOP
label_1c8b50:
    // 0x1c8b50: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8B50u;
    {
        const bool branch_taken_0x1c8b50 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1c8b50) {
            ctx->pc = 0x1C8B7Cu;
            goto label_1c8b7c;
        }
    }
    ctx->pc = 0x1C8B58u;
    // 0x1c8b58: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1c8b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1c8b5c: 0x0  nop
    ctx->pc = 0x1c8b5cu;
    // NOP
label_1c8b60:
    // 0x1c8b60: 0x0  nop
    ctx->pc = 0x1c8b60u;
    // NOP
    // 0x1c8b64: 0x0  nop
    ctx->pc = 0x1c8b64u;
    // NOP
    // 0x1c8b68: 0x0  nop
    ctx->pc = 0x1c8b68u;
    // NOP
    // 0x1c8b6c: 0x0  nop
    ctx->pc = 0x1c8b6cu;
    // NOP
    // 0x1c8b70: 0x0  nop
    ctx->pc = 0x1c8b70u;
    // NOP
    // 0x1c8b74: 0x54a0fffa  bnel        $a1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C8B74u;
    {
        const bool branch_taken_0x1c8b74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8b74) {
            ctx->pc = 0x1C8B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8B74u;
            // 0x1c8b78: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8B60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8b60;
        }
    }
    ctx->pc = 0x1C8B7Cu;
label_1c8b7c:
    // 0x1c8b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8B84u;
    // 0x1c8b84: 0x0  nop
    ctx->pc = 0x1c8b84u;
    // NOP
    // 0x1c8b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8b8c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c8b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c8b90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8b94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c8b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b98: 0x262f0010  addiu       $t7, $s1, 0x10
    ctx->pc = 0x1c8b98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1c8b9c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c8b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c8ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8ba4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1c8ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8ba8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c8ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c8bac: 0x24524380  addiu       $s2, $v0, 0x4380
    ctx->pc = 0x1c8bacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    // 0x1c8bb0: 0x24677780  addiu       $a3, $v1, 0x7780
    ctx->pc = 0x1c8bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30592));
    // 0x1c8bb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c8bb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8bb8: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x1c8bb8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8bbc: 0x24190002  addiu       $t9, $zero, 0x2
    ctx->pc = 0x1c8bbcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8bc0: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x1c8bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8bc4: 0x0  nop
    ctx->pc = 0x1c8bc4u;
    // NOP
label_1c8bc8:
    // 0x1c8bc8: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x1c8bc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c8bcc: 0x545000af  bnel        $v0, $s0, . + 4 + (0xAF << 2)
    ctx->pc = 0x1C8BCCu;
    {
        const bool branch_taken_0x1c8bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1c8bcc) {
            ctx->pc = 0x1C8BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8BCCu;
            // 0x1c8bd0: 0x27180001  addiu       $t8, $t8, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E8Cu;
            goto label_1c8e8c;
        }
    }
    ctx->pc = 0x1C8BD4u;
    // 0x1c8bd4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1c8bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c8bd8: 0x514800b0  beql        $t2, $t0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x1C8BD8u;
    {
        const bool branch_taken_0x1c8bd8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x1c8bd8) {
            ctx->pc = 0x1C8BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8BD8u;
            // 0x1c8bdc: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E9Cu;
            goto label_1c8e9c;
        }
    }
    ctx->pc = 0x1C8BE0u;
    // 0x1c8be0: 0x80e3005b  lb          $v1, 0x5B($a3)
    ctx->pc = 0x1c8be0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 91)));
    // 0x1c8be4: 0x80e2005a  lb          $v0, 0x5A($a3)
    ctx->pc = 0x1c8be4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 90)));
    // 0x1c8be8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8BE8u;
    {
        const bool branch_taken_0x1c8be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8BE8u;
        // 0x1c8bec: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8be8) {
            ctx->pc = 0x1C8C14u;
            goto label_1c8c14;
        }
    }
    ctx->pc = 0x1C8BF0u;
    // 0x1c8bf0: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x1c8bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c8bf4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x1c8bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c8bf8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c8bf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c8bfc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1c8bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1c8c00: 0x80e2005b  lb          $v0, 0x5B($a3)
    ctx->pc = 0x1c8c00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 91)));
    // 0x1c8c04: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1c8c04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1c8c08: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1c8c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1c8c0c: 0x90e2005b  lbu         $v0, 0x5B($a3)
    ctx->pc = 0x1c8c0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 91)));
    // 0x1c8c10: 0xa0e2005a  sb          $v0, 0x5A($a3)
    ctx->pc = 0x1c8c10u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 90), (uint8_t)GPR_U32(ctx, 2));
label_1c8c14:
    // 0x1c8c14: 0x114800a0  beq         $t2, $t0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x1C8C14u;
    {
        const bool branch_taken_0x1c8c14 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        ctx->pc = 0x1C8C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C14u;
        // 0x1c8c18: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c14) {
            ctx->pc = 0x1C8E98u;
            goto label_1c8e98;
        }
    }
    ctx->pc = 0x1C8C1Cu;
    // 0x1c8c1c: 0x94e30050  lhu         $v1, 0x50($a3)
    ctx->pc = 0x1c8c1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x1c8c20: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8C20u;
    {
        const bool branch_taken_0x1c8c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c8c20) {
            ctx->pc = 0x1C8C4Cu;
            goto label_1c8c4c;
        }
    }
    ctx->pc = 0x1C8C28u;
    // 0x1c8c28: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x1c8c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c8c2c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c8c2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c8c30: 0xa4d90000  sh          $t9, 0x0($a2)
    ctx->pc = 0x1c8c30u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 25));
    // 0x1c8c34: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1c8c34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1c8c38: 0x80e30050  lb          $v1, 0x50($a3)
    ctx->pc = 0x1c8c38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x1c8c3c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1c8c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1c8c40: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1c8c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1c8c44: 0x90e20050  lbu         $v0, 0x50($a3)
    ctx->pc = 0x1c8c44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x1c8c48: 0xa0e20051  sb          $v0, 0x51($a3)
    ctx->pc = 0x1c8c48u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 81), (uint8_t)GPR_U32(ctx, 2));
label_1c8c4c:
    // 0x1c8c4c: 0x51480093  beql        $t2, $t0, . + 4 + (0x93 << 2)
    ctx->pc = 0x1C8C4Cu;
    {
        const bool branch_taken_0x1c8c4c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x1c8c4c) {
            ctx->pc = 0x1C8C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8C4Cu;
            // 0x1c8c50: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E9Cu;
            goto label_1c8e9c;
        }
    }
    ctx->pc = 0x1C8C54u;
    // 0x1c8c54: 0x80e30054  lb          $v1, 0x54($a3)
    ctx->pc = 0x1c8c54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x1c8c58: 0x80e20055  lb          $v0, 0x55($a3)
    ctx->pc = 0x1c8c58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 85)));
    // 0x1c8c5c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8C5Cu;
    {
        const bool branch_taken_0x1c8c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C5Cu;
        // 0x1c8c60: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c5c) {
            ctx->pc = 0x1C8C88u;
            goto label_1c8c88;
        }
    }
    ctx->pc = 0x1C8C64u;
    // 0x1c8c64: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x1c8c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c8c68: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x1c8c68u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c8c6c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c8c6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c8c70: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1c8c70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1c8c74: 0x80e20054  lb          $v0, 0x54($a3)
    ctx->pc = 0x1c8c74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x1c8c78: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1c8c78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1c8c7c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1c8c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1c8c80: 0x90e20054  lbu         $v0, 0x54($a3)
    ctx->pc = 0x1c8c80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x1c8c84: 0xa0e20055  sb          $v0, 0x55($a3)
    ctx->pc = 0x1c8c84u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 85), (uint8_t)GPR_U32(ctx, 2));
label_1c8c88:
    // 0x1c8c88: 0x51480084  beql        $t2, $t0, . + 4 + (0x84 << 2)
    ctx->pc = 0x1C8C88u;
    {
        const bool branch_taken_0x1c8c88 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x1c8c88) {
            ctx->pc = 0x1C8C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8C88u;
            // 0x1c8c8c: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E9Cu;
            goto label_1c8e9c;
        }
    }
    ctx->pc = 0x1C8C90u;
    // 0x1c8c90: 0x80e30056  lb          $v1, 0x56($a3)
    ctx->pc = 0x1c8c90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x1c8c94: 0x80e20057  lb          $v0, 0x57($a3)
    ctx->pc = 0x1c8c94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 87)));
    // 0x1c8c98: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8C98u;
    {
        const bool branch_taken_0x1c8c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C98u;
        // 0x1c8c9c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c98) {
            ctx->pc = 0x1C8CC4u;
            goto label_1c8cc4;
        }
    }
    ctx->pc = 0x1C8CA0u;
    // 0x1c8ca0: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x1c8ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c8ca4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x1c8ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c8ca8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c8ca8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c8cac: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1c8cacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1c8cb0: 0x80e20056  lb          $v0, 0x56($a3)
    ctx->pc = 0x1c8cb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x1c8cb4: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1c8cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1c8cb8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1c8cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1c8cbc: 0x90e20056  lbu         $v0, 0x56($a3)
    ctx->pc = 0x1c8cbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x1c8cc0: 0xa0e20057  sb          $v0, 0x57($a3)
    ctx->pc = 0x1c8cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 87), (uint8_t)GPR_U32(ctx, 2));
label_1c8cc4:
    // 0x1c8cc4: 0x51480075  beql        $t2, $t0, . + 4 + (0x75 << 2)
    ctx->pc = 0x1C8CC4u;
    {
        const bool branch_taken_0x1c8cc4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x1c8cc4) {
            ctx->pc = 0x1C8CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8CC4u;
            // 0x1c8cc8: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E9Cu;
            goto label_1c8e9c;
        }
    }
    ctx->pc = 0x1C8CCCu;
    // 0x1c8ccc: 0x80e30052  lb          $v1, 0x52($a3)
    ctx->pc = 0x1c8cccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x1c8cd0: 0x80e20053  lb          $v0, 0x53($a3)
    ctx->pc = 0x1c8cd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 83)));
    // 0x1c8cd4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8CD4u;
    {
        const bool branch_taken_0x1c8cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8CD4u;
        // 0x1c8cd8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8cd4) {
            ctx->pc = 0x1C8D00u;
            goto label_1c8d00;
        }
    }
    ctx->pc = 0x1C8CDCu;
    // 0x1c8cdc: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x1c8cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c8ce0: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x1c8ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c8ce4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c8ce4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c8ce8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1c8ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1c8cec: 0x80e20052  lb          $v0, 0x52($a3)
    ctx->pc = 0x1c8cecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x1c8cf0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1c8cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1c8cf4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1c8cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1c8cf8: 0x90e20052  lbu         $v0, 0x52($a3)
    ctx->pc = 0x1c8cf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x1c8cfc: 0xa0e20053  sb          $v0, 0x53($a3)
    ctx->pc = 0x1c8cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 83), (uint8_t)GPR_U32(ctx, 2));
label_1c8d00:
    // 0x1c8d00: 0x51480066  beql        $t2, $t0, . + 4 + (0x66 << 2)
    ctx->pc = 0x1C8D00u;
    {
        const bool branch_taken_0x1c8d00 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x1c8d00) {
            ctx->pc = 0x1C8D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8D00u;
            // 0x1c8d04: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E9Cu;
            goto label_1c8e9c;
        }
    }
    ctx->pc = 0x1C8D08u;
    // 0x1c8d08: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1c8d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1c8d0c: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x1c8d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1c8d10: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8D10u;
    {
        const bool branch_taken_0x1c8d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D10u;
        // 0x1c8d14: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d10) {
            ctx->pc = 0x1C8D38u;
            goto label_1c8d38;
        }
    }
    ctx->pc = 0x1C8D18u;
    // 0x1c8d18: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1c8d18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1c8d1c: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x1c8d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c8d20: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c8d20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c8d24: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1c8d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1c8d28: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x1c8d28u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c8d2c: 0xace30034  sw          $v1, 0x34($a3)
    ctx->pc = 0x1c8d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
    // 0x1c8d30: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1c8d30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1c8d34: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1c8d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1c8d38:
    // 0x1c8d38: 0x51480058  beql        $t2, $t0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1C8D38u;
    {
        const bool branch_taken_0x1c8d38 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x1c8d38) {
            ctx->pc = 0x1C8D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8D38u;
            // 0x1c8d3c: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E9Cu;
            goto label_1c8e9c;
        }
    }
    ctx->pc = 0x1C8D40u;
    // 0x1c8d40: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x1c8d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1c8d44: 0x8ce2003c  lw          $v0, 0x3C($a3)
    ctx->pc = 0x1c8d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1c8d48: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C8D48u;
    {
        const bool branch_taken_0x1c8d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D48u;
        // 0x1c8d4c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d48) {
            ctx->pc = 0x1C8D80u;
            goto label_1c8d80;
        }
    }
    ctx->pc = 0x1C8D50u;
    // 0x1c8d50: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x1c8d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c8d54: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x1c8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1c8d58: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c8d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c8d5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c8d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8d60: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c8d60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c8d64: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1c8d64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x1c8d68: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1c8d68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1c8d6c: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x1c8d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c8d70: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x1c8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1c8d74: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1c8d74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x1c8d78: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1c8d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1c8d7c: 0xace2003c  sw          $v0, 0x3C($a3)
    ctx->pc = 0x1c8d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 2));
label_1c8d80:
    // 0x1c8d80: 0x11480045  beq         $t2, $t0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1C8D80u;
    {
        const bool branch_taken_0x1c8d80 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        ctx->pc = 0x1C8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D80u;
        // 0x1c8d84: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d80) {
            ctx->pc = 0x1C8E98u;
            goto label_1c8e98;
        }
    }
    ctx->pc = 0x1C8D88u;
    // 0x1c8d88: 0x51420044  beql        $t2, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1C8D88u;
    {
        const bool branch_taken_0x1c8d88 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8d88) {
            ctx->pc = 0x1C8D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8D88u;
            // 0x1c8d8c: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E9Cu;
            goto label_1c8e9c;
        }
    }
    ctx->pc = 0x1C8D90u;
    // 0x1c8d90: 0x80e20052  lb          $v0, 0x52($a3)
    ctx->pc = 0x1c8d90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x1c8d94: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1c8d94u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8d98: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C8D98u;
    {
        const bool branch_taken_0x1c8d98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C8D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D98u;
        // 0x1c8d9c: 0x90e90052  lbu         $t1, 0x52($a3) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d98) {
            ctx->pc = 0x1C8E14u;
            goto label_1c8e14;
        }
    }
    ctx->pc = 0x1C8DA0u;
    // 0x1c8da0: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x1c8da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1c8da4: 0x24ed0008  addiu       $t5, $a3, 0x8
    ctx->pc = 0x1c8da4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1c8da8: 0x4f2021  addu        $a0, $v0, $t7
    ctx->pc = 0x1c8da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x1c8dac: 0x240e0009  addiu       $t6, $zero, 0x9
    ctx->pc = 0x1c8dacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c8db0: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x1c8db0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c8db4: 0xeb2821  addu        $a1, $a3, $t3
    ctx->pc = 0x1c8db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_1c8db8:
    // 0x1c8db8: 0x1ab4021  addu        $t0, $t5, $t3
    ctx->pc = 0x1c8db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1c8dbc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1c8dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c8dc0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1c8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c8dc4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C8DC4u;
    {
        const bool branch_taken_0x1c8dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DC4u;
        // 0x1c8dc8: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8dc4) {
            ctx->pc = 0x1C8DFCu;
            goto label_1c8dfc;
        }
    }
    ctx->pc = 0x1C8DCCu;
    // 0x1c8dcc: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x1c8dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x1c8dd0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1c8dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1c8dd4: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x1c8dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c8dd8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c8dd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c8ddc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c8de0: 0xa48e0000  sh          $t6, 0x0($a0)
    ctx->pc = 0x1c8de0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x1c8de4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1c8de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1c8de8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1c8de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1c8dec: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1c8decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1c8df0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c8df4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1c8df4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1c8df8: 0x90e90052  lbu         $t1, 0x52($a3)
    ctx->pc = 0x1c8df8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
label_1c8dfc:
    // 0x1c8dfc: 0x91600  sll         $v0, $t1, 24
    ctx->pc = 0x1c8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x1c8e00: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1c8e00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1c8e04: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1c8e04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1c8e08: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x1c8e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c8e0c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1C8E0Cu;
    {
        const bool branch_taken_0x1c8e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E0Cu;
        // 0x1c8e10: 0xeb2821  addu        $a1, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e0c) {
            ctx->pc = 0x1C8DB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8db8;
        }
    }
    ctx->pc = 0x1C8E14u;
label_1c8e14:
    // 0x1c8e14: 0x8ce3005c  lw          $v1, 0x5C($a3)
    ctx->pc = 0x1c8e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x1c8e18: 0x8ce20060  lw          $v0, 0x60($a3)
    ctx->pc = 0x1c8e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x1c8e1c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8E1Cu;
    {
        const bool branch_taken_0x1c8e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E1Cu;
        // 0x1c8e20: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e1c) {
            ctx->pc = 0x1C8E44u;
            goto label_1c8e44;
        }
    }
    ctx->pc = 0x1C8E24u;
    // 0x1c8e24: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1c8e24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1c8e28: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x1c8e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c8e2c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c8e2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c8e30: 0x8ce3005c  lw          $v1, 0x5C($a3)
    ctx->pc = 0x1c8e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x1c8e34: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x1c8e34u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c8e38: 0xace30060  sw          $v1, 0x60($a3)
    ctx->pc = 0x1c8e38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 3));
    // 0x1c8e3c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1c8e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1c8e40: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1c8e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1c8e44:
    // 0x1c8e44: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1c8e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c8e48: 0x51440014  beql        $t2, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C8E48u;
    {
        const bool branch_taken_0x1c8e48 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x1c8e48) {
            ctx->pc = 0x1C8E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8E48u;
            // 0x1c8e4c: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E9Cu;
            goto label_1c8e9c;
        }
    }
    ctx->pc = 0x1C8E50u;
    // 0x1c8e50: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x1c8e50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x1c8e54: 0x1450000a  bne         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8E54u;
    {
        const bool branch_taken_0x1c8e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1c8e54) {
            ctx->pc = 0x1C8E80u;
            goto label_1c8e80;
        }
    }
    ctx->pc = 0x1C8E5Cu;
    // 0x1c8e5c: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x1c8e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c8e60: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c8e60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c8e64: 0xa4d90000  sh          $t9, 0x0($a2)
    ctx->pc = 0x1c8e64u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 25));
    // 0x1c8e68: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1c8e68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1c8e6c: 0x80e30050  lb          $v1, 0x50($a3)
    ctx->pc = 0x1c8e6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x1c8e70: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1c8e70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1c8e74: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1c8e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1c8e78: 0x90e20050  lbu         $v0, 0x50($a3)
    ctx->pc = 0x1c8e78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x1c8e7c: 0xa0e20051  sb          $v0, 0x51($a3)
    ctx->pc = 0x1c8e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 81), (uint8_t)GPR_U32(ctx, 2));
label_1c8e80:
    // 0x1c8e80: 0x51440006  beql        $t2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8E80u;
    {
        const bool branch_taken_0x1c8e80 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x1c8e80) {
            ctx->pc = 0x1C8E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8E80u;
            // 0x1c8e84: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E9Cu;
            goto label_1c8e9c;
        }
    }
    ctx->pc = 0x1C8E88u;
    // 0x1c8e88: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x1c8e88u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
label_1c8e8c:
    // 0x1c8e8c: 0x2b020010  slti        $v0, $t8, 0x10
    ctx->pc = 0x1c8e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1c8e90: 0x1440ff4d  bnez        $v0, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x1C8E90u;
    {
        const bool branch_taken_0x1c8e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E90u;
        // 0x1c8e94: 0x24e70064  addiu       $a3, $a3, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e90) {
            ctx->pc = 0x1C8BC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8bc8;
        }
    }
    ctx->pc = 0x1C8E98u;
label_1c8e98:
    // 0x1c8e98: 0xae2a0000  sw          $t2, 0x0($s1)
    ctx->pc = 0x1c8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
label_1c8e9c:
    // 0x1c8e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8ea0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8ea4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c8ea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EA8u;
        // 0x1c8eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8EB0u;
label_1c8eb0:
    // 0x1c8eb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c8eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c8eb4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c8eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c8eb8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c8eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c8ebc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c8ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c8ec0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c8ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c8ec4: 0x24424378  addiu       $v0, $v0, 0x4378
    ctx->pc = 0x1c8ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17272));
    // 0x1c8ec8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c8ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c8ecc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c8eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c8ed0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c8ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1c8ed4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1c8ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1c8ed8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1c8ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1c8edc: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1c8edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1c8ee0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c8ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c8ee4: 0x8c645328  lw          $a0, 0x5328($v1)
    ctx->pc = 0x1c8ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21288)));
    // 0x1c8ee8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8eec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c8eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8ef0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8EF0u;
    {
        const bool branch_taken_0x1c8ef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EF0u;
        // 0x1c8ef4: 0x3c170038  lui         $s7, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ef0) {
            ctx->pc = 0x1C8F0Cu;
            goto label_1c8f0c;
        }
    }
    ctx->pc = 0x1C8EF8u;
    // 0x1c8ef8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c8efc: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c8efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
    // 0x1c8f00: 0x18600094  blez        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x1C8F00u;
    {
        const bool branch_taken_0x1c8f00 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F00u;
        // 0x1c8f04: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f00) {
            ctx->pc = 0x1C9154u;
            goto label_1c9154;
        }
    }
    ctx->pc = 0x1C8F08u;
    // 0x1c8f08: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x1c8f08u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
label_1c8f0c:
    // 0x1c8f0c: 0x8ee2536c  lw          $v0, 0x536C($s7)
    ctx->pc = 0x1c8f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 21356)));
    // 0x1c8f10: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x1C8F10u;
    {
        const bool branch_taken_0x1c8f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F10u;
        // 0x1c8f14: 0x26e3536c  addiu       $v1, $s7, 0x536C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 21356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f10) {
            ctx->pc = 0x1C9144u;
            goto label_1c9144;
        }
    }
    ctx->pc = 0x1C8F18u;
    // 0x1c8f18: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1c8f18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1c8f1c: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x1c8f1cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x1c8f20: 0xc073528  jal         func_1CD4A0
    ctx->pc = 0x1C8F20u;
    SET_GPR_U32(ctx, 31, 0x1C8F28u);
    ctx->pc = 0x1C8F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F20u;
    // 0x1c8f24: 0x26107dc8  addiu       $s0, $s0, 0x7DC8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD4A0u, 0x1C8F20u, 0x1C8F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F28u;
label_1c8f28:
    // 0x1c8f28: 0xc0735be  jal         func_1CD6F8
    ctx->pc = 0x1C8F28u;
    SET_GPR_U32(ctx, 31, 0x1C8F30u);
    ctx->pc = 0x1C8F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F28u;
    // 0x1c8f2c: 0x26715374  addiu       $s1, $s3, 0x5374 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 21364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD6F8u, 0x1C8F28u, 0x1C8F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F30u;
label_1c8f30:
    // 0x1c8f30: 0xc070914  jal         func_1C2450
    ctx->pc = 0x1C8F30u;
    SET_GPR_U32(ctx, 31, 0x1C8F38u);
    ctx->pc = 0x1C8F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F30u;
    // 0x1c8f34: 0x3c140038  lui         $s4, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2450u, 0x1C8F30u, 0x1C8F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F38u;
label_1c8f38:
    // 0x1c8f38: 0xc072476  jal         func_1C91D8
    ctx->pc = 0x1C8F38u;
    SET_GPR_U32(ctx, 31, 0x1C8F40u);
    ctx->pc = 0x1C8F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F38u;
    // 0x1c8f3c: 0x3c120038  lui         $s2, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C91D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C91D8u, 0x1C8F38u, 0x1C8F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F40u;
label_1c8f40:
    // 0x1c8f40: 0xc0721b4  jal         func_1C86D0
    ctx->pc = 0x1C8F40u;
    SET_GPR_U32(ctx, 31, 0x1C8F48u);
    ctx->pc = 0x1C86D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C86D0u, 0x1C8F40u, 0x1C8F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F48u;
label_1c8f48:
    // 0x1c8f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f50: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1C8F50u;
    SET_GPR_U32(ctx, 31, 0x1C8F58u);
    ctx->pc = 0x1C8F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F50u;
    // 0x1c8f54: 0x240608d0  addiu       $a2, $zero, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1C8F50u, 0x1C8F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F58u;
label_1c8f58:
    // 0x1c8f58: 0x24040880  addiu       $a0, $zero, 0x880
    ctx->pc = 0x1c8f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2176));
    // 0x1c8f5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c8f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c8f60: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1c8f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c8f64: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1c8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1c8f68: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1c8f68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1c8f6c: 0xae847dc4  sw          $a0, 0x7DC4($s4)
    ctx->pc = 0x1c8f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32196), GPR_U32(ctx, 4));
    // 0x1c8f70: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C8F70u;
    {
        const bool branch_taken_0x1c8f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F70u;
        // 0x1c8f74: 0xae505370  sw          $s0, 0x5370($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 21360), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f70) {
            ctx->pc = 0x1C8FB8u;
            goto label_1c8fb8;
        }
    }
    ctx->pc = 0x1C8F78u;
    // 0x1c8f78: 0xc045448  jal         func_115120
    ctx->pc = 0x1C8F78u;
    SET_GPR_U32(ctx, 31, 0x1C8F80u);
    ctx->pc = 0x1C8F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F78u;
    // 0x1c8f7c: 0x240408d0  addiu       $a0, $zero, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115120u, 0x1C8F78u, 0x1C8F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F80u;
label_1c8f80:
    // 0x1c8f80: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C8F80u;
    {
        const bool branch_taken_0x1c8f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F80u;
        // 0x1c8f84: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f80) {
            ctx->pc = 0x1C8FB8u;
            goto label_1c8fb8;
        }
    }
    ctx->pc = 0x1C8F88u;
    // 0x1c8f88: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c8f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c8f8c: 0x240508d0  addiu       $a1, $zero, 0x8D0
    ctx->pc = 0x1c8f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    // 0x1c8f90: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C8F90u;
    SET_GPR_U32(ctx, 31, 0x1C8F98u);
    ctx->pc = 0x1C8F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F90u;
    // 0x1c8f94: 0x2484b500  addiu       $a0, $a0, -0x4B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C8F90u, 0x1C8F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F98u;
label_1c8f98:
    // 0x1c8f98: 0x0  nop
    ctx->pc = 0x1c8f98u;
    // NOP
    // 0x1c8f9c: 0x0  nop
    ctx->pc = 0x1c8f9cu;
    // NOP
    // 0x1c8fa0: 0x0  nop
    ctx->pc = 0x1c8fa0u;
    // NOP
    // 0x1c8fa4: 0x0  nop
    ctx->pc = 0x1c8fa4u;
    // NOP
    // 0x1c8fa8: 0x0  nop
    ctx->pc = 0x1c8fa8u;
    // NOP
    // 0x1c8fac: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C8FACu;
    {
        const bool branch_taken_0x1c8fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8fac) {
            ctx->pc = 0x1C8F98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8f98;
        }
    }
    ctx->pc = 0x1C8FB4u;
    // 0x1c8fb4: 0x0  nop
    ctx->pc = 0x1c8fb4u;
    // NOP
label_1c8fb8:
    // 0x1c8fb8: 0x26705374  addiu       $s0, $s3, 0x5374
    ctx->pc = 0x1c8fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 21364));
    // 0x1c8fbc: 0x3c16003f  lui         $s6, 0x3F
    ctx->pc = 0x1c8fbcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)63 << 16));
    // 0x1c8fc0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1c8fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8fc4: 0x26c4b3c8  addiu       $a0, $s6, -0x4C38
    ctx->pc = 0x1c8fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947784));
    // 0x1c8fc8: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C8FC8u;
    SET_GPR_U32(ctx, 31, 0x1C8FD0u);
    ctx->pc = 0x1C8FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8FC8u;
    // 0x1c8fcc: 0x240508d0  addiu       $a1, $zero, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C8FC8u, 0x1C8FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8FD0u;
label_1c8fd0:
    // 0x1c8fd0: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x1c8fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x1c8fd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c8fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8fd8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1c8fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1c8fdc: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x1c8fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1c8fe0: 0x8e455370  lw          $a1, 0x5370($s2)
    ctx->pc = 0x1c8fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21360)));
    // 0x1c8fe4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1c8fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1c8fe8: 0x8e877dc4  lw          $a3, 0x7DC4($s4)
    ctx->pc = 0x1c8fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32196)));
    // 0x1c8fec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c8fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c8ff0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c8ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8ff4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c8ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ff8: 0xc070830  jal         func_1C20C0
    ctx->pc = 0x1C8FF8u;
    SET_GPR_U32(ctx, 31, 0x1C9000u);
    ctx->pc = 0x1C8FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8FF8u;
    // 0x1c8ffc: 0xad025378  sw          $v0, 0x5378($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 21368), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20C0u, 0x1C8FF8u, 0x1C9000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9000u;
label_1c9000:
    // 0x1c9000: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C9000u;
    {
        const bool branch_taken_0x1c9000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9000u;
        // 0x1c9004: 0xae027dc0  sw          $v0, 0x7DC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9000) {
            ctx->pc = 0x1C9038u;
            goto label_1c9038;
        }
    }
    ctx->pc = 0x1C9008u;
    // 0x1c9008: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c9008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c900c: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C900Cu;
    SET_GPR_U32(ctx, 31, 0x1C9014u);
    ctx->pc = 0x1C9010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C900Cu;
    // 0x1c9010: 0x2484b548  addiu       $a0, $a0, -0x4AB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C900Cu, 0x1C9014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9014u;
label_1c9014:
    // 0x1c9014: 0x0  nop
    ctx->pc = 0x1c9014u;
    // NOP
label_1c9018:
    // 0x1c9018: 0x0  nop
    ctx->pc = 0x1c9018u;
    // NOP
    // 0x1c901c: 0x0  nop
    ctx->pc = 0x1c901cu;
    // NOP
    // 0x1c9020: 0x0  nop
    ctx->pc = 0x1c9020u;
    // NOP
    // 0x1c9024: 0x0  nop
    ctx->pc = 0x1c9024u;
    // NOP
    // 0x1c9028: 0x0  nop
    ctx->pc = 0x1c9028u;
    // NOP
    // 0x1c902c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C902Cu;
    {
        const bool branch_taken_0x1c902c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c902c) {
            ctx->pc = 0x1C9018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9018;
        }
    }
    ctx->pc = 0x1C9034u;
    // 0x1c9034: 0x0  nop
    ctx->pc = 0x1c9034u;
    // NOP
label_1c9038:
    // 0x1c9038: 0x26107dc0  addiu       $s0, $s0, 0x7DC0
    ctx->pc = 0x1c9038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32192));
    // 0x1c903c: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1c903cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x1c9040: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c9040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9044: 0x24a58b28  addiu       $a1, $a1, -0x74D8
    ctx->pc = 0x1c9044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937384));
    // 0x1c9048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c904c: 0xc0708b0  jal         func_1C22C0
    ctx->pc = 0x1C904Cu;
    SET_GPR_U32(ctx, 31, 0x1C9054u);
    ctx->pc = 0x1C9050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C904Cu;
    // 0x1c9050: 0x3c110038  lui         $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22C0u, 0x1C904Cu, 0x1C9054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9054u;
label_1c9054:
    // 0x1c9054: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1c9054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x1c9058: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c9058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c905c: 0x24a58b88  addiu       $a1, $a1, -0x7478
    ctx->pc = 0x1c905cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937480));
    // 0x1c9060: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9064: 0xc0708b4  jal         func_1C22D0
    ctx->pc = 0x1C9064u;
    SET_GPR_U32(ctx, 31, 0x1C906Cu);
    ctx->pc = 0x1C9068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9064u;
    // 0x1c9068: 0x2634533c  addiu       $s4, $s1, 0x533C (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 21308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22D0u, 0x1C9064u, 0x1C906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C906Cu;
label_1c906c:
    // 0x1c906c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1c906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c9070: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C9070u;
    {
        const bool branch_taken_0x1c9070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9070u;
        // 0x1c9074: 0x3c130038  lui         $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9070) {
            ctx->pc = 0x1C90F8u;
            goto label_1c90f8;
        }
    }
    ctx->pc = 0x1C9078u;
    // 0x1c9078: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c907c: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x1c907cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x1c9080: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
    // 0x1c9084: 0x26b05338  addiu       $s0, $s5, 0x5338
    ctx->pc = 0x1c9084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 21304));
    // 0x1c9088: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1c9088u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c908c: 0x31280  sll         $v0, $v1, 10
    ctx->pc = 0x1c908cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x1c9090: 0xae635344  sw          $v1, 0x5344($s3)
    ctx->pc = 0x1c9090u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 21316), GPR_U32(ctx, 3));
    // 0x1c9094: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1c9094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1c9098: 0x0  nop
    ctx->pc = 0x1c9098u;
    // NOP
    // 0x1c909c: 0xc045448  jal         func_115120
    ctx->pc = 0x1C909Cu;
    SET_GPR_U32(ctx, 31, 0x1C90A4u);
    ctx->pc = 0x1C90A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C909Cu;
    // 0x1c90a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115120u, 0x1C909Cu, 0x1C90A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C90A4u;
label_1c90a4:
    // 0x1c90a4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C90A4u;
    {
        const bool branch_taken_0x1c90a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C90A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90A4u;
        // 0x1c90a8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90a4) {
            ctx->pc = 0x1C90E0u;
            goto label_1c90e0;
        }
    }
    ctx->pc = 0x1C90ACu;
    // 0x1c90ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c90acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c90b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1c90b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c90b4: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C90B4u;
    SET_GPR_U32(ctx, 31, 0x1C90BCu);
    ctx->pc = 0x1C90B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C90B4u;
    // 0x1c90b8: 0x2484b570  addiu       $a0, $a0, -0x4A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C90B4u, 0x1C90BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C90BCu;
label_1c90bc:
    // 0x1c90bc: 0x0  nop
    ctx->pc = 0x1c90bcu;
    // NOP
label_1c90c0:
    // 0x1c90c0: 0x0  nop
    ctx->pc = 0x1c90c0u;
    // NOP
    // 0x1c90c4: 0x0  nop
    ctx->pc = 0x1c90c4u;
    // NOP
    // 0x1c90c8: 0x0  nop
    ctx->pc = 0x1c90c8u;
    // NOP
    // 0x1c90cc: 0x0  nop
    ctx->pc = 0x1c90ccu;
    // NOP
    // 0x1c90d0: 0x0  nop
    ctx->pc = 0x1c90d0u;
    // NOP
    // 0x1c90d4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C90D4u;
    {
        const bool branch_taken_0x1c90d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c90d4) {
            ctx->pc = 0x1C90C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c90c0;
        }
    }
    ctx->pc = 0x1C90DCu;
    // 0x1c90dc: 0x0  nop
    ctx->pc = 0x1c90dcu;
    // NOP
label_1c90e0:
    // 0x1c90e0: 0x8e455338  lw          $a1, 0x5338($s2)
    ctx->pc = 0x1c90e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21304)));
    // 0x1c90e4: 0x26c4b3c8  addiu       $a0, $s6, -0x4C38
    ctx->pc = 0x1c90e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947784));
    // 0x1c90e8: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C90E8u;
    SET_GPR_U32(ctx, 31, 0x1C90F0u);
    ctx->pc = 0x1C90ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C90E8u;
    // 0x1c90ec: 0x8e26533c  lw          $a2, 0x533C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C90E8u, 0x1C90F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C90F0u;
label_1c90f0:
    // 0x1c90f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C90F0u;
    {
        const bool branch_taken_0x1c90f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90F0u;
        // 0x1c90f4: 0x8e22533c  lw          $v0, 0x533C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90f0) {
            ctx->pc = 0x1C9100u;
            goto label_1c9100;
        }
    }
    ctx->pc = 0x1C90F8u;
label_1c90f8:
    // 0x1c90f8: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x1c90f8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x1c90fc: 0x8e22533c  lw          $v0, 0x533C($s1)
    ctx->pc = 0x1c90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21308)));
label_1c9100:
    // 0x1c9100: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x1c9100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1c9104: 0x8e655344  lw          $a1, 0x5344($s3)
    ctx->pc = 0x1c9104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21316)));
    // 0x1c9108: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1c9108u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x1c910c: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x1c910cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1c9110: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c9110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c9114: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c9114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c9118: 0x8ea35338  lw          $v1, 0x5338($s5)
    ctx->pc = 0x1c9118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 21304)));
    // 0x1c911c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c911cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1c9120: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c9120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9124: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c9124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9128: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c912c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c912cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9130: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1c9130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1c9134: 0xad225340  sw          $v0, 0x5340($t1)
    ctx->pc = 0x1c9134u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 21312), GPR_U32(ctx, 2));
    // 0x1c9138: 0xc07096e  jal         func_1C25B8
    ctx->pc = 0x1C9138u;
    SET_GPR_U32(ctx, 31, 0x1C9140u);
    ctx->pc = 0x1C913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9138u;
    // 0x1c913c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25B8u, 0x1C9138u, 0x1C9140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9140u;
label_1c9140:
    // 0x1c9140: 0x26e3536c  addiu       $v1, $s7, 0x536C
    ctx->pc = 0x1c9140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 21356));
label_1c9144:
    // 0x1c9144: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c9144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c9148: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c9148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c914c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c914cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1c9150: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c9150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c9154:
    // 0x1c9154: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c9154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c9158: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c9158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c915c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c915cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c9160: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1c9160u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9164: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1c9164u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c9168: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1c9168u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c916c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1c916cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c9170: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c9170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9174: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9174u;
        // 0x1c9178: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C917Cu;
    // 0x1c917c: 0x0  nop
    ctx->pc = 0x1c917cu;
    // NOP
label_1c9180:
    // 0x1c9180: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c9184: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9188: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
    // 0x1c918c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c918cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9190: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1c9190u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9194: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1c9194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c9198: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9198u;
    {
        const bool branch_taken_0x1c9198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9198u;
        // 0x1c919c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9198) {
            ctx->pc = 0x1C91B0u;
            goto label_1c91b0;
        }
    }
    ctx->pc = 0x1C91A0u;
    // 0x1c91a0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c91a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c91a4: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c91a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
    // 0x1c91a8: 0x58600008  blezl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C91A8u;
    {
        const bool branch_taken_0x1c91a8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c91a8) {
            ctx->pc = 0x1C91ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C91A8u;
            // 0x1c91ac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C91CCu;
            goto label_1c91cc;
        }
    }
    ctx->pc = 0x1C91B0u;
label_1c91b0:
    // 0x1c91b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c91b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c91b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c91b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c91b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c91b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c91bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c91bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c91c0: 0xc07096e  jal         func_1C25B8
    ctx->pc = 0x1C91C0u;
    SET_GPR_U32(ctx, 31, 0x1C91C8u);
    ctx->pc = 0x1C91C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C91C0u;
    // 0x1c91c4: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25B8u, 0x1C91C0u, 0x1C91C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C91C8u;
label_1c91c8:
    // 0x1c91c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c91c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c91cc:
    // 0x1c91cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C91CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91CCu;
        // 0x1c91d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C91CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C91D4u;
    // 0x1c91d4: 0x0  nop
    ctx->pc = 0x1c91d4u;
    // NOP
    if (ctx->pc == 0x1c91d4u) { ctx->pc = 0x1c91d8u; }
}
