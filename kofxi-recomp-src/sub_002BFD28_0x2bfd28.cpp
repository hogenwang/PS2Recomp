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

// Function: sub_002BFD28
// Address: 0x2bfd28 - 0x2bfe48
void sub_002BFD28_0x2bfd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFD28_0x2bfd28");
#endif

    switch (ctx->pc) {
        case 0x2bfd64u: goto label_2bfd64;
        case 0x2bfd88u: goto label_2bfd88;
        case 0x2bfdb0u: goto label_2bfdb0;
        case 0x2bfdb8u: goto label_2bfdb8;
        case 0x2bfdc4u: goto label_2bfdc4;
        case 0x2bfddcu: goto label_2bfddc;
        case 0x2bfde4u: goto label_2bfde4;
        case 0x2bfdecu: goto label_2bfdec;
        case 0x2bfdf8u: goto label_2bfdf8;
        case 0x2bfe10u: goto label_2bfe10;
        case 0x2bfe24u: goto label_2bfe24;
        default: break;
    }

    ctx->pc = 0x2bfd28u;

    // 0x2bfd28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bfd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bfd2c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2bfd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bfd30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bfd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bfd34: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2bfd34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfd38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bfd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bfd3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bfd3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd40: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2bfd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2bfd44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bfd44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd48: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2bfd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2bfd4c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFD4Cu;
    {
        const bool branch_taken_0x2bfd4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD4Cu;
        // 0x2bfd50: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfd4c) {
            ctx->pc = 0x2BFD5Cu;
            goto label_2bfd5c;
        }
    }
    ctx->pc = 0x2BFD54u;
    // 0x2bfd54: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2BFD54u;
    {
        const bool branch_taken_0x2bfd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD54u;
        // 0x2bfd58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfd54) {
            ctx->pc = 0x2BFE28u;
            goto label_2bfe28;
        }
    }
    ctx->pc = 0x2BFD5Cu;
label_2bfd5c:
    // 0x2bfd5c: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2BFD5Cu;
    SET_GPR_U32(ctx, 31, 0x2BFD64u);
    ctx->pc = 0x2BFD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFD5Cu;
    // 0x2bfd60: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2BFD5Cu, 0x2BFD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFD64u;
label_2bfd64:
    // 0x2bfd64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bfd64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd68: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BFD68u;
    {
        const bool branch_taken_0x2bfd68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD68u;
        // 0x2bfd6c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfd68) {
            ctx->pc = 0x2BFD90u;
            goto label_2bfd90;
        }
    }
    ctx->pc = 0x2BFD70u;
    // 0x2bfd70: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2bfd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2bfd74: 0x240500e8  addiu       $a1, $zero, 0xE8
    ctx->pc = 0x2bfd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x2bfd78: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2bfd78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2bfd7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bfd7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd80: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2BFD80u;
    SET_GPR_U32(ctx, 31, 0x2BFD88u);
    ctx->pc = 0x2BFD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFD80u;
    // 0x2bfd84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2BFD80u, 0x2BFD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFD88u;
label_2bfd88:
    // 0x2bfd88: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2BFD88u;
    {
        const bool branch_taken_0x2bfd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD88u;
        // 0x2bfd8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfd88) {
            ctx->pc = 0x2BFE28u;
            goto label_2bfe28;
        }
    }
    ctx->pc = 0x2BFD90u;
label_2bfd90:
    // 0x2bfd90: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2bfd90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x2bfd94: 0x2454ec48  addiu       $s4, $v0, -0x13B8
    ctx->pc = 0x2bfd94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962248));
    // 0x2bfd98: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x2bfd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x2bfd9c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2bfd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2bfda0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2bfda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2bfda4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2bfda4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfda8: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2BFDA8u;
    SET_GPR_U32(ctx, 31, 0x2BFDB0u);
    ctx->pc = 0x2BFDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDA8u;
    // 0x2bfdac: 0x24070048  addiu       $a3, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CE8u, 0x2BFDA8u, 0x2BFDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDB0u;
