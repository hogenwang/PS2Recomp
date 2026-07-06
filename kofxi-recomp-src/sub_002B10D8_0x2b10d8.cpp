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

// Function: sub_002B10D8
// Address: 0x2b10d8 - 0x2b11e8
void sub_002B10D8_0x2b10d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B10D8_0x2b10d8");
#endif

    switch (ctx->pc) {
        case 0x2b10d8u: goto label_2b10d8;
        case 0x2b10dcu: goto label_2b10dc;
        case 0x2b10e0u: goto label_2b10e0;
        case 0x2b10e4u: goto label_2b10e4;
        case 0x2b10e8u: goto label_2b10e8;
        case 0x2b10ecu: goto label_2b10ec;
        case 0x2b10f0u: goto label_2b10f0;
        case 0x2b10f4u: goto label_2b10f4;
        case 0x2b10f8u: goto label_2b10f8;
        case 0x2b10fcu: goto label_2b10fc;
        case 0x2b1100u: goto label_2b1100;
        case 0x2b1104u: goto label_2b1104;
        case 0x2b1108u: goto label_2b1108;
        case 0x2b110cu: goto label_2b110c;
        case 0x2b1110u: goto label_2b1110;
        case 0x2b1114u: goto label_2b1114;
        case 0x2b1118u: goto label_2b1118;
        case 0x2b111cu: goto label_2b111c;
        case 0x2b1120u: goto label_2b1120;
        case 0x2b1124u: goto label_2b1124;
        case 0x2b1128u: goto label_2b1128;
        case 0x2b112cu: goto label_2b112c;
        case 0x2b1130u: goto label_2b1130;
        case 0x2b1134u: goto label_2b1134;
        case 0x2b1138u: goto label_2b1138;
        case 0x2b113cu: goto label_2b113c;
        case 0x2b1140u: goto label_2b1140;
        case 0x2b1144u: goto label_2b1144;
        case 0x2b1148u: goto label_2b1148;
        case 0x2b114cu: goto label_2b114c;
        case 0x2b1150u: goto label_2b1150;
        case 0x2b1154u: goto label_2b1154;
        case 0x2b1158u: goto label_2b1158;
        case 0x2b115cu: goto label_2b115c;
        case 0x2b1160u: goto label_2b1160;
        case 0x2b1164u: goto label_2b1164;
        case 0x2b1168u: goto label_2b1168;
        case 0x2b116cu: goto label_2b116c;
        case 0x2b1170u: goto label_2b1170;
        case 0x2b1174u: goto label_2b1174;
        case 0x2b1178u: goto label_2b1178;
        case 0x2b117cu: goto label_2b117c;
        case 0x2b1180u: goto label_2b1180;
        case 0x2b1184u: goto label_2b1184;
        case 0x2b1188u: goto label_2b1188;
        case 0x2b118cu: goto label_2b118c;
        case 0x2b1190u: goto label_2b1190;
        case 0x2b1194u: goto label_2b1194;
        case 0x2b1198u: goto label_2b1198;
        case 0x2b119cu: goto label_2b119c;
        case 0x2b11a0u: goto label_2b11a0;
        case 0x2b11a4u: goto label_2b11a4;
        case 0x2b11a8u: goto label_2b11a8;
        case 0x2b11acu: goto label_2b11ac;
        case 0x2b11b0u: goto label_2b11b0;
        case 0x2b11b4u: goto label_2b11b4;
        case 0x2b11b8u: goto label_2b11b8;
        case 0x2b11bcu: goto label_2b11bc;
        case 0x2b11c0u: goto label_2b11c0;
        case 0x2b11c4u: goto label_2b11c4;
        case 0x2b11c8u: goto label_2b11c8;
        case 0x2b11ccu: goto label_2b11cc;
        case 0x2b11d0u: goto label_2b11d0;
        case 0x2b11d4u: goto label_2b11d4;
        case 0x2b11d8u: goto label_2b11d8;
        case 0x2b11dcu: goto label_2b11dc;
        case 0x2b11e0u: goto label_2b11e0;
        case 0x2b11e4u: goto label_2b11e4;
        default: break;
    }

    ctx->pc = 0x2b10d8u;

