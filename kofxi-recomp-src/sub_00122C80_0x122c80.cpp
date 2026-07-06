#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00122C80
// Address: 0x122c80 - 0x122d78
void sub_00122C80_0x122c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122C80_0x122c80");
#endif

    switch (ctx->pc) {
        case 0x122cd4u: goto label_122cd4;
        case 0x122cdcu: goto label_122cdc;
        case 0x122cf4u: goto label_122cf4;
        case 0x122d0cu: goto label_122d0c;
        case 0x122d44u: goto label_122d44;
        default: break;
    }

    ctx->pc = 0x122c80u;

    // 0x122c80: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x122c80u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122c84: 0x2d8f0002  sltiu       $t7, $t4, 0x2
    ctx->pc = 0x122c84u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x122c88: 0x15e00039  bnez        $t7, . + 4 + (0x39 << 2)
    ctx->pc = 0x122C88u;
    {
        const bool branch_taken_0x122c88 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122C88u;
            // 0x122c8c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c88) {
            ctx->pc = 0x122D70u;
            goto label_122d70;
        }
    }
    ctx->pc = 0x122C90u;
    // 0x122c90: 0x8cab0000  lw          $t3, 0x0($a1)
    ctx->pc = 0x122c90u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122c94: 0x2d6f0002  sltiu       $t7, $t3, 0x2
    ctx->pc = 0x122c94u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x122c98: 0x15e00035  bnez        $t7, . + 4 + (0x35 << 2)
    ctx->pc = 0x122C98u;
    {
        const bool branch_taken_0x122c98 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122C98u;
            // 0x122c9c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c98) {
            ctx->pc = 0x122D70u;
            goto label_122d70;
        }
    }
    ctx->pc = 0x122CA0u;
    // 0x122ca0: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x122ca0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x122ca4: 0x398d0004  xori        $t5, $t4, 0x4
    ctx->pc = 0x122ca4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)4);
    // 0x122ca8: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x122ca8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x122cac: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x122cacu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
    // 0x122cb0: 0x11a00004  beqz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x122CB0u;
    {
        const bool branch_taken_0x122cb0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x122CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122CB0u;
            // 0x122cb4: 0xac8f0004  sw          $t7, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122cb0) {
            ctx->pc = 0x122CC4u;
            goto label_122cc4;
        }
    }
    ctx->pc = 0x122CB8u;
    // 0x122cb8: 0x398f0002  xori        $t7, $t4, 0x2
    ctx->pc = 0x122cb8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)2);
    // 0x122cbc: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x122CBCu;
    {
        const bool branch_taken_0x122cbc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122CBCu;
            // 0x122cc0: 0x396f0004  xori        $t7, $t3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122cbc) {
            ctx->pc = 0x122CDCu;
            goto label_122cdc;
        }
    }
    ctx->pc = 0x122CC4u;
label_122cc4:
    // 0x122cc4: 0x158b0003  bne         $t4, $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x122CC4u;
    {
        const bool branch_taken_0x122cc4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 11));
        ctx->pc = 0x122CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122CC4u;
            // 0x122cc8: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122cc4) {
            ctx->pc = 0x122CD4u;
            goto label_122cd4;
        }
    }
    ctx->pc = 0x122CCCu;
    // 0x122ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x122CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122CCCu;
            // 0x122cd0: 0x25e2b730  addiu       $v0, $t7, -0x48D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x122CD4u;
label_122cd4:
    // 0x122cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x122CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122CD4u;
            // 0x122cd8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x122CDCu;
label_122cdc:
    // 0x122cdc: 0x55e00005  bnel        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x122CDCu;
    {
        const bool branch_taken_0x122cdc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x122cdc) {
            ctx->pc = 0x122CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x122CDCu;
            // 0x122ce0: 0x396f0002  xori        $t7, $t3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x122CF4u;
            goto label_122cf4;
        }
    }
    ctx->pc = 0x122CE4u;
    // 0x122ce4: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x122ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x122ce8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x122ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122cec: 0x3e00008  jr          $ra
    ctx->pc = 0x122CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122CECu;
            // 0x122cf0: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x122CF4u;
