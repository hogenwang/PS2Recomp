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

// Function: sub_001177B0
// Address: 0x1177b0 - 0x1179f0
void sub_001177B0_0x1177b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001177B0_0x1177b0");
#endif

    switch (ctx->pc) {
        case 0x11780cu: goto label_11780c;
        case 0x117820u: goto label_117820;
        case 0x117848u: goto label_117848;
        case 0x117860u: goto label_117860;
        case 0x117880u: goto label_117880;
        case 0x1178b8u: goto label_1178b8;
        case 0x1178c0u: goto label_1178c0;
        case 0x1178c8u: goto label_1178c8;
        case 0x1178d0u: goto label_1178d0;
        case 0x1178e0u: goto label_1178e0;
        case 0x11795cu: goto label_11795c;
        case 0x11796cu: goto label_11796c;
        case 0x11797cu: goto label_11797c;
        case 0x117984u: goto label_117984;
        case 0x11798cu: goto label_11798c;
        case 0x1179a4u: goto label_1179a4;
        default: break;
    }

    ctx->pc = 0x1177b0u;

    // 0x1177b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1177b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1177b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1177b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1177b8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1177b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1177bc: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x1177bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x1177c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1177c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1177c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1177c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1177c8: 0x26519d48  addiu       $s1, $s2, -0x62B8
    ctx->pc = 0x1177c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942024));
    // 0x1177cc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1177ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1177d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1177d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1177d4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1177d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1177d8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1177D8u;
    {
        const bool branch_taken_0x1177d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1177DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177D8u;
        // 0x1177dc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1177d8) {
            ctx->pc = 0x1177ECu;
            goto label_1177ec;
        }
    }
    ctx->pc = 0x1177E0u;
    // 0x1177e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1177e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1177e4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1177E4u;
    {
        const bool branch_taken_0x1177e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1177E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177E4u;
        // 0x1177e8: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1177e4) {
            ctx->pc = 0x1178E4u;
            goto label_1178e4;
        }
    }
    ctx->pc = 0x1177ECu;
label_1177ec:
    // 0x1177ec: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x1177ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x1177f0: 0xfe409d48  sd          $zero, -0x62B8($s2)
    ctx->pc = 0x1177f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294942024), GPR_U64(ctx, 0));
    // 0x1177f4: 0x2670b140  addiu       $s0, $s3, -0x4EC0
    ctx->pc = 0x1177f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294947136));
    // 0x1177f8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1177f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1177fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1177fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x117800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117804: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x117804u;
    SET_GPR_U32(ctx, 31, 0x11780Cu);
    ctx->pc = 0x117808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117804u;
    // 0x117808: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x117804u, 0x11780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11780Cu;
label_11780c:
    // 0x11780c: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x11780cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x117810: 0x26032000  addiu       $v1, $s0, 0x2000
    ctx->pc = 0x117810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x117814: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x117814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x117818: 0x26101fc0  addiu       $s0, $s0, 0x1FC0
    ctx->pc = 0x117818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8128));
    // 0x11781c: 0x0  nop
    ctx->pc = 0x11781cu;
    // NOP
label_117820:
    // 0x117820: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x117820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x117824: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x117824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x117828: 0x2610ffc0  addiu       $s0, $s0, -0x40
    ctx->pc = 0x117828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x11782c: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x11782cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x117830: 0x0  nop
    ctx->pc = 0x117830u;
    // NOP
    // 0x117834: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x117834u;
    {
        const bool branch_taken_0x117834 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x117834) {
            ctx->pc = 0x117820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_117820;
        }
    }
    ctx->pc = 0x11783Cu;
    // 0x11783c: 0x2662b140  addiu       $v0, $s3, -0x4EC0
    ctx->pc = 0x11783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294947136));
    // 0x117840: 0xc0462b8  jal         func_118AE0
    ctx->pc = 0x117840u;
    SET_GPR_U32(ctx, 31, 0x117848u);
    ctx->pc = 0x117844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117840u;
    // 0x117844: 0xac401fc0  sw          $zero, 0x1FC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AE0u, 0x117840u, 0x117848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117848u;
label_117848:
    // 0x117848: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x117848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x11784c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x11784cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x117850: 0x24a57d50  addiu       $a1, $a1, 0x7D50
    ctx->pc = 0x117850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32080));
    // 0x117854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117858: 0xc043254  jal         func_10C950
    ctx->pc = 0x117858u;
    SET_GPR_U32(ctx, 31, 0x117860u);
    ctx->pc = 0x11785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117858u;
    // 0x11785c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C950u, 0x117858u, 0x117860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117860u;
