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

// Function: sub_0029AF68
// Address: 0x29af68 - 0x29b0f0
void sub_0029AF68_0x29af68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AF68_0x29af68");
#endif

    switch (ctx->pc) {
        case 0x29af9cu: goto label_29af9c;
        case 0x29afa0u: goto label_29afa0;
        case 0x29afc0u: goto label_29afc0;
        case 0x29afd0u: goto label_29afd0;
        case 0x29afe8u: goto label_29afe8;
        case 0x29b014u: goto label_29b014;
        case 0x29b020u: goto label_29b020;
        case 0x29b038u: goto label_29b038;
        case 0x29b04cu: goto label_29b04c;
        case 0x29b058u: goto label_29b058;
        case 0x29b070u: goto label_29b070;
        case 0x29b09cu: goto label_29b09c;
        case 0x29b0b8u: goto label_29b0b8;
        case 0x29b0ccu: goto label_29b0cc;
        case 0x29b0d4u: goto label_29b0d4;
        default: break;
    }

    ctx->pc = 0x29af68u;

    // 0x29af68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29af68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29af6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29af6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29af70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29af70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29af74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29af74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29af78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29af7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29af7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29af80: 0x12000055  beqz        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x29AF80u;
    {
        const bool branch_taken_0x29af80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF80u;
        // 0x29af84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af80) {
            ctx->pc = 0x29B0D8u;
            goto label_29b0d8;
        }
    }
    ctx->pc = 0x29AF88u;
    // 0x29af88: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x29af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x29af8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29af8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29af90: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x29AF90u;
    {
        const bool branch_taken_0x29af90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF90u;
        // 0x29af94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af90) {
            ctx->pc = 0x29B0D8u;
            goto label_29b0d8;
        }
    }
    ctx->pc = 0x29AF98u;
    // 0x29af98: 0xc0a039c  jal         func_280E70
label_29af9c:
    if (ctx->pc == 0x29AF9Cu) {
        ctx->pc = 0x29AFA0u;
        goto label_29afa0;
    }
    ctx->pc = 0x29AF98u;
    SET_GPR_U32(ctx, 31, 0x29AFA0u);
    ctx->pc = 0x280E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280E70u, 0x29AF98u, 0x29AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AFA0u;
label_29afa0:
    // 0x29afa0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29afa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29afa4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x29AFA4u;
    {
        const bool branch_taken_0x29afa4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AFA4u;
        // 0x29afa8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29afa4) {
            ctx->pc = 0x29AFC8u;
            goto label_29afc8;
        }
    }
    ctx->pc = 0x29AFACu;
    // 0x29afac: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x29afacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x29afb0: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x29afb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x29afb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29afb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29afb8: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29AFB8u;
    SET_GPR_U32(ctx, 31, 0x29AFC0u);
    ctx->pc = 0x29AFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AFB8u;
    // 0x29afbc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29AFB8u, 0x29AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AFC0u;
label_29afc0:
    // 0x29afc0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x29AFC0u;
    {
        const bool branch_taken_0x29afc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AFC0u;
        // 0x29afc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29afc0) {
            ctx->pc = 0x29B0D8u;
            goto label_29b0d8;
        }
    }
    ctx->pc = 0x29AFC8u;
label_29afc8:
    // 0x29afc8: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x29AFC8u;
    SET_GPR_U32(ctx, 31, 0x29AFD0u);
    ctx->pc = 0x29AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AFC8u;
    // 0x29afcc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x29AFC8u, 0x29AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AFD0u;
label_29afd0:
    // 0x29afd0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x29AFD0u;
    {
        const bool branch_taken_0x29afd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AFD0u;
        // 0x29afd4: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29afd0) {
            ctx->pc = 0x29B084u;
            goto label_29b084;
        }
    }
    ctx->pc = 0x29AFD8u;
    // 0x29afd8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x29afd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29afdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29afdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29afe0: 0xc049c48  jal         func_127120
    ctx->pc = 0x29AFE0u;
    SET_GPR_U32(ctx, 31, 0x29AFE8u);
    ctx->pc = 0x29AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AFE0u;
    // 0x29afe4: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x29AFE0u, 0x29AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AFE8u;
label_29afe8:
    // 0x29afe8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x29afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29afec: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x29afecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x29aff0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29aff4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x29aff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x29aff8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x29aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x29affc: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x29affcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x29b000: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x29b000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29b004: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x29B004u;
    {
        const bool branch_taken_0x29b004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b004) {
            ctx->pc = 0x29B008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B004u;
            // 0x29b008: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B03Cu;
            goto label_29b03c;
        }
    }
    ctx->pc = 0x29B00Cu;
    // 0x29b00c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x29B00Cu;
    SET_GPR_U32(ctx, 31, 0x29B014u);
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x29B00Cu, 0x29B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B014u;
label_29b014:
    // 0x29b014: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x29b014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29b018: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x29B018u;
    SET_GPR_U32(ctx, 31, 0x29B020u);
    ctx->pc = 0x29B01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B018u;
    // 0x29b01c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x29B018u, 0x29B020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B020u;
