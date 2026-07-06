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

// Function: sub_002F6D58
// Address: 0x2f6d58 - 0x2f7040
void sub_002F6D58_0x2f6d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6D58_0x2f6d58");
#endif

    switch (ctx->pc) {
        case 0x2f6d88u: goto label_2f6d88;
        case 0x2f6d90u: goto label_2f6d90;
        case 0x2f6dd4u: goto label_2f6dd4;
        case 0x2f6de4u: goto label_2f6de4;
        case 0x2f6e18u: goto label_2f6e18;
        case 0x2f6e2cu: goto label_2f6e2c;
        case 0x2f6e38u: goto label_2f6e38;
        case 0x2f6e78u: goto label_2f6e78;
        case 0x2f6e98u: goto label_2f6e98;
        case 0x2f6ea0u: goto label_2f6ea0;
        case 0x2f6eacu: goto label_2f6eac;
        case 0x2f6ec0u: goto label_2f6ec0;
        case 0x2f6ef0u: goto label_2f6ef0;
        case 0x2f6f14u: goto label_2f6f14;
        case 0x2f6f30u: goto label_2f6f30;
        case 0x2f6f40u: goto label_2f6f40;
        case 0x2f6f60u: goto label_2f6f60;
        case 0x2f6f68u: goto label_2f6f68;
        case 0x2f6f70u: goto label_2f6f70;
        case 0x2f6fd8u: goto label_2f6fd8;
        case 0x2f701cu: goto label_2f701c;
        case 0x2f702cu: goto label_2f702c;
        default: break;
    }

    ctx->pc = 0x2f6d58u;

label_2f6d58:
    // 0x2f6d58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f6d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f6d5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f6d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f6d60: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f6d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f6d64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d68: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f6d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f6d6c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f6d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f6d70: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f6d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f6d74: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6D74u;
    {
        const bool branch_taken_0x2f6d74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D74u;
        // 0x2f6d78: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d74) {
            ctx->pc = 0x2F6D88u;
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6D7Cu;
    // 0x2f6d7c: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x2f6d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2f6d80: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6D80u;
    {
        const bool branch_taken_0x2f6d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6d80) {
            ctx->pc = 0x2F6D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6D80u;
            // 0x2f6d84: 0x8e120090  lw          $s2, 0x90($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6D98u;
            goto label_2f6d98;
        }
    }
    ctx->pc = 0x2F6D88u;
label_2f6d88:
    // 0x2f6d88: 0x2402fc14  addiu       $v0, $zero, -0x3EC
    ctx->pc = 0x2f6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
    // 0x2f6d8c: 0x0  nop
    ctx->pc = 0x2f6d8cu;
    // NOP
label_2f6d90:
    // 0x2f6d90: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x2F6D90u;
    {
        const bool branch_taken_0x2f6d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D90u;
        // 0x2f6d94: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d90) {
            ctx->pc = 0x2F6FE4u;
            goto label_2f6fe4;
        }
    }
    ctx->pc = 0x2F6D98u;
label_2f6d98:
    // 0x2f6d98: 0x52900a  movz        $s2, $v0, $s2
    ctx->pc = 0x2f6d98u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x2f6d9c: 0x0  nop
    ctx->pc = 0x2f6d9cu;
    // NOP
    // 0x2f6da0: 0x0  nop
    ctx->pc = 0x2f6da0u;
    // NOP
    // 0x2f6da4: 0x0  nop
    ctx->pc = 0x2f6da4u;
    // NOP
    // 0x2f6da8: 0x0  nop
    ctx->pc = 0x2f6da8u;
    // NOP
    // 0x2f6dac: 0x1240fff6  beqz        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x2F6DACu;
    {
        const bool branch_taken_0x2f6dac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DACu;
        // 0x2f6db0: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6dac) {
            ctx->pc = 0x2F6D88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6DB4u;
    // 0x2f6db4: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x2f6db4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2f6db8: 0x1220fff5  beqz        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2F6DB8u;
    {
        const bool branch_taken_0x2f6db8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DB8u;
        // 0x2f6dbc: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6db8) {
            ctx->pc = 0x2F6D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6d90;
        }
    }
    ctx->pc = 0x2F6DC0u;
    // 0x2f6dc0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2f6dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2f6dc4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2F6DC4u;
    {
        const bool branch_taken_0x2f6dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DC4u;
        // 0x2f6dc8: 0x2402fc0d  addiu       $v0, $zero, -0x3F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6dc4) {
            ctx->pc = 0x2F6D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6d90;
        }
    }
    ctx->pc = 0x2F6DCCu;
    // 0x2f6dcc: 0xc0bf146  jal         func_2FC518
    ctx->pc = 0x2F6DCCu;
    SET_GPR_U32(ctx, 31, 0x2F6DD4u);
    ctx->pc = 0x2F6DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6DCCu;
    // 0x2f6dd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC518u, 0x2F6DCCu, 0x2F6DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DD4u;
