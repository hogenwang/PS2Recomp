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

// Function: sub_0011C188
// Address: 0x11c188 - 0x11c3a8
void sub_0011C188_0x11c188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C188_0x11c188");
#endif

    switch (ctx->pc) {
        case 0x11c1c8u: goto label_11c1c8;
        case 0x11c1d0u: goto label_11c1d0;
        case 0x11c1dcu: goto label_11c1dc;
        case 0x11c1f4u: goto label_11c1f4;
        case 0x11c208u: goto label_11c208;
        case 0x11c218u: goto label_11c218;
        case 0x11c23cu: goto label_11c23c;
        case 0x11c250u: goto label_11c250;
        case 0x11c270u: goto label_11c270;
        case 0x11c278u: goto label_11c278;
        case 0x11c2b8u: goto label_11c2b8;
        case 0x11c2ccu: goto label_11c2cc;
        case 0x11c2e4u: goto label_11c2e4;
        case 0x11c314u: goto label_11c314;
        case 0x11c328u: goto label_11c328;
        case 0x11c348u: goto label_11c348;
        case 0x11c350u: goto label_11c350;
        case 0x11c368u: goto label_11c368;
        case 0x11c37cu: goto label_11c37c;
        default: break;
    }

    ctx->pc = 0x11c188u;

    // 0x11c188: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11c188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11c18c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11c18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11c190: 0x3c160036  lui         $s6, 0x36
    ctx->pc = 0x11c190u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
    // 0x11c194: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11c194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11c198: 0x8ec29dd0  lw          $v0, -0x6230($s6)
    ctx->pc = 0x11c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294942160)));
    // 0x11c19c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11c19cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1a0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11c1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11c1a4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11c1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11c1a8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11c1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11c1ac: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11c1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11c1b0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11c1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11c1b4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C1B4u;
    {
        const bool branch_taken_0x11c1b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1B4u;
        // 0x11c1b8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1b4) {
            ctx->pc = 0x11C1C8u;
            goto label_11c1c8;
        }
    }
    ctx->pc = 0x11C1BCu;
    // 0x11c1bc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x11c1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x11c1c0: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11C1C0u;
    SET_GPR_U32(ctx, 31, 0x11C1C8u);
    ctx->pc = 0x11C1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1C0u;
    // 0x11c1c4: 0x2484b3a0  addiu       $a0, $a0, -0x4C60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11C1C0u, 0x11C1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1C8u;
label_11c1c8:
    // 0x11c1c8: 0xc046c62  jal         func_11B188
    ctx->pc = 0x11C1C8u;
    SET_GPR_U32(ctx, 31, 0x11C1D0u);
    ctx->pc = 0x11C1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1C8u;
    // 0x11c1cc: 0x3c140036  lui         $s4, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)54 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B188u, 0x11C1C8u, 0x11C1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1D0u;
label_11c1d0:
    // 0x11c1d0: 0x8e849df0  lw          $a0, -0x6210($s4)
    ctx->pc = 0x11c1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294942192)));
    // 0x11c1d4: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11C1D4u;
    SET_GPR_U32(ctx, 31, 0x11C1DCu);
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x11C1D4u, 0x11C1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1DCu;
label_11c1dc:
    // 0x11c1dc: 0x8e839df0  lw          $v1, -0x6210($s4)
    ctx->pc = 0x11c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294942192)));
    // 0x11c1e0: 0x14620052  bne         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x11C1E0u;
    {
        const bool branch_taken_0x11c1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1E0u;
        // 0x11c1e4: 0x3a440008  xori        $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1e0) {
            ctx->pc = 0x11C32Cu;
            goto label_11c32c;
        }
    }
    ctx->pc = 0x11C1E8u;
    // 0x11c1e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1ec: 0xc0440ea  jal         func_1103A8
    ctx->pc = 0x11C1ECu;
    SET_GPR_U32(ctx, 31, 0x11C1F4u);
    ctx->pc = 0x11C1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1ECu;
    // 0x11c1f0: 0x3c130036  lui         $s3, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)54 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103A8u, 0x11C1ECu, 0x11C1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1F4u;
label_11c1f4:
    // 0x11c1f4: 0x8e629e10  lw          $v0, -0x61F0($s3)
    ctx->pc = 0x11c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294942224)));
    // 0x11c1f8: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11C1F8u;
    {
        const bool branch_taken_0x11c1f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1F8u;
        // 0x11c1fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1f8) {
            ctx->pc = 0x11C2ACu;
            goto label_11c2ac;
        }
    }
    ctx->pc = 0x11C200u;
    // 0x11c200: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11C200u;
    {
        const bool branch_taken_0x11c200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C200u;
        // 0x11c204: 0x3c150041  lui         $s5, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c200) {
            ctx->pc = 0x11C238u;
            goto label_11c238;
        }
    }
    ctx->pc = 0x11C208u;
