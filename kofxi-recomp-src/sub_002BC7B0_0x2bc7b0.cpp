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

// Function: sub_002BC7B0
// Address: 0x2bc7b0 - 0x2bc978
void sub_002BC7B0_0x2bc7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC7B0_0x2bc7b0");
#endif

    switch (ctx->pc) {
        case 0x2bc7fcu: goto label_2bc7fc;
        case 0x2bc808u: goto label_2bc808;
        case 0x2bc810u: goto label_2bc810;
        case 0x2bc830u: goto label_2bc830;
        case 0x2bc844u: goto label_2bc844;
        case 0x2bc858u: goto label_2bc858;
        case 0x2bc870u: goto label_2bc870;
        case 0x2bc884u: goto label_2bc884;
        case 0x2bc890u: goto label_2bc890;
        case 0x2bc8a4u: goto label_2bc8a4;
        case 0x2bc8c0u: goto label_2bc8c0;
        case 0x2bc8e0u: goto label_2bc8e0;
        case 0x2bc8f4u: goto label_2bc8f4;
        case 0x2bc908u: goto label_2bc908;
        case 0x2bc920u: goto label_2bc920;
        case 0x2bc930u: goto label_2bc930;
        case 0x2bc940u: goto label_2bc940;
        default: break;
    }

    ctx->pc = 0x2bc7b0u;

    // 0x2bc7b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2bc7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2bc7b4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2bc7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2bc7b8: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2bc7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2bc7bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2bc7bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7c0: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x2bc7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x2bc7c4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2bc7c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7c8: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2bc7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2bc7cc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2bc7ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7d0: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2bc7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x2bc7d4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2bc7d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7d8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2bc7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2bc7dc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2bc7dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7e0: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2bc7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2bc7e4: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x2bc7e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7e8: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2bc7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2bc7ec: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2bc7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2bc7f0: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2bc7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2bc7f4: 0xc0a5af6  jal         func_296BD8
    ctx->pc = 0x2BC7F4u;
    SET_GPR_U32(ctx, 31, 0x2BC7FCu);
    ctx->pc = 0x2BC7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC7F4u;
    // 0x2bc7f8: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BD8u, 0x2BC7F4u, 0x2BC7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC7FCu;
label_2bc7fc:
    // 0x2bc7fc: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2bc7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x2bc800: 0xc0a5ef6  jal         func_297BD8
    ctx->pc = 0x2BC800u;
    SET_GPR_U32(ctx, 31, 0x2BC808u);
    ctx->pc = 0x2BC804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC800u;
    // 0x2bc804: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297BD8u, 0x2BC800u, 0x2BC808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC808u;
label_2bc808:
    // 0x2bc808: 0xc0a5ef6  jal         func_297BD8
    ctx->pc = 0x2BC808u;
    SET_GPR_U32(ctx, 31, 0x2BC810u);
    ctx->pc = 0x2BC80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC808u;
    // 0x2bc80c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297BD8u, 0x2BC808u, 0x2BC810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC810u;
label_2bc810:
    // 0x2bc810: 0x12000043  beqz        $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2BC810u;
    {
        const bool branch_taken_0x2bc810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC810u;
        // 0x2bc814: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc810) {
            ctx->pc = 0x2BC920u;
            goto label_2bc920;
        }
    }
    ctx->pc = 0x2BC818u;
    // 0x2bc818: 0x1260003d  beqz        $s3, . + 4 + (0x3D << 2)
    ctx->pc = 0x2BC818u;
    {
        const bool branch_taken_0x2bc818 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC818u;
        // 0x2bc81c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc818) {
            ctx->pc = 0x2BC910u;
            goto label_2bc910;
        }
    }
    ctx->pc = 0x2BC820u;
    // 0x2bc820: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2bc820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc824: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2bc824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc828: 0xc0a5f8a  jal         func_297E28
    ctx->pc = 0x2BC828u;
    SET_GPR_U32(ctx, 31, 0x2BC830u);
    ctx->pc = 0x2BC82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC828u;
    // 0x2bc82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E28u, 0x2BC828u, 0x2BC830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC830u;
