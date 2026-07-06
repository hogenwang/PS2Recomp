#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011B460
// Address: 0x11b460 - 0x11b780
void sub_0011B460_0x11b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B460_0x11b460");
#endif

    switch (ctx->pc) {
        case 0x11b4a0u: goto label_11b4a0;
        case 0x11b4acu: goto label_11b4ac;
        case 0x11b4ccu: goto label_11b4cc;
        case 0x11b4dcu: goto label_11b4dc;
        case 0x11b4f8u: goto label_11b4f8;
        case 0x11b500u: goto label_11b500;
        case 0x11b520u: goto label_11b520;
        case 0x11b534u: goto label_11b534;
        case 0x11b554u: goto label_11b554;
        case 0x11b560u: goto label_11b560;
        case 0x11b5c0u: goto label_11b5c0;
        case 0x11b614u: goto label_11b614;
        case 0x11b630u: goto label_11b630;
        case 0x11b658u: goto label_11b658;
        case 0x11b66cu: goto label_11b66c;
        case 0x11b6e0u: goto label_11b6e0;
        case 0x11b6f8u: goto label_11b6f8;
        case 0x11b710u: goto label_11b710;
        case 0x11b728u: goto label_11b728;
        case 0x11b760u: goto label_11b760;
        case 0x11b770u: goto label_11b770;
        default: break;
    }

    ctx->pc = 0x11b460u;

label_11b460:
    // 0x11b460: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x11b460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11b464: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x11b464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x11b468: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x11b468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x11b46c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11b46cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b470: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x11b470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x11b474: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11b474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b478: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x11b478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x11b47c: 0x3c160036  lui         $s6, 0x36
    ctx->pc = 0x11b47cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
    // 0x11b480: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x11b480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x11b484: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x11b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x11b488: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x11b488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x11b48c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x11b48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x11b490: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x11b490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x11b494: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x11b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11b498: 0xc046c62  jal         func_11B188
    ctx->pc = 0x11B498u;
    SET_GPR_U32(ctx, 31, 0x11B4A0u);
    ctx->pc = 0x11B49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B498u;
            // 0x11b49c: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B188u;
    if (runtime->hasFunction(0x11B188u)) {
        auto targetFn = runtime->lookupFunction(0x11B188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B4A0u; }
        if (ctx->pc != 0x11B4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B188_0x11b188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B4A0u; }
        if (ctx->pc != 0x11B4A0u) { return; }
    }
    ctx->pc = 0x11B4A0u;
label_11b4a0:
    // 0x11b4a0: 0x8ec49de8  lw          $a0, -0x6218($s6)
    ctx->pc = 0x11b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294942184)));
    // 0x11b4a4: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11B4A4u;
    SET_GPR_U32(ctx, 31, 0x11B4ACu);
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B4ACu; }
        if (ctx->pc != 0x11B4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B4ACu; }
        if (ctx->pc != 0x11B4ACu) { return; }
    }
    ctx->pc = 0x11B4ACu;
label_11b4ac:
    // 0x11b4ac: 0x8ec39de8  lw          $v1, -0x6218($s6)
    ctx->pc = 0x11b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294942184)));
    // 0x11b4b0: 0x1462009e  bne         $v1, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x11B4B0u;
    {
        const bool branch_taken_0x11b4b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B4B0u;
            // 0x11b4b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4b0) {
            ctx->pc = 0x11B72Cu;
            goto label_11b72c;
        }
    }
    ctx->pc = 0x11B4B8u;
    // 0x11b4b8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11b4bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b4c0: 0x0  nop
    ctx->pc = 0x11b4c0u;
    // NOP
    // 0x11b4c4: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x11B4C4u;
    SET_GPR_U32(ctx, 31, 0x11B4CCu);
    ctx->pc = 0x11B4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B4C4u;
            // 0x11b4c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (runtime->hasFunction(0x11B970u)) {
        auto targetFn = runtime->lookupFunction(0x11B970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B4CCu; }
        if (ctx->pc != 0x11B4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B970_0x11b970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B4CCu; }
        if (ctx->pc != 0x11B4CCu) { return; }
    }
    ctx->pc = 0x11B4CCu;
