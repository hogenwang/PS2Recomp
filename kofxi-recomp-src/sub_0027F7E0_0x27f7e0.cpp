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

// Function: sub_0027F7E0
// Address: 0x27f7e0 - 0x27fa30
void sub_0027F7E0_0x27f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F7E0_0x27f7e0");
#endif

    switch (ctx->pc) {
        case 0x27f834u: goto label_27f834;
        case 0x27f868u: goto label_27f868;
        case 0x27f8f8u: goto label_27f8f8;
        case 0x27f93cu: goto label_27f93c;
        case 0x27f948u: goto label_27f948;
        case 0x27f96cu: goto label_27f96c;
        case 0x27f9a0u: goto label_27f9a0;
        case 0x27f9ecu: goto label_27f9ec;
        case 0x27fa04u: goto label_27fa04;
        case 0x27fa14u: goto label_27fa14;
        default: break;
    }

    ctx->pc = 0x27f7e0u;

    // 0x27f7e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x27f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x27f7e4: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x27f7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x27f7e8: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x27f7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x27f7ec: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x27f7ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f7f0: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x27f7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x27f7f4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x27f7f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f7f8: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x27f7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x27f7fc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x27f7fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f800: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x27f800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x27f804: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x27f804u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f808: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x27f808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x27f80c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27f80cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f810: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x27f810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x27f814: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x27f814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f818: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F818u;
    {
        const bool branch_taken_0x27f818 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F818u;
        // 0x27f81c: 0xffb00050  sd          $s0, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f818) {
            ctx->pc = 0x27F82Cu;
            goto label_27f82c;
        }
    }
    ctx->pc = 0x27F820u;
    // 0x27f820: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x27f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27f824: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F824u;
    {
        const bool branch_taken_0x27f824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F824u;
        // 0x27f828: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f824) {
            ctx->pc = 0x27F848u;
            goto label_27f848;
        }
    }
    ctx->pc = 0x27F82Cu;
label_27f82c:
    // 0x27f82c: 0xc0a06ea  jal         func_281BA8
    ctx->pc = 0x27F82Cu;
    SET_GPR_U32(ctx, 31, 0x27F834u);
    ctx->pc = 0x281BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281BA8u, 0x27F82Cu, 0x27F834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F834u;
label_27f834:
    // 0x27f834: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27f834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f838: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F838u;
    {
        const bool branch_taken_0x27f838 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f838) {
            ctx->pc = 0x27F83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F838u;
            // 0x27f83c: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F84Cu;
            goto label_27f84c;
        }
    }
    ctx->pc = 0x27F840u;
    // 0x27f840: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x27F840u;
    {
        const bool branch_taken_0x27f840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F840u;
        // 0x27f844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f840) {
            ctx->pc = 0x27FA08u;
            goto label_27fa08;
        }
    }
    ctx->pc = 0x27F848u;
label_27f848:
    // 0x27f848: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27f848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27f84c:
    // 0x27f84c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x27f84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27f850: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x27f850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x27f854: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x27f854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27f858: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x27f858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x27f85c: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x27f85cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x27f860: 0xc0a0554  jal         func_281550
    ctx->pc = 0x27F860u;
    SET_GPR_U32(ctx, 31, 0x27F868u);
    ctx->pc = 0x27F864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F860u;
    // 0x27f864: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281550u, 0x27F860u, 0x27F868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F868u;
label_27f868:
    // 0x27f868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27f868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f86c: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x27f86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x27f870: 0x54400055  bnel        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x27F870u;
    {
        const bool branch_taken_0x27f870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f870) {
            ctx->pc = 0x27F874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F870u;
            // 0x27f874: 0x24150065  addiu       $s5, $zero, 0x65 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F9C8u;
            goto label_27f9c8;
        }
    }
    ctx->pc = 0x27F878u;
    // 0x27f878: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x27f878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f87c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27f880: 0xdfa30038  ld          $v1, 0x38($sp)
    ctx->pc = 0x27f880u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27f884: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x27f884u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27f888: 0x222102f  dsubu       $v0, $s1, $v0
    ctx->pc = 0x27f888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
    // 0x27f88c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x27f88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27f890: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F890u;
    {
        const bool branch_taken_0x27f890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F890u;
        // 0x27f894: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f890) {
            ctx->pc = 0x27F8A0u;
            goto label_27f8a0;
        }
    }
    ctx->pc = 0x27F898u;
    // 0x27f898: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x27F898u;
    {
        const bool branch_taken_0x27f898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F898u;
        // 0x27f89c: 0x24150065  addiu       $s5, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f898) {
            ctx->pc = 0x27F9C8u;
            goto label_27f9c8;
        }
    }
    ctx->pc = 0x27F8A0u;