label_2bc830:
    // 0x2bc830: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2BC830u;
    {
        const bool branch_taken_0x2bc830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC830u;
        // 0x2bc834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc830) {
            ctx->pc = 0x2BC910u;
            goto label_2bc910;
        }
    }
    ctx->pc = 0x2BC838u;
    // 0x2bc838: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2bc838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc83c: 0xc0a5ff4  jal         func_297FD0
    ctx->pc = 0x2BC83Cu;
    SET_GPR_U32(ctx, 31, 0x2BC844u);
    ctx->pc = 0x2BC840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC83Cu;
    // 0x2bc840: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FD0u, 0x2BC83Cu, 0x2BC844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC844u;
label_2bc844:
    // 0x2bc844: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x2bc844u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bc848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc84c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bc84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc850: 0xc0a5ff6  jal         func_297FD8
    ctx->pc = 0x2BC850u;
    SET_GPR_U32(ctx, 31, 0x2BC858u);
    ctx->pc = 0x2BC854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC850u;
    // 0x2bc854: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FD8u, 0x2BC850u, 0x2BC858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC858u;
label_2bc858:
    // 0x2bc858: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2BC858u;
    {
        const bool branch_taken_0x2bc858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC858u;
        // 0x2bc85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc858) {
            ctx->pc = 0x2BC910u;
            goto label_2bc910;
        }
    }
    ctx->pc = 0x2BC860u;
    // 0x2bc860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bc860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bc864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc868: 0xc0a5f8a  jal         func_297E28
    ctx->pc = 0x2BC868u;
    SET_GPR_U32(ctx, 31, 0x2BC870u);
    ctx->pc = 0x2BC86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC868u;
    // 0x2bc86c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E28u, 0x2BC868u, 0x2BC870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC870u;
label_2bc870:
    // 0x2bc870: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BC870u;
    {
        const bool branch_taken_0x2bc870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC870u;
        // 0x2bc874: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc870) {
            ctx->pc = 0x2BC910u;
            goto label_2bc910;
        }
    }
    ctx->pc = 0x2BC878u;
    // 0x2bc878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc87c: 0xc0a5ff4  jal         func_297FD0
    ctx->pc = 0x2BC87Cu;
    SET_GPR_U32(ctx, 31, 0x2BC884u);
    ctx->pc = 0x2BC880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC87Cu;
    // 0x2bc880: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FD0u, 0x2BC87Cu, 0x2BC884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC884u;
label_2bc884:
    // 0x2bc884: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bc884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc888: 0xc0a5f48  jal         func_297D20
    ctx->pc = 0x2BC888u;
    SET_GPR_U32(ctx, 31, 0x2BC890u);
    ctx->pc = 0x2BC88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC888u;
    // 0x2bc88c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297D20u, 0x2BC888u, 0x2BC890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC890u;
label_2bc890:
    // 0x2bc890: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2BC890u;
    {
        const bool branch_taken_0x2bc890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC890u;
        // 0x2bc894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc890) {
            ctx->pc = 0x2BC910u;
            goto label_2bc910;
        }
    }
    ctx->pc = 0x2BC898u;
    // 0x2bc898: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2bc898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc89c: 0xc0a5ff4  jal         func_297FD0
    ctx->pc = 0x2BC89Cu;
    SET_GPR_U32(ctx, 31, 0x2BC8A4u);
    ctx->pc = 0x2BC8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC89Cu;
    // 0x2bc8a0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FD0u, 0x2BC89Cu, 0x2BC8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC8A4u;
label_2bc8a4:
    // 0x2bc8a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2bc8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2bc8a8: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x2bc8a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2bc8ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BC8ACu;
    {
        const bool branch_taken_0x2bc8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8ACu;
        // 0x2bc8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8ac) {
            ctx->pc = 0x2BC8E8u;
            goto label_2bc8e8;
        }
    }
    ctx->pc = 0x2BC8B4u;
    // 0x2bc8b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bc8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8b8: 0xc0a5ff6  jal         func_297FD8
    ctx->pc = 0x2BC8B8u;
    SET_GPR_U32(ctx, 31, 0x2BC8C0u);
    ctx->pc = 0x2BC8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC8B8u;
    // 0x2bc8bc: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FD8u, 0x2BC8B8u, 0x2BC8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC8C0u;
