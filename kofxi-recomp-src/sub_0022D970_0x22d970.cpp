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

// Function: sub_0022D970
// Address: 0x22d970 - 0x22dbc0
void sub_0022D970_0x22d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D970_0x22d970");
#endif

    switch (ctx->pc) {
        case 0x22d9acu: goto label_22d9ac;
        case 0x22d9b4u: goto label_22d9b4;
        case 0x22d9ccu: goto label_22d9cc;
        case 0x22d9dcu: goto label_22d9dc;
        case 0x22d9f0u: goto label_22d9f0;
        case 0x22da64u: goto label_22da64;
        case 0x22da80u: goto label_22da80;
        case 0x22da88u: goto label_22da88;
        case 0x22da90u: goto label_22da90;
        case 0x22daa4u: goto label_22daa4;
        case 0x22daacu: goto label_22daac;
        case 0x22dabcu: goto label_22dabc;
        case 0x22daccu: goto label_22dacc;
        case 0x22dad4u: goto label_22dad4;
        case 0x22db38u: goto label_22db38;
        case 0x22db88u: goto label_22db88;
        default: break;
    }

    ctx->pc = 0x22d970u;

    // 0x22d970: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22d974: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22d974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22d978: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22d978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22d97c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22d97cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d980: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x22d980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x22d984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22d984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d988: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x22d988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22d98c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x22d98cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d990: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22d990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22d994: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x22d994u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d998: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x22d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x22d99c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x22d99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x22d9a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22d9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22d9a4: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x22D9A4u;
    SET_GPR_U32(ctx, 31, 0x22D9ACu);
    ctx->pc = 0x22D9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D9A4u;
    // 0x22d9a8: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x22D9A4u, 0x22D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D9ACu;
label_22d9ac:
    // 0x22d9ac: 0xc097242  jal         func_25C908
    ctx->pc = 0x22D9ACu;
    SET_GPR_U32(ctx, 31, 0x22D9B4u);
    ctx->pc = 0x22D9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D9ACu;
    // 0x22d9b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C908u, 0x22D9ACu, 0x22D9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D9B4u;
label_22d9b4:
    // 0x22d9b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22d9b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d9b8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D9B8u;
    {
        const bool branch_taken_0x22d9b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9B8u;
        // 0x22d9bc: 0x3c14003a  lui         $s4, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9b8) {
            ctx->pc = 0x22D9D0u;
            goto label_22d9d0;
        }
    }
    ctx->pc = 0x22D9C0u;
    // 0x22d9c0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22d9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22d9c4: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x22D9C4u;
    SET_GPR_U32(ctx, 31, 0x22D9CCu);
    ctx->pc = 0x22D9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D9C4u;
    // 0x22d9c8: 0x24844658  addiu       $a0, $a0, 0x4658 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x22D9C4u, 0x22D9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D9CCu;
label_22d9cc:
    // 0x22d9cc: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x22d9ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
label_22d9d0:
    // 0x22d9d0: 0x8e84fa00  lw          $a0, -0x600($s4)
    ctx->pc = 0x22d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965760)));
    // 0x22d9d4: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x22D9D4u;
    SET_GPR_U32(ctx, 31, 0x22D9DCu);
    ctx->pc = 0x22D9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D9D4u;
    // 0x22d9d8: 0x280b82d  daddu       $s7, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x22D9D4u, 0x22D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D9DCu;
label_22d9dc:
    // 0x22d9dc: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x22d9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x22d9e0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x22D9E0u;
    {
        const bool branch_taken_0x22d9e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9E0u;
        // 0x22d9e4: 0x2405f7ff  addiu       $a1, $zero, -0x801 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9e0) {
            ctx->pc = 0x22DA18u;
            goto label_22da18;
        }
    }
    ctx->pc = 0x22D9E8u;
    // 0x22d9e8: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x22d9e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x22d9ec: 0x0  nop
    ctx->pc = 0x22d9ecu;
    // NOP
label_22d9f0:
    // 0x22d9f0: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x22d9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x22d9f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D9F4u;
    {
        const bool branch_taken_0x22d9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9F4u;
        // 0x22d9f8: 0x651824  and         $v1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9f4) {
            ctx->pc = 0x22DA0Cu;
            goto label_22da0c;
        }
    }
    ctx->pc = 0x22D9FCu;
    // 0x22d9fc: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x22d9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x22da00: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x22da00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x22da04: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x22da04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x22da08: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x22da08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_22da0c:
    // 0x22da0c: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x22da0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x22da10: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22DA10u;
    {
        const bool branch_taken_0x22da10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22da10) {
            ctx->pc = 0x22DA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DA10u;
            // 0x22da14: 0x94830006  lhu         $v1, 0x6($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D9F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22d9f0;
        }
    }
    ctx->pc = 0x22DA18u;