label_2bfdb0:
    // 0x2bfdb0: 0xc0afef0  jal         func_2BFBC0
    ctx->pc = 0x2BFDB0u;
    SET_GPR_U32(ctx, 31, 0x2BFDB8u);
    ctx->pc = 0x2BFDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDB0u;
    // 0x2bfdb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFBC0u, 0x2BFDB0u, 0x2BFDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDB8u;
label_2bfdb8:
    // 0x2bfdb8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2bfdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2bfdbc: 0xc0a61dc  jal         func_298770
    ctx->pc = 0x2BFDBCu;
    SET_GPR_U32(ctx, 31, 0x2BFDC4u);
    ctx->pc = 0x2BFDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDBCu;
    // 0x2bfdc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298770u, 0x2BFDBCu, 0x2BFDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDC4u;
label_2bfdc4:
    // 0x2bfdc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bfdc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfdc8: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BFDC8u;
    {
        const bool branch_taken_0x2bfdc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDC8u;
        // 0x2bfdcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfdc8) {
            ctx->pc = 0x2BFE10u;
            goto label_2bfe10;
        }
    }
    ctx->pc = 0x2BFDD0u;
    // 0x2bfdd0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2bfdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2bfdd4: 0xc0a6218  jal         func_298860
    ctx->pc = 0x2BFDD4u;
    SET_GPR_U32(ctx, 31, 0x2BFDDCu);
    ctx->pc = 0x2BFDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDD4u;
    // 0x2bfdd8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298860u, 0x2BFDD4u, 0x2BFDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDDCu;
label_2bfddc:
    // 0x2bfddc: 0xc0afef8  jal         func_2BFBE0
    ctx->pc = 0x2BFDDCu;
    SET_GPR_U32(ctx, 31, 0x2BFDE4u);
    ctx->pc = 0x2BFDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDDCu;
    // 0x2bfde0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFBE0u, 0x2BFDDCu, 0x2BFDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDE4u;
label_2bfde4:
    // 0x2bfde4: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2BFDE4u;
    SET_GPR_U32(ctx, 31, 0x2BFDECu);
    ctx->pc = 0x2BFDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDE4u;
    // 0x2bfde8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2BFDE4u, 0x2BFDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDECu;
label_2bfdec:
    // 0x2bfdec: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2bfdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2bfdf0: 0xc0a61dc  jal         func_298770
    ctx->pc = 0x2BFDF0u;
    SET_GPR_U32(ctx, 31, 0x2BFDF8u);
    ctx->pc = 0x2BFDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDF0u;
    // 0x2bfdf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298770u, 0x2BFDF0u, 0x2BFDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDF8u;
label_2bfdf8:
    // 0x2bfdf8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2bfdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2bfdfc: 0x240500e8  addiu       $a1, $zero, 0xE8
    ctx->pc = 0x2bfdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x2bfe00: 0x2406009b  addiu       $a2, $zero, 0x9B
    ctx->pc = 0x2bfe00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x2bfe04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bfe04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe08: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2BFE08u;
    SET_GPR_U32(ctx, 31, 0x2BFE10u);
    ctx->pc = 0x2BFE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE08u;
    // 0x2bfe0c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2BFE08u, 0x2BFE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE10u;
label_2bfe10:
    // 0x2bfe10: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2bfe10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe14: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2bfe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2bfe18: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2bfe18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2bfe1c: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2BFE1Cu;
    SET_GPR_U32(ctx, 31, 0x2BFE24u);
    ctx->pc = 0x2BFE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE1Cu;
    // 0x2bfe20: 0x24070057  addiu       $a3, $zero, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CE8u, 0x2BFE1Cu, 0x2BFE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE24u;
label_2bfe24:
    // 0x2bfe24: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2bfe24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bfe28:
    // 0x2bfe28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bfe28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfe2c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2bfe2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfe30: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bfe30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bfe34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bfe34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bfe38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bfe38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bfe3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bfe3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfe40: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE40u;
        // 0x2bfe44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFE48u;
}
