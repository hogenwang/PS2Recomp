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

// Function: sub_0014C760
// Address: 0x14c760 - 0x14ca70
void sub_0014C760_0x14c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C760_0x14c760");
#endif

    switch (ctx->pc) {
        case 0x14c7b4u: goto label_14c7b4;
        case 0x14c80cu: goto label_14c80c;
        case 0x14c828u: goto label_14c828;
        case 0x14c848u: goto label_14c848;
        case 0x14c88cu: goto label_14c88c;
        case 0x14c8b0u: goto label_14c8b0;
        case 0x14c8ccu: goto label_14c8cc;
        case 0x14c948u: goto label_14c948;
        case 0x14c970u: goto label_14c970;
        case 0x14c9b8u: goto label_14c9b8;
        case 0x14c9c0u: goto label_14c9c0;
        case 0x14c9ecu: goto label_14c9ec;
        case 0x14c9f4u: goto label_14c9f4;
        case 0x14ca24u: goto label_14ca24;
        case 0x14ca2cu: goto label_14ca2c;
        default: break;
    }

    ctx->pc = 0x14c760u;

    // 0x14c760: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14c764: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14c764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x14c768: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14c768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14c76c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x14c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x14c770: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14c770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14c774: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14c774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14c778: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14c778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14c77c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14c77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14c780: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14c780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14c784: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14c784u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14c788: 0x90429f04  lbu         $v0, -0x60FC($v0)
    ctx->pc = 0x14c788u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294942468)));
    // 0x14c78c: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C78Cu;
    {
        const bool branch_taken_0x14c78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14c78c) {
            ctx->pc = 0x14C790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C78Cu;
            // 0x14c790: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C7B0u;
            goto label_14c7b0;
        }
    }
    ctx->pc = 0x14C794u;
    // 0x14c794: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x14c794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x14c798: 0x9042a504  lbu         $v0, -0x5AFC($v0)
    ctx->pc = 0x14c798u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294944004)));
    // 0x14c79c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C79Cu;
    {
        const bool branch_taken_0x14c79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14c79c) {
            ctx->pc = 0x14C7ACu;
            goto label_14c7ac;
        }
    }
    ctx->pc = 0x14C7A4u;
    // 0x14c7a4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14c7a8: 0xa0405d18  sb          $zero, 0x5D18($v0)
    ctx->pc = 0x14c7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23832), (uint8_t)GPR_U32(ctx, 0));
label_14c7ac:
    // 0x14c7ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14c7acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c7b0:
    // 0x14c7b0: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x14c7b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14c7b4:
    // 0x14c7b4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14c7b8: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x14c7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x14c7bc: 0x24635dc0  addiu       $v1, $v1, 0x5DC0
    ctx->pc = 0x14c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24000));
    // 0x14c7c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14c7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14c7c4: 0x240200ab  addiu       $v0, $zero, 0xAB
    ctx->pc = 0x14c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x14c7c8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x14c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14c7cc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14c7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14c7d0: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x14c7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x14c7d4: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x14c7d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14c7d8: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x14c7d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14c7dc: 0x14620094  bne         $v1, $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x14C7DCu;
    {
        const bool branch_taken_0x14c7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c7dc) {
            ctx->pc = 0x14CA30u;
            goto label_14ca30;
        }
    }
    ctx->pc = 0x14C7E4u;
    // 0x14c7e4: 0x92834155  lbu         $v1, 0x4155($s4)
    ctx->pc = 0x14c7e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16725)));
    // 0x14c7e8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x14c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14c7ec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C7ECu;
    {
        const bool branch_taken_0x14c7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7ECu;
        // 0x14c7f0: 0x26844155  addiu       $a0, $s4, 0x4155 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16725));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c7ec) {
            ctx->pc = 0x14C800u;
            goto label_14c800;
        }
    }
    ctx->pc = 0x14C7F4u;
    // 0x14c7f4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x14c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14c7f8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x14c7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14c7fc: 0x0  nop
    ctx->pc = 0x14c7fcu;
    // NOP
label_14c800:
    // 0x14c800: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x14c800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x14c804: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x14C804u;
    SET_GPR_U32(ctx, 31, 0x14C80Cu);
    ctx->pc = 0x14C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C804u;
    // 0x14c808: 0x26900004  addiu       $s0, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x14C804u, 0x14C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C80Cu;
label_14c80c:
    // 0x14c80c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x14c80cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c810: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14c810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14c814: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C814u;
    {
        const bool branch_taken_0x14c814 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c814) {
            ctx->pc = 0x14C828u;
            goto label_14c828;
        }
    }
    ctx->pc = 0x14C81Cu;
    // 0x14c81c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14c81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14c820: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14C820u;
    SET_GPR_U32(ctx, 31, 0x14C828u);
    ctx->pc = 0x14C824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C820u;
    // 0x14c824: 0x2484cf40  addiu       $a0, $a0, -0x30C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14C820u, 0x14C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C828u;
