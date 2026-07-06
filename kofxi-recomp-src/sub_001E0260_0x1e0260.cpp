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

// Function: sub_001E0260
// Address: 0x1e0260 - 0x1e03e8
void sub_001E0260_0x1e0260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0260_0x1e0260");
#endif

    switch (ctx->pc) {
        case 0x1e02c8u: goto label_1e02c8;
        case 0x1e0314u: goto label_1e0314;
        case 0x1e0340u: goto label_1e0340;
        case 0x1e0350u: goto label_1e0350;
        case 0x1e0364u: goto label_1e0364;
        case 0x1e0380u: goto label_1e0380;
        case 0x1e03b4u: goto label_1e03b4;
        default: break;
    }

    ctx->pc = 0x1e0260u;

    // 0x1e0260: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e0260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e0264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0268: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1e0268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1e026c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1e026cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1e0270: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e0270u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0274: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1e0274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1e0278: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1e0278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1e027c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1e027cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1e0280: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1e0280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1e0284: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1e0284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1e0288: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1e0288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1e028c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1e028cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1e0290: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1e0290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1e0294: 0x8ea20160  lw          $v0, 0x160($s5)
    ctx->pc = 0x1e0294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 352)));
    // 0x1e0298: 0x10430046  beq         $v0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1E0298u;
    {
        const bool branch_taken_0x1e0298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0298u;
        // 0x1e029c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0298) {
            ctx->pc = 0x1E03B4u;
            goto label_1e03b4;
        }
    }
    ctx->pc = 0x1E02A0u;
    // 0x1e02a0: 0x26a20004  addiu       $v0, $s5, 0x4
    ctx->pc = 0x1e02a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x1e02a4: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x1e02a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1e02a8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1e02a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1e02ac: 0x26a2000c  addiu       $v0, $s5, 0xC
    ctx->pc = 0x1e02acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x1e02b0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1e02b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1e02b4: 0x26a30010  addiu       $v1, $s5, 0x10
    ctx->pc = 0x1e02b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1e02b8: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1e02b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1e02bc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1e02bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e02c0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e02c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1e02c4: 0x26e300c0  addiu       $v1, $s7, 0xC0
    ctx->pc = 0x1e02c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
label_1e02c8:
    // 0x1e02c8: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x1e02c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1e02cc: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1e02ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e02d0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e02d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e02d4: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x1e02d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x1e02d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e02d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e02dc: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x1e02dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e02e0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1e02e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1e02e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e02e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e02e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e02e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e02ec: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1e02ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e02f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1e02f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e02f4: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x1e02f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e02f8: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1e02f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e02fc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1e02fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1e0300: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e0300u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0304: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1e0304u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1e0308: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1e0308u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1e030c: 0xc07fc42  jal         func_1FF108
    ctx->pc = 0x1E030Cu;
    SET_GPR_U32(ctx, 31, 0x1E0314u);
    ctx->pc = 0x1E0310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E030Cu;
    // 0x1e0310: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF108u, 0x1E030Cu, 0x1E0314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0314u;
label_1e0314:
    // 0x1e0314: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0318: 0x5443001e  bnel        $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E0318u;
    {
        const bool branch_taken_0x1e0318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e0318) {
            ctx->pc = 0x1E031Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0318u;
            // 0x1e031c: 0x26e20001  addiu       $v0, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0394u;
            goto label_1e0394;
        }
    }
    ctx->pc = 0x1E0320u;
    // 0x1e0320: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x1e0320u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0324: 0x5602001b  bnel        $s0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E0324u;
    {
        const bool branch_taken_0x1e0324 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e0324) {
            ctx->pc = 0x1E0328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0324u;
            // 0x1e0328: 0x26e20001  addiu       $v0, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0394u;
            goto label_1e0394;
        }
    }
    ctx->pc = 0x1E032Cu;
    // 0x1e032c: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x1e032cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x1e0330: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e0330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0334: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e0334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0338: 0xc07ff0a  jal         func_1FFC28
    ctx->pc = 0x1E0338u;
    SET_GPR_U32(ctx, 31, 0x1E0340u);
    ctx->pc = 0x1E033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0338u;
    // 0x1e033c: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFC28u, 0x1E0338u, 0x1E0340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0340u;
