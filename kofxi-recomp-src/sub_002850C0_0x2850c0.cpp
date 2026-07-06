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

// Function: sub_002850C0
// Address: 0x2850c0 - 0x2851a0
void sub_002850C0_0x2850c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002850C0_0x2850c0");
#endif

    switch (ctx->pc) {
        case 0x2850c0u: goto label_2850c0;
        case 0x2850c4u: goto label_2850c4;
        case 0x2850c8u: goto label_2850c8;
        case 0x2850ccu: goto label_2850cc;
        case 0x2850d0u: goto label_2850d0;
        case 0x2850d4u: goto label_2850d4;
        case 0x2850d8u: goto label_2850d8;
        case 0x2850dcu: goto label_2850dc;
        case 0x2850e0u: goto label_2850e0;
        case 0x2850e4u: goto label_2850e4;
        case 0x2850e8u: goto label_2850e8;
        case 0x2850ecu: goto label_2850ec;
        case 0x2850f0u: goto label_2850f0;
        case 0x2850f4u: goto label_2850f4;
        case 0x2850f8u: goto label_2850f8;
        case 0x2850fcu: goto label_2850fc;
        case 0x285100u: goto label_285100;
        case 0x285104u: goto label_285104;
        case 0x285108u: goto label_285108;
        case 0x28510cu: goto label_28510c;
        case 0x285110u: goto label_285110;
        case 0x285114u: goto label_285114;
        case 0x285118u: goto label_285118;
        case 0x28511cu: goto label_28511c;
        case 0x285120u: goto label_285120;
        case 0x285124u: goto label_285124;
        case 0x285128u: goto label_285128;
        case 0x28512cu: goto label_28512c;
        case 0x285130u: goto label_285130;
        case 0x285134u: goto label_285134;
        case 0x285138u: goto label_285138;
        case 0x28513cu: goto label_28513c;
        case 0x285140u: goto label_285140;
        case 0x285144u: goto label_285144;
        case 0x285148u: goto label_285148;
        case 0x28514cu: goto label_28514c;
        case 0x285150u: goto label_285150;
        case 0x285154u: goto label_285154;
        case 0x285158u: goto label_285158;
        case 0x28515cu: goto label_28515c;
        case 0x285160u: goto label_285160;
        case 0x285164u: goto label_285164;
        case 0x285168u: goto label_285168;
        case 0x28516cu: goto label_28516c;
        case 0x285170u: goto label_285170;
        case 0x285174u: goto label_285174;
        case 0x285178u: goto label_285178;
        case 0x28517cu: goto label_28517c;
        case 0x285180u: goto label_285180;
        case 0x285184u: goto label_285184;
        case 0x285188u: goto label_285188;
        case 0x28518cu: goto label_28518c;
        case 0x285190u: goto label_285190;
        case 0x285194u: goto label_285194;
        case 0x285198u: goto label_285198;
        case 0x28519cu: goto label_28519c;
        default: break;
    }

    ctx->pc = 0x2850c0u;

label_2850c0:
    // 0x2850c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2850c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2850c4:
    // 0x2850c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2850c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2850c8:
    // 0x2850c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2850c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2850cc:
    // 0x2850cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2850ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2850d0:
    // 0x2850d0: 0xc0a3dd0  jal         func_28F740
label_2850d4:
    if (ctx->pc == 0x2850D4u) {
        ctx->pc = 0x2850D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850D0u;
        // 0x2850d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2850D8u;
        goto label_2850d8;
    }
    ctx->pc = 0x2850D0u;
    SET_GPR_U32(ctx, 31, 0x2850D8u);
    ctx->pc = 0x2850D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2850D0u;
    // 0x2850d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x2850D0u, 0x2850D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2850D8u;
label_2850d8:
    // 0x2850d8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2850dc:
    if (ctx->pc == 0x2850DCu) {
        ctx->pc = 0x2850DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850D8u;
        // 0x2850dc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2850E0u;
        goto label_2850e0;
    }
    ctx->pc = 0x2850D8u;
    {
        const bool branch_taken_0x2850d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2850DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850D8u;
        // 0x2850dc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850d8) {
            ctx->pc = 0x2850E8u;
            goto label_2850e8;
        }
    }
    ctx->pc = 0x2850E0u;