label_2b10d8:
    // 0x2b10d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b10d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b10dc:
    // 0x2b10dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b10dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b10e0:
    // 0x2b10e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b10e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b10e4:
    // 0x2b10e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b10e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b10e8:
    // 0x2b10e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b10e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b10ec:
    // 0x2b10ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b10ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b10f0:
    // 0x2b10f0: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x2b10f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2b10f4:
    // 0x2b10f4: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x2b10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_2b10f8:
    // 0x2b10f8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_2b10fc:
    if (ctx->pc == 0x2B10FCu) {
        ctx->pc = 0x2B10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10F8u;
        // 0x2b10fc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1100u;
        goto label_2b1100;
    }
    ctx->pc = 0x2B10F8u;
    {
        const bool branch_taken_0x2b10f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10F8u;
        // 0x2b10fc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b10f8) {
            ctx->pc = 0x2B11D8u;
            goto label_2b11d8;
        }
    }
    ctx->pc = 0x2B1100u;
label_2b1100:
    // 0x2b1100: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x2b1100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2b1104:
    // 0x2b1104: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2b1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2b1108:
    // 0x2b1108: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2b1108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_2b110c:
    // 0x2b110c: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_2b1110:
    if (ctx->pc == 0x2B1110u) {
        ctx->pc = 0x2B1110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B110Cu;
        // 0x2b1110: 0x8c830030  lw          $v1, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1114u;
        goto label_2b1114;
    }
    ctx->pc = 0x2B110Cu;
    {
        const bool branch_taken_0x2b110c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b110c) {
            ctx->pc = 0x2B1110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B110Cu;
            // 0x2b1110: 0x8c830030  lw          $v1, 0x30($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1184u;
            goto label_2b1184;
        }
    }
    ctx->pc = 0x2B1114u;
label_2b1114:
    // 0x2b1114: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2b1114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2b1118:
    // 0x2b1118: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_2b111c:
    if (ctx->pc == 0x2B111Cu) {
        ctx->pc = 0x2B111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1118u;
        // 0x2b111c: 0x8c830030  lw          $v1, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1120u;
        goto label_2b1120;
    }
    ctx->pc = 0x2B1118u;
    {
        const bool branch_taken_0x2b1118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1118) {
            ctx->pc = 0x2B111Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1118u;
            // 0x2b111c: 0x8c830030  lw          $v1, 0x30($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1184u;
            goto label_2b1184;
        }
    }
    ctx->pc = 0x2B1120u;
label_2b1120:
    // 0x2b1120: 0xc0aecac  jal         func_2BB2B0
label_2b1124:
    if (ctx->pc == 0x2B1124u) {
        ctx->pc = 0x2B1128u;
        goto label_2b1128;
    }
    ctx->pc = 0x2B1120u;
    SET_GPR_U32(ctx, 31, 0x2B1128u);
    ctx->pc = 0x2BB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB2B0u, 0x2B1120u, 0x2B1128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1128u;
label_2b1128:
    // 0x2b1128: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2b112c:
    if (ctx->pc == 0x2B112Cu) {
        ctx->pc = 0x2B112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1128u;
        // 0x2b112c: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1130u;
        goto label_2b1130;
    }
    ctx->pc = 0x2B1128u;
    {
        const bool branch_taken_0x2b1128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1128u;
        // 0x2b112c: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1128) {
            ctx->pc = 0x2B1180u;
            goto label_2b1180;
        }
    }
    ctx->pc = 0x2B1130u;
label_2b1130:
    // 0x2b1130: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2b1130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_2b1134:
    // 0x2b1134: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2b1138:
    if (ctx->pc == 0x2B1138u) {
        ctx->pc = 0x2B1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1134u;
        // 0x2b1138: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B113Cu;
        goto label_2b113c;
    }
    ctx->pc = 0x2B1134u;
    {
        const bool branch_taken_0x2b1134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1134u;
        // 0x2b1138: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1134) {
            ctx->pc = 0x2B1180u;
            goto label_2b1180;
        }
    }
    ctx->pc = 0x2B113Cu;
label_2b113c:
    // 0x2b113c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x2b113cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2b1140:
    // 0x2b1140: 0x24e7d3e8  addiu       $a3, $a3, -0x2C18
    ctx->pc = 0x2b1140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956008));
