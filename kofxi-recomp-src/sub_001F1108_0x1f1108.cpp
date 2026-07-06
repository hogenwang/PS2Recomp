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

// Function: sub_001F1108
// Address: 0x1f1108 - 0x1f13d8
void sub_001F1108_0x1f1108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1108_0x1f1108");
#endif

    switch (ctx->pc) {
        case 0x1f1160u: goto label_1f1160;
        case 0x1f1170u: goto label_1f1170;
        case 0x1f1184u: goto label_1f1184;
        case 0x1f1198u: goto label_1f1198;
        case 0x1f11ccu: goto label_1f11cc;
        case 0x1f11fcu: goto label_1f11fc;
        case 0x1f1210u: goto label_1f1210;
        case 0x1f1218u: goto label_1f1218;
        case 0x1f1228u: goto label_1f1228;
        case 0x1f1240u: goto label_1f1240;
        case 0x1f1250u: goto label_1f1250;
        case 0x1f1270u: goto label_1f1270;
        case 0x1f1280u: goto label_1f1280;
        case 0x1f12b0u: goto label_1f12b0;
        case 0x1f12c8u: goto label_1f12c8;
        case 0x1f133cu: goto label_1f133c;
        case 0x1f1348u: goto label_1f1348;
        case 0x1f1358u: goto label_1f1358;
        case 0x1f1378u: goto label_1f1378;
        case 0x1f1398u: goto label_1f1398;
        default: break;
    }

    ctx->pc = 0x1f1108u;

    // 0x1f1108: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f1108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f110c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1f110cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1f1110: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1f1110u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1114: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f1114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1f1118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f1118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f111c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1f111cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1f1120: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f1120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1124: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1f1124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1f1128: 0x26140950  addiu       $s4, $s0, 0x950
    ctx->pc = 0x1f1128u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    // 0x1f112c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1f112cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1f1130: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1f1130u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1134: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1f1134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1f1138: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1f1138u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f113c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f113cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f1140: 0x26022010  addiu       $v0, $s0, 0x2010
    ctx->pc = 0x1f1140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8208));
    // 0x1f1144: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1f1144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1f1148: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f1148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f114c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1f114cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1f1150: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x1f1150u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f1154: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1f1154u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f1158: 0xc07dc10  jal         func_1F7040
    ctx->pc = 0x1F1158u;
    SET_GPR_U32(ctx, 31, 0x1F1160u);
    ctx->pc = 0x1F115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1158u;
    // 0x1f115c: 0xae800028  sw          $zero, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7040u, 0x1F1158u, 0x1F1160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1160u;
label_1f1160:
    // 0x1f1160: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1F1160u;
    {
        const bool branch_taken_0x1f1160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1160) {
            ctx->pc = 0x1F1164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1160u;
            // 0x1f1164: 0x8e630078  lw          $v1, 0x78($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F11A0u;
            goto label_1f11a0;
        }
    }
    ctx->pc = 0x1F1168u;
    // 0x1f1168: 0xc07c616  jal         func_1F1858
    ctx->pc = 0x1F1168u;
    SET_GPR_U32(ctx, 31, 0x1F1170u);
    ctx->pc = 0x1F116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1168u;
    // 0x1f116c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1858u, 0x1F1168u, 0x1F1170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1170u;
label_1f1170:
    // 0x1f1170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f1170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1174: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1174u;
    {
        const bool branch_taken_0x1f1174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f1174) {
            ctx->pc = 0x1F1178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1174u;
            // 0x1f1178: 0xae830028  sw          $v1, 0x28($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1190u;
            goto label_1f1190;
        }
    }
    ctx->pc = 0x1F117Cu;
    // 0x1f117c: 0xc07d49c  jal         func_1F5270
    ctx->pc = 0x1F117Cu;
    SET_GPR_U32(ctx, 31, 0x1F1184u);
    ctx->pc = 0x1F1180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F117Cu;
    // 0x1f1180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5270u, 0x1F117Cu, 0x1F1184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1184u;
label_1f1184:
    // 0x1f1184: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1F1184u;
    {
        const bool branch_taken_0x1f1184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1184u;
        // 0x1f1188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1184) {
            ctx->pc = 0x1F13ACu;
            goto label_1f13ac;
        }
    }
    ctx->pc = 0x1F118Cu;
    // 0x1f118c: 0x0  nop
    ctx->pc = 0x1f118cu;
    // NOP
label_1f1190:
    // 0x1f1190: 0xc07c370  jal         func_1F0DC0
    ctx->pc = 0x1F1190u;
    SET_GPR_U32(ctx, 31, 0x1F1198u);
    ctx->pc = 0x1F1194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1190u;
    // 0x1f1194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0DC0u, 0x1F1190u, 0x1F1198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1198u;
