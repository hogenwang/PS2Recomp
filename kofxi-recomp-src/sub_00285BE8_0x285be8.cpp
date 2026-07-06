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

// Function: sub_00285BE8
// Address: 0x285be8 - 0x285d20
void sub_00285BE8_0x285be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285BE8_0x285be8");
#endif

    switch (ctx->pc) {
        case 0x285c5cu: goto label_285c5c;
        case 0x285c94u: goto label_285c94;
        case 0x285cb8u: goto label_285cb8;
        case 0x285cd0u: goto label_285cd0;
        case 0x285cf4u: goto label_285cf4;
        default: break;
    }

    ctx->pc = 0x285be8u;

    // 0x285be8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x285be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x285bec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x285becu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285bf0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x285bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x285bf4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x285bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x285bf8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x285bf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285bfc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x285bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x285c00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x285c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x285c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x285c08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x285c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c0c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x285c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x285c10: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x285c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x285c14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x285C14u;
    {
        const bool branch_taken_0x285c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C14u;
        // 0x285c18: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c14) {
            ctx->pc = 0x285C40u;
            goto label_285c40;
        }
    }
    ctx->pc = 0x285C1Cu;
    // 0x285c1c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x285c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x285c20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x285C20u;
    {
        const bool branch_taken_0x285c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C20u;
        // 0x285c24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c20) {
            ctx->pc = 0x285C34u;
            goto label_285c34;
        }
    }
    ctx->pc = 0x285C28u;
    // 0x285c28: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x285c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x285C2Cu;
    {
        const bool branch_taken_0x285c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C2Cu;
        // 0x285c30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c2c) {
            ctx->pc = 0x285C48u;
            goto label_285c48;
        }
    }
    ctx->pc = 0x285C34u;
label_285c34:
    // 0x285c34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285c38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x285C38u;
    {
        const bool branch_taken_0x285c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C38u;
        // 0x285c3c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c38) {
            ctx->pc = 0x285C48u;
            goto label_285c48;
        }
    }
    ctx->pc = 0x285C40u;
label_285c40:
    // 0x285c40: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x285c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x285c44: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x285c44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_285c48:
    // 0x285c48: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x285C48u;
    {
        const bool branch_taken_0x285c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C48u;
        // 0x285c4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c48) {
            ctx->pc = 0x285C6Cu;
            goto label_285c6c;
        }
    }
    ctx->pc = 0x285C50u;
    // 0x285c50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x285c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c54: 0xc0a1630  jal         func_2858C0
    ctx->pc = 0x285C54u;
    SET_GPR_U32(ctx, 31, 0x285C5Cu);
    ctx->pc = 0x285C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285C54u;
    // 0x285c58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2858C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2858C0u, 0x285C54u, 0x285C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C5Cu;
label_285c5c:
    // 0x285c5c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x285C5Cu;
    {
        const bool branch_taken_0x285c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C5Cu;
        // 0x285c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c5c) {
            ctx->pc = 0x285D04u;
            goto label_285d04;
        }
    }
    ctx->pc = 0x285C64u;
    // 0x285c64: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x285C64u;
    {
        const bool branch_taken_0x285c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C64u;
        // 0x285c68: 0xae53000c  sw          $s3, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c64) {
            ctx->pc = 0x285D00u;
            goto label_285d00;
        }
    }
    ctx->pc = 0x285C6Cu;
label_285c6c:
    // 0x285c6c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x285c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x285c70: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x285c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x285c74: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x285c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x285c78: 0xa2202a  slt         $a0, $a1, $v0
    ctx->pc = 0x285c78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x285c7c: 0x44280b  movn        $a1, $v0, $a0
    ctx->pc = 0x285c7cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x285c80: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x285c80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x285c84: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x285C84u;
    {
        const bool branch_taken_0x285c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285c84) {
            ctx->pc = 0x285CA4u;
            goto label_285ca4;
        }
    }
    ctx->pc = 0x285C8Cu;
    // 0x285c8c: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x285C8Cu;
    SET_GPR_U32(ctx, 31, 0x285C94u);
    ctx->pc = 0x285C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285C8Cu;
    // 0x285c90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x285C8Cu, 0x285C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C94u;