label_2850e0:
    // 0x2850e0: 0x1000002a  b           . + 4 + (0x2A << 2)
label_2850e4:
    if (ctx->pc == 0x2850E4u) {
        ctx->pc = 0x2850E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850E0u;
        // 0x2850e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2850E8u;
        goto label_2850e8;
    }
    ctx->pc = 0x2850E0u;
    {
        const bool branch_taken_0x2850e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2850E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850E0u;
        // 0x2850e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850e0) {
            ctx->pc = 0x28518Cu;
            goto label_28518c;
        }
    }
    ctx->pc = 0x2850E8u;
label_2850e8:
    // 0x2850e8: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2850e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_2850ec:
    // 0x2850ec: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x2850ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_2850f0:
    // 0x2850f0: 0x24e7a6c0  addiu       $a3, $a3, -0x5940
    ctx->pc = 0x2850f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944448));
label_2850f4:
    // 0x2850f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2850f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2850f8:
    // 0x2850f8: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2850f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2850fc:
    // 0x2850fc: 0xc0a8b46  jal         func_2A2D18
label_285100:
    if (ctx->pc == 0x285100u) {
        ctx->pc = 0x285100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850FCu;
        // 0x285100: 0x2408007f  addiu       $t0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285104u;
        goto label_285104;
    }
    ctx->pc = 0x2850FCu;
    SET_GPR_U32(ctx, 31, 0x285104u);
    ctx->pc = 0x285100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2850FCu;
    // 0x285100: 0x2408007f  addiu       $t0, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D18u, 0x2850FCu, 0x285104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285104u;
label_285104:
    // 0x285104: 0x1c400021  bgtz        $v0, . + 4 + (0x21 << 2)
label_285108:
    if (ctx->pc == 0x285108u) {
        ctx->pc = 0x285108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285104u;
        // 0x285108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28510Cu;
        goto label_28510c;
    }
    ctx->pc = 0x285104u;
    {
        const bool branch_taken_0x285104 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x285108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285104u;
        // 0x285108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285104) {
            ctx->pc = 0x28518Cu;
            goto label_28518c;
        }
    }
    ctx->pc = 0x28510Cu;
label_28510c:
    // 0x28510c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28510cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_285110:
    // 0x285110: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_285114:
    if (ctx->pc == 0x285114u) {
        ctx->pc = 0x285114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285110u;
        // 0x285114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285118u;
        goto label_285118;
    }
    ctx->pc = 0x285110u;
    {
        const bool branch_taken_0x285110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285110u;
        // 0x285114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285110) {
            ctx->pc = 0x285140u;
            goto label_285140;
        }
    }
    ctx->pc = 0x285118u;
label_285118:
    // 0x285118: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x285118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28511c:
    // 0x28511c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28511cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285120:
    // 0x285120: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x285120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285124:
    // 0x285124: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x285124u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285128:
    // 0x285128: 0x40f809  jalr        $v0
label_28512c:
    if (ctx->pc == 0x28512Cu) {
        ctx->pc = 0x28512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285128u;
        // 0x28512c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285130u;
        goto label_285130;
    }
    ctx->pc = 0x285128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285130u);
        ctx->pc = 0x28512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285128u;
        // 0x28512c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285128u, 0x285130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285130u;
label_285130:
    // 0x285130: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x285130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_285134:
    // 0x285134: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x285134u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_285138:
    // 0x285138: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_28513c:
    if (ctx->pc == 0x28513Cu) {
        ctx->pc = 0x28513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285138u;
        // 0x28513c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285140u;
        goto label_285140;
    }
    ctx->pc = 0x285138u;
    {
        const bool branch_taken_0x285138 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285138u;
        // 0x28513c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285138) {
            ctx->pc = 0x285190u;
            goto label_285190;
        }
    }
    ctx->pc = 0x285140u;
label_285140:
    // 0x285140: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x285140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_285144:
    // 0x285144: 0x50c00007  beql        $a2, $zero, . + 4 + (0x7 << 2)