label_11b4cc:
    // 0x11b4cc: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x11B4CCu;
    {
        const bool branch_taken_0x11b4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B4CCu;
            // 0x11b4d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4cc) {
            ctx->pc = 0x11B660u;
            goto label_11b660;
        }
    }
    ctx->pc = 0x11B4D4u;
    // 0x11b4d4: 0xc0440ea  jal         func_1103A8
    ctx->pc = 0x11B4D4u;
    SET_GPR_U32(ctx, 31, 0x11B4DCu);
    ctx->pc = 0x11B4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B4D4u;
            // 0x11b4d8: 0x3c110036  lui         $s1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1103A8u;
    if (runtime->hasFunction(0x1103A8u)) {
        auto targetFn = runtime->lookupFunction(0x1103A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B4DCu; }
        if (ctx->pc != 0x11B4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001103A8_0x1103a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B4DCu; }
        if (ctx->pc != 0x11B4DCu) { return; }
    }
    ctx->pc = 0x11B4DCu;
label_11b4dc:
    // 0x11b4dc: 0x8e229e0c  lw          $v0, -0x61F4($s1)
    ctx->pc = 0x11b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942220)));
    // 0x11b4e0: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11B4E0u;
    {
        const bool branch_taken_0x11b4e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11B4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B4E0u;
            // 0x11b4e4: 0x3c170041  lui         $s7, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4e0) {
            ctx->pc = 0x11B594u;
            goto label_11b594;
        }
    }
    ctx->pc = 0x11B4E8u;
    // 0x11b4e8: 0x3c140036  lui         $s4, 0x36
    ctx->pc = 0x11b4e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)54 << 16));
    // 0x11b4ec: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x11b4ecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x11b4f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11B4F0u;
    {
        const bool branch_taken_0x11b4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B4F0u;
            // 0x11b4f4: 0x3c1e0041  lui         $fp, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4f0) {
            ctx->pc = 0x11B51Cu;
            goto label_11b51c;
        }
    }
    ctx->pc = 0x11B4F8u;
label_11b4f8:
    // 0x11b4f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b4fc: 0x0  nop
    ctx->pc = 0x11b4fcu;
    // NOP
label_11b500:
    // 0x11b500: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11b500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11b504: 0x0  nop
    ctx->pc = 0x11b504u;
    // NOP
    // 0x11b508: 0x0  nop
    ctx->pc = 0x11b508u;
    // NOP
    // 0x11b50c: 0x0  nop
    ctx->pc = 0x11b50cu;
    // NOP
    // 0x11b510: 0x0  nop
    ctx->pc = 0x11b510u;
    // NOP
    // 0x11b514: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11B514u;
    {
        const bool branch_taken_0x11b514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11b514) {
            ctx->pc = 0x11B500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b500;
        }
    }
    ctx->pc = 0x11B51Cu;
label_11b51c:
    // 0x11b51c: 0x26f0da40  addiu       $s0, $s7, -0x25C0
    ctx->pc = 0x11b51cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294957632));
label_11b520:
    // 0x11b520: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11b520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11b524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b528: 0x34a50597  ori         $a1, $a1, 0x597
    ctx->pc = 0x11b528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1431);
    // 0x11b52c: 0xc0442d4  jal         func_110B50
    ctx->pc = 0x11B52Cu;
    SET_GPR_U32(ctx, 31, 0x11B534u);
    ctx->pc = 0x11B530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B52Cu;
            // 0x11b530: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (runtime->hasFunction(0x110B50u)) {
        auto targetFn = runtime->lookupFunction(0x110B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B534u; }
        if (ctx->pc != 0x11B534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110B50_0x110b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B534u; }
        if (ctx->pc != 0x11B534u) { return; }
    }
    ctx->pc = 0x11B534u;