label_14c828:
    // 0x14c828: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14c828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14c82c: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C82Cu;
    {
        const bool branch_taken_0x14c82c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c82c) {
            ctx->pc = 0x14C840u;
            goto label_14c840;
        }
    }
    ctx->pc = 0x14C834u;
    // 0x14c834: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C834u;
    {
        const bool branch_taken_0x14c834 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c834) {
            ctx->pc = 0x14C850u;
            goto label_14c850;
        }
    }
    ctx->pc = 0x14C83Cu;
    // 0x14c83c: 0x0  nop
    ctx->pc = 0x14c83cu;
    // NOP
label_14c840:
    // 0x14c840: 0xc05329c  jal         func_14CA70
    ctx->pc = 0x14C840u;
    SET_GPR_U32(ctx, 31, 0x14C848u);
    ctx->pc = 0x14C844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C840u;
    // 0x14c844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CA70u, 0x14C840u, 0x14C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C848u;
label_14c848:
    // 0x14c848: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x14C848u;
    {
        const bool branch_taken_0x14c848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c848) {
            ctx->pc = 0x14C948u;
            goto label_14c948;
        }
    }
    ctx->pc = 0x14C850u;
label_14c850:
    // 0x14c850: 0x8e914140  lw          $s1, 0x4140($s4)
    ctx->pc = 0x14c850u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16704)));
    // 0x14c854: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x14C854u;
    {
        const bool branch_taken_0x14c854 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c854) {
            ctx->pc = 0x14C948u;
            goto label_14c948;
        }
    }
    ctx->pc = 0x14C85Cu;
    // 0x14c85c: 0x92834156  lbu         $v1, 0x4156($s4)
    ctx->pc = 0x14c85cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16726)));
    // 0x14c860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c864: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C864u;
    {
        const bool branch_taken_0x14c864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c864) {
            ctx->pc = 0x14C878u;
            goto label_14c878;
        }
    }
    ctx->pc = 0x14C86Cu;
    // 0x14c86c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x14C86Cu;
    {
        const bool branch_taken_0x14c86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c86c) {
            ctx->pc = 0x14C948u;
            goto label_14c948;
        }
    }
    ctx->pc = 0x14C874u;
    // 0x14c874: 0x0  nop
    ctx->pc = 0x14c874u;
    // NOP
label_14c878:
    // 0x14c878: 0x8e84415c  lw          $a0, 0x415C($s4)
    ctx->pc = 0x14c878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16732)));
    // 0x14c87c: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x14C87Cu;
    {
        const bool branch_taken_0x14c87c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c87c) {
            ctx->pc = 0x14C948u;
            goto label_14c948;
        }
    }
    ctx->pc = 0x14C884u;
    // 0x14c884: 0xc053598  jal         func_14D660
    ctx->pc = 0x14C884u;
    SET_GPR_U32(ctx, 31, 0x14C88Cu);
    ctx->pc = 0x14D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D660u, 0x14C884u, 0x14C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C88Cu;
label_14c88c:
    // 0x14c88c: 0x8e834158  lw          $v1, 0x4158($s4)
    ctx->pc = 0x14c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16728)));
    // 0x14c890: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14c890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14c894: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x14c894u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x14c898: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14c898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14c89c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C89Cu;
    {
        const bool branch_taken_0x14c89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C89Cu;
        // 0x14c8a0: 0x26934158  addiu       $s3, $s4, 0x4158 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c89c) {
            ctx->pc = 0x14C8B0u;
            goto label_14c8b0;
        }
    }
    ctx->pc = 0x14C8A4u;
    // 0x14c8a4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x14c8a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x14c8a8: 0xc0535c0  jal         func_14D700
    ctx->pc = 0x14C8A8u;
    SET_GPR_U32(ctx, 31, 0x14C8B0u);
    ctx->pc = 0x14C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C8A8u;
    // 0x14c8ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D700u, 0x14C8A8u, 0x14C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8B0u;
label_14c8b0:
    // 0x14c8b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14c8b4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x14c8b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14c8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14c8bc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14C8BCu;
    {
        const bool branch_taken_0x14c8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c8bc) {
            ctx->pc = 0x14C948u;
            goto label_14c948;
        }
    }
    ctx->pc = 0x14C8C4u;
    // 0x14c8c4: 0xc0535f4  jal         func_14D7D0
    ctx->pc = 0x14C8C4u;
    SET_GPR_U32(ctx, 31, 0x14C8CCu);
    ctx->pc = 0x14C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C8C4u;
    // 0x14c8c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D7D0u, 0x14C8C4u, 0x14C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8CCu;