label_2f6dd4:
    // 0x2f6dd4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2F6DD4u;
    {
        const bool branch_taken_0x2f6dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DD4u;
        // 0x2f6dd8: 0x2402fc08  addiu       $v0, $zero, -0x3F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6dd4) {
            ctx->pc = 0x2F6D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6d90;
        }
    }
    ctx->pc = 0x2F6DDCu;
    // 0x2f6ddc: 0xc0bf160  jal         func_2FC580
    ctx->pc = 0x2F6DDCu;
    SET_GPR_U32(ctx, 31, 0x2F6DE4u);
    ctx->pc = 0x2F6DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6DDCu;
    // 0x2f6de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC580u, 0x2F6DDCu, 0x2F6DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DE4u;
label_2f6de4:
    // 0x2f6de4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f6de4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6de8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f6dec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f6decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f6df0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6DF0u;
    {
        const bool branch_taken_0x2f6df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DF0u;
        // 0x2f6df4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6df0) {
            ctx->pc = 0x2F6E08u;
            goto label_2f6e08;
        }
    }
    ctx->pc = 0x2F6DF8u;
    // 0x2f6df8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2f6df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2f6dfc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2F6DFCu;
    {
        const bool branch_taken_0x2f6dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DFCu;
        // 0x2f6e00: 0xa3a20001  sb          $v0, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6dfc) {
            ctx->pc = 0x2F6E78u;
            goto label_2f6e78;
        }
    }
    ctx->pc = 0x2F6E04u;
    // 0x2f6e04: 0x0  nop
    ctx->pc = 0x2f6e04u;
    // NOP
label_2f6e08:
    // 0x2f6e08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f6e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f6e0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e10: 0xc0bf158  jal         func_2FC560
    ctx->pc = 0x2F6E10u;
    SET_GPR_U32(ctx, 31, 0x2F6E18u);
    ctx->pc = 0x2F6E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6E10u;
    // 0x2f6e14: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC560u, 0x2F6E10u, 0x2F6E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E18u;
label_2f6e18:
    // 0x2f6e18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f6e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e1c: 0x14a0000e  bnez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2F6E1Cu;
    {
        const bool branch_taken_0x2f6e1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E1Cu;
        // 0x2f6e20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6e1c) {
            ctx->pc = 0x2F6E58u;
            goto label_2f6e58;
        }
    }
    ctx->pc = 0x2F6E24u;
    // 0x2f6e24: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x2F6E24u;
    SET_GPR_U32(ctx, 31, 0x2F6E2Cu);
    ctx->pc = 0x2F6E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6E24u;
    // 0x2f6e28: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x2F6E24u, 0x2F6E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E2Cu;
label_2f6e2c:
    // 0x2f6e2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f6e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6e30: 0xc0bf124  jal         func_2FC490
    ctx->pc = 0x2F6E30u;
    SET_GPR_U32(ctx, 31, 0x2F6E38u);
    ctx->pc = 0x2F6E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6E30u;
    // 0x2f6e34: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC490u, 0x2F6E30u, 0x2F6E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E38u;
label_2f6e38:
    // 0x2f6e38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6e3c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2f6e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2f6e40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6E40u;
    {
        const bool branch_taken_0x2f6e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E40u;
        // 0x2f6e44: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6e40) {
            ctx->pc = 0x2F6E50u;
            goto label_2f6e50;
        }
    }
    ctx->pc = 0x2F6E48u;
    // 0x2f6e48: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x2F6E48u;
    {
        const bool branch_taken_0x2f6e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E48u;
        // 0x2f6e4c: 0x2402fc0d  addiu       $v0, $zero, -0x3F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6e48) {
            ctx->pc = 0x2F6D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6d90;
        }
    }
    ctx->pc = 0x2F6E50u;
label_2f6e50:
    // 0x2f6e50: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x2F6E50u;
    {
        const bool branch_taken_0x2f6e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E50u;
        // 0x2f6e54: 0x2402fc12  addiu       $v0, $zero, -0x3EE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6e50) {
            ctx->pc = 0x2F6D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6d90;
        }
    }
    ctx->pc = 0x2F6E58u;