label_1f1198:
    // 0x1f1198: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1F1198u;
    {
        const bool branch_taken_0x1f1198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1198u;
        // 0x1f119c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1198) {
            ctx->pc = 0x1F13B0u;
            goto label_1f13b0;
        }
    }
    ctx->pc = 0x1F11A0u;
label_1f11a0:
    // 0x1f11a0: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x1f11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x1f11a4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F11A4u;
    {
        const bool branch_taken_0x1f11a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f11a4) {
            ctx->pc = 0x1F11A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F11A4u;
            // 0x1f11a8: 0x323100cc  andi        $s1, $s1, 0xCC (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)204);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F11BCu;
            goto label_1f11bc;
        }
    }
    ctx->pc = 0x1F11ACu;
    // 0x1f11ac: 0x8e620170  lw          $v0, 0x170($s3)
    ctx->pc = 0x1f11acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
    // 0x1f11b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F11B0u;
    {
        const bool branch_taken_0x1f11b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F11B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11B0u;
        // 0x1f11b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11b0) {
            ctx->pc = 0x1F11C0u;
            goto label_1f11c0;
        }
    }
    ctx->pc = 0x1F11B8u;
    // 0x1f11b8: 0x323100cc  andi        $s1, $s1, 0xCC
    ctx->pc = 0x1f11b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)204);
label_1f11bc:
    // 0x1f11bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f11bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f11c0:
    // 0x1f11c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f11c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f11c4: 0xc07aba0  jal         func_1EAE80
    ctx->pc = 0x1F11C4u;
    SET_GPR_U32(ctx, 31, 0x1F11CCu);
    ctx->pc = 0x1F11C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11C4u;
    // 0x1f11c8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAE80u, 0x1F11C4u, 0x1F11CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11CCu;
label_1f11cc:
    // 0x1f11cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f11ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f11d0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F11D0u;
    {
        const bool branch_taken_0x1f11d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11D0u;
        // 0x1f11d4: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11d0) {
            ctx->pc = 0x1F11E0u;
            goto label_1f11e0;
        }
    }
    ctx->pc = 0x1F11D8u;
    // 0x1f11d8: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1F11D8u;
    {
        const bool branch_taken_0x1f11d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11D8u;
        // 0x1f11dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11d8) {
            ctx->pc = 0x1F13ACu;
            goto label_1f13ac;
        }
    }
    ctx->pc = 0x1F11E0u;
label_1f11e0:
    // 0x1f11e0: 0x50600073  beql        $v1, $zero, . + 4 + (0x73 << 2)
    ctx->pc = 0x1F11E0u;
    {
        const bool branch_taken_0x1f11e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f11e0) {
            ctx->pc = 0x1F11E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F11E0u;
            // 0x1f11e4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F13B0u;
            goto label_1f13b0;
        }
    }
    ctx->pc = 0x1F11E8u;
    // 0x1f11e8: 0x322200c8  andi        $v0, $s1, 0xC8
    ctx->pc = 0x1f11e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)200);
    // 0x1f11ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F11ECu;
    {
        const bool branch_taken_0x1f11ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11ECu;
        // 0x1f11f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11ec) {
            ctx->pc = 0x1F11FCu;
            goto label_1f11fc;
        }
    }
    ctx->pc = 0x1F11F4u;
    // 0x1f11f4: 0xc07d4a4  jal         func_1F5290
    ctx->pc = 0x1F11F4u;
    SET_GPR_U32(ctx, 31, 0x1F11FCu);
    ctx->pc = 0x1F11F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11F4u;
    // 0x1f11f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5290u, 0x1F11F4u, 0x1F11FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11FCu;
label_1f11fc:
    // 0x1f11fc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1f11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f1200: 0x16220015  bne         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F1200u;
    {
        const bool branch_taken_0x1f1200 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f1200) {
            ctx->pc = 0x1F1258u;
            goto label_1f1258;
        }
    }
    ctx->pc = 0x1F1208u;
    // 0x1f1208: 0xc07c50a  jal         func_1F1428
    ctx->pc = 0x1F1208u;
    SET_GPR_U32(ctx, 31, 0x1F1210u);
    ctx->pc = 0x1F120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1208u;
    // 0x1f120c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1428u, 0x1F1208u, 0x1F1210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1210u;
label_1f1210:
    // 0x1f1210: 0xc07ae2c  jal         func_1EB8B0
    ctx->pc = 0x1F1210u;
    SET_GPR_U32(ctx, 31, 0x1F1218u);
    ctx->pc = 0x1F1214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1210u;
    // 0x1f1214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8B0u, 0x1F1210u, 0x1F1218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1218u;