label_14c8cc:
    // 0x14c8cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14c8ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14c8d0: 0x0  nop
    ctx->pc = 0x14c8d0u;
    // NOP
    // 0x14c8d4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14c8d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c8d8: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x14C8D8u;
    {
        const bool branch_taken_0x14c8d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c8d8) {
            ctx->pc = 0x14C948u;
            goto label_14c948;
        }
    }
    ctx->pc = 0x14C8E0u;
    // 0x14c8e0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x14c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x14c8e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14c8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14c8e8: 0x0  nop
    ctx->pc = 0x14c8e8u;
    // NOP
    // 0x14c8ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14c8ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14c8f0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14c8f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c8f8: 0x0  nop
    ctx->pc = 0x14c8f8u;
    // NOP
    // 0x14c8fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14c8fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c900: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14C900u;
    {
        const bool branch_taken_0x14c900 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C900u;
        // 0x14c904: 0x8e85414c  lw          $a1, 0x414C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c900) {
            ctx->pc = 0x14C918u;
            goto label_14c918;
        }
    }
    ctx->pc = 0x14C908u;
    // 0x14c908: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14c908u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14c90c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14c90cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14c910: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14C910u;
    {
        const bool branch_taken_0x14c910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C910u;
        // 0x14c914: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c910) {
            ctx->pc = 0x14C934u;
            goto label_14c934;
        }
    }
    ctx->pc = 0x14C918u;
label_14c918:
    // 0x14c918: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14c918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14c91c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14c920: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14c920u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14c924: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14c924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14c928: 0x0  nop
    ctx->pc = 0x14c928u;
    // NOP
    // 0x14c92c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14c92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14c930: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14c930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_14c934:
    // 0x14c934: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x14c934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14c938: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14c938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14c93c: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x14c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x14c940: 0xc06e822  jal         func_1BA088
    ctx->pc = 0x14C940u;
    SET_GPR_U32(ctx, 31, 0x14C948u);
    ctx->pc = 0x14C944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C940u;
    // 0x14c944: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA088u, 0x14C940u, 0x14C948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C948u;
label_14c948:
    // 0x14c948: 0x8e834144  lw          $v1, 0x4144($s4)
    ctx->pc = 0x14c948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16708)));
    // 0x14c94c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x14c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x14c950: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14c950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c954: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14c954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14c958: 0x22c02  srl         $a1, $v0, 16
    ctx->pc = 0x14c958u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x14c95c: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x14C95Cu;
    {
        const bool branch_taken_0x14c95c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C95Cu;
        // 0x14c960: 0x26934144  addiu       $s3, $s4, 0x4144 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c95c) {
            ctx->pc = 0x14C9C0u;
            goto label_14c9c0;
        }
    }
    ctx->pc = 0x14C964u;
    // 0x14c964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c968: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c96c: 0x0  nop
    ctx->pc = 0x14c96cu;
    // NOP
label_14c970:
    // 0x14c970: 0xc41804  sllv        $v1, $a0, $a2
    ctx->pc = 0x14c970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x14c974: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x14c974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x14c978: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C978u;
    {
        const bool branch_taken_0x14c978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c978) {
            ctx->pc = 0x14C998u;
            goto label_14c998;
        }
    }
    ctx->pc = 0x14C980u;
    // 0x14c980: 0x92220286  lbu         $v0, 0x286($s1)
    ctx->pc = 0x14c980u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 646)));
    // 0x14c984: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14c984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14c988: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C988u;
    {
        const bool branch_taken_0x14c988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c988) {
            ctx->pc = 0x14C998u;
            goto label_14c998;
        }
    }
    ctx->pc = 0x14C990u;
    // 0x14c990: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14c990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c994: 0x0  nop
    ctx->pc = 0x14c994u;
    // NOP
label_14c998:
    // 0x14c998: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14c998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14c99c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x14c99cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14c9a0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x14C9A0u;
    {
        const bool branch_taken_0x14c9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c9a0) {
            ctx->pc = 0x14C970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14c970;
        }
    }
    ctx->pc = 0x14C9A8u;
    // 0x14c9a8: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C9A8u;
    {
        const bool branch_taken_0x14c9a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c9a8) {
            ctx->pc = 0x14C9C0u;
            goto label_14c9c0;
        }
    }
    ctx->pc = 0x14C9B0u;
    // 0x14c9b0: 0xc06e4a0  jal         func_1B9280
    ctx->pc = 0x14C9B0u;
    SET_GPR_U32(ctx, 31, 0x14C9B8u);
    ctx->pc = 0x14C9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C9B0u;
    // 0x14c9b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x14C9B0u, 0x14C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9B8u;