label_11b534:
    // 0x11b534: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11B534u;
    {
        const bool branch_taken_0x11b534 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11b534) {
            ctx->pc = 0x11B538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B534u;
            // 0x11b538: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B584u;
            goto label_11b584;
        }
    }
    ctx->pc = 0x11B53Cu;
    // 0x11b53c: 0x8e829dd0  lw          $v0, -0x6230($s4)
    ctx->pc = 0x11b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294942160)));
    // 0x11b540: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B540u;
    {
        const bool branch_taken_0x11b540 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11B544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B540u;
            // 0x11b544: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b540) {
            ctx->pc = 0x11B558u;
            goto label_11b558;
        }
    }
    ctx->pc = 0x11B548u;
    // 0x11b548: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x11b548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x11b54c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11B54Cu;
    SET_GPR_U32(ctx, 31, 0x11B554u);
    ctx->pc = 0x11B550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B54Cu;
            // 0x11b550: 0x2484b210  addiu       $a0, $a0, -0x4DF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B554u; }
        if (ctx->pc != 0x11B554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B554u; }
        if (ctx->pc != 0x11B554u) { return; }
    }
    ctx->pc = 0x11B554u;
label_11b554:
    // 0x11b554: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11b554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_11b558:
    // 0x11b558: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11b558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b55c: 0x0  nop
    ctx->pc = 0x11b55cu;
    // NOP
label_11b560:
    // 0x11b560: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11b560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11b564: 0x0  nop
    ctx->pc = 0x11b564u;
    // NOP
    // 0x11b568: 0x0  nop
    ctx->pc = 0x11b568u;
    // NOP
    // 0x11b56c: 0x0  nop
    ctx->pc = 0x11b56cu;
    // NOP
    // 0x11b570: 0x0  nop
    ctx->pc = 0x11b570u;
    // NOP
    // 0x11b574: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11B574u;
    {
        const bool branch_taken_0x11b574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11b574) {
            ctx->pc = 0x11B560u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b560;
        }
    }
    ctx->pc = 0x11B57Cu;
    // 0x11b57c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11B57Cu;
    {
        const bool branch_taken_0x11b57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B57Cu;
            // 0x11b580: 0x26f0da40  addiu       $s0, $s7, -0x25C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294957632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b57c) {
            ctx->pc = 0x11B520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b520;
        }
    }
    ctx->pc = 0x11B584u;
label_11b584:
    // 0x11b584: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x11B584u;
    {
        const bool branch_taken_0x11b584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B584u;
            // 0x11b588: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b584) {
            ctx->pc = 0x11B4F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b4f8;
        }
    }
    ctx->pc = 0x11B58Cu;
    // 0x11b58c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11B58Cu;
    {
        const bool branch_taken_0x11b58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B58Cu;
            // 0x11b590: 0xae209e0c  sw          $zero, -0x61F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294942220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b58c) {
            ctx->pc = 0x11B5A0u;
            goto label_11b5a0;
        }
    }
    ctx->pc = 0x11B594u;
label_11b594:
    // 0x11b594: 0x3c140036  lui         $s4, 0x36
    ctx->pc = 0x11b594u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)54 << 16));
    // 0x11b598: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x11b598u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x11b59c: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x11b59cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
