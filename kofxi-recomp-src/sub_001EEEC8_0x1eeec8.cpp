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

// Function: sub_001EEEC8
// Address: 0x1eeec8 - 0x1ef010
void sub_001EEEC8_0x1eeec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEEC8_0x1eeec8");
#endif

    switch (ctx->pc) {
        case 0x1eef18u: goto label_1eef18;
        case 0x1eef40u: goto label_1eef40;
        case 0x1eef78u: goto label_1eef78;
        case 0x1eef88u: goto label_1eef88;
        case 0x1eefa8u: goto label_1eefa8;
        case 0x1eefe0u: goto label_1eefe0;
        default: break;
    }

    ctx->pc = 0x1eeec8u;

    // 0x1eeec8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1eeec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1eeecc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1eeeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1eeed0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1eeed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1eeed4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1eeed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeed8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1eeed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1eeedc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1eeedcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeee0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1eeee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1eeee4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1eeee4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeee8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1eeee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1eeeec: 0x26501fcc  addiu       $s0, $s2, 0x1FCC
    ctx->pc = 0x1eeeecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8140));
    // 0x1eeef0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1eeef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1eeef4: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x1eeef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1eeef8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1eeef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1eeefc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eeefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef00: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1eef00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1eef04: 0x8e140008  lw          $s4, 0x8($s0)
    ctx->pc = 0x1eef04u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eef08: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EEF08u;
    {
        const bool branch_taken_0x1eef08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF08u;
        // 0x1eef0c: 0x8e130010  lw          $s3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef08) {
            ctx->pc = 0x1EEF68u;
            goto label_1eef68;
        }
    }
    ctx->pc = 0x1EEF10u;
    // 0x1eef10: 0xc076086  jal         func_1D8218
    ctx->pc = 0x1EEF10u;
    SET_GPR_U32(ctx, 31, 0x1EEF18u);
    ctx->pc = 0x1D8218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8218u, 0x1EEF10u, 0x1EEF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF18u;
label_1eef18:
    // 0x1eef18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1eef18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef1c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1eef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1eef20: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EEF20u;
    {
        const bool branch_taken_0x1eef20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eef20) {
            ctx->pc = 0x1EEF58u;
            goto label_1eef58;
        }
    }
    ctx->pc = 0x1EEF28u;
    // 0x1eef28: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1eef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1eef2c: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EEF2Cu;
    {
        const bool branch_taken_0x1eef2c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1eef2c) {
            ctx->pc = 0x1EEF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEF2Cu;
            // 0x1eef30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEF4Cu;
            goto label_1eef4c;
        }
    }
    ctx->pc = 0x1EEF34u;
    // 0x1eef34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1eef34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef38: 0xc07ab70  jal         func_1EADC0
    ctx->pc = 0x1EEF38u;
    SET_GPR_U32(ctx, 31, 0x1EEF40u);
    ctx->pc = 0x1EEF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF38u;
    // 0x1eef3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EADC0u, 0x1EEF38u, 0x1EEF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF40u;
label_1eef40:
    // 0x1eef40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1eef40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1eef44: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1eef44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1eef48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eef48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eef4c:
    // 0x1eef4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EEF4Cu;
    {
        const bool branch_taken_0x1eef4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF4Cu;
        // 0x1eef50: 0xae82003c  sw          $v0, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef4c) {
            ctx->pc = 0x1EEF6Cu;
            goto label_1eef6c;
        }
    }
    ctx->pc = 0x1EEF54u;
    // 0x1eef54: 0x0  nop
    ctx->pc = 0x1eef54u;
    // NOP
label_1eef58:
    // 0x1eef58: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEF58u;
    {
        const bool branch_taken_0x1eef58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eef58) {
            ctx->pc = 0x1EEF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEF58u;
            // 0x1eef5c: 0xae80003c  sw          $zero, 0x3C($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEF6Cu;
            goto label_1eef6c;
        }
    }
    ctx->pc = 0x1EEF60u;
    // 0x1eef60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEF60u;
    {
        const bool branch_taken_0x1eef60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF60u;
        // 0x1eef64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef60) {
            ctx->pc = 0x1EEF70u;
            goto label_1eef70;
        }
    }
    ctx->pc = 0x1EEF68u;
