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

// Function: sub_00161A40
// Address: 0x161a40 - 0x161e10
void sub_00161A40_0x161a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161A40_0x161a40");
#endif

    switch (ctx->pc) {
        case 0x161afcu: goto label_161afc;
        case 0x161bfcu: goto label_161bfc;
        case 0x161d60u: goto label_161d60;
        default: break;
    }

    ctx->pc = 0x161a40u;

    // 0x161a40: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x161a40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x161a44: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x161A44u;
    {
        const bool branch_taken_0x161a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161a44) {
            ctx->pc = 0x161A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161A44u;
            // 0x161a48: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161A98u;
            goto label_161a98;
        }
    }
    ctx->pc = 0x161A4Cu;
    // 0x161a4c: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x161a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x161a50: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x161a50u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x161a54: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x161A54u;
    {
        const bool branch_taken_0x161a54 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x161A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A54u;
        // 0x161a58: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a54) {
            ctx->pc = 0x161A68u;
            goto label_161a68;
        }
    }
    ctx->pc = 0x161A5Cu;
    // 0x161a5c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x161A5Cu;
    {
        const bool branch_taken_0x161a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161a5c) {
            ctx->pc = 0x161A68u;
            goto label_161a68;
        }
    }
    ctx->pc = 0x161A64u;
    // 0x161a64: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x161a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_161a68:
    // 0x161a68: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x161A68u;
    {
        const bool branch_taken_0x161a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161a68) {
            ctx->pc = 0x161A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161A68u;
            // 0x161a6c: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161A84u;
            goto label_161a84;
        }
    }
    ctx->pc = 0x161A70u;
    // 0x161a70: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x161a70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x161a74: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x161a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x161a78: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x161a78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x161a7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161A7Cu;
    {
        const bool branch_taken_0x161a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A7Cu;
        // 0x161a80: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a7c) {
            ctx->pc = 0x161A88u;
            goto label_161a88;
        }
    }
    ctx->pc = 0x161A84u;
label_161a84:
    // 0x161a84: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x161a84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_161a88:
    // 0x161a88: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x161a88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x161a8c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x161a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x161a90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161A90u;
    {
        const bool branch_taken_0x161a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A90u;
        // 0x161a94: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a90) {
            ctx->pc = 0x161A9Cu;
            goto label_161a9c;
        }
    }
    ctx->pc = 0x161A98u;
label_161a98:
    // 0x161a98: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x161a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_161a9c:
    // 0x161a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x161A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161AA4u;
    // 0x161aa4: 0x0  nop
    ctx->pc = 0x161aa4u;
    // NOP
    // 0x161aa8: 0x0  nop
    ctx->pc = 0x161aa8u;
    // NOP
    // 0x161aac: 0x0  nop
    ctx->pc = 0x161aacu;
    // NOP
    // 0x161ab0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x161ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x161ab4: 0x84634510  lh          $v1, 0x4510($v1)
    ctx->pc = 0x161ab4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 17680)));
    // 0x161ab8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x161AB8u;
    {
        const bool branch_taken_0x161ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x161ab8) {
            ctx->pc = 0x161AD0u;
            goto label_161ad0;
        }
    }
    ctx->pc = 0x161AC0u;
    // 0x161ac0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x161ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x161ac4: 0x84634508  lh          $v1, 0x4508($v1)
    ctx->pc = 0x161ac4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 17672)));
    // 0x161ac8: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x161AC8u;
    {
        const bool branch_taken_0x161ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161ac8) {
            ctx->pc = 0x161BA0u;
            goto label_161ba0;
        }
    }
    ctx->pc = 0x161AD0u;
label_161ad0:
    // 0x161ad0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x161ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x161ad4: 0x8c636dc0  lw          $v1, 0x6DC0($v1)
    ctx->pc = 0x161ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28096)));
    // 0x161ad8: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x161AD8u;
    {
        const bool branch_taken_0x161ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AD8u;
        // 0x161adc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ad8) {
            ctx->pc = 0x161B68u;
            goto label_161b68;
        }
    }
    ctx->pc = 0x161AE0u;
    // 0x161ae0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x161ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x161ae4: 0x3c09009b  lui         $t1, 0x9B
    ctx->pc = 0x161ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)155 << 16));
    // 0x161ae8: 0x24636bc0  addiu       $v1, $v1, 0x6BC0
    ctx->pc = 0x161ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27584));
    // 0x161aec: 0x3c08009b  lui         $t0, 0x9B
    ctx->pc = 0x161aecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)155 << 16));
    // 0x161af0: 0x3c07009b  lui         $a3, 0x9B
    ctx->pc = 0x161af0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)155 << 16));
    // 0x161af4: 0x3c06009b  lui         $a2, 0x9B
    ctx->pc = 0x161af4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)155 << 16));
    // 0x161af8: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x161af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
