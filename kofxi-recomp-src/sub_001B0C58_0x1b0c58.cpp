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

// Function: sub_001B0C58
// Address: 0x1b0c58 - 0x1b0d20
void sub_001B0C58_0x1b0c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0C58_0x1b0c58");
#endif

    switch (ctx->pc) {
        case 0x1b0c84u: goto label_1b0c84;
        case 0x1b0c98u: goto label_1b0c98;
        case 0x1b0cd4u: goto label_1b0cd4;
        case 0x1b0ce8u: goto label_1b0ce8;
        case 0x1b0d04u: goto label_1b0d04;
        default: break;
    }

    ctx->pc = 0x1b0c58u;

    // 0x1b0c58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0c5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0c64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b0c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c6c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1b0c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0c70: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1b0c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b0c74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0c78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b0c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b0c7c: 0xc06bb22  jal         func_1AEC88
    ctx->pc = 0x1B0C7Cu;
    SET_GPR_U32(ctx, 31, 0x1B0C84u);
    ctx->pc = 0x1B0C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C7Cu;
    // 0x1b0c80: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEC88u, 0x1B0C7Cu, 0x1B0C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C84u;
label_1b0c84:
    // 0x1b0c84: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b0c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b0c88: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0C88u;
    {
        const bool branch_taken_0x1b0c88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C88u;
        // 0x1b0c8c: 0x248478a0  addiu       $a0, $a0, 0x78A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c88) {
            ctx->pc = 0x1B0CA0u;
            goto label_1b0ca0;
        }
    }
    ctx->pc = 0x1B0C90u;
    // 0x1b0c90: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B0C90u;
    SET_GPR_U32(ctx, 31, 0x1B0C98u);
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1B0C90u, 0x1B0C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C98u;
label_1b0c98:
    // 0x1b0c98: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1B0C98u;
    {
        const bool branch_taken_0x1b0c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C98u;
        // 0x1b0c9c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c98) {
            ctx->pc = 0x1B0D08u;
            goto label_1b0d08;
        }
    }
    ctx->pc = 0x1B0CA0u;
label_1b0ca0:
    // 0x1b0ca0: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x1b0ca0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b0ca4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b0ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0ca8: 0x10710016  beq         $v1, $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B0CA8u;
    {
        const bool branch_taken_0x1b0ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CA8u;
        // 0x1b0cac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ca8) {
            ctx->pc = 0x1B0D04u;
            goto label_1b0d04;
        }
    }
    ctx->pc = 0x1B0CB0u;
    // 0x1b0cb0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0CB0u;
    {
        const bool branch_taken_0x1b0cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0cb0) {
            ctx->pc = 0x1B0CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0CB0u;
            // 0x1b0cb4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0CC0u;
            goto label_1b0cc0;
        }
    }
    ctx->pc = 0x1B0CB8u;
    // 0x1b0cb8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B0CB8u;
    {
        const bool branch_taken_0x1b0cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CB8u;
        // 0x1b0cbc: 0xa2110001  sb          $s1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0cb8) {
            ctx->pc = 0x1B0D04u;
            goto label_1b0d04;
        }
    }
    ctx->pc = 0x1B0CC0u;
label_1b0cc0:
    // 0x1b0cc0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0CC0u;
    {
        const bool branch_taken_0x1b0cc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0cc0) {
            ctx->pc = 0x1B0CE0u;
            goto label_1b0ce0;
        }
    }
    ctx->pc = 0x1B0CC8u;
    // 0x1b0cc8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b0cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b0ccc: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B0CCCu;
    SET_GPR_U32(ctx, 31, 0x1B0CD4u);
    ctx->pc = 0x1B0CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0CCCu;
    // 0x1b0cd0: 0x248478c8  addiu       $a0, $a0, 0x78C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1B0CCCu, 0x1B0CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CD4u;
label_1b0cd4:
    // 0x1b0cd4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B0CD4u;
    {
        const bool branch_taken_0x1b0cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CD4u;
        // 0x1b0cd8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0cd4) {
            ctx->pc = 0x1B0D08u;
            goto label_1b0d08;
        }
    }
    ctx->pc = 0x1B0CDCu;
    // 0x1b0cdc: 0x0  nop
    ctx->pc = 0x1b0cdcu;
    // NOP
label_1b0ce0:
    // 0x1b0ce0: 0xc06dba6  jal         func_1B6E98
    ctx->pc = 0x1B0CE0u;
    SET_GPR_U32(ctx, 31, 0x1B0CE8u);
    ctx->pc = 0x1B6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E98u, 0x1B0CE0u, 0x1B0CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CE8u;
label_1b0ce8:
    // 0x1b0ce8: 0xa2110003  sb          $s1, 0x3($s0)
    ctx->pc = 0x1b0ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x1b0cec: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1b0cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b0cf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0cf4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b0cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cf8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1b0cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0cfc: 0xc06bb22  jal         func_1AEC88
    ctx->pc = 0x1B0CFCu;
    SET_GPR_U32(ctx, 31, 0x1B0D04u);
    ctx->pc = 0x1B0D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0CFCu;
    // 0x1b0d00: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEC88u, 0x1B0CFCu, 0x1B0D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D04u;
label_1b0d04:
    // 0x1b0d04: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1b0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b0d08:
    // 0x1b0d08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0d08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0d0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0d10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0d14: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D14u;
        // 0x1b0d18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0D1Cu;
    // 0x1b0d1c: 0x0  nop
    ctx->pc = 0x1b0d1cu;
    // NOP
}
