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

// Function: sub_0026BFC8
// Address: 0x26bfc8 - 0x26c0c8
void sub_0026BFC8_0x26bfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BFC8_0x26bfc8");
#endif

    switch (ctx->pc) {
        case 0x26bff8u: goto label_26bff8;
        case 0x26bffcu: goto label_26bffc;
        case 0x26c00cu: goto label_26c00c;
        case 0x26c028u: goto label_26c028;
        case 0x26c038u: goto label_26c038;
        case 0x26c044u: goto label_26c044;
        case 0x26c058u: goto label_26c058;
        case 0x26c078u: goto label_26c078;
        case 0x26c098u: goto label_26c098;
        case 0x26c0acu: goto label_26c0ac;
        default: break;
    }

    ctx->pc = 0x26bfc8u;

    // 0x26bfc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26bfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26bfcc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x26bfccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bfd0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x26bfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x26bfd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26bfd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bfd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26bfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26bfdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26bfdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bfe0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x26bfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x26bfe4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26bfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26bfe8: 0x8e230188  lw          $v1, 0x188($s1)
    ctx->pc = 0x26bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x26bfec: 0x88620010  lwl         $v0, 0x10($v1)
    ctx->pc = 0x26bfecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x26bff0: 0x9862000d  lwr         $v0, 0xD($v1)
    ctx->pc = 0x26bff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x26bff4: 0xc09af6a  jal         func_26BDA8
label_26bff8:
    if (ctx->pc == 0x26BFF8u) {
        ctx->pc = 0x26BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFF4u;
        // 0x26bff8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BFFCu;
        goto label_26bffc;
    }
    ctx->pc = 0x26BFF4u;
    SET_GPR_U32(ctx, 31, 0x26BFFCu);
    ctx->pc = 0x26BFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BFF4u;
    // 0x26bff8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BDA8u, 0x26BFF4u, 0x26BFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BFFCu;
label_26bffc:
    // 0x26bffc: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26BFFCu;
    {
        const bool branch_taken_0x26bffc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFFCu;
        // 0x26c000: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bffc) {
            ctx->pc = 0x26C030u;
            goto label_26c030;
        }
    }
    ctx->pc = 0x26C004u;
    // 0x26c004: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x26C004u;
    {
        const bool branch_taken_0x26c004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C004u;
        // 0x26c008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c004) {
            ctx->pc = 0x26C0B0u;
            goto label_26c0b0;
        }
    }
    ctx->pc = 0x26C00Cu;
label_26c00c:
    // 0x26c00c: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x26c00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26c010: 0x262408c4  addiu       $a0, $s1, 0x8C4
    ctx->pc = 0x26c010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2244));
    // 0x26c014: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x26c014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26c018: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x26c018u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x26c01c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x26c01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26c020: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26C020u;
    SET_GPR_U32(ctx, 31, 0x26C028u);
    ctx->pc = 0x26C024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C020u;
    // 0x26c024: 0x24a50016  addiu       $a1, $a1, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26C020u, 0x26C028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C028u;
label_26c028:
    // 0x26c028: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26C028u;
    {
        const bool branch_taken_0x26c028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c028) {
            ctx->pc = 0x26C080u;
            goto label_26c080;
        }
    }
    ctx->pc = 0x26C030u;
label_26c030:
    // 0x26c030: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x26c030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x26c034: 0x0  nop
    ctx->pc = 0x26c034u;
    // NOP
label_26c038:
    // 0x26c038: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x26c038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26c03c: 0xc098092  jal         func_260248
    ctx->pc = 0x26C03Cu;
    SET_GPR_U32(ctx, 31, 0x26C044u);
    ctx->pc = 0x26C040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C03Cu;
    // 0x26c040: 0x8e260024  lw          $a2, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260248u, 0x26C03Cu, 0x26C044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C044u;
label_26c044:
    // 0x26c044: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c048: 0x6000015  bltz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26C048u;
    {
        const bool branch_taken_0x26c048 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x26C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C048u;
        // 0x26c04c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c048) {
            ctx->pc = 0x26C0A0u;
            goto label_26c0a0;
        }
    }
    ctx->pc = 0x26C050u;
    // 0x26c050: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x26C050u;
    SET_GPR_U32(ctx, 31, 0x26C058u);
    ctx->pc = 0x26C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C050u;
    // 0x26c054: 0x8e2401b0  lw          $a0, 0x1B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x26C050u, 0x26C058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C058u;
label_26c058:
    // 0x26c058: 0x8e2301b0  lw          $v1, 0x1B0($s1)
    ctx->pc = 0x26c058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x26c05c: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x26C05Cu;
    {
        const bool branch_taken_0x26c05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C05Cu;
        // 0x26c060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c05c) {
            ctx->pc = 0x26C0B0u;
            goto label_26c0b0;
        }
    }
    ctx->pc = 0x26C064u;
    // 0x26c064: 0x1e00ffe9  bgtz        $s0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x26C064u;
    {
        const bool branch_taken_0x26c064 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x26C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C064u;
        // 0x26c068: 0x3c04000f  lui         $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c064) {
            ctx->pc = 0x26C00Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c00c;
        }
    }
    ctx->pc = 0x26C06Cu;
    // 0x26c06c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x26c06cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x26c070: 0xc043736  jal         func_10DCD8
    ctx->pc = 0x26C070u;
    SET_GPR_U32(ctx, 31, 0x26C078u);
    ctx->pc = 0x26C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C070u;
    // 0x26c074: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCD8u, 0x26C070u, 0x26C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C078u;
label_26c078:
    // 0x26c078: 0x5e40ffef  bgtzl       $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x26C078u;
    {
        const bool branch_taken_0x26c078 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x26c078) {
            ctx->pc = 0x26C07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C078u;
            // 0x26c07c: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C038u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c038;
        }
    }
    ctx->pc = 0x26C080u;
label_26c080:
    // 0x26c080: 0x1640000b  bnez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x26C080u;
    {
        const bool branch_taken_0x26c080 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C080u;
        // 0x26c084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c080) {
            ctx->pc = 0x26C0B0u;
            goto label_26c0b0;
        }
    }
    ctx->pc = 0x26C088u;
    // 0x26c088: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26c088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26c08c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c090: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C090u;
    SET_GPR_U32(ctx, 31, 0x26C098u);
    ctx->pc = 0x26C094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C090u;
    // 0x26c094: 0x24a58a48  addiu       $a1, $a1, -0x75B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C090u, 0x26C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C098u;
label_26c098:
    // 0x26c098: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26C098u;
    {
        const bool branch_taken_0x26c098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C098u;
        // 0x26c09c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c098) {
            ctx->pc = 0x26C0B0u;
            goto label_26c0b0;
        }
    }
    ctx->pc = 0x26C0A0u;
label_26c0a0:
    // 0x26c0a0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c0a4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C0A4u;
    SET_GPR_U32(ctx, 31, 0x26C0ACu);
    ctx->pc = 0x26C0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C0A4u;
    // 0x26c0a8: 0x24a58a48  addiu       $a1, $a1, -0x75B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C0A4u, 0x26C0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C0ACu;
label_26c0ac:
    // 0x26c0ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26c0b0:
    // 0x26c0b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26c0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c0b4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x26c0b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c0b8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x26c0b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c0bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26c0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x26C0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0C0u;
        // 0x26c0c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C0C8u;
}