label_2b1144:
    // 0x2b1144: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b1144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1148:
    // 0x2b1148: 0x24840098  addiu       $a0, $a0, 0x98
    ctx->pc = 0x2b1148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
label_2b114c:
    // 0x2b114c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2b114cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2b1150:
    // 0x2b1150: 0xc0a8b46  jal         func_2A2D18
label_2b1154:
    if (ctx->pc == 0x2B1154u) {
        ctx->pc = 0x2B1154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1150u;
        // 0x2b1154: 0x2408071f  addiu       $t0, $zero, 0x71F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1823));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1158u;
        goto label_2b1158;
    }
    ctx->pc = 0x2B1150u;
    SET_GPR_U32(ctx, 31, 0x2B1158u);
    ctx->pc = 0x2B1154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1150u;
    // 0x2b1154: 0x2408071f  addiu       $t0, $zero, 0x71F (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1823));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D18u, 0x2B1150u, 0x2B1158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1158u;
label_2b1158:
    // 0x2b1158: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x2b1158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2b115c:
    // 0x2b115c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b115cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1160:
    // 0x2b1160: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2b1160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2b1164:
    // 0x2b1164: 0x40f809  jalr        $v0
label_2b1168:
    if (ctx->pc == 0x2B1168u) {
        ctx->pc = 0x2B1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1164u;
        // 0x2b1168: 0x8e0500b0  lw          $a1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B116Cu;
        goto label_2b116c;
    }
    ctx->pc = 0x2B1164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B116Cu);
        ctx->pc = 0x2B1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1164u;
        // 0x2b1168: 0x8e0500b0  lw          $a1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1164u, 0x2B116Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B116Cu;
label_2b116c:
    // 0x2b116c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2b1170:
    if (ctx->pc == 0x2B1170u) {
        ctx->pc = 0x2B1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B116Cu;
        // 0x2b1170: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1174u;
        goto label_2b1174;
    }
    ctx->pc = 0x2B116Cu;
    {
        const bool branch_taken_0x2b116c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b116c) {
            ctx->pc = 0x2B1170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B116Cu;
            // 0x2b1170: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1180u;
            goto label_2b1180;
        }
    }
    ctx->pc = 0x2B1174u;
label_2b1174:
    // 0x2b1174: 0xc0aed46  jal         func_2BB518
label_2b1178:
    if (ctx->pc == 0x2B1178u) {
        ctx->pc = 0x2B1178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1174u;
        // 0x2b1178: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B117Cu;
        goto label_2b117c;
    }
    ctx->pc = 0x2B1174u;
    SET_GPR_U32(ctx, 31, 0x2B117Cu);
    ctx->pc = 0x2B1178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1174u;
    // 0x2b1178: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB518u, 0x2B1174u, 0x2B117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B117Cu;
label_2b117c:
    // 0x2b117c: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x2b117cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2b1180:
    // 0x2b1180: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2b1180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2b1184:
    // 0x2b1184: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2b1184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_2b1188:
    // 0x2b1188: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_2b118c:
    if (ctx->pc == 0x2B118Cu) {
        ctx->pc = 0x2B118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1188u;
        // 0x2b118c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1190u;
        goto label_2b1190;
    }
    ctx->pc = 0x2B1188u;
    {
        const bool branch_taken_0x2b1188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1188u;
        // 0x2b118c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1188) {
            ctx->pc = 0x2B11D8u;
            goto label_2b11d8;
        }
    }
    ctx->pc = 0x2B1190u;
label_2b1190:
    // 0x2b1190: 0x711024  and         $v0, $v1, $s1
    ctx->pc = 0x2b1190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_2b1194:
    // 0x2b1194: 0x54510011  bnel        $v0, $s1, . + 4 + (0x11 << 2)
label_2b1198:
    if (ctx->pc == 0x2B1198u) {
        ctx->pc = 0x2B1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1194u;
        // 0x2b1198: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B119Cu;
        goto label_2b119c;
    }
    ctx->pc = 0x2B1194u;
    {
        const bool branch_taken_0x2b1194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2b1194) {
            ctx->pc = 0x2B1198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1194u;
            // 0x2b1198: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B11DCu;
            goto label_2b11dc;
        }
    }
    ctx->pc = 0x2B119Cu;