label_161afc:
    // 0x161afc: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x161afcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161b00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x161b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x161b04: 0x852a4510  lh          $t2, 0x4510($t1)
    ctx->pc = 0x161b04u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 17680)));
    // 0x161b08: 0x858b0000  lh          $t3, 0x0($t4)
    ctx->pc = 0x161b08u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x161b0c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x161b0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x161b10: 0xa58a0000  sh          $t2, 0x0($t4)
    ctx->pc = 0x161b10u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x161b14: 0x858b0002  lh          $t3, 0x2($t4)
    ctx->pc = 0x161b14u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x161b18: 0x850a4508  lh          $t2, 0x4508($t0)
    ctx->pc = 0x161b18u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 17672)));
    // 0x161b1c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x161b1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x161b20: 0xa58a0002  sh          $t2, 0x2($t4)
    ctx->pc = 0x161b20u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x161b24: 0x858b0012  lh          $t3, 0x12($t4)
    ctx->pc = 0x161b24u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 18)));
    // 0x161b28: 0x84ea4510  lh          $t2, 0x4510($a3)
    ctx->pc = 0x161b28u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 17680)));
    // 0x161b2c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x161b2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x161b30: 0xa58a0012  sh          $t2, 0x12($t4)
    ctx->pc = 0x161b30u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 18), (uint16_t)GPR_U32(ctx, 10));
    // 0x161b34: 0x858b0014  lh          $t3, 0x14($t4)
    ctx->pc = 0x161b34u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x161b38: 0x84ca4508  lh          $t2, 0x4508($a2)
    ctx->pc = 0x161b38u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 17672)));
    // 0x161b3c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x161b3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x161b40: 0xa58a0014  sh          $t2, 0x14($t4)
    ctx->pc = 0x161b40u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 20), (uint16_t)GPR_U32(ctx, 10));
    // 0x161b44: 0x858a0000  lh          $t2, 0x0($t4)
    ctx->pc = 0x161b44u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x161b48: 0xa58a000e  sh          $t2, 0xE($t4)
    ctx->pc = 0x161b48u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 14), (uint16_t)GPR_U32(ctx, 10));
    // 0x161b4c: 0x858a0002  lh          $t2, 0x2($t4)
    ctx->pc = 0x161b4cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x161b50: 0xa58a0010  sh          $t2, 0x10($t4)
    ctx->pc = 0x161b50u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 16), (uint16_t)GPR_U32(ctx, 10));
    // 0x161b54: 0x8caa6dc0  lw          $t2, 0x6DC0($a1)
    ctx->pc = 0x161b54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28096)));
    // 0x161b58: 0x8a502b  sltu        $t2, $a0, $t2
    ctx->pc = 0x161b58u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x161b5c: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x161B5Cu;
    {
        const bool branch_taken_0x161b5c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x161B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B5Cu;
        // 0x161b60: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b5c) {
            ctx->pc = 0x161AFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161afc;
        }
    }
    ctx->pc = 0x161B64u;
    // 0x161b64: 0x0  nop
    ctx->pc = 0x161b64u;
    // NOP
label_161b68:
    // 0x161b68: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x161b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x161b6c: 0x8468db20  lh          $t0, -0x24E0($v1)
    ctx->pc = 0x161b6cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957856)));
    // 0x161b70: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x161b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x161b74: 0x84844508  lh          $a0, 0x4508($a0)
    ctx->pc = 0x161b74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 17672)));
    // 0x161b78: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x161b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x161b7c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x161b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x161b80: 0x84674510  lh          $a3, 0x4510($v1)
    ctx->pc = 0x161b80u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 17680)));
    // 0x161b84: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x161b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x161b88: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x161b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x161b8c: 0x8466db22  lh          $a2, -0x24DE($v1)
    ctx->pc = 0x161b8cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957858)));
    // 0x161b90: 0xa4a7db20  sh          $a3, -0x24E0($a1)
    ctx->pc = 0x161b90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294957856), (uint16_t)GPR_U32(ctx, 7));
    // 0x161b94: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x161b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x161b98: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x161b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x161b9c: 0xa464db22  sh          $a0, -0x24DE($v1)
    ctx->pc = 0x161b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957858), (uint16_t)GPR_U32(ctx, 4));