label_11b5a0:
    // 0x11b5a0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x11b5a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11b5a4: 0x26a4d8c0  addiu       $a0, $s5, -0x2740
    ctx->pc = 0x11b5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957248));
    // 0x11b5a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b5ac: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x11b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x11b5b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11B5B0u;
    {
        const bool branch_taken_0x11b5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B5B0u;
            // 0x11b5b4: 0xa0830024  sb          $v1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5b0) {
            ctx->pc = 0x11B5E4u;
            goto label_11b5e4;
        }
    }
    ctx->pc = 0x11B5B8u;
    // 0x11b5b8: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x11b5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x11b5bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11b5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_11b5c0:
    // 0x11b5c0: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x11b5c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x11b5c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B5C4u;
    {
        const bool branch_taken_0x11b5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B5C4u;
            // 0x11b5c8: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5c4) {
            ctx->pc = 0x11B5E4u;
            goto label_11b5e4;
        }
    }
    ctx->pc = 0x11B5CCu;
    // 0x11b5cc: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x11b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x11b5d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11b5d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b5d4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11b5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11b5d8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x11b5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x11b5dc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11B5DCu;
    {
        const bool branch_taken_0x11b5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b5dc) {
            ctx->pc = 0x11B5E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B5DCu;
            // 0x11b5e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B5C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b5c0;
        }
    }
    ctx->pc = 0x11B5E4u;
label_11b5e4:
    // 0x11b5e4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x11b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11b5e8: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B5E8u;
    {
        const bool branch_taken_0x11b5e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B5E8u;
            // 0x11b5ec: 0x8e829dd0  lw          $v0, -0x6230($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294942160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5e8) {
            ctx->pc = 0x11B5FCu;
            goto label_11b5fc;
        }
    }
    ctx->pc = 0x11B5F0u;
    // 0x11b5f0: 0x26a2d8c0  addiu       $v0, $s5, -0x2740
    ctx->pc = 0x11b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957248));
    // 0x11b5f4: 0xa0400123  sb          $zero, 0x123($v0)
    ctx->pc = 0x11b5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 291), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b5f8: 0x8e829dd0  lw          $v0, -0x6230($s4)
    ctx->pc = 0x11b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294942160)));
label_11b5fc:
    // 0x11b5fc: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B5FCu;
    {
        const bool branch_taken_0x11b5fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11B600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B5FCu;
            // 0x11b600: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5fc) {
            ctx->pc = 0x11B614u;
            goto label_11b614;
        }
    }
    ctx->pc = 0x11B604u;
    // 0x11b604: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x11b604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x11b608: 0x2484b230  addiu       $a0, $a0, -0x4DD0
    ctx->pc = 0x11b608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947376));
    // 0x11b60c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11B60Cu;
    SET_GPR_U32(ctx, 31, 0x11B614u);
    ctx->pc = 0x11B610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B60Cu;
            // 0x11b610: 0x24a5d8e4  addiu       $a1, $a1, -0x271C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B614u; }
        if (ctx->pc != 0x11B614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B614u; }
        if (ctx->pc != 0x11B614u) { return; }
    }
    ctx->pc = 0x11B614u;
label_11b614:
    // 0x11b614: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11b614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b618: 0x26b0d8c0  addiu       $s0, $s5, -0x2740
    ctx->pc = 0x11b618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957248));
    // 0x11b61c: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x11b61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x11b620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b624: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x11b624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x11b628: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x11B628u;
    SET_GPR_U32(ctx, 31, 0x11B630u);
    ctx->pc = 0x11B62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B628u;
            // 0x11b62c: 0xae100124  sw          $s0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (runtime->hasFunction(0x1102F8u)) {
        auto targetFn = runtime->lookupFunction(0x1102F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B630u; }
        if (ctx->pc != 0x11B630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001102F8_0x1102f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B630u; }
        if (ctx->pc != 0x11B630u) { return; }
    }
    ctx->pc = 0x11B630u;
label_11b630:
    // 0x11b630: 0x26e4da40  addiu       $a0, $s7, -0x25C0
    ctx->pc = 0x11b630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294957632));
    // 0x11b634: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11b634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11b638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b63c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11b63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b640: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11b640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b644: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x11b644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x11b648: 0x27c9da00  addiu       $t1, $fp, -0x2600
    ctx->pc = 0x11b648u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 4294957568));
    // 0x11b64c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11b64cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11b650: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11B650u;
    SET_GPR_U32(ctx, 31, 0x11B658u);
    ctx->pc = 0x11B654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B650u;
            // 0x11b654: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B658u; }
        if (ctx->pc != 0x11B658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B658u; }
        if (ctx->pc != 0x11B658u) { return; }
    }
    ctx->pc = 0x11B658u;