label_285c94:
    // 0x285c94: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x285C94u;
    {
        const bool branch_taken_0x285c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285c94) {
            ctx->pc = 0x285C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285C94u;
            // 0x285c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285CB0u;
            goto label_285cb0;
        }
    }
    ctx->pc = 0x285C9Cu;
    // 0x285c9c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x285C9Cu;
    {
        const bool branch_taken_0x285c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C9Cu;
        // 0x285ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c9c) {
            ctx->pc = 0x285D04u;
            goto label_285d04;
        }
    }
    ctx->pc = 0x285CA4u;
label_285ca4:
    // 0x285ca4: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x285CA4u;
    {
        const bool branch_taken_0x285ca4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x285CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CA4u;
        // 0x285ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ca4) {
            ctx->pc = 0x285D04u;
            goto label_285d04;
        }
    }
    ctx->pc = 0x285CACu;
    // 0x285cac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285cb0:
    // 0x285cb0: 0xc0a1c04  jal         func_287010
    ctx->pc = 0x285CB0u;
    SET_GPR_U32(ctx, 31, 0x285CB8u);
    ctx->pc = 0x285CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285CB0u;
    // 0x285cb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287010u, 0x285CB0u, 0x285CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285CB8u;
label_285cb8:
    // 0x285cb8: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x285CB8u;
    {
        const bool branch_taken_0x285cb8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x285CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CB8u;
        // 0x285cbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285cb8) {
            ctx->pc = 0x285CE8u;
            goto label_285ce8;
        }
    }
    ctx->pc = 0x285CC0u;
    // 0x285cc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x285cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285cc4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x285cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285cc8: 0xc0a168c  jal         func_285A30
    ctx->pc = 0x285CC8u;
    SET_GPR_U32(ctx, 31, 0x285CD0u);
    ctx->pc = 0x285CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285CC8u;
    // 0x285ccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285A30u, 0x285CC8u, 0x285CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285CD0u;
label_285cd0:
    // 0x285cd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285CD0u;
    {
        const bool branch_taken_0x285cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CD0u;
        // 0x285cd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285cd0) {
            ctx->pc = 0x285CE0u;
            goto label_285ce0;
        }
    }
    ctx->pc = 0x285CD8u;
    // 0x285cd8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x285CD8u;
    {
        const bool branch_taken_0x285cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CD8u;
        // 0x285cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285cd8) {
            ctx->pc = 0x285D04u;
            goto label_285d04;
        }
    }
    ctx->pc = 0x285CE0u;
label_285ce0:
    // 0x285ce0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x285CE0u;
    {
        const bool branch_taken_0x285ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CE0u;
        // 0x285ce4: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ce0) {
            ctx->pc = 0x285D00u;
            goto label_285d00;
        }
    }
    ctx->pc = 0x285CE8u;
label_285ce8:
    // 0x285ce8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x285ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285cec: 0xc0a168c  jal         func_285A30
    ctx->pc = 0x285CECu;
    SET_GPR_U32(ctx, 31, 0x285CF4u);
    ctx->pc = 0x285CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285CECu;
    // 0x285cf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285A30u, 0x285CECu, 0x285CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285CF4u;
label_285cf4:
    // 0x285cf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285CF4u;
    {
        const bool branch_taken_0x285cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CF4u;
        // 0x285cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285cf4) {
            ctx->pc = 0x285D04u;
            goto label_285d04;
        }
    }
    ctx->pc = 0x285CFCu;
    // 0x285cfc: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x285cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_285d00:
    // 0x285d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285d04:
    // 0x285d04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x285d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285d08: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x285d08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285d0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x285d0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285d10: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x285d10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285d14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x285d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285d18: 0x3e00008  jr          $ra
    ctx->pc = 0x285D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D18u;
        // 0x285d1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285D20u;
}