label_161ba0:
    // 0x161ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x161BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161BA8u;
    // 0x161ba8: 0x0  nop
    ctx->pc = 0x161ba8u;
    // NOP
    // 0x161bac: 0x0  nop
    ctx->pc = 0x161bacu;
    // NOP
    // 0x161bb0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x161bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x161bb4: 0x84634510  lh          $v1, 0x4510($v1)
    ctx->pc = 0x161bb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 17680)));
    // 0x161bb8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x161BB8u;
    {
        const bool branch_taken_0x161bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x161bb8) {
            ctx->pc = 0x161BD0u;
            goto label_161bd0;
        }
    }
    ctx->pc = 0x161BC0u;
    // 0x161bc0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x161bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x161bc4: 0x84634508  lh          $v1, 0x4508($v1)
    ctx->pc = 0x161bc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 17672)));
    // 0x161bc8: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x161BC8u;
    {
        const bool branch_taken_0x161bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161bc8) {
            ctx->pc = 0x161C88u;
            goto label_161c88;
        }
    }
    ctx->pc = 0x161BD0u;
label_161bd0:
    // 0x161bd0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x161bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x161bd4: 0x8c636dc0  lw          $v1, 0x6DC0($v1)
    ctx->pc = 0x161bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28096)));
    // 0x161bd8: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x161BD8u;
    {
        const bool branch_taken_0x161bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BD8u;
        // 0x161bdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161bd8) {
            ctx->pc = 0x161C88u;
            goto label_161c88;
        }
    }
    ctx->pc = 0x161BE0u;
    // 0x161be0: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x161be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x161be4: 0x3c0a009b  lui         $t2, 0x9B
    ctx->pc = 0x161be4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)155 << 16));
    // 0x161be8: 0x24846bc0  addiu       $a0, $a0, 0x6BC0
    ctx->pc = 0x161be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27584));
    // 0x161bec: 0x3c09009b  lui         $t1, 0x9B
    ctx->pc = 0x161becu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)155 << 16));
    // 0x161bf0: 0x3c08009b  lui         $t0, 0x9B
    ctx->pc = 0x161bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)155 << 16));
    // 0x161bf4: 0x3c07009b  lui         $a3, 0x9B
    ctx->pc = 0x161bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)155 << 16));
    // 0x161bf8: 0x3c06009b  lui         $a2, 0x9B
    ctx->pc = 0x161bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)155 << 16));
label_161bfc:
    // 0x161bfc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x161c00: 0x8c6b00dc  lw          $t3, 0xDC($v1)
    ctx->pc = 0x161c00u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x161c04: 0x316b0300  andi        $t3, $t3, 0x300
    ctx->pc = 0x161c04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)768);
    // 0x161c08: 0x15600019  bnez        $t3, . + 4 + (0x19 << 2)
    ctx->pc = 0x161C08u;
    {
        const bool branch_taken_0x161c08 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x161c08) {
            ctx->pc = 0x161C70u;
            goto label_161c70;
        }
    }
    ctx->pc = 0x161C10u;
    // 0x161c10: 0x906b0438  lbu         $t3, 0x438($v1)
    ctx->pc = 0x161c10u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1080)));
    // 0x161c14: 0x316b0080  andi        $t3, $t3, 0x80
    ctx->pc = 0x161c14u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)128);
    // 0x161c18: 0x15600015  bnez        $t3, . + 4 + (0x15 << 2)
    ctx->pc = 0x161C18u;
    {
        const bool branch_taken_0x161c18 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x161c18) {
            ctx->pc = 0x161C70u;
            goto label_161c70;
        }
    }
    ctx->pc = 0x161C20u;
    // 0x161c20: 0x846c0000  lh          $t4, 0x0($v1)
    ctx->pc = 0x161c20u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161c24: 0x854b4510  lh          $t3, 0x4510($t2)
    ctx->pc = 0x161c24u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 17680)));
    // 0x161c28: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x161c28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x161c2c: 0xa46b0000  sh          $t3, 0x0($v1)
    ctx->pc = 0x161c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x161c30: 0x846c0002  lh          $t4, 0x2($v1)
    ctx->pc = 0x161c30u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x161c34: 0x852b4508  lh          $t3, 0x4508($t1)
    ctx->pc = 0x161c34u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 17672)));
    // 0x161c38: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x161c38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x161c3c: 0xa46b0002  sh          $t3, 0x2($v1)
    ctx->pc = 0x161c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 11));
    // 0x161c40: 0x846c0012  lh          $t4, 0x12($v1)
    ctx->pc = 0x161c40u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x161c44: 0x850b4510  lh          $t3, 0x4510($t0)
    ctx->pc = 0x161c44u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 17680)));
    // 0x161c48: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x161c48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x161c4c: 0xa46b0012  sh          $t3, 0x12($v1)
    ctx->pc = 0x161c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 11));
    // 0x161c50: 0x846c0014  lh          $t4, 0x14($v1)
    ctx->pc = 0x161c50u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x161c54: 0x84eb4508  lh          $t3, 0x4508($a3)
    ctx->pc = 0x161c54u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 17672)));
    // 0x161c58: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x161c58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x161c5c: 0xa46b0014  sh          $t3, 0x14($v1)
    ctx->pc = 0x161c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 11));
    // 0x161c60: 0x846b0000  lh          $t3, 0x0($v1)
    ctx->pc = 0x161c60u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161c64: 0xa46b000e  sh          $t3, 0xE($v1)
    ctx->pc = 0x161c64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 11));
    // 0x161c68: 0x846b0002  lh          $t3, 0x2($v1)
    ctx->pc = 0x161c68u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x161c6c: 0xa46b0010  sh          $t3, 0x10($v1)
    ctx->pc = 0x161c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 11));