label_27f8a0:
    // 0x27f8a0: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F8A0u;
    {
        const bool branch_taken_0x27f8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x27F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F8A0u;
        // 0x27f8a4: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8a0) {
            ctx->pc = 0x27F8B0u;
            goto label_27f8b0;
        }
    }
    ctx->pc = 0x27F8A8u;
    // 0x27f8a8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x27F8A8u;
    {
        const bool branch_taken_0x27f8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F8A8u;
        // 0x27f8ac: 0x24150095  addiu       $s5, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8a8) {
            ctx->pc = 0x27F9C8u;
            goto label_27f9c8;
        }
    }
    ctx->pc = 0x27F8B0u;
label_27f8b0:
    // 0x27f8b0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27F8B0u;
    {
        const bool branch_taken_0x27f8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f8b0) {
            ctx->pc = 0x27F908u;
            goto label_27f908;
        }
    }
    ctx->pc = 0x27F8B8u;
    // 0x27f8b8: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x27f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x27f8bc: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x27f8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x27f8c0: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x27f8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x27f8c4: 0xafb60014  sw          $s6, 0x14($sp)
    ctx->pc = 0x27f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 22));
    // 0x27f8c8: 0xafb40028  sw          $s4, 0x28($sp)
    ctx->pc = 0x27f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
    // 0x27f8cc: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F8CCu;
    {
        const bool branch_taken_0x27f8cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F8CCu;
        // 0x27f8d0: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8cc) {
            ctx->pc = 0x27F8E4u;
            goto label_27f8e4;
        }
    }
    ctx->pc = 0x27F8D4u;
    // 0x27f8d4: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x27f8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x27f8d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27f8d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27f8dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27F8DCu;
    {
        const bool branch_taken_0x27f8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F8DCu;
        // 0x27f8e0: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8dc) {
            ctx->pc = 0x27F8E8u;
            goto label_27f8e8;
        }
    }
    ctx->pc = 0x27F8E4u;
label_27f8e4:
    // 0x27f8e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27f8e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f8e8:
    // 0x27f8e8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x27f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x27f8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f8f0: 0xc09fe8c  jal         func_27FA30
    ctx->pc = 0x27F8F0u;
    SET_GPR_U32(ctx, 31, 0x27F8F8u);
    ctx->pc = 0x27F8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F8F0u;
    // 0x27f8f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FA30u, 0x27F8F0u, 0x27F8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8F8u;
label_27f8f8:
    // 0x27f8f8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x27F8F8u;
    {
        const bool branch_taken_0x27f8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F8F8u;
        // 0x27f8fc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8f8) {
            ctx->pc = 0x27F9C8u;
            goto label_27f9c8;
        }
    }
    ctx->pc = 0x27F900u;
    // 0x27f900: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x27F900u;
    {
        const bool branch_taken_0x27f900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F900u;
        // 0x27f904: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f900) {
            ctx->pc = 0x27F9B0u;
            goto label_27f9b0;
        }
    }
    ctx->pc = 0x27F908u;
label_27f908:
    // 0x27f908: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x27F908u;
    {
        const bool branch_taken_0x27f908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F908u;
        // 0x27f90c: 0x64630001  daddiu      $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f908) {
            ctx->pc = 0x27F98Cu;
            goto label_27f98c;
        }
    }
    ctx->pc = 0x27F910u;
    // 0x27f910: 0x9e020000  lwu         $v0, 0x0($s0)
    ctx->pc = 0x27f910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27f914: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x27f914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27f918: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F918u;
    {
        const bool branch_taken_0x27f918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f918) {
            ctx->pc = 0x27F91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F918u;
            // 0x27f91c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F92Cu;
            goto label_27f92c;
        }
    }
    ctx->pc = 0x27F920u;
    // 0x27f920: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27f920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27f924: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27F924u;
    {
        const bool branch_taken_0x27f924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F924u;
        // 0x27f928: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f924) {
            ctx->pc = 0x27F95Cu;
            goto label_27f95c;
        }
    }
    ctx->pc = 0x27F92Cu;
label_27f92c:
    // 0x27f92c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F92Cu;
    {
        const bool branch_taken_0x27f92c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f92c) {
            ctx->pc = 0x27F930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F92Cu;
            // 0x27f930: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F940u;
            goto label_27f940;
        }
    }
    ctx->pc = 0x27F934u;
    // 0x27f934: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x27F934u;
    SET_GPR_U32(ctx, 31, 0x27F93Cu);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x27F934u, 0x27F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F93Cu;
label_27f93c:
    // 0x27f93c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x27f93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_27f940:
    // 0x27f940: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x27F940u;
    SET_GPR_U32(ctx, 31, 0x27F948u);
    ctx->pc = 0x27F944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F940u;
    // 0x27f944: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x27F940u, 0x27F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F948u;