label_2bc8c0:
    // 0x2bc8c0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BC8C0u;
    {
        const bool branch_taken_0x2bc8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8C0u;
        // 0x2bc8c4: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8c0) {
            ctx->pc = 0x2BC910u;
            goto label_2bc910;
        }
    }
    ctx->pc = 0x2BC8C8u;
    // 0x2bc8c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bc8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bc8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8d0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2bc8d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8d4: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x2bc8d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2bc8d8: 0xc0a5ff6  jal         func_297FD8
    ctx->pc = 0x2BC8D8u;
    SET_GPR_U32(ctx, 31, 0x2BC8E0u);
    ctx->pc = 0x2BC8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC8D8u;
    // 0x2bc8dc: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FD8u, 0x2BC8D8u, 0x2BC8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC8E0u;
label_2bc8e0:
    // 0x2bc8e0: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x2BC8E0u;
    {
        const bool branch_taken_0x2bc8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc8e0) {
            ctx->pc = 0x2BC858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bc858;
        }
    }
    ctx->pc = 0x2BC8E8u;
label_2bc8e8:
    // 0x2bc8e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2bc8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8ec: 0xc0a5ff6  jal         func_297FD8
    ctx->pc = 0x2BC8ECu;
    SET_GPR_U32(ctx, 31, 0x2BC8F4u);
    ctx->pc = 0x2BC8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC8ECu;
    // 0x2bc8f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FD8u, 0x2BC8ECu, 0x2BC8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC8F4u;
label_2bc8f4:
    // 0x2bc8f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC8F4u;
    {
        const bool branch_taken_0x2bc8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8F4u;
        // 0x2bc8f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8f4) {
            ctx->pc = 0x2BC910u;
            goto label_2bc910;
        }
    }
    ctx->pc = 0x2BC8FCu;
    // 0x2bc8fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2bc8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc900: 0xc049c48  jal         func_127120
    ctx->pc = 0x2BC900u;
    SET_GPR_U32(ctx, 31, 0x2BC908u);
    ctx->pc = 0x2BC904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC900u;
    // 0x2bc904: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2BC900u, 0x2BC908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC908u;
label_2bc908:
    // 0x2bc908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc90c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2bc90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_2bc910:
    // 0x2bc910: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC910u;
    {
        const bool branch_taken_0x2bc910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc910) {
            ctx->pc = 0x2BC920u;
            goto label_2bc920;
        }
    }
    ctx->pc = 0x2BC918u;
    // 0x2bc918: 0xc0a5f2a  jal         func_297CA8
    ctx->pc = 0x2BC918u;
    SET_GPR_U32(ctx, 31, 0x2BC920u);
    ctx->pc = 0x2BC91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC918u;
    // 0x2bc91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CA8u, 0x2BC918u, 0x2BC920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC920u;
label_2bc920:
    // 0x2bc920: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC920u;
    {
        const bool branch_taken_0x2bc920 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC920u;
        // 0x2bc924: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc920) {
            ctx->pc = 0x2BC934u;
            goto label_2bc934;
        }
    }
    ctx->pc = 0x2BC928u;
    // 0x2bc928: 0xc0a5f2a  jal         func_297CA8
    ctx->pc = 0x2BC928u;
    SET_GPR_U32(ctx, 31, 0x2BC930u);
    ctx->pc = 0x2BC92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC928u;
    // 0x2bc92c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CA8u, 0x2BC928u, 0x2BC930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC930u;
label_2bc930:
    // 0x2bc930: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bc930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bc934:
    // 0x2bc934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bc934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc938: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2BC938u;
    SET_GPR_U32(ctx, 31, 0x2BC940u);
    ctx->pc = 0x2BC93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC938u;
    // 0x2bc93c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2BC938u, 0x2BC940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC940u;
label_2bc940:
    // 0x2bc940: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2bc940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2bc944: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2bc944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bc948: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2bc948u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bc94c: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x2bc94cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bc950: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2bc950u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2bc954: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x2bc954u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bc958: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2bc958u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bc95c: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2bc95cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bc960: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2bc960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bc964: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2bc964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bc968: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2bc968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bc96c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC96Cu;
        // 0x2bc970: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC974u;
    // 0x2bc974: 0x0  nop
    ctx->pc = 0x2bc974u;
    // NOP
}