label_122cf4:
    // 0x122cf4: 0x55e00005  bnel        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x122CF4u;
    {
        const bool branch_taken_0x122cf4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x122cf4) {
            ctx->pc = 0x122CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x122CF4u;
            // 0x122cf8: 0x8caf0008  lw          $t7, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x122D0Cu;
            goto label_122d0c;
        }
    }
    ctx->pc = 0x122CFCu;
    // 0x122cfc: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x122cfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x122d00: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x122d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d04: 0x3e00008  jr          $ra
    ctx->pc = 0x122D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122D04u;
            // 0x122d08: 0xac8f0000  sw          $t7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x122D0Cu;
label_122d0c:
    // 0x122d0c: 0x8c8e0008  lw          $t6, 0x8($a0)
    ctx->pc = 0x122d0cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x122d10: 0xdca50010  ld          $a1, 0x10($a1)
    ctx->pc = 0x122d10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x122d14: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x122d14u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x122d18: 0xdc8d0010  ld          $t5, 0x10($a0)
    ctx->pc = 0x122d18u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x122d1c: 0x1a5782b  sltu        $t7, $t5, $a1
    ctx->pc = 0x122d1cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x122d20: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x122D20u;
    {
        const bool branch_taken_0x122d20 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122D20u;
            // 0x122d24: 0xac8e0008  sw          $t6, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d20) {
            ctx->pc = 0x122D38u;
            goto label_122d38;
        }
    }
    ctx->pc = 0x122D28u;
    // 0x122d28: 0x25cfffff  addiu       $t7, $t6, -0x1
    ctx->pc = 0x122d28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x122d2c: 0xd6878  dsll        $t5, $t5, 1
    ctx->pc = 0x122d2cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 1);
    // 0x122d30: 0xac8f0008  sw          $t7, 0x8($a0)
    ctx->pc = 0x122d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 15));
    // 0x122d34: 0x1a5782b  sltu        $t7, $t5, $a1
    ctx->pc = 0x122d34u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_122d38:
    // 0x122d38: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x122d38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122d3c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x122d3cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d40: 0xe773c  dsll32      $t6, $t6, 28
    ctx->pc = 0x122d40u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 28));
label_122d44:
    // 0x122d44: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x122D44u;
    {
        const bool branch_taken_0x122d44 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x122d44) {
            ctx->pc = 0x122D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x122D44u;
            // 0x122d48: 0xd7878  dsll        $t7, $t5, 1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) << 1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x122D58u;
            goto label_122d58;
        }
    }
    ctx->pc = 0x122D4Cu;
    // 0x122d4c: 0x1a5682f  dsubu       $t5, $t5, $a1
    ctx->pc = 0x122d4cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) - GPR_U64(ctx, 5));
    // 0x122d50: 0x18e6025  or          $t4, $t4, $t6
    ctx->pc = 0x122d50u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 14));
    // 0x122d54: 0xd7878  dsll        $t7, $t5, 1
    ctx->pc = 0x122d54u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) << 1);
label_122d58:
    // 0x122d58: 0xe707a  dsrl        $t6, $t6, 1
    ctx->pc = 0x122d58u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 1);
    // 0x122d5c: 0x1e0682d  daddu       $t5, $t7, $zero
    ctx->pc = 0x122d5cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d60: 0x15c0fff8  bnez        $t6, . + 4 + (-0x8 << 2)
    ctx->pc = 0x122D60u;
    {
        const bool branch_taken_0x122d60 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x122D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122D60u;
            // 0x122d64: 0x1e5782b  sltu        $t7, $t7, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d60) {
            ctx->pc = 0x122D44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122d44;
        }
    }
    ctx->pc = 0x122D68u;
    // 0x122d68: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x122d68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
    // 0x122d6c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x122d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_122d70:
    // 0x122d70: 0x3e00008  jr          $ra
    ctx->pc = 0x122D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x122D78u;
    ctx->pc = 0x122d78u;
}