label_27f948:
    // 0x27f948: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f94c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F94Cu;
    {
        const bool branch_taken_0x27f94c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F94Cu;
        // 0x27f950: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f94c) {
            ctx->pc = 0x27F960u;
            goto label_27f960;
        }
    }
    ctx->pc = 0x27F954u;
    // 0x27f954: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27F954u;
    {
        const bool branch_taken_0x27f954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F954u;
        // 0x27f958: 0x24150021  addiu       $s5, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f954) {
            ctx->pc = 0x27F9C8u;
            goto label_27f9c8;
        }
    }
    ctx->pc = 0x27F95Cu;
label_27f95c:
    // 0x27f95c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f95cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f960:
    // 0x27f960: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x27f960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27f964: 0xc049c48  jal         func_127120
    ctx->pc = 0x27F964u;
    SET_GPR_U32(ctx, 31, 0x27F96Cu);
    ctx->pc = 0x27F968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F964u;
    // 0x27f968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x27F964u, 0x27F96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F96Cu;
label_27f96c:
    // 0x27f96c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x27f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27f970: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x27f970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x27f974: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x27f974u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f978: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f97c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x27f97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27f980: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f984: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27F984u;
    {
        const bool branch_taken_0x27f984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F984u;
        // 0x27f988: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f984) {
            ctx->pc = 0x27F9A4u;
            goto label_27f9a4;
        }
    }
    ctx->pc = 0x27F98Cu;
label_27f98c:
    // 0x27f98c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x27f98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27f990: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F990u;
    {
        const bool branch_taken_0x27f990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F990u;
        // 0x27f994: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f990) {
            ctx->pc = 0x27F9A0u;
            goto label_27f9a0;
        }
    }
    ctx->pc = 0x27F998u;
    // 0x27f998: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x27F998u;
    SET_GPR_U32(ctx, 31, 0x27F9A0u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x27F998u, 0x27F9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9A0u;
label_27f9a0:
    // 0x27f9a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x27f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_27f9a4:
    // 0x27f9a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x27f9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x27f9a8: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x27f9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x27f9ac: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x27f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_27f9b0:
    // 0x27f9b0: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27F9B0u;
    {
        const bool branch_taken_0x27f9b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f9b0) {
            ctx->pc = 0x27F9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F9B0u;
            // 0x27f9b4: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F9B8u;
            goto label_27f9b8;
        }
    }
    ctx->pc = 0x27F9B8u;
label_27f9b8:
    // 0x27f9b8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x27f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f9bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27f9bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f9c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x27F9C0u;
    {
        const bool branch_taken_0x27f9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9C0u;
        // 0x27f9c4: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9c0) {
            ctx->pc = 0x27FA08u;
            goto label_27fa08;
        }
    }
    ctx->pc = 0x27F9C8u;
label_27f9c8:
    // 0x27f9c8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27F9C8u;
    {
        const bool branch_taken_0x27f9c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9C8u;
        // 0x27f9cc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9c8) {
            ctx->pc = 0x27F9F0u;
            goto label_27f9f0;
        }
    }
    ctx->pc = 0x27F9D0u;
    // 0x27f9d0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F9D0u;
    {
        const bool branch_taken_0x27f9d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f9d0) {
            ctx->pc = 0x27F9E4u;
            goto label_27f9e4;
        }
    }
    ctx->pc = 0x27F9D8u;
    // 0x27f9d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x27f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27f9dc: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F9DCu;
    {
        const bool branch_taken_0x27f9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x27F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9DCu;
        // 0x27f9e0: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9dc) {
            ctx->pc = 0x27F9F4u;
            goto label_27f9f4;
        }
    }
    ctx->pc = 0x27F9E4u;
label_27f9e4:
    // 0x27f9e4: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x27F9E4u;
    SET_GPR_U32(ctx, 31, 0x27F9ECu);
    ctx->pc = 0x27F9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F9E4u;
    // 0x27f9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C30u, 0x27F9E4u, 0x27F9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9ECu;
label_27f9ec:
    // 0x27f9ec: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x27f9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27f9f0:
    // 0x27f9f0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x27f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_27f9f4:
    // 0x27f9f4: 0x2405007e  addiu       $a1, $zero, 0x7E
    ctx->pc = 0x27f9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x27f9f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27f9f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f9fc: 0xc0a5648  jal         func_295920
    ctx->pc = 0x27F9FCu;
    SET_GPR_U32(ctx, 31, 0x27FA04u);
    ctx->pc = 0x27FA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F9FCu;
    // 0x27fa00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x27F9FCu, 0x27FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA04u;
label_27fa04:
    // 0x27fa04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27fa04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fa08:
    // 0x27fa08: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x27fa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27fa0c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x27fa0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27fa10: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x27fa10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_27fa14:
    // 0x27fa14: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x27fa14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27fa18: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x27fa18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27fa1c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x27fa1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27fa20: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x27fa20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27fa24: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x27fa24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27fa28: 0x3e00008  jr          $ra
    ctx->pc = 0x27FA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA28u;
        // 0x27fa2c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FA30u;
}