label_1eef68:
    // 0x1eef68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1eef68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eef6c:
    // 0x1eef6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eef6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eef70:
    // 0x1eef70: 0xc07bc04  jal         func_1EF010
    ctx->pc = 0x1EEF70u;
    SET_GPR_U32(ctx, 31, 0x1EEF78u);
    ctx->pc = 0x1EEF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF70u;
    // 0x1eef74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF010u, 0x1EEF70u, 0x1EEF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF78u;
label_1eef78:
    // 0x1eef78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EEF78u;
    {
        const bool branch_taken_0x1eef78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF78u;
        // 0x1eef7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef78) {
            ctx->pc = 0x1EEF90u;
            goto label_1eef90;
        }
    }
    ctx->pc = 0x1EEF80u;
    // 0x1eef80: 0xc07bb66  jal         func_1EED98
    ctx->pc = 0x1EEF80u;
    SET_GPR_U32(ctx, 31, 0x1EEF88u);
    ctx->pc = 0x1EEF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF80u;
    // 0x1eef84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EED98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EED98u, 0x1EEF80u, 0x1EEF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF88u;
label_1eef88:
    // 0x1eef88: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1EEF88u;
    {
        const bool branch_taken_0x1eef88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF88u;
        // 0x1eef8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef88) {
            ctx->pc = 0x1EEFE4u;
            goto label_1eefe4;
        }
    }
    ctx->pc = 0x1EEF90u;
label_1eef90:
    // 0x1eef90: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x1eef90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1eef94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EEF94u;
    {
        const bool branch_taken_0x1eef94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF94u;
        // 0x1eef98: 0x2aa30040  slti        $v1, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef94) {
            ctx->pc = 0x1EEFB8u;
            goto label_1eefb8;
        }
    }
    ctx->pc = 0x1EEF9Cu;
    // 0x1eef9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eef9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eefa0: 0xc07bc18  jal         func_1EF060
    ctx->pc = 0x1EEFA0u;
    SET_GPR_U32(ctx, 31, 0x1EEFA8u);
    ctx->pc = 0x1EEFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEFA0u;
    // 0x1eefa4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF060u, 0x1EEFA0u, 0x1EEFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEFA8u;
label_1eefa8:
    // 0x1eefa8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1eefa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eefac: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1EEFACu;
    {
        const bool branch_taken_0x1eefac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFACu;
        // 0x1eefb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eefac) {
            ctx->pc = 0x1EEFE4u;
            goto label_1eefe4;
        }
    }
    ctx->pc = 0x1EEFB4u;
    // 0x1eefb4: 0x2aa30040  slti        $v1, $s5, 0x40
    ctx->pc = 0x1eefb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)64) ? 1 : 0);
label_1eefb8:
    // 0x1eefb8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EEFB8u;
    {
        const bool branch_taken_0x1eefb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFB8u;
        // 0x1eefbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eefb8) {
            ctx->pc = 0x1EEFE4u;
            goto label_1eefe4;
        }
    }
    ctx->pc = 0x1EEFC0u;
    // 0x1eefc0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1eefc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1eefc4: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEFC4u;
    {
        const bool branch_taken_0x1eefc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EEFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFC4u;
        // 0x1eefc8: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eefc4) {
            ctx->pc = 0x1EEFD4u;
            goto label_1eefd4;
        }
    }
    ctx->pc = 0x1EEFCCu;
    // 0x1eefcc: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EEFCCu;
    {
        const bool branch_taken_0x1eefcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EEFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFCCu;
        // 0x1eefd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eefcc) {
            ctx->pc = 0x1EEFE4u;
            goto label_1eefe4;
        }
    }
    ctx->pc = 0x1EEFD4u;
label_1eefd4:
    // 0x1eefd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eefd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eefd8: 0xc07bc18  jal         func_1EF060
    ctx->pc = 0x1EEFD8u;
    SET_GPR_U32(ctx, 31, 0x1EEFE0u);
    ctx->pc = 0x1EEFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEFD8u;
    // 0x1eefdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF060u, 0x1EEFD8u, 0x1EEFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEFE0u;
label_1eefe0:
    // 0x1eefe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eefe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eefe4:
    // 0x1eefe4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1eefe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eefe8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1eefe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eefec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1eefecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eeff0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1eeff0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeff4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1eeff4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eeff8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1eeff8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeffc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1eeffcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef000: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ef000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ef004: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF004u;
        // 0x1ef008: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF00Cu;
    // 0x1ef00c: 0x0  nop
    ctx->pc = 0x1ef00cu;
    // NOP
}