label_11c208:
    // 0x11c208: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x11C208u;
    {
        const bool branch_taken_0x11c208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C208u;
        // 0x11c20c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c208) {
            ctx->pc = 0x11C33Cu;
            goto label_11c33c;
        }
    }
    ctx->pc = 0x11C210u;
    // 0x11c210: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x11c210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x11c214: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x11c214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11c218:
    // 0x11c218: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11c218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11c21c: 0x0  nop
    ctx->pc = 0x11c21cu;
    // NOP
    // 0x11c220: 0x0  nop
    ctx->pc = 0x11c220u;
    // NOP
    // 0x11c224: 0x0  nop
    ctx->pc = 0x11c224u;
    // NOP
    // 0x11c228: 0x0  nop
    ctx->pc = 0x11c228u;
    // NOP
    // 0x11c22c: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C22Cu;
    {
        const bool branch_taken_0x11c22c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x11c22c) {
            ctx->pc = 0x11C218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c218;
        }
    }
    ctx->pc = 0x11C234u;
    // 0x11c234: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11c234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c238:
    // 0x11c238: 0x26b0da90  addiu       $s0, $s5, -0x2570
    ctx->pc = 0x11c238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957712));
label_11c23c:
    // 0x11c23c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11c23cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11c240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c244: 0x34a5059c  ori         $a1, $a1, 0x59C
    ctx->pc = 0x11c244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1436);
    // 0x11c248: 0xc0442d4  jal         func_110B50
    ctx->pc = 0x11C248u;
    SET_GPR_U32(ctx, 31, 0x11C250u);
    ctx->pc = 0x11C24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C248u;
    // 0x11c24c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B50u, 0x11C248u, 0x11C250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C250u;
label_11c250:
    // 0x11c250: 0x4430012  bgezl       $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11C250u;
    {
        const bool branch_taken_0x11c250 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c250) {
            ctx->pc = 0x11C254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C250u;
            // 0x11c254: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C29Cu;
            goto label_11c29c;
        }
    }
    ctx->pc = 0x11C258u;
    // 0x11c258: 0x8ec29dd0  lw          $v0, -0x6230($s6)
    ctx->pc = 0x11c258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294942160)));
    // 0x11c25c: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C25Cu;
    {
        const bool branch_taken_0x11c25c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C25Cu;
        // 0x11c260: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c25c) {
            ctx->pc = 0x11C274u;
            goto label_11c274;
        }
    }
    ctx->pc = 0x11C264u;
    // 0x11c264: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x11c264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x11c268: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11C268u;
    SET_GPR_U32(ctx, 31, 0x11C270u);
    ctx->pc = 0x11C26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C268u;
    // 0x11c26c: 0x2484b368  addiu       $a0, $a0, -0x4C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11C268u, 0x11C270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C270u;
label_11c270:
    // 0x11c270: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x11c270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_11c274:
    // 0x11c274: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11c274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11c278:
    // 0x11c278: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11c278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11c27c: 0x0  nop
    ctx->pc = 0x11c27cu;
    // NOP
    // 0x11c280: 0x0  nop
    ctx->pc = 0x11c280u;
    // NOP
    // 0x11c284: 0x0  nop
    ctx->pc = 0x11c284u;
    // NOP
    // 0x11c288: 0x0  nop
    ctx->pc = 0x11c288u;
    // NOP
    // 0x11c28c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C28Cu;
    {
        const bool branch_taken_0x11c28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11c28c) {
            ctx->pc = 0x11C278u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c278;
        }
    }
    ctx->pc = 0x11C294u;
    // 0x11c294: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x11C294u;
    {
        const bool branch_taken_0x11c294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C294u;
        // 0x11c298: 0x26b0da90  addiu       $s0, $s5, -0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c294) {
            ctx->pc = 0x11C23Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c23c;
        }
    }
    ctx->pc = 0x11C29Cu;
label_11c29c:
    // 0x11c29c: 0x1040ffda  beqz        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x11C29Cu;
    {
        const bool branch_taken_0x11c29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C29Cu;
        // 0x11c2a0: 0x2a220011  slti        $v0, $s1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c29c) {
            ctx->pc = 0x11C208u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c208;
        }
    }
    ctx->pc = 0x11C2A4u;
    // 0x11c2a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11C2A4u;
    {
        const bool branch_taken_0x11c2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2A4u;
        // 0x11c2a8: 0xae609e10  sw          $zero, -0x61F0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294942224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2a4) {
            ctx->pc = 0x11C2B0u;
            goto label_11c2b0;
        }
    }
    ctx->pc = 0x11C2ACu;
label_11c2ac:
    // 0x11c2ac: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x11c2acu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_11c2b0:
    // 0x11c2b0: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x11C2B0u;
    SET_GPR_U32(ctx, 31, 0x11C2B8u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x11C2B0u, 0x11C2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2B8u;
label_11c2b8:
    // 0x11c2b8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11c2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11c2bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C2BCu;
    {
        const bool branch_taken_0x11c2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c2bc) {
            ctx->pc = 0x11C2CCu;
            goto label_11c2cc;
        }
    }
    ctx->pc = 0x11C2C4u;
    // 0x11c2c4: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x11C2C4u;
    SET_GPR_U32(ctx, 31, 0x11C2CCu);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x11C2C4u, 0x11C2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2CCu;