label_22da18:
    // 0x22da18: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x22da18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x22da1c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x22da1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x22da20: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x22DA20u;
    {
        const bool branch_taken_0x22da20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA20u;
        // 0x22da24: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da20) {
            ctx->pc = 0x22DB24u;
            goto label_22db24;
        }
    }
    ctx->pc = 0x22DA28u;
    // 0x22da28: 0x101942  srl         $v1, $s0, 5
    ctx->pc = 0x22da28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x22da2c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x22da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x22da30: 0x306303f8  andi        $v1, $v1, 0x3F8
    ctx->pc = 0x22da30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1016);
    // 0x22da34: 0x2442a8c0  addiu       $v0, $v0, -0x5740
    ctx->pc = 0x22da34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944960));
    // 0x22da38: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22da38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22da3c: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x22da3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
    // 0x22da40: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x22da40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x22da44: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x22da44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22da48: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x22da48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x22da4c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x22da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x22da50: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x22da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22da54: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x22da54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x22da58: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x22da58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x22da5c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x22DA5Cu;
    SET_GPR_U32(ctx, 31, 0x22DA64u);
    ctx->pc = 0x22DA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA5Cu;
    // 0x22da60: 0x8e84fa00  lw          $a0, -0x600($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x22DA5Cu, 0x22DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA64u;
label_22da64:
    // 0x22da64: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x22DA64u;
    {
        const bool branch_taken_0x22da64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA64u;
        // 0x22da68: 0x3c060023  lui         $a2, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da64) {
            ctx->pc = 0x22DA80u;
            goto label_22da80;
        }
    }
    ctx->pc = 0x22DA6Cu;
    // 0x22da6c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x22da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x22da70: 0x24c6db68  addiu       $a2, $a2, -0x2498
    ctx->pc = 0x22da70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957928));
    // 0x22da74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22da74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22da78: 0xc08a058  jal         func_228160
    ctx->pc = 0x22DA78u;
    SET_GPR_U32(ctx, 31, 0x22DA80u);
    ctx->pc = 0x22DA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA78u;
    // 0x22da7c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228160u, 0x22DA78u, 0x22DA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA80u;
label_22da80:
    // 0x22da80: 0xc08c6a2  jal         func_231A88
    ctx->pc = 0x22DA80u;
    SET_GPR_U32(ctx, 31, 0x22DA88u);
    ctx->pc = 0x231A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A88u, 0x22DA80u, 0x22DA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA88u;
label_22da88:
    // 0x22da88: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x22DA88u;
    SET_GPR_U32(ctx, 31, 0x22DA90u);
    ctx->pc = 0x22DA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA88u;
    // 0x22da8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x22DA88u, 0x22DA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA90u;
label_22da90:
    // 0x22da90: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DA90u;
    {
        const bool branch_taken_0x22da90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x22da90) {
            ctx->pc = 0x22DAA4u;
            goto label_22daa4;
        }
    }
    ctx->pc = 0x22DA98u;
    // 0x22da98: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x22da98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22da9c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x22DA9Cu;
    SET_GPR_U32(ctx, 31, 0x22DAA4u);
    ctx->pc = 0x22DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA9Cu;
    // 0x22daa0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22DA9Cu, 0x22DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DAA4u;
label_22daa4:
    // 0x22daa4: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x22DAA4u;
    SET_GPR_U32(ctx, 31, 0x22DAACu);
    ctx->pc = 0x22DAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DAA4u;
    // 0x22daa8: 0x86240044  lh          $a0, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x22DAA4u, 0x22DAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DAACu;
label_22daac:
    // 0x22daac: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DAACu;
    {
        const bool branch_taken_0x22daac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x22daac) {
            ctx->pc = 0x22DABCu;
            goto label_22dabc;
        }
    }
    ctx->pc = 0x22DAB4u;
    // 0x22dab4: 0xc08c682  jal         func_231A08
    ctx->pc = 0x22DAB4u;
    SET_GPR_U32(ctx, 31, 0x22DABCu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22DAB4u, 0x22DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DABCu;
label_22dabc:
    // 0x22dabc: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DABCu;
    {
        const bool branch_taken_0x22dabc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dabc) {
            ctx->pc = 0x22DACCu;
            goto label_22dacc;
        }
    }
    ctx->pc = 0x22DAC4u;
    // 0x22dac4: 0xc08a08c  jal         func_228230
    ctx->pc = 0x22DAC4u;
    SET_GPR_U32(ctx, 31, 0x22DACCu);
    ctx->pc = 0x22DAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DAC4u;
    // 0x22dac8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228230u, 0x22DAC4u, 0x22DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DACCu;