label_29b020:
    // 0x29b020: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x29B020u;
    {
        const bool branch_taken_0x29b020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B020u;
        // 0x29b024: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b020) {
            ctx->pc = 0x29B084u;
            goto label_29b084;
        }
    }
    ctx->pc = 0x29B028u;
    // 0x29b028: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x29b028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29b02c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29b02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b030: 0xc049c48  jal         func_127120
    ctx->pc = 0x29B030u;
    SET_GPR_U32(ctx, 31, 0x29B038u);
    ctx->pc = 0x29B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B030u;
    // 0x29b034: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x29B030u, 0x29B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B038u;
label_29b038:
    // 0x29b038: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29b038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29b03c:
    // 0x29b03c: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x29B03Cu;
    {
        const bool branch_taken_0x29b03c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b03c) {
            ctx->pc = 0x29B040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B03Cu;
            // 0x29b040: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B074u;
            goto label_29b074;
        }
    }
    ctx->pc = 0x29B044u;
    // 0x29b044: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x29B044u;
    SET_GPR_U32(ctx, 31, 0x29B04Cu);
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x29B044u, 0x29B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B04Cu;
label_29b04c:
    // 0x29b04c: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x29b04cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29b050: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x29B050u;
    SET_GPR_U32(ctx, 31, 0x29B058u);
    ctx->pc = 0x29B054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B050u;
    // 0x29b054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x29B050u, 0x29B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B058u;
label_29b058:
    // 0x29b058: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29B058u;
    {
        const bool branch_taken_0x29b058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B058u;
        // 0x29b05c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b058) {
            ctx->pc = 0x29B084u;
            goto label_29b084;
        }
    }
    ctx->pc = 0x29B060u;
    // 0x29b060: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x29b060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b064: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29b064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b068: 0xc049c48  jal         func_127120
    ctx->pc = 0x29B068u;
    SET_GPR_U32(ctx, 31, 0x29B070u);
    ctx->pc = 0x29B06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B068u;
    // 0x29b06c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x29B068u, 0x29B070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B070u;
label_29b070:
    // 0x29b070: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x29b070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_29b074:
    // 0x29b074: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x29b074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b078: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x29b078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x29b07c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x29B07Cu;
    {
        const bool branch_taken_0x29b07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B07Cu;
        // 0x29b080: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b07c) {
            ctx->pc = 0x29B0D8u;
            goto label_29b0d8;
        }
    }
    ctx->pc = 0x29B084u;
label_29b084:
    // 0x29b084: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x29b084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29b088: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x29b088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x29b08c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x29b08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x29b090: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29b090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b094: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29B094u;
    SET_GPR_U32(ctx, 31, 0x29B09Cu);
    ctx->pc = 0x29B098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B094u;
    // 0x29b098: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29B094u, 0x29B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B09Cu;
label_29b09c:
    // 0x29b09c: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x29B09Cu;
    {
        const bool branch_taken_0x29b09c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B09Cu;
        // 0x29b0a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b09c) {
            ctx->pc = 0x29B0D8u;
            goto label_29b0d8;
        }
    }
    ctx->pc = 0x29B0A4u;
    // 0x29b0a4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x29b0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29b0a8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B0A8u;
    {
        const bool branch_taken_0x29b0a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b0a8) {
            ctx->pc = 0x29B0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B0A8u;
            // 0x29b0ac: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B0BCu;
            goto label_29b0bc;
        }
    }
    ctx->pc = 0x29B0B0u;
    // 0x29b0b0: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29B0B0u;
    SET_GPR_U32(ctx, 31, 0x29B0B8u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29B0B0u, 0x29B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B0B8u;
label_29b0b8:
    // 0x29b0b8: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x29b0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_29b0bc:
    // 0x29b0bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B0BCu;
    {
        const bool branch_taken_0x29b0bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b0bc) {
            ctx->pc = 0x29B0CCu;
            goto label_29b0cc;
        }
    }
    ctx->pc = 0x29B0C4u;
    // 0x29b0c4: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29B0C4u;
    SET_GPR_U32(ctx, 31, 0x29B0CCu);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29B0C4u, 0x29B0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B0CCu;
label_29b0cc:
    // 0x29b0cc: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29B0CCu;
    SET_GPR_U32(ctx, 31, 0x29B0D4u);
    ctx->pc = 0x29B0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B0CCu;
    // 0x29b0d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29B0CCu, 0x29B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B0D4u;
label_29b0d4:
    // 0x29b0d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b0d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b0d8:
    // 0x29b0d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29b0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b0dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29b0dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b0e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29b0e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b0e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b0e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x29B0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B0E8u;
        // 0x29b0ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B0F0u;
}