label_2f6e58:
    // 0x2f6e58: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2f6e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2f6e5c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2f6e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2f6e60: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x2f6e60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2f6e64: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x2f6e64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f6e68: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2f6e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2f6e6c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x2f6e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2f6e70: 0xc049c48  jal         func_127120
    ctx->pc = 0x2F6E70u;
    SET_GPR_U32(ctx, 31, 0x2F6E78u);
    ctx->pc = 0x2F6E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6E70u;
    // 0x2f6e74: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F6E70u, 0x2F6E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E78u;
label_2f6e78:
    // 0x2f6e78: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2f6e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2f6e7c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x2F6E7Cu;
    {
        const bool branch_taken_0x2f6e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E7Cu;
        // 0x2f6e80: 0x2402fc0d  addiu       $v0, $zero, -0x3F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6e7c) {
            ctx->pc = 0x2F6D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6d90;
        }
    }
    ctx->pc = 0x2F6E84u;
    // 0x2f6e84: 0x96440010  lhu         $a0, 0x10($s2)
    ctx->pc = 0x2f6e84u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2f6e88: 0x2413fc0d  addiu       $s3, $zero, -0x3F3
    ctx->pc = 0x2f6e88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966285));
    // 0x2f6e8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f6e8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e90: 0xc0bf1c0  jal         func_2FC700
    ctx->pc = 0x2F6E90u;
    SET_GPR_U32(ctx, 31, 0x2F6E98u);
    ctx->pc = 0x2F6E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6E90u;
    // 0x2f6e94: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC700u, 0x2F6E90u, 0x2F6E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E98u;
label_2f6e98:
    // 0x2f6e98: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x2f6e98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f6e9c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f6e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f6ea0:
    // 0x2f6ea0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f6ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6ea4: 0xc0bf246  jal         func_2FC918
    ctx->pc = 0x2F6EA4u;
    SET_GPR_U32(ctx, 31, 0x2F6EACu);
    ctx->pc = 0x2F6EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6EA4u;
    // 0x2f6ea8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC918u, 0x2F6EA4u, 0x2F6EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6EACu;
label_2f6eac:
    // 0x2f6eac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f6eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6eb0: 0x6230007  bgezl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6EB0u;
    {
        const bool branch_taken_0x2f6eb0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2f6eb0) {
            ctx->pc = 0x2F6EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6EB0u;
            // 0x2f6eb4: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6ED0u;
            goto label_2f6ed0;
        }
    }
    ctx->pc = 0x2F6EB8u;
    // 0x2f6eb8: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x2F6EB8u;
    SET_GPR_U32(ctx, 31, 0x2F6EC0u);
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x2F6EB8u, 0x2F6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6EC0u;
label_2f6ec0:
    // 0x2f6ec0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f6ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6ec4: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x2f6ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x2f6ec8: 0x1000ffb1  b           . + 4 + (-0x4F << 2)
    ctx->pc = 0x2F6EC8u;
    {
        const bool branch_taken_0x2f6ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6EC8u;
        // 0x2f6ecc: 0x2402fc11  addiu       $v0, $zero, -0x3EF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ec8) {
            ctx->pc = 0x2F6D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6d90;
        }
    }
    ctx->pc = 0x2F6ED0u;
label_2f6ed0:
    // 0x2f6ed0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6ED0u;
    {
        const bool branch_taken_0x2f6ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6ED0u;
        // 0x2f6ed4: 0xae11013c  sw          $s1, 0x13C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ed0) {
            ctx->pc = 0x2F6EE0u;
            goto label_2f6ee0;
        }
    }
    ctx->pc = 0x2F6ED8u;
    // 0x2f6ed8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2F6ED8u;
    {
        const bool branch_taken_0x2f6ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6ED8u;
        // 0x2f6edc: 0xae130020  sw          $s3, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ed8) {
            ctx->pc = 0x2F6FE4u;
            goto label_2f6fe4;
        }
    }
    ctx->pc = 0x2F6EE0u;
label_2f6ee0:
    // 0x2f6ee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ee4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f6ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ee8: 0xc0bf1e8  jal         func_2FC7A0
    ctx->pc = 0x2F6EE8u;
    SET_GPR_U32(ctx, 31, 0x2F6EF0u);
    ctx->pc = 0x2F6EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6EE8u;
    // 0x2f6eec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC7A0u, 0x2F6EE8u, 0x2F6EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6EF0u;