label_11c2cc:
    // 0x11c2cc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11c2d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11c2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c2d4: 0x2450dad0  addiu       $s0, $v0, -0x2530
    ctx->pc = 0x11c2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957776));
    // 0x11c2d8: 0xac52dad0  sw          $s2, -0x2530($v0)
    ctx->pc = 0x11c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957776), GPR_U32(ctx, 18));
    // 0x11c2dc: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x11C2DCu;
    SET_GPR_U32(ctx, 31, 0x11C2E4u);
    ctx->pc = 0x11C2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C2DCu;
    // 0x11c2e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x11C2DCu, 0x11C2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2E4u;
label_11c2e4:
    // 0x11c2e4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11c2e8: 0x26a4da90  addiu       $a0, $s5, -0x2570
    ctx->pc = 0x11c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957712));
    // 0x11c2ec: 0x2451b840  addiu       $s1, $v0, -0x47C0
    ctx->pc = 0x11c2ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x11c2f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11c2f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2f4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11c2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11c2f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c2fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c300: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x11c300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c304: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x11c304u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c308: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11c308u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c30c: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11C30Cu;
    SET_GPR_U32(ctx, 31, 0x11C314u);
    ctx->pc = 0x11C310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C30Cu;
    // 0x11c310: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11C30Cu, 0x11C314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C314u;
label_11c314:
    // 0x11c314: 0x4430010  bgezl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11C314u;
    {
        const bool branch_taken_0x11c314 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c314) {
            ctx->pc = 0x11C318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C314u;
            // 0x11c318: 0x8ec29dd0  lw          $v0, -0x6230($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294942160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C358u;
            goto label_11c358;
        }
    }
    ctx->pc = 0x11C31Cu;
    // 0x11c31c: 0x8e849df0  lw          $a0, -0x6210($s4)
    ctx->pc = 0x11c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294942192)));
    // 0x11c320: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11C320u;
    SET_GPR_U32(ctx, 31, 0x11C328u);
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11C320u, 0x11C328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C328u;
label_11c328:
    // 0x11c328: 0x3a440008  xori        $a0, $s2, 0x8
    ctx->pc = 0x11c328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
label_11c32c:
    // 0x11c32c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11c32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c330: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x11c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11c334: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11C334u;
    {
        const bool branch_taken_0x11c334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C334u;
        // 0x11c338: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c334) {
            ctx->pc = 0x11C380u;
            goto label_11c380;
        }
    }
    ctx->pc = 0x11C33Cu;
label_11c33c:
    // 0x11c33c: 0x8e849df0  lw          $a0, -0x6210($s4)
    ctx->pc = 0x11c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294942192)));
    // 0x11c340: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11C340u;
    SET_GPR_U32(ctx, 31, 0x11C348u);
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11C340u, 0x11C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C348u;
label_11c348:
    // 0x11c348: 0xc046fdc  jal         func_11BF70
    ctx->pc = 0x11C348u;
    SET_GPR_U32(ctx, 31, 0x11C350u);
    ctx->pc = 0x11C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C348u;
    // 0x11c34c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BF70u, 0x11C348u, 0x11C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C350u;
label_11c350:
    // 0x11c350: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11C350u;
    {
        const bool branch_taken_0x11c350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C350u;
        // 0x11c354: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c350) {
            ctx->pc = 0x11C384u;
            goto label_11c384;
        }
    }
    ctx->pc = 0x11C358u;
label_11c358:
    // 0x11c358: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C358u;
    {
        const bool branch_taken_0x11c358 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C358u;
        // 0x11c35c: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c358) {
            ctx->pc = 0x11C368u;
            goto label_11c368;
        }
    }
    ctx->pc = 0x11C360u;
    // 0x11c360: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11C360u;
    SET_GPR_U32(ctx, 31, 0x11C368u);
    ctx->pc = 0x11C364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C360u;
    // 0x11c364: 0x2484b388  addiu       $a0, $a0, -0x4C78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11C360u, 0x11C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C368u;
label_11c368:
    // 0x11c368: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x11c368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x11c36c: 0x8e849df0  lw          $a0, -0x6210($s4)
    ctx->pc = 0x11c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294942192)));
    // 0x11c370: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x11c370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x11c374: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11C374u;
    SET_GPR_U32(ctx, 31, 0x11C37Cu);
    ctx->pc = 0x11C378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C374u;
    // 0x11c378: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11C374u, 0x11C37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C37Cu;
label_11c37c:
    // 0x11c37c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11c37cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c380:
    // 0x11c380: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11c380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_11c384:
    // 0x11c384: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11c384u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11c388: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11c388u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11c38c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11c38cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c390: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11c390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c394: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11c394u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c398: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11c398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c39c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11c39cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x11C3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3A0u;
        // 0x11c3a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C3A8u;
}