label_161c70:
    // 0x161c70: 0x8cc36dc0  lw          $v1, 0x6DC0($a2)
    ctx->pc = 0x161c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28096)));
    // 0x161c74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x161c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x161c78: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x161c78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x161c7c: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x161C7Cu;
    {
        const bool branch_taken_0x161c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x161C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C7Cu;
        // 0x161c80: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c7c) {
            ctx->pc = 0x161BFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161bfc;
        }
    }
    ctx->pc = 0x161C84u;
    // 0x161c84: 0x0  nop
    ctx->pc = 0x161c84u;
    // NOP
label_161c88:
    // 0x161c88: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x161c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x161c8c: 0xa4604510  sh          $zero, 0x4510($v1)
    ctx->pc = 0x161c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 17680), (uint16_t)GPR_U32(ctx, 0));
    // 0x161c90: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x161c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x161c94: 0x3e00008  jr          $ra
    ctx->pc = 0x161C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C94u;
        // 0x161c98: 0xa4604508  sh          $zero, 0x4508($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 17672), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161C9Cu;
    // 0x161c9c: 0x0  nop
    ctx->pc = 0x161c9cu;
    // NOP
    // 0x161ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x161CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CA0u;
        // 0x161ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161CA8u;
    // 0x161ca8: 0x0  nop
    ctx->pc = 0x161ca8u;
    // NOP
    // 0x161cac: 0x0  nop
    ctx->pc = 0x161cacu;
    // NOP
    // 0x161cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x161CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CB0u;
        // 0x161cb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161CB8u;
    // 0x161cb8: 0x0  nop
    ctx->pc = 0x161cb8u;
    // NOP
    // 0x161cbc: 0x0  nop
    ctx->pc = 0x161cbcu;
    // NOP
    // 0x161cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x161CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CC0u;
        // 0x161cc4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161CC8u;
    // 0x161cc8: 0x0  nop
    ctx->pc = 0x161cc8u;
    // NOP
    // 0x161ccc: 0x0  nop
    ctx->pc = 0x161cccu;
    // NOP
    // 0x161cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x161CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CD0u;
        // 0x161cd4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161CD8u;
    // 0x161cd8: 0x0  nop
    ctx->pc = 0x161cd8u;
    // NOP
    // 0x161cdc: 0x0  nop
    ctx->pc = 0x161cdcu;
    // NOP
    // 0x161ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x161CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CE0u;
        // 0x161ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161CE8u;
    // 0x161ce8: 0x0  nop
    ctx->pc = 0x161ce8u;
    // NOP
    // 0x161cec: 0x0  nop
    ctx->pc = 0x161cecu;
    // NOP
    // 0x161cf0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x161cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x161cf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161cf8: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x161CF8u;
    {
        const bool branch_taken_0x161cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161cf8) {
            ctx->pc = 0x161CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161CF8u;
            // 0x161cfc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161D24u;
            goto label_161d24;
        }
    }
    ctx->pc = 0x161D00u;
    // 0x161d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161d04: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161D04u;
    {
        const bool branch_taken_0x161d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161d04) {
            ctx->pc = 0x161D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161D04u;
            // 0x161d08: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161D14u;
            goto label_161d14;
        }
    }
    ctx->pc = 0x161D0Cu;
    // 0x161d0c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x161D0Cu;
    {
        const bool branch_taken_0x161d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D0Cu;
        // 0x161d10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d0c) {
            ctx->pc = 0x161D34u;
            goto label_161d34;
        }
    }
    ctx->pc = 0x161D14u;