label_2b119c:
    // 0x2b119c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2b119cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2b11a0:
    // 0x2b11a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b11a4:
    if (ctx->pc == 0x2B11A4u) {
        ctx->pc = 0x2B11A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B11A0u;
        // 0x2b11a4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B11A8u;
        goto label_2b11a8;
    }
    ctx->pc = 0x2B11A0u;
    {
        const bool branch_taken_0x2b11a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B11A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B11A0u;
        // 0x2b11a4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b11a0) {
            ctx->pc = 0x2B11BCu;
            goto label_2b11bc;
        }
    }
    ctx->pc = 0x2B11A8u;
label_2b11a8:
    // 0x2b11a8: 0x90830054  lbu         $v1, 0x54($a0)
    ctx->pc = 0x2b11a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
label_2b11ac:
    // 0x2b11ac: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_2b11b0:
    if (ctx->pc == 0x2B11B0u) {
        ctx->pc = 0x2B11B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B11ACu;
        // 0x2b11b0: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B11B4u;
        goto label_2b11b4;
    }
    ctx->pc = 0x2B11ACu;
    {
        const bool branch_taken_0x2b11ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b11ac) {
            ctx->pc = 0x2B11B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B11ACu;
            // 0x2b11b0: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B11CCu;
            goto label_2b11cc;
        }
    }
    ctx->pc = 0x2B11B4u;
label_2b11b4:
    // 0x2b11b4: 0x10000009  b           . + 4 + (0x9 << 2)
label_2b11b8:
    if (ctx->pc == 0x2B11B8u) {
        ctx->pc = 0x2B11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B11B4u;
        // 0x2b11b8: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B11BCu;
        goto label_2b11bc;
    }
    ctx->pc = 0x2B11B4u;
    {
        const bool branch_taken_0x2b11b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B11B4u;
        // 0x2b11b8: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b11b4) {
            ctx->pc = 0x2B11DCu;
            goto label_2b11dc;
        }
    }
    ctx->pc = 0x2B11BCu;
label_2b11bc:
    // 0x2b11bc: 0x90830060  lbu         $v1, 0x60($a0)
    ctx->pc = 0x2b11bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 96)));
label_2b11c0:
    // 0x2b11c0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2b11c4:
    if (ctx->pc == 0x2B11C4u) {
        ctx->pc = 0x2B11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B11C0u;
        // 0x2b11c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B11C8u;
        goto label_2b11c8;
    }
    ctx->pc = 0x2B11C0u;
    {
        const bool branch_taken_0x2b11c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B11C0u;
        // 0x2b11c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b11c0) {
            ctx->pc = 0x2B11D8u;
            goto label_2b11d8;
        }
    }
    ctx->pc = 0x2B11C8u;
label_2b11c8:
    // 0x2b11c8: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x2b11c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2b11cc:
    // 0x2b11cc: 0xc0aee50  jal         func_2BB940
label_2b11d0:
    if (ctx->pc == 0x2B11D0u) {
        ctx->pc = 0x2B11D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B11CCu;
        // 0x2b11d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B11D4u;
        goto label_2b11d4;
    }
    ctx->pc = 0x2B11CCu;
    SET_GPR_U32(ctx, 31, 0x2B11D4u);
    ctx->pc = 0x2B11D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B11CCu;
    // 0x2b11d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB940u, 0x2B11CCu, 0x2B11D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B11D4u;
label_2b11d4:
    // 0x2b11d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b11d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b11d8:
    // 0x2b11d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b11d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b11dc:
    // 0x2b11dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b11dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b11e0:
    // 0x2b11e0: 0x3e00008  jr          $ra
label_2b11e4:
    if (ctx->pc == 0x2B11E4u) {
        ctx->pc = 0x2B11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B11E0u;
        // 0x2b11e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B11E8u;
        goto label_fallthrough_0x2b11e0;
    }
    ctx->pc = 0x2B11E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B11E0u;
        // 0x2b11e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B11E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b11e0:
    ctx->pc = 0x2B11E8u;
}