label_2f6ef0:
    // 0x2f6ef0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F6EF0u;
    {
        const bool branch_taken_0x2f6ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6EF0u;
        // 0x2f6ef4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ef0) {
            ctx->pc = 0x2F6F50u;
            goto label_2f6f50;
        }
    }
    ctx->pc = 0x2F6EF8u;
    // 0x2f6ef8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2f6ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2f6efc: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x2F6EFCu;
    {
        const bool branch_taken_0x2f6efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6efc) {
            ctx->pc = 0x2F6F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6EFCu;
            // 0x2f6f00: 0xae130020  sw          $s3, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6FE4u;
            goto label_2f6fe4;
        }
    }
    ctx->pc = 0x2F6F04u;
    // 0x2f6f04: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x2f6f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2f6f08: 0x268523d8  addiu       $a1, $s4, 0x23D8
    ctx->pc = 0x2f6f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 9176));
    // 0x2f6f0c: 0xc0bd9e4  jal         func_2F6790
    ctx->pc = 0x2F6F0Cu;
    SET_GPR_U32(ctx, 31, 0x2F6F14u);
    ctx->pc = 0x2F6F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6F0Cu;
    // 0x2f6f10: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6790u, 0x2F6F0Cu, 0x2F6F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F14u;
label_2f6f14:
    // 0x2f6f14: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2F6F14u;
    {
        const bool branch_taken_0x2f6f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F14u;
        // 0x2f6f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f14) {
            ctx->pc = 0x2F6FE8u;
            goto label_2f6fe8;
        }
    }
    ctx->pc = 0x2F6F1Cu;
    // 0x2f6f1c: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2f6f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2f6f20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6F20u;
    {
        const bool branch_taken_0x2f6f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6f20) {
            ctx->pc = 0x2F6F38u;
            goto label_2f6f38;
        }
    }
    ctx->pc = 0x2F6F28u;
    // 0x2f6f28: 0xc0bdae4  jal         func_2F6B90
    ctx->pc = 0x2F6F28u;
    SET_GPR_U32(ctx, 31, 0x2F6F30u);
    ctx->pc = 0x2F6F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6F28u;
    // 0x2f6f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6B90u, 0x2F6F28u, 0x2F6F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F30u;
label_2f6f30:
    // 0x2f6f30: 0x442001e  bltzl       $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F6F30u;
    {
        const bool branch_taken_0x2f6f30 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f6f30) {
            ctx->pc = 0x2F6F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6F30u;
            // 0x2f6f34: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6FACu;
            goto label_2f6fac;
        }
    }
    ctx->pc = 0x2F6F38u;
label_2f6f38:
    // 0x2f6f38: 0xc0be998  jal         func_2FA660
    ctx->pc = 0x2F6F38u;
    SET_GPR_U32(ctx, 31, 0x2F6F40u);
    ctx->pc = 0x2F6F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6F38u;
    // 0x2f6f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA660u, 0x2F6F38u, 0x2F6F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F40u;
label_2f6f40:
    // 0x2f6f40: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2F6F40u;
    {
        const bool branch_taken_0x2f6f40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F6F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F40u;
        // 0x2f6f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f40) {
            ctx->pc = 0x2F6FE8u;
            goto label_2f6fe8;
        }
    }
    ctx->pc = 0x2F6F48u;
    // 0x2f6f48: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2F6F48u;
    {
        const bool branch_taken_0x2f6f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F48u;
        // 0x2f6f4c: 0x2402fc0f  addiu       $v0, $zero, -0x3F1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f48) {
            ctx->pc = 0x2F6FA4u;
            goto label_2f6fa4;
        }
    }
    ctx->pc = 0x2F6F50u;
label_2f6f50:
    // 0x2f6f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6f54: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2f6f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2f6f58: 0xc0bf238  jal         func_2FC8E0
    ctx->pc = 0x2F6F58u;
    SET_GPR_U32(ctx, 31, 0x2F6F60u);
    ctx->pc = 0x2F6F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6F58u;
    // 0x2f6f5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8E0u, 0x2F6F58u, 0x2F6F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F60u;
label_2f6f60:
    // 0x2f6f60: 0xc0bf148  jal         func_2FC520
    ctx->pc = 0x2F6F60u;
    SET_GPR_U32(ctx, 31, 0x2F6F68u);
    ctx->pc = 0x2F6F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6F60u;
    // 0x2f6f64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC520u, 0x2F6F60u, 0x2F6F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F68u;