label_161d14:
    // 0x161d14: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x161d14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x161d18: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x161d18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x161d1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x161D1Cu;
    {
        const bool branch_taken_0x161d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D1Cu;
        // 0x161d20: 0xaca00010  sw          $zero, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d1c) {
            ctx->pc = 0x161D30u;
            goto label_161d30;
        }
    }
    ctx->pc = 0x161D24u;
label_161d24:
    // 0x161d24: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x161d24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x161d28: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x161d28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x161d2c: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x161d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_161d30:
    // 0x161d30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161d34:
    // 0x161d34: 0x3e00008  jr          $ra
    ctx->pc = 0x161D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161D3Cu;
    // 0x161d3c: 0x0  nop
    ctx->pc = 0x161d3cu;
    // NOP
    // 0x161d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x161d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x161d44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x161d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x161d48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161d4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161d50: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x161d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d54: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x161d54u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x161d58: 0xc068160  jal         func_1A0580
    ctx->pc = 0x161D58u;
    SET_GPR_U32(ctx, 31, 0x161D60u);
    ctx->pc = 0x161D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161D58u;
    // 0x161d5c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0580u, 0x161D58u, 0x161D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161D60u;
label_161d60:
    // 0x161d60: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x161d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x161d64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161d68: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161D68u;
    {
        const bool branch_taken_0x161d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161d68) {
            ctx->pc = 0x161D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161D68u;
            // 0x161d6c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x161D90u;
            goto label_161d90;
        }
    }
    ctx->pc = 0x161D70u;
    // 0x161d70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161d74: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161D74u;
    {
        const bool branch_taken_0x161d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161d74) {
            ctx->pc = 0x161D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161D74u;
            // 0x161d78: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x161D84u;
            goto label_161d84;
        }
    }
    ctx->pc = 0x161D7Cu;
    // 0x161d7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x161D7Cu;
    {
        const bool branch_taken_0x161d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D7Cu;
        // 0x161d80: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d7c) {
            ctx->pc = 0x161D9Cu;
            goto label_161d9c;
        }
    }
    ctx->pc = 0x161D84u;
label_161d84:
    // 0x161d84: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x161d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x161d88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x161D88u;
    {
        const bool branch_taken_0x161d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D88u;
        // 0x161d8c: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d88) {
            ctx->pc = 0x161D98u;
            goto label_161d98;
        }
    }
    ctx->pc = 0x161D90u;
label_161d90:
    // 0x161d90: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x161d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x161d94: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x161d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_161d98:
    // 0x161d98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x161d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_161d9c:
    // 0x161d9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161da0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161da8: 0x3e00008  jr          $ra
    ctx->pc = 0x161DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DA8u;
        // 0x161dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161DB0u;
    // 0x161db0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x161db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x161db4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161db8: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x161db8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x161dbc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x161DBCu;
    {
        const bool branch_taken_0x161dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x161DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DBCu;
        // 0x161dc0: 0x84840002  lh          $a0, 0x2($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161dbc) {
            ctx->pc = 0x161DE8u;
            goto label_161de8;
        }
    }
    ctx->pc = 0x161DC4u;
    // 0x161dc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161dc8: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161DC8u;
    {
        const bool branch_taken_0x161dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161dc8) {
            ctx->pc = 0x161DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161DC8u;
            // 0x161dcc: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161DD8u;
            goto label_161dd8;
        }
    }
    ctx->pc = 0x161DD0u;
    // 0x161dd0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x161DD0u;
    {
        const bool branch_taken_0x161dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DD0u;
        // 0x161dd4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161dd0) {
            ctx->pc = 0x161DFCu;
            goto label_161dfc;
        }
    }
    ctx->pc = 0x161DD8u;
label_161dd8:
    // 0x161dd8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x161dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x161ddc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x161ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x161de0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x161DE0u;
    {
        const bool branch_taken_0x161de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DE0u;
        // 0x161de4: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161de0) {
            ctx->pc = 0x161DF8u;
            goto label_161df8;
        }
    }
    ctx->pc = 0x161DE8u;
label_161de8:
    // 0x161de8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x161de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x161dec: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x161decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x161df0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x161df0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x161df4: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x161df4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
label_161df8:
    // 0x161df8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x161df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_161dfc:
    // 0x161dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x161DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161E04u;
    // 0x161e04: 0x0  nop
    ctx->pc = 0x161e04u;
    // NOP
    // 0x161e08: 0x0  nop
    ctx->pc = 0x161e08u;
    // NOP
    // 0x161e0c: 0x0  nop
    ctx->pc = 0x161e0cu;
    // NOP
}