label_1e0340:
    // 0x1e0340: 0x54500005  bnel        $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0340u;
    {
        const bool branch_taken_0x1e0340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1e0340) {
            ctx->pc = 0x1E0344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0340u;
            // 0x1e0344: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0358u;
            goto label_1e0358;
        }
    }
    ctx->pc = 0x1E0348u;
    // 0x1e0348: 0xc0780fa  jal         func_1E03E8
    ctx->pc = 0x1E0348u;
    SET_GPR_U32(ctx, 31, 0x1E0350u);
    ctx->pc = 0x1E034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0348u;
    // 0x1e034c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E03E8u, 0x1E0348u, 0x1E0350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0350u;
label_1e0350:
    // 0x1e0350: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1e0350u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1e0354: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e0354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e0358:
    // 0x1e0358: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e0358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e035c: 0xc07ff46  jal         func_1FFD18
    ctx->pc = 0x1E035Cu;
    SET_GPR_U32(ctx, 31, 0x1E0364u);
    ctx->pc = 0x1E0360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E035Cu;
    // 0x1e0360: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFD18u, 0x1E035Cu, 0x1E0364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0364u;
label_1e0364:
    // 0x1e0364: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e0364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0368: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0368u;
    {
        const bool branch_taken_0x1e0368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1E036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0368u;
        // 0x1e036c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0368) {
            ctx->pc = 0x1E0378u;
            goto label_1e0378;
        }
    }
    ctx->pc = 0x1E0370u;
    // 0x1e0370: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e0370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0374: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1e0374u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_1e0378:
    // 0x1e0378: 0xc07ff62  jal         func_1FFD88
    ctx->pc = 0x1E0378u;
    SET_GPR_U32(ctx, 31, 0x1E0380u);
    ctx->pc = 0x1E037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0378u;
    // 0x1e037c: 0x27a6000c  addiu       $a2, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFD88u, 0x1E0378u, 0x1E0380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0380u;
label_1e0380:
    // 0x1e0380: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0380u;
    {
        const bool branch_taken_0x1e0380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1E0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0380u;
        // 0x1e0384: 0x26e20001  addiu       $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0380) {
            ctx->pc = 0x1E0394u;
            goto label_1e0394;
        }
    }
    ctx->pc = 0x1E0388u;
    // 0x1e0388: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1e0388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1e038c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x1e038cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1e0390: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x1e0390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1e0394:
    // 0x1e0394: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1e0394u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e0398: 0x2ee30020  sltiu       $v1, $s7, 0x20
    ctx->pc = 0x1e0398u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1e039c: 0x5460ffca  bnel        $v1, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1E039Cu;
    {
        const bool branch_taken_0x1e039c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e039c) {
            ctx->pc = 0x1E03A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E039Cu;
            // 0x1e03a0: 0x26e300c0  addiu       $v1, $s7, 0xC0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E02C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e02c8;
        }
    }
    ctx->pc = 0x1E03A4u;
    // 0x1e03a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e03a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e03a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e03a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03ac: 0xc078110  jal         func_1E0440
    ctx->pc = 0x1E03ACu;
    SET_GPR_U32(ctx, 31, 0x1E03B4u);
    ctx->pc = 0x1E03B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E03ACu;
    // 0x1e03b0: 0xaea20160  sw          $v0, 0x160($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0440u, 0x1E03ACu, 0x1E03B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E03B4u;
label_1e03b4:
    // 0x1e03b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1e03b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e03b8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1e03b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e03bc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1e03bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e03c0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1e03c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e03c4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1e03c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e03c8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1e03c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e03cc: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1e03ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e03d0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1e03d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e03d4: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1e03d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e03d8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1e03d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e03dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E03DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E03E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03DCu;
        // 0x1e03e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E03DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E03E4u;
    // 0x1e03e4: 0x0  nop
    ctx->pc = 0x1e03e4u;
    // NOP
    if (ctx->pc == 0x1e03e4u) { ctx->pc = 0x1e03e8u; }
}