label_117860:
    // 0x117860: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x117860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117864: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x117864u;
    {
        const bool branch_taken_0x117864 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x117864) {
            ctx->pc = 0x117868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117864u;
            // 0x117868: 0x26429d48  addiu       $v0, $s2, -0x62B8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942024));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117878u;
            goto label_117878;
        }
    }
    ctx->pc = 0x11786Cu;
    // 0x11786c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11786cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x117870: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x117870u;
    {
        const bool branch_taken_0x117870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117870u;
        // 0x117874: 0x34429021  ori         $v0, $v0, 0x9021 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36897);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117870) {
            ctx->pc = 0x1178E4u;
            goto label_1178e4;
        }
    }
    ctx->pc = 0x117878u;
label_117878:
    // 0x117878: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x117878u;
    SET_GPR_U32(ctx, 31, 0x117880u);
    ctx->pc = 0x11787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117878u;
    // 0x11787c: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x117878u, 0x117880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117880u;
label_117880:
    // 0x117880: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x117880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x117884: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x117884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117888: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x117888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
    // 0x11788c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11788cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x117890: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x117890u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x117894: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x117894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x117898: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x117898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x11789c: 0x548025  or          $s0, $v0, $s4
    ctx->pc = 0x11789cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x1178a0: 0x36100300  ori         $s0, $s0, 0x300
    ctx->pc = 0x1178a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)768);
    // 0x1178a4: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x1178a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x1178a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1178A8u;
    {
        const bool branch_taken_0x1178a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1178ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178A8u;
        // 0x1178ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178a8) {
            ctx->pc = 0x1178C0u;
            goto label_1178c0;
        }
    }
    ctx->pc = 0x1178B0u;
    // 0x1178b0: 0xc045de0  jal         func_117780
    ctx->pc = 0x1178B0u;
    SET_GPR_U32(ctx, 31, 0x1178B8u);
    ctx->pc = 0x1178B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1178B0u;
    // 0x1178b4: 0x36100c80  ori         $s0, $s0, 0xC80 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)3200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x117780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117780u, 0x1178B0u, 0x1178B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1178B8u;
label_1178b8:
    // 0x1178b8: 0xc045de8  jal         func_1177A0
    ctx->pc = 0x1178B8u;
    SET_GPR_U32(ctx, 31, 0x1178C0u);
    ctx->pc = 0x1178BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1178B8u;
    // 0x1178bc: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1177A0u, 0x1178B8u, 0x1178C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1178C0u;
label_1178c0:
    // 0x1178c0: 0xc045de4  jal         func_117790
    ctx->pc = 0x1178C0u;
    SET_GPR_U32(ctx, 31, 0x1178C8u);
    ctx->pc = 0x1178C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1178C0u;
    // 0x1178c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117790u, 0x1178C0u, 0x1178C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1178C8u;
label_1178c8:
    // 0x1178c8: 0xc0435ea  jal         func_10D7A8
    ctx->pc = 0x1178C8u;
    SET_GPR_U32(ctx, 31, 0x1178D0u);
    ctx->pc = 0x1178CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1178C8u;
    // 0x1178cc: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D7A8u, 0x1178C8u, 0x1178D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1178D0u;
label_1178d0:
    // 0x1178d0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1178D0u;
    {
        const bool branch_taken_0x1178d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178D0u;
        // 0x1178d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178d0) {
            ctx->pc = 0x1178E4u;
            goto label_1178e4;
        }
    }
    ctx->pc = 0x1178D8u;
    // 0x1178d8: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x1178D8u;
    SET_GPR_U32(ctx, 31, 0x1178E0u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x1178D8u, 0x1178E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1178E0u;
label_1178e0:
    // 0x1178e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1178e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1178e4:
    // 0x1178e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1178e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1178e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1178e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1178ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1178ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1178f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1178f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1178f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1178f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1178f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1178f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1178fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1178FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178FCu;
        // 0x117900: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1178FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117904u;
    // 0x117904: 0x0  nop
    ctx->pc = 0x117904u;
    // NOP
    // 0x117908: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11790c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11790cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117914: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x117914u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x117918: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x117918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11791c: 0x26509d48  addiu       $s0, $s2, -0x62B8
    ctx->pc = 0x11791cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942024));
    // 0x117920: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117924: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x117924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x117928: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117928u;
    {
        const bool branch_taken_0x117928 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x117928) {
            ctx->pc = 0x11793Cu;
            goto label_11793c;
        }
    }
    ctx->pc = 0x117930u;
    // 0x117930: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x117930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x117934: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x117934u;
    {
        const bool branch_taken_0x117934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117934u;
        // 0x117938: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117934) {
            ctx->pc = 0x1179A8u;
            goto label_1179a8;
        }
    }
    ctx->pc = 0x11793Cu;