label_11b658:
    // 0x11b658: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B658u;
    {
        const bool branch_taken_0x11b658 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11B65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B658u;
            // 0x11b65c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b658) {
            ctx->pc = 0x11B674u;
            goto label_11b674;
        }
    }
    ctx->pc = 0x11B660u;
label_11b660:
    // 0x11b660: 0x8ec49de8  lw          $a0, -0x6218($s6)
    ctx->pc = 0x11b660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294942184)));
    // 0x11b664: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11B664u;
    SET_GPR_U32(ctx, 31, 0x11B66Cu);
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B66Cu; }
        if (ctx->pc != 0x11B66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B66Cu; }
        if (ctx->pc != 0x11B66Cu) { return; }
    }
    ctx->pc = 0x11B66Cu;
label_11b66c:
    // 0x11b66c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x11B66Cu;
    {
        const bool branch_taken_0x11b66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B66Cu;
            // 0x11b670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b66c) {
            ctx->pc = 0x11B72Cu;
            goto label_11b72c;
        }
    }
    ctx->pc = 0x11B674u;
label_11b674:
    // 0x11b674: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x11b674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x11b678: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x11b678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11b67c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x11b67cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11b680: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x11b680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11b684: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x11b684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11b688: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x11b688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x11b68c: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x11b68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x11b690: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x11b690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11b694: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x11b694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11b698: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x11b698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11b69c: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x11b69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11b6a0: 0xb264000f  sdl         $a0, 0xF($s3)
    ctx->pc = 0x11b6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11b6a4: 0xb6640008  sdr         $a0, 0x8($s3)
    ctx->pc = 0x11b6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11b6a8: 0xb2650017  sdl         $a1, 0x17($s3)
    ctx->pc = 0x11b6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11b6ac: 0xb6650010  sdr         $a1, 0x10($s3)
    ctx->pc = 0x11b6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11b6b0: 0xb266001f  sdl         $a2, 0x1F($s3)
    ctx->pc = 0x11b6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11b6b4: 0xb6660018  sdr         $a2, 0x18($s3)
    ctx->pc = 0x11b6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11b6b8: 0x88430023  lwl         $v1, 0x23($v0)
    ctx->pc = 0x11b6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x11b6bc: 0x98430020  lwr         $v1, 0x20($v0)
    ctx->pc = 0x11b6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x11b6c0: 0xaa630023  swl         $v1, 0x23($s3)
    ctx->pc = 0x11b6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11b6c4: 0xba630020  swr         $v1, 0x20($s3)
    ctx->pc = 0x11b6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11b6c8: 0x8e839dd0  lw          $v1, -0x6230($s4)
    ctx->pc = 0x11b6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294942160)));
    // 0x11b6cc: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x11B6CCu;
    {
        const bool branch_taken_0x11b6cc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11B6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6CCu;
            // 0x11b6d0: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6cc) {
            ctx->pc = 0x11B710u;
            goto label_11b710;
        }
    }
    ctx->pc = 0x11B6D4u;
    // 0x11b6d4: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x11b6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x11b6d8: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11B6D8u;
    SET_GPR_U32(ctx, 31, 0x11B6E0u);
    ctx->pc = 0x11B6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6D8u;
            // 0x11b6dc: 0x2484b248  addiu       $a0, $a0, -0x4DB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B6E0u; }
        if (ctx->pc != 0x11B6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B6E0u; }
        if (ctx->pc != 0x11B6E0u) { return; }
    }
    ctx->pc = 0x11B6E0u;