label_285148:
    if (ctx->pc == 0x285148u) {
        ctx->pc = 0x285148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285144u;
        // 0x285148: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28514Cu;
        goto label_28514c;
    }
    ctx->pc = 0x285144u;
    {
        const bool branch_taken_0x285144 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x285144) {
            ctx->pc = 0x285148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285144u;
            // 0x285148: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285164u;
            goto label_285164;
        }
    }
    ctx->pc = 0x28514Cu;
label_28514c:
    // 0x28514c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28514cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285150:
    // 0x285150: 0xc0a5d58  jal         func_297560
label_285154:
    if (ctx->pc == 0x285154u) {
        ctx->pc = 0x285154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285150u;
        // 0x285154: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285158u;
        goto label_285158;
    }
    ctx->pc = 0x285150u;
    SET_GPR_U32(ctx, 31, 0x285158u);
    ctx->pc = 0x285154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285150u;
    // 0x285154: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297560u, 0x285150u, 0x285158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285158u;
label_285158:
    // 0x285158: 0xc0a8c0a  jal         func_2A3028
label_28515c:
    if (ctx->pc == 0x28515Cu) {
        ctx->pc = 0x28515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285158u;
        // 0x28515c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285160u;
        goto label_285160;
    }
    ctx->pc = 0x285158u;
    SET_GPR_U32(ctx, 31, 0x285160u);
    ctx->pc = 0x28515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285158u;
    // 0x28515c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x285158u, 0x285160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285160u;
label_285160:
    // 0x285160: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x285160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_285164:
    // 0x285164: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_285168:
    if (ctx->pc == 0x285168u) {
        ctx->pc = 0x285168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285164u;
        // 0x285168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28516Cu;
        goto label_28516c;
    }
    ctx->pc = 0x285164u;
    {
        const bool branch_taken_0x285164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285164) {
            ctx->pc = 0x285168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285164u;
            // 0x285168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28518Cu;
            goto label_28518c;
        }
    }
    ctx->pc = 0x28516Cu;
label_28516c:
    // 0x28516c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x28516cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_285170:
    // 0x285170: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_285174:
    if (ctx->pc == 0x285174u) {
        ctx->pc = 0x285174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285170u;
        // 0x285174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285178u;
        goto label_285178;
    }
    ctx->pc = 0x285170u;
    {
        const bool branch_taken_0x285170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285170) {
            ctx->pc = 0x285174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285170u;
            // 0x285174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28518Cu;
            goto label_28518c;
        }
    }
    ctx->pc = 0x285178u;
label_285178:
    // 0x285178: 0x40f809  jalr        $v0
label_28517c:
    if (ctx->pc == 0x28517Cu) {
        ctx->pc = 0x28517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285178u;
        // 0x28517c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285180u;
        goto label_285180;
    }
    ctx->pc = 0x285178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285180u);
        ctx->pc = 0x28517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285178u;
        // 0x28517c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285178u, 0x285180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285180u;
label_285180:
    // 0x285180: 0xc0a8c0a  jal         func_2A3028
label_285184:
    if (ctx->pc == 0x285184u) {
        ctx->pc = 0x285184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285180u;
        // 0x285184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285188u;
        goto label_285188;
    }
    ctx->pc = 0x285180u;
    SET_GPR_U32(ctx, 31, 0x285188u);
    ctx->pc = 0x285184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285180u;
    // 0x285184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x285180u, 0x285188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285188u;
label_285188:
    // 0x285188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28518c:
    // 0x28518c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28518cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_285190:
    // 0x285190: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x285190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_285194:
    // 0x285194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x285194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_285198:
    // 0x285198: 0x3e00008  jr          $ra
label_28519c:
    if (ctx->pc == 0x28519Cu) {
        ctx->pc = 0x28519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285198u;
        // 0x28519c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2851A0u;
        goto label_fallthrough_0x285198;
    }
    ctx->pc = 0x285198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285198u;
        // 0x28519c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x285198:
    ctx->pc = 0x2851A0u;
}