label_11793c:
    // 0x11793c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x11793cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x117940: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117940u;
    {
        const bool branch_taken_0x117940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117940) {
            ctx->pc = 0x117954u;
            goto label_117954;
        }
    }
    ctx->pc = 0x117948u;
    // 0x117948: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x117948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11794c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11794Cu;
    {
        const bool branch_taken_0x11794c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11794Cu;
        // 0x117950: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11794c) {
            ctx->pc = 0x1179A8u;
            goto label_1179a8;
        }
    }
    ctx->pc = 0x117954u;
label_117954:
    // 0x117954: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x117954u;
    SET_GPR_U32(ctx, 31, 0x11795Cu);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x117954u, 0x11795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11795Cu;
label_11795c:
    // 0x11795c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x11795cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x117960: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x117960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117964: 0xc043258  jal         func_10C960
    ctx->pc = 0x117964u;
    SET_GPR_U32(ctx, 31, 0x11796Cu);
    ctx->pc = 0x117968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117964u;
    // 0x117968: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C960u, 0x117964u, 0x11796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11796Cu;
label_11796c:
    // 0x11796c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11796Cu;
    {
        const bool branch_taken_0x11796c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11796Cu;
        // 0x117970: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11796c) {
            ctx->pc = 0x117990u;
            goto label_117990;
        }
    }
    ctx->pc = 0x117974u;
    // 0x117974: 0xc0435d0  jal         func_10D740
    ctx->pc = 0x117974u;
    SET_GPR_U32(ctx, 31, 0x11797Cu);
    ctx->pc = 0x117978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117974u;
    // 0x117978: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D740u, 0x117974u, 0x11797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11797Cu;
label_11797c:
    // 0x11797c: 0xc045de4  jal         func_117790
    ctx->pc = 0x11797Cu;
    SET_GPR_U32(ctx, 31, 0x117984u);
    ctx->pc = 0x117980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11797Cu;
    // 0x117980: 0x24040c00  addiu       $a0, $zero, 0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117790u, 0x11797Cu, 0x117984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117984u;
label_117984:
    // 0x117984: 0xc045de0  jal         func_117780
    ctx->pc = 0x117984u;
    SET_GPR_U32(ctx, 31, 0x11798Cu);
    ctx->pc = 0x117988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117984u;
    // 0x117988: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117780u, 0x117984u, 0x11798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11798Cu;
label_11798c:
    // 0x11798c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11798cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_117990:
    // 0x117990: 0xfe409d48  sd          $zero, -0x62B8($s2)
    ctx->pc = 0x117990u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294942024), GPR_U64(ctx, 0));
    // 0x117994: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117994u;
    {
        const bool branch_taken_0x117994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x117998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117994u;
        // 0x117998: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117994) {
            ctx->pc = 0x1179A4u;
            goto label_1179a4;
        }
    }
    ctx->pc = 0x11799Cu;
    // 0x11799c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x11799Cu;
    SET_GPR_U32(ctx, 31, 0x1179A4u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x11799Cu, 0x1179A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179A4u;
label_1179a4:
    // 0x1179a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1179a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1179a8:
    // 0x1179a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1179a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1179ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1179acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1179b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1179b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1179b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1179b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1179b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1179B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1179BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179B8u;
        // 0x1179bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1179B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1179C0u;
    // 0x1179c0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1179c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1179c4: 0x8c439d50  lw          $v1, -0x62B0($v0)
    ctx->pc = 0x1179c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942032)));
    // 0x1179c8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1179C8u;
    {
        const bool branch_taken_0x1179c8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1179CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179C8u;
        // 0x1179cc: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1179c8) {
            ctx->pc = 0x1179DCu;
            goto label_1179dc;
        }
    }
    ctx->pc = 0x1179D0u;
    // 0x1179d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1179d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1179d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1179D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1179D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179D4u;
        // 0x1179d8: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1179D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1179DCu;
label_1179dc:
    // 0x1179dc: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x1179dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
    // 0x1179e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1179e0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1179e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1179E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1179E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179E4u;
        // 0x1179e8: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1179E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1179ECu;
    // 0x1179ec: 0x0  nop
    ctx->pc = 0x1179ecu;
    // NOP
}