label_2f6f68:
    // 0x2f6f68: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x2F6F68u;
    SET_GPR_U32(ctx, 31, 0x2F6F70u);
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x2F6F68u, 0x2F6F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F70u;
label_2f6f70:
    // 0x2f6f70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f6f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6f74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6f78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6f7c: 0xae03013c  sw          $v1, 0x13C($s0)
    ctx->pc = 0x2f6f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 3));
    // 0x2f6f80: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2f6f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2f6f84: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x2f6f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x2f6f88: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6F88u;
    {
        const bool branch_taken_0x2f6f88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F6F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F88u;
        // 0x2f6f8c: 0xae040024  sw          $a0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f88) {
            ctx->pc = 0x2F6FA0u;
            goto label_2f6fa0;
        }
    }
    ctx->pc = 0x2F6F90u;
    // 0x2f6f90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f6f90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f6f94: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x2f6f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2f6f98: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2F6F98u;
    {
        const bool branch_taken_0x2f6f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F98u;
        // 0x2f6f9c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f98) {
            ctx->pc = 0x2F6EA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6ea0;
        }
    }
    ctx->pc = 0x2F6FA0u;
label_2f6fa0:
    // 0x2f6fa0: 0x2402fc10  addiu       $v0, $zero, -0x3F0
    ctx->pc = 0x2f6fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966288));
label_2f6fa4:
    // 0x2f6fa4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2f6fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2f6fa8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2f6fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2f6fac:
    // 0x2f6fac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6FACu;
    {
        const bool branch_taken_0x2f6fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6FACu;
        // 0x2f6fb0: 0x2402fc0d  addiu       $v0, $zero, -0x3F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6fac) {
            ctx->pc = 0x2F6FB8u;
            goto label_2f6fb8;
        }
    }
    ctx->pc = 0x2F6FB4u;
    // 0x2f6fb4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2f6fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_2f6fb8:
    // 0x2f6fb8: 0x8e11013c  lw          $s1, 0x13C($s0)
    ctx->pc = 0x2f6fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x2f6fbc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2f6fbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6fc0: 0x12320008  beq         $s1, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F6FC0u;
    {
        const bool branch_taken_0x2f6fc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6FC0u;
        // 0x2f6fc4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6fc0) {
            ctx->pc = 0x2F6FE4u;
            goto label_2f6fe4;
        }
    }
    ctx->pc = 0x2F6FC8u;
    // 0x2f6fc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6fcc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2f6fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2f6fd0: 0xc0bf238  jal         func_2FC8E0
    ctx->pc = 0x2F6FD0u;
    SET_GPR_U32(ctx, 31, 0x2F6FD8u);
    ctx->pc = 0x2F6FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6FD0u;
    // 0x2f6fd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8E0u, 0x2F6FD0u, 0x2F6FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6FD8u;
label_2f6fd8:
    // 0x2f6fd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6fdc: 0xae12013c  sw          $s2, 0x13C($s0)
    ctx->pc = 0x2f6fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 18));
    // 0x2f6fe0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2f6fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_2f6fe4:
    // 0x2f6fe4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f6fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f6fe8:
    // 0x2f6fe8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f6fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f6fec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f6fecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f6ff0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f6ff0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6ff4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f6ff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6ff8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f6ff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6ffc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f6ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7000: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7000u;
        // 0x2f7004: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7008u;
    // 0x2f7008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f7008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f700c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f7010: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f7010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f7014: 0xc0bdb56  jal         func_2F6D58
    ctx->pc = 0x2F7014u;
    SET_GPR_U32(ctx, 31, 0x2F701Cu);
    ctx->pc = 0x2F7018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7014u;
    // 0x2f7018: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D58u;
    goto label_2f6d58;
    ctx->pc = 0x2F701Cu;
label_2f701c:
    // 0x2f701c: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2f701cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x2f7020: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x2f7020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2f7024: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2F7024u;
    SET_GPR_U32(ctx, 31, 0x2F702Cu);
    ctx->pc = 0x2F7028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7024u;
    // 0x2f7028: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2F7024u, 0x2F702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F702Cu;
label_2f702c:
    // 0x2f702c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2f702cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2f7030: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f7030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f7034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7038: 0x8043320  j           func_10CC80
    ctx->pc = 0x2F7038u;
    ctx->pc = 0x2F703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7038u;
    // 0x2f703c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    ctx->pc = 0x2F7040u;
}