label_14c9b8:
    // 0x14c9b8: 0xc05329c  jal         func_14CA70
    ctx->pc = 0x14C9B8u;
    SET_GPR_U32(ctx, 31, 0x14C9C0u);
    ctx->pc = 0x14C9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C9B8u;
    // 0x14c9bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CA70u, 0x14C9B8u, 0x14C9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9C0u;
label_14c9c0:
    // 0x14c9c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14c9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14c9c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14c9c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14c9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14c9cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14C9CCu;
    {
        const bool branch_taken_0x14c9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c9cc) {
            ctx->pc = 0x14C9F8u;
            goto label_14c9f8;
        }
    }
    ctx->pc = 0x14C9D4u;
    // 0x14c9d4: 0x8e220494  lw          $v0, 0x494($s1)
    ctx->pc = 0x14c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x14c9d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14c9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14c9dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C9DCu;
    {
        const bool branch_taken_0x14c9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c9dc) {
            ctx->pc = 0x14C9F8u;
            goto label_14c9f8;
        }
    }
    ctx->pc = 0x14C9E4u;
    // 0x14c9e4: 0xc06e4a0  jal         func_1B9280
    ctx->pc = 0x14C9E4u;
    SET_GPR_U32(ctx, 31, 0x14C9ECu);
    ctx->pc = 0x14C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C9E4u;
    // 0x14c9e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x14C9E4u, 0x14C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9ECu;
label_14c9ec:
    // 0x14c9ec: 0xc05329c  jal         func_14CA70
    ctx->pc = 0x14C9ECu;
    SET_GPR_U32(ctx, 31, 0x14C9F4u);
    ctx->pc = 0x14C9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C9ECu;
    // 0x14c9f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CA70u, 0x14C9ECu, 0x14C9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9F4u;
label_14c9f4:
    // 0x14c9f4: 0x0  nop
    ctx->pc = 0x14c9f4u;
    // NOP
label_14c9f8:
    // 0x14c9f8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14c9fc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x14ca00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14ca00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14ca04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14CA04u;
    {
        const bool branch_taken_0x14ca04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ca04) {
            ctx->pc = 0x14CA30u;
            goto label_14ca30;
        }
    }
    ctx->pc = 0x14CA0Cu;
    // 0x14ca0c: 0x96824148  lhu         $v0, 0x4148($s4)
    ctx->pc = 0x14ca0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16712)));
    // 0x14ca10: 0x962300ec  lhu         $v1, 0xEC($s1)
    ctx->pc = 0x14ca10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x14ca14: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14CA14u;
    {
        const bool branch_taken_0x14ca14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ca14) {
            ctx->pc = 0x14CA30u;
            goto label_14ca30;
        }
    }
    ctx->pc = 0x14CA1Cu;
    // 0x14ca1c: 0xc06e4a0  jal         func_1B9280
    ctx->pc = 0x14CA1Cu;
    SET_GPR_U32(ctx, 31, 0x14CA24u);
    ctx->pc = 0x14CA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA1Cu;
    // 0x14ca20: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x14CA1Cu, 0x14CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA24u;
label_14ca24:
    // 0x14ca24: 0xc05329c  jal         func_14CA70
    ctx->pc = 0x14CA24u;
    SET_GPR_U32(ctx, 31, 0x14CA2Cu);
    ctx->pc = 0x14CA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA24u;
    // 0x14ca28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CA70u, 0x14CA24u, 0x14CA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA2Cu;
label_14ca2c:
    // 0x14ca2c: 0x0  nop
    ctx->pc = 0x14ca2cu;
    // NOP
label_14ca30:
    // 0x14ca30: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x14ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14ca34: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x14ca34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ca38: 0x2a42000e  slti        $v0, $s2, 0xE
    ctx->pc = 0x14ca38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x14ca3c: 0x5440ff5d  bnel        $v0, $zero, . + 4 + (-0xA3 << 2)
    ctx->pc = 0x14CA3Cu;
    {
        const bool branch_taken_0x14ca3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ca3c) {
            ctx->pc = 0x14CA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CA3Cu;
            // 0x14ca40: 0x324500ff  andi        $a1, $s2, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C7B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14c7b4;
        }
    }
    ctx->pc = 0x14CA44u;
    // 0x14ca44: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x14ca44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca48: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14ca48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14ca4c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14ca4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ca50: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14ca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14ca54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14ca54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ca58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14ca58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ca5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14ca5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ca60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ca60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ca64: 0x3e00008  jr          $ra
    ctx->pc = 0x14CA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA64u;
        // 0x14ca68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CA6Cu;
    // 0x14ca6c: 0x0  nop
    ctx->pc = 0x14ca6cu;
    // NOP
    if (ctx->pc == 0x14ca6cu) { ctx->pc = 0x14ca70u; }
}