label_22dacc:
    // 0x22dacc: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x22DACCu;
    SET_GPR_U32(ctx, 31, 0x22DAD4u);
    ctx->pc = 0x22DAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DACCu;
    // 0x22dad0: 0x8ee4fa00  lw          $a0, -0x600($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294965760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x22DACCu, 0x22DAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DAD4u;
label_22dad4:
    // 0x22dad4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x22dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x22dad8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DAD8u;
    {
        const bool branch_taken_0x22dad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAD8u;
        // 0x22dadc: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dad8) {
            ctx->pc = 0x22DAE8u;
            goto label_22dae8;
        }
    }
    ctx->pc = 0x22DAE0u;
    // 0x22dae0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22DAE0u;
    {
        const bool branch_taken_0x22dae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAE0u;
        // 0x22dae4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dae0) {
            ctx->pc = 0x22DAECu;
            goto label_22daec;
        }
    }
    ctx->pc = 0x22DAE8u;
label_22dae8:
    // 0x22dae8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x22dae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_22daec:
    // 0x22daec: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x22daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x22daf0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x22daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x22daf4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22daf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22daf8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x22daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x22dafc: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x22dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x22db00: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22db00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22db04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DB04u;
    {
        const bool branch_taken_0x22db04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB04u;
        // 0x22db08: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db04) {
            ctx->pc = 0x22DB18u;
            goto label_22db18;
        }
    }
    ctx->pc = 0x22DB0Cu;
    // 0x22db0c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x22db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x22db10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22DB10u;
    {
        const bool branch_taken_0x22db10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB10u;
        // 0x22db14: 0x2415000b  addiu       $s5, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db10) {
            ctx->pc = 0x22DB28u;
            goto label_22db28;
        }
    }
    ctx->pc = 0x22DB18u;
label_22db18:
    // 0x22db18: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x22db18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x22db1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DB1Cu;
    {
        const bool branch_taken_0x22db1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB1Cu;
        // 0x22db20: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db1c) {
            ctx->pc = 0x22DB30u;
            goto label_22db30;
        }
    }
    ctx->pc = 0x22DB24u;
label_22db24:
    // 0x22db24: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x22db24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22db28:
    // 0x22db28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22db28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22db2c: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x22db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_22db30:
    // 0x22db30: 0xc043320  jal         func_10CC80
    ctx->pc = 0x22DB30u;
    SET_GPR_U32(ctx, 31, 0x22DB38u);
    ctx->pc = 0x22DB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB30u;
    // 0x22db34: 0x8e84fa00  lw          $a0, -0x600($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x22DB30u, 0x22DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB38u;
label_22db38:
    // 0x22db38: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x22db38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db3c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x22db3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22db40: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x22db40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22db44: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x22db44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22db48: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22db48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22db4c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22db4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22db50: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22db50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22db54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22db54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22db58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22db58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22db5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22db5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22db60: 0x3e00008  jr          $ra
    ctx->pc = 0x22DB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB60u;
        // 0x22db64: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DB68u;
    // 0x22db68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22db68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22db6c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22db70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22db70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22db74: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x22db74u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x22db78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22db78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22db7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22db80: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x22DB80u;
    SET_GPR_U32(ctx, 31, 0x22DB88u);
    ctx->pc = 0x22DB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB80u;
    // 0x22db84: 0x8e24fa00  lw          $a0, -0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x22DB80u, 0x22DB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB88u;
label_22db88:
    // 0x22db88: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x22db88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x22db8c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22DB8Cu;
    {
        const bool branch_taken_0x22db8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB8Cu;
        // 0x22db90: 0x8e24fa00  lw          $a0, -0x600($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db8c) {
            ctx->pc = 0x22DBA8u;
            goto label_22dba8;
        }
    }
    ctx->pc = 0x22DB94u;
    // 0x22db94: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x22db94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x22db98: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x22db98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x22db9c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x22db9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x22dba0: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x22dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x22dba4: 0x8e24fa00  lw          $a0, -0x600($s1)
    ctx->pc = 0x22dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965760)));
label_22dba8:
    // 0x22dba8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22dba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22dbac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22dbacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22dbb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22dbb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22dbb4: 0x8043320  j           func_10CC80
    ctx->pc = 0x22DBB4u;
    ctx->pc = 0x22DBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DBB4u;
    // 0x22dbb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    ctx->pc = 0x22DBBCu;
    // 0x22dbbc: 0x0  nop
    ctx->pc = 0x22dbbcu;
    // NOP
}