label_1f1218:
    // 0x1f1218: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1218u;
    {
        const bool branch_taken_0x1f1218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1218u;
        // 0x1f121c: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1218) {
            ctx->pc = 0x1F1238u;
            goto label_1f1238;
        }
    }
    ctx->pc = 0x1F1220u;
    // 0x1f1220: 0xc07c538  jal         func_1F14E0
    ctx->pc = 0x1F1220u;
    SET_GPR_U32(ctx, 31, 0x1F1228u);
    ctx->pc = 0x1F1224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1220u;
    // 0x1f1224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F14E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F14E0u, 0x1F1220u, 0x1F1228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1228u;
label_1f1228:
    // 0x1f1228: 0x54400060  bnel        $v0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x1F1228u;
    {
        const bool branch_taken_0x1f1228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1228) {
            ctx->pc = 0x1F122Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1228u;
            // 0x1f122c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F13ACu;
            goto label_1f13ac;
        }
    }
    ctx->pc = 0x1F1230u;
    // 0x1f1230: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1F1230u;
    {
        const bool branch_taken_0x1f1230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1230u;
        // 0x1f1234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1230) {
            ctx->pc = 0x1F13A4u;
            goto label_1f13a4;
        }
    }
    ctx->pc = 0x1F1238u;
label_1f1238:
    // 0x1f1238: 0xc07ae46  jal         func_1EB918
    ctx->pc = 0x1F1238u;
    SET_GPR_U32(ctx, 31, 0x1F1240u);
    ctx->pc = 0x1F123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1238u;
    // 0x1f123c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB918u, 0x1F1238u, 0x1F1240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1240u;
label_1f1240:
    // 0x1f1240: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1240u;
    {
        const bool branch_taken_0x1f1240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1240u;
        // 0x1f1244: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1240) {
            ctx->pc = 0x1F1258u;
            goto label_1f1258;
        }
    }
    ctx->pc = 0x1F1248u;
    // 0x1f1248: 0xc07c5c2  jal         func_1F1708
    ctx->pc = 0x1F1248u;
    SET_GPR_U32(ctx, 31, 0x1F1250u);
    ctx->pc = 0x1F124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1248u;
    // 0x1f124c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1708u, 0x1F1248u, 0x1F1250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1250u;
label_1f1250:
    // 0x1f1250: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1F1250u;
    {
        const bool branch_taken_0x1f1250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1250u;
        // 0x1f1254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1250) {
            ctx->pc = 0x1F13A4u;
            goto label_1f13a4;
        }
    }
    ctx->pc = 0x1F1258u;
label_1f1258:
    // 0x1f1258: 0x16e00011  bnez        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1258u;
    {
        const bool branch_taken_0x1f1258 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1258u;
        // 0x1f125c: 0x3222004c  andi        $v0, $s1, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)76);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1258) {
            ctx->pc = 0x1F12A0u;
            goto label_1f12a0;
        }
    }
    ctx->pc = 0x1F1260u;
    // 0x1f1260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1264: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f1264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1268: 0xc07c604  jal         func_1F1810
    ctx->pc = 0x1F1268u;
    SET_GPR_U32(ctx, 31, 0x1F1270u);
    ctx->pc = 0x1F126Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1268u;
    // 0x1f126c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1810u, 0x1F1268u, 0x1F1270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1270u;
label_1f1270:
    // 0x1f1270: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1270u;
    {
        const bool branch_taken_0x1f1270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1270) {
            ctx->pc = 0x1F1274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1270u;
            // 0x1f1274: 0x2ac20005  slti        $v0, $s6, 0x5 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)5) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1288u;
            goto label_1f1288;
        }
    }
    ctx->pc = 0x1F1278u;
    // 0x1f1278: 0xc07d49c  jal         func_1F5270
    ctx->pc = 0x1F1278u;
    SET_GPR_U32(ctx, 31, 0x1F1280u);
    ctx->pc = 0x1F127Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1278u;
    // 0x1f127c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5270u, 0x1F1278u, 0x1F1280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1280u;
label_1f1280:
    // 0x1f1280: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1F1280u;
    {
        const bool branch_taken_0x1f1280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1280u;
        // 0x1f1284: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1280) {
            ctx->pc = 0x1F13ACu;
            goto label_1f13ac;
        }
    }
    ctx->pc = 0x1F1288u;