label_11b6e0:
    // 0x11b6e0: 0x8e829dd0  lw          $v0, -0x6230($s4)
    ctx->pc = 0x11b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294942160)));
    // 0x11b6e4: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11B6E4u;
    {
        const bool branch_taken_0x11b6e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11B6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6E4u;
            // 0x11b6e8: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6e4) {
            ctx->pc = 0x11B710u;
            goto label_11b710;
        }
    }
    ctx->pc = 0x11B6ECu;
    // 0x11b6ec: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x11b6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x11b6f0: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11B6F0u;
    SET_GPR_U32(ctx, 31, 0x11B6F8u);
    ctx->pc = 0x11B6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6F0u;
            // 0x11b6f4: 0x2484b258  addiu       $a0, $a0, -0x4DA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B6F8u; }
        if (ctx->pc != 0x11B6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B6F8u; }
        if (ctx->pc != 0x11B6F8u) { return; }
    }
    ctx->pc = 0x11B6F8u;
label_11b6f8:
    // 0x11b6f8: 0x8e829dd0  lw          $v0, -0x6230($s4)
    ctx->pc = 0x11b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294942160)));
    // 0x11b6fc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B6FCu;
    {
        const bool branch_taken_0x11b6fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11B700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6FCu;
            // 0x11b700: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6fc) {
            ctx->pc = 0x11B710u;
            goto label_11b710;
        }
    }
    ctx->pc = 0x11B704u;
    // 0x11b704: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x11b704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11b708: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11B708u;
    SET_GPR_U32(ctx, 31, 0x11B710u);
    ctx->pc = 0x11B70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B708u;
            // 0x11b70c: 0x2484b268  addiu       $a0, $a0, -0x4D98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B710u; }
        if (ctx->pc != 0x11B710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B710u; }
        if (ctx->pc != 0x11B710u) { return; }
    }
    ctx->pc = 0x11B710u;
label_11b710:
    // 0x11b710: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x11b710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x11b714: 0x27c2da00  addiu       $v0, $fp, -0x2600
    ctx->pc = 0x11b714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294957568));
    // 0x11b718: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11b718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11b71c: 0x8ec49de8  lw          $a0, -0x6218($s6)
    ctx->pc = 0x11b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294942184)));
    // 0x11b720: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11B720u;
    SET_GPR_U32(ctx, 31, 0x11B728u);
    ctx->pc = 0x11B724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B720u;
            // 0x11b724: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B728u; }
        if (ctx->pc != 0x11B728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B728u; }
        if (ctx->pc != 0x11B728u) { return; }
    }
    ctx->pc = 0x11B728u;
label_11b728:
    // 0x11b728: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11b728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b72c:
    // 0x11b72c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x11b72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11b730: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x11b730u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11b734: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x11b734u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11b738: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x11b738u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11b73c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x11b73cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11b740: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x11b740u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11b744: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x11b744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11b748: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x11b748u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11b74c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x11b74cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b750: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11b750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b754: 0x3e00008  jr          $ra
    ctx->pc = 0x11B754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B754u;
            // 0x11b758: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B75Cu;
    // 0x11b75c: 0x0  nop
    ctx->pc = 0x11b75cu;
    // NOP
label_11b760:
    // 0x11b760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b768: 0xc046d18  jal         func_11B460
    ctx->pc = 0x11B768u;
    SET_GPR_U32(ctx, 31, 0x11B770u);
    ctx->pc = 0x11B76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B768u;
            // 0x11b76c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B460u;
    goto label_11b460;
    ctx->pc = 0x11B770u;
label_11b770:
    // 0x11b770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b774: 0x3e00008  jr          $ra
    ctx->pc = 0x11B774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B774u;
            // 0x11b778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B77Cu;
    // 0x11b77c: 0x0  nop
    ctx->pc = 0x11b77cu;
    // NOP
    ctx->pc = 0x11b780u;
}