label_1f1288:
    // 0x1f1288: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1288u;
    {
        const bool branch_taken_0x1f1288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1288u;
        // 0x1f128c: 0x3222004c  andi        $v0, $s1, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)76);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1288) {
            ctx->pc = 0x1F12A0u;
            goto label_1f12a0;
        }
    }
    ctx->pc = 0x1F1290u;
    // 0x1f1290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1294: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1F1294u;
    {
        const bool branch_taken_0x1f1294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1294u;
        // 0x1f1298: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1294) {
            ctx->pc = 0x1F13A8u;
            goto label_1f13a8;
        }
    }
    ctx->pc = 0x1F129Cu;
    // 0x1f129c: 0x0  nop
    ctx->pc = 0x1f129cu;
    // NOP
label_1f12a0:
    // 0x1f12a0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1F12A0u;
    {
        const bool branch_taken_0x1f12a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12A0u;
        // 0x1f12a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12a0) {
            ctx->pc = 0x1F1328u;
            goto label_1f1328;
        }
    }
    ctx->pc = 0x1F12A8u;
    // 0x1f12a8: 0xc07c4f6  jal         func_1F13D8
    ctx->pc = 0x1F12A8u;
    SET_GPR_U32(ctx, 31, 0x1F12B0u);
    ctx->pc = 0x1F12ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F12A8u;
    // 0x1f12ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F13D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F13D8u, 0x1F12A8u, 0x1F12B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F12B0u;
label_1f12b0:
    // 0x1f12b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f12b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f12b4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1f12b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f12b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f12b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f12bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f12bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f12c0: 0xc07c642  jal         func_1F1908
    ctx->pc = 0x1F12C0u;
    SET_GPR_U32(ctx, 31, 0x1F12C8u);
    ctx->pc = 0x1F12C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F12C0u;
    // 0x1f12c4: 0x27a80014  addiu       $t0, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1908u, 0x1F12C0u, 0x1F12C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F12C8u;
label_1f12c8:
    // 0x1f12c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f12c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f12cc: 0x56400038  bnel        $s2, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x1F12CCu;
    {
        const bool branch_taken_0x1f12cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f12cc) {
            ctx->pc = 0x1F12D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F12CCu;
            // 0x1f12d0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F13B0u;
            goto label_1f13b0;
        }
    }
    ctx->pc = 0x1F12D4u;
    // 0x1f12d4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1f12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1f12d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F12D8u;
    {
        const bool branch_taken_0x1f12d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12D8u;
        // 0x1f12dc: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12d8) {
            ctx->pc = 0x1F1300u;
            goto label_1f1300;
        }
    }
    ctx->pc = 0x1F12E0u;
    // 0x1f12e0: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x1f12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1f12e4: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x1f12e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x1f12e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F12E8u;
    {
        const bool branch_taken_0x1f12e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12E8u;
        // 0x1f12ec: 0x240200cc  addiu       $v0, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12e8) {
            ctx->pc = 0x1F12F4u;
            goto label_1f12f4;
        }
    }
    ctx->pc = 0x1F12F0u;
    // 0x1f12f0: 0xae620078  sw          $v0, 0x78($s3)
    ctx->pc = 0x1f12f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
label_1f12f4:
    // 0x1f12f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f12f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f12f8: 0xae620170  sw          $v0, 0x170($s3)
    ctx->pc = 0x1f12f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 368), GPR_U32(ctx, 2));
    // 0x1f12fc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1f12fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f1300:
    // 0x1f1300: 0x16220028  bne         $s1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F1300u;
    {
        const bool branch_taken_0x1f1300 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F1304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1300u;
        // 0x1f1304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1300) {
            ctx->pc = 0x1F13A4u;
            goto label_1f13a4;
        }
    }
    ctx->pc = 0x1F1308u;
    // 0x1f1308: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1f1308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1f130c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1f130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1f1310: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F1310u;
    {
        const bool branch_taken_0x1f1310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1310u;
        // 0x1f1314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1310) {
            ctx->pc = 0x1F13A4u;
            goto label_1f13a4;
        }
    }
    ctx->pc = 0x1F1318u;
    // 0x1f1318: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1f1318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1f131c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1F131Cu;
    {
        const bool branch_taken_0x1f131c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F131Cu;
        // 0x1f1320: 0xae620078  sw          $v0, 0x78($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f131c) {
            ctx->pc = 0x1F13A0u;
            goto label_1f13a0;
        }
    }
    ctx->pc = 0x1F1324u;
    // 0x1f1324: 0x0  nop
    ctx->pc = 0x1f1324u;
    // NOP
label_1f1328:
    // 0x1f1328: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x1f1328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x1f132c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F132Cu;
    {
        const bool branch_taken_0x1f132c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F132Cu;
        // 0x1f1330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f132c) {
            ctx->pc = 0x1F1380u;
            goto label_1f1380;
        }
    }
    ctx->pc = 0x1F1334u;
    // 0x1f1334: 0xc07c4f6  jal         func_1F13D8
    ctx->pc = 0x1F1334u;
    SET_GPR_U32(ctx, 31, 0x1F133Cu);
    ctx->pc = 0x1F1338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1334u;
    // 0x1f1338: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F13D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F13D8u, 0x1F1334u, 0x1F133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F133Cu;
label_1f133c:
    // 0x1f133c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f133cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1340: 0xc07cb9e  jal         func_1F2E78
    ctx->pc = 0x1F1340u;
    SET_GPR_U32(ctx, 31, 0x1F1348u);
    ctx->pc = 0x1F1344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1340u;
    // 0x1f1344: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2E78u, 0x1F1340u, 0x1F1348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1348u;
label_1f1348:
    // 0x1f1348: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1348u;
    {
        const bool branch_taken_0x1f1348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1348u;
        // 0x1f134c: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1348) {
            ctx->pc = 0x1F1370u;
            goto label_1f1370;
        }
    }
    ctx->pc = 0x1F1350u;
    // 0x1f1350: 0xc07ccfa  jal         func_1F33E8
    ctx->pc = 0x1F1350u;
    SET_GPR_U32(ctx, 31, 0x1F1358u);
    ctx->pc = 0x1F1354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1350u;
    // 0x1f1354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F33E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F33E8u, 0x1F1350u, 0x1F1358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1358u;
label_1f1358:
    // 0x1f1358: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f1358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f135c: 0x56400013  bnel        $s2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F135Cu;
    {
        const bool branch_taken_0x1f135c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f135c) {
            ctx->pc = 0x1F1360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F135Cu;
            // 0x1f1360: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F13ACu;
            goto label_1f13ac;
        }
    }
    ctx->pc = 0x1F1364u;
    // 0x1f1364: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F1364u;
    {
        const bool branch_taken_0x1f1364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1364u;
        // 0x1f1368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1364) {
            ctx->pc = 0x1F13A4u;
            goto label_1f13a4;
        }
    }
    ctx->pc = 0x1F136Cu;
    // 0x1f136c: 0x0  nop
    ctx->pc = 0x1f136cu;
    // NOP
label_1f1370:
    // 0x1f1370: 0xc07cd54  jal         func_1F3550
    ctx->pc = 0x1F1370u;
    SET_GPR_U32(ctx, 31, 0x1F1378u);
    ctx->pc = 0x1F1374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1370u;
    // 0x1f1374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3550u, 0x1F1370u, 0x1F1378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1378u;
label_1f1378:
    // 0x1f1378: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F1378u;
    {
        const bool branch_taken_0x1f1378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1378u;
        // 0x1f137c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1378) {
            ctx->pc = 0x1F13A8u;
            goto label_1f13a8;
        }
    }
    ctx->pc = 0x1F1380u;
label_1f1380:
    // 0x1f1380: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1f1380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f1384: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1384u;
    {
        const bool branch_taken_0x1f1384 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1384u;
        // 0x1f1388: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1384) {
            ctx->pc = 0x1F13A8u;
            goto label_1f13a8;
        }
    }
    ctx->pc = 0x1F138Cu;
    // 0x1f138c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f138cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1390: 0xc07d036  jal         func_1F40D8
    ctx->pc = 0x1F1390u;
    SET_GPR_U32(ctx, 31, 0x1F1398u);
    ctx->pc = 0x1F1394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1390u;
    // 0x1f1394: 0x240600cc  addiu       $a2, $zero, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F40D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F40D8u, 0x1F1390u, 0x1F1398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1398u;
label_1f1398:
    // 0x1f1398: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1398u;
    {
        const bool branch_taken_0x1f1398 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1398u;
        // 0x1f139c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1398) {
            ctx->pc = 0x1F13ACu;
            goto label_1f13ac;
        }
    }
    ctx->pc = 0x1F13A0u;
label_1f13a0:
    // 0x1f13a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f13a4:
    // 0x1f13a4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1f13a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1f13a8:
    // 0x1f13a8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1f13a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f13ac:
    // 0x1f13ac: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f13acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f13b0:
    // 0x1f13b0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1f13b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f13b4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f13b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f13b8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1f13b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f13bc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1f13bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f13c0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1f13c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f13c4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1f13c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f13c8: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1f13c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f13cc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f13ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f13d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F13D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F13D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13D0u;
        // 0x1f13d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F13D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F13D8u;
}
