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

// Function: sub_00267568
// Address: 0x267568 - 0x267790
void sub_00267568_0x267568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267568_0x267568");
#endif

    switch (ctx->pc) {
        case 0x267598u: goto label_267598;
        case 0x2675a8u: goto label_2675a8;
        case 0x267608u: goto label_267608;
        case 0x267620u: goto label_267620;
        case 0x2676a0u: goto label_2676a0;
        case 0x2676b8u: goto label_2676b8;
        case 0x2676c8u: goto label_2676c8;
        case 0x2676f4u: goto label_2676f4;
        case 0x26772cu: goto label_26772c;
        case 0x267740u: goto label_267740;
        case 0x267758u: goto label_267758;
        case 0x267770u: goto label_267770;
        case 0x267778u: goto label_267778;
        default: break;
    }

    ctx->pc = 0x267568u;

    // 0x267568: 0x27bdf350  addiu       $sp, $sp, -0xCB0
    ctx->pc = 0x267568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964048));
    // 0x26756c: 0xffb20c90  sd          $s2, 0xC90($sp)
    ctx->pc = 0x26756cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3216), GPR_U64(ctx, 18));
    // 0x267570: 0xffb10c80  sd          $s1, 0xC80($sp)
    ctx->pc = 0x267570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3200), GPR_U64(ctx, 17));
    // 0x267574: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x267574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267578: 0xffb00c70  sd          $s0, 0xC70($sp)
    ctx->pc = 0x267578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3184), GPR_U64(ctx, 16));
    // 0x26757c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26757cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267580: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x267580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267584: 0xffbf0ca0  sd          $ra, 0xCA0($sp)
    ctx->pc = 0x267584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3232), GPR_U64(ctx, 31));
    // 0x267588: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x267588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26758c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26758cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267590: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x267590u;
    SET_GPR_U32(ctx, 31, 0x267598u);
    ctx->pc = 0x267594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267590u;
    // 0x267594: 0x24060c6c  addiu       $a2, $zero, 0xC6C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x267590u, 0x267598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267598u;
label_267598:
    // 0x267598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x267598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26759c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26759cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2675a0: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2675A0u;
    SET_GPR_U32(ctx, 31, 0x2675A8u);
    ctx->pc = 0x2675A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2675A0u;
    // 0x2675a4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2675A0u, 0x2675A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2675A8u;
label_2675a8:
    // 0x2675a8: 0x8e230404  lw          $v1, 0x404($s1)
    ctx->pc = 0x2675a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
    // 0x2675ac: 0x8e227b18  lw          $v0, 0x7B18($s1)
    ctx->pc = 0x2675acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31512)));
    // 0x2675b0: 0x92247b24  lbu         $a0, 0x7B24($s1)
    ctx->pc = 0x2675b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31524)));
    // 0x2675b4: 0x92257b25  lbu         $a1, 0x7B25($s1)
    ctx->pc = 0x2675b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31525)));
    // 0x2675b8: 0x8e267b1c  lw          $a2, 0x7B1C($s1)
    ctx->pc = 0x2675b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31516)));
    // 0x2675bc: 0x92277b26  lbu         $a3, 0x7B26($s1)
    ctx->pc = 0x2675bcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31526)));
    // 0x2675c0: 0x92287b27  lbu         $t0, 0x7B27($s1)
    ctx->pc = 0x2675c0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31527)));
    // 0x2675c4: 0x92297b16  lbu         $t1, 0x7B16($s1)
    ctx->pc = 0x2675c4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31510)));
    // 0x2675c8: 0x922a7b28  lbu         $t2, 0x7B28($s1)
    ctx->pc = 0x2675c8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31528)));
    // 0x2675cc: 0x922b7714  lbu         $t3, 0x7714($s1)
    ctx->pc = 0x2675ccu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30484)));
    // 0x2675d0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2675d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2675d4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2675d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2675d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2675d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2675dc: 0xafa5001c  sw          $a1, 0x1C($sp)
    ctx->pc = 0x2675dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
    // 0x2675e0: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2675e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2675e4: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x2675e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x2675e8: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x2675e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x2675ec: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x2675ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x2675f0: 0x11600005  beqz        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2675F0u;
    {
        const bool branch_taken_0x2675f0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2675F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675F0u;
        // 0x2675f4: 0xafaa0030  sw          $t2, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675f0) {
            ctx->pc = 0x267608u;
            goto label_267608;
        }
    }
    ctx->pc = 0x2675F8u;
    // 0x2675f8: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2675f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2675fc: 0x26257714  addiu       $a1, $s1, 0x7714
    ctx->pc = 0x2675fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 30484));
    // 0x267600: 0xc04a966  jal         func_12A598
    ctx->pc = 0x267600u;
    SET_GPR_U32(ctx, 31, 0x267608u);
    ctx->pc = 0x267604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267600u;
    // 0x267604: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x267600u, 0x267608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267608u;
label_267608:
    // 0x267608: 0x92227814  lbu         $v0, 0x7814($s1)
    ctx->pc = 0x267608u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30740)));
    // 0x26760c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26760Cu;
    {
        const bool branch_taken_0x26760c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26760Cu;
        // 0x267610: 0x27a40138  addiu       $a0, $sp, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26760c) {
            ctx->pc = 0x267620u;
            goto label_267620;
        }
    }
    ctx->pc = 0x267614u;
    // 0x267614: 0x26257814  addiu       $a1, $s1, 0x7814
    ctx->pc = 0x267614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 30740));
    // 0x267618: 0xc04a966  jal         func_12A598
    ctx->pc = 0x267618u;
    SET_GPR_U32(ctx, 31, 0x267620u);
    ctx->pc = 0x26761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267618u;
    // 0x26761c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x267618u, 0x267620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267620u;
label_267620:
    // 0x267620: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x267620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x267624: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x267624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267628: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x267628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x26762c: 0x8c440260  lw          $a0, 0x260($v0)
    ctx->pc = 0x26762cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 608)));
    // 0x267630: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x267630u;
    {
        const bool branch_taken_0x267630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x267634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267630u;
        // 0x267634: 0x2c820003  sltiu       $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267630) {
            ctx->pc = 0x267680u;
            goto label_267680;
        }
    }
    ctx->pc = 0x267638u;
    // 0x267638: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x267638u;
    {
        const bool branch_taken_0x267638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267638u;
        // 0x26763c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267638) {
            ctx->pc = 0x267650u;
            goto label_267650;
        }
    }
    ctx->pc = 0x267640u;
    // 0x267640: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x267640u;
    {
        const bool branch_taken_0x267640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267640u;
        // 0x267644: 0x3402c023  ori         $v0, $zero, 0xC023 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267640) {
            ctx->pc = 0x267684u;
            goto label_267684;
        }
    }
    ctx->pc = 0x267648u;
    // 0x267648: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x267648u;
    {
        const bool branch_taken_0x267648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267648u;
        // 0x26764c: 0x92227914  lbu         $v0, 0x7914($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267648) {
            ctx->pc = 0x26768Cu;
            goto label_26768c;
        }
    }
    ctx->pc = 0x267650u;
label_267650:
    // 0x267650: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x267650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x267654: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267654u;
    {
        const bool branch_taken_0x267654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267654u;
        // 0x267658: 0x3402c223  ori         $v0, $zero, 0xC223 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267654) {
            ctx->pc = 0x267670u;
            goto label_267670;
        }
    }
    ctx->pc = 0x26765Cu;
    // 0x26765c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26765cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x267660: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267660u;
    {
        const bool branch_taken_0x267660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267660u;
        // 0x267664: 0x3402c023  ori         $v0, $zero, 0xC023 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267660) {
            ctx->pc = 0x26767Cu;
            goto label_26767c;
        }
    }
    ctx->pc = 0x267668u;
    // 0x267668: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x267668u;
    {
        const bool branch_taken_0x267668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267668u;
        // 0x26766c: 0x92227914  lbu         $v0, 0x7914($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267668) {
            ctx->pc = 0x26768Cu;
            goto label_26768c;
        }
    }
    ctx->pc = 0x267670u;
label_267670:
    // 0x267670: 0xa7a20036  sh          $v0, 0x36($sp)
    ctx->pc = 0x267670u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x267674: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267674u;
    {
        const bool branch_taken_0x267674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267674u;
        // 0x267678: 0x3402c023  ori         $v0, $zero, 0xC023 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267674) {
            ctx->pc = 0x267684u;
            goto label_267684;
        }
    }
    ctx->pc = 0x26767Cu;
label_26767c:
    // 0x26767c: 0xa7a20036  sh          $v0, 0x36($sp)
    ctx->pc = 0x26767cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 54), (uint16_t)GPR_U32(ctx, 2));
label_267680:
    // 0x267680: 0x3402c223  ori         $v0, $zero, 0xC223
    ctx->pc = 0x267680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
label_267684:
    // 0x267684: 0xa7a20034  sh          $v0, 0x34($sp)
    ctx->pc = 0x267684u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x267688: 0x92227914  lbu         $v0, 0x7914($s1)
    ctx->pc = 0x267688u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30996)));
label_26768c:
    // 0x26768c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26768Cu;
    {
        const bool branch_taken_0x26768c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26768Cu;
        // 0x267690: 0x27a4023c  addiu       $a0, $sp, 0x23C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26768c) {
            ctx->pc = 0x2676A0u;
            goto label_2676a0;
        }
    }
    ctx->pc = 0x267694u;
    // 0x267694: 0x26257914  addiu       $a1, $s1, 0x7914
    ctx->pc = 0x267694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 30996));
    // 0x267698: 0xc04a966  jal         func_12A598
    ctx->pc = 0x267698u;
    SET_GPR_U32(ctx, 31, 0x2676A0u);
    ctx->pc = 0x26769Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267698u;
    // 0x26769c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x267698u, 0x2676A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2676A0u;
label_2676a0:
    // 0x2676a0: 0x92227a14  lbu         $v0, 0x7A14($s1)
    ctx->pc = 0x2676a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31252)));
    // 0x2676a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2676A4u;
    {
        const bool branch_taken_0x2676a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2676A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676A4u;
        // 0x2676a8: 0x27a4033c  addiu       $a0, $sp, 0x33C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 828));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676a4) {
            ctx->pc = 0x2676B8u;
            goto label_2676b8;
        }
    }
    ctx->pc = 0x2676ACu;
    // 0x2676ac: 0x26257a14  addiu       $a1, $s1, 0x7A14
    ctx->pc = 0x2676acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 31252));
    // 0x2676b0: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2676B0u;
    SET_GPR_U32(ctx, 31, 0x2676B8u);
    ctx->pc = 0x2676B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2676B0u;
    // 0x2676b4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2676B0u, 0x2676B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2676B8u;
label_2676b8:
    // 0x2676b8: 0x8e237e44  lw          $v1, 0x7E44($s1)
    ctx->pc = 0x2676b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32324)));
    // 0x2676bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2676bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2676c0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2676C0u;
    {
        const bool branch_taken_0x2676c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2676C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676C0u;
        // 0x2676c4: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676c0) {
            ctx->pc = 0x267714u;
            goto label_267714;
        }
    }
    ctx->pc = 0x2676C8u;
label_2676c8:
    // 0x2676c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2676C8u;
    {
        const bool branch_taken_0x2676c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2676CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676C8u;
        // 0x2676cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676c8) {
            ctx->pc = 0x2676E0u;
            goto label_2676e0;
        }
    }
    ctx->pc = 0x2676D0u;
    // 0x2676d0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2676D0u;
    {
        const bool branch_taken_0x2676d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2676D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676D0u;
        // 0x2676d4: 0x27a4043c  addiu       $a0, $sp, 0x43C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1084));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676d0) {
            ctx->pc = 0x267704u;
            goto label_267704;
        }
    }
    ctx->pc = 0x2676D8u;
    // 0x2676d8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2676D8u;
    {
        const bool branch_taken_0x2676d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2676DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676D8u;
        // 0x2676dc: 0x26257e48  addiu       $a1, $s1, 0x7E48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676d8) {
            ctx->pc = 0x267724u;
            goto label_267724;
        }
    }
    ctx->pc = 0x2676E0u;
label_2676e0:
    // 0x2676e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2676e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2676e4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2676E4u;
    {
        const bool branch_taken_0x2676e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2676E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676E4u;
        // 0x2676e8: 0x3402c223  ori         $v0, $zero, 0xC223 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676e4) {
            ctx->pc = 0x267700u;
            goto label_267700;
        }
    }
    ctx->pc = 0x2676ECu;
    // 0x2676ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2676ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2676f0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_2676f4:
    if (ctx->pc == 0x2676F4u) {
        ctx->pc = 0x2676F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676F0u;
        // 0x2676f4: 0x27a4043c  addiu       $a0, $sp, 0x43C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1084));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2676F8u;
        goto label_fallthrough_0x2676f0;
    }
    ctx->pc = 0x2676F0u;
    {
        const bool branch_taken_0x2676f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2676F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676F0u;
        // 0x2676f4: 0x27a4043c  addiu       $a0, $sp, 0x43C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1084));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676f0) {
            ctx->pc = 0x26770Cu;
            goto label_26770c;
        }
    }
label_fallthrough_0x2676f0:
    ctx->pc = 0x2676F8u;
    // 0x2676f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2676F8u;
    {
        const bool branch_taken_0x2676f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2676FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676F8u;
        // 0x2676fc: 0x26257e48  addiu       $a1, $s1, 0x7E48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676f8) {
            ctx->pc = 0x267724u;
            goto label_267724;
        }
    }
    ctx->pc = 0x267700u;
label_267700:
    // 0x267700: 0xa7a2023a  sh          $v0, 0x23A($sp)
    ctx->pc = 0x267700u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 570), (uint16_t)GPR_U32(ctx, 2));
label_267704:
    // 0x267704: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x267704u;
    {
        const bool branch_taken_0x267704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267704u;
        // 0x267708: 0x3402c023  ori         $v0, $zero, 0xC023 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267704) {
            ctx->pc = 0x267718u;
            goto label_267718;
        }
    }
    ctx->pc = 0x26770Cu;
label_26770c:
    // 0x26770c: 0x3402c023  ori         $v0, $zero, 0xC023
    ctx->pc = 0x26770cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
    // 0x267710: 0xa7a2023a  sh          $v0, 0x23A($sp)
    ctx->pc = 0x267710u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 570), (uint16_t)GPR_U32(ctx, 2));
label_267714:
    // 0x267714: 0x3402c223  ori         $v0, $zero, 0xC223
    ctx->pc = 0x267714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
label_267718:
    // 0x267718: 0xa7a20238  sh          $v0, 0x238($sp)
    ctx->pc = 0x267718u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 568), (uint16_t)GPR_U32(ctx, 2));
    // 0x26771c: 0x27a4043c  addiu       $a0, $sp, 0x43C
    ctx->pc = 0x26771cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1084));
    // 0x267720: 0x26257e48  addiu       $a1, $s1, 0x7E48
    ctx->pc = 0x267720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32328));
label_267724:
    // 0x267724: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x267724u;
    SET_GPR_U32(ctx, 31, 0x26772Cu);
    ctx->pc = 0x267728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267724u;
    // 0x267728: 0x24060418  addiu       $a2, $zero, 0x418 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x267724u, 0x26772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26772Cu;
label_26772c:
    // 0x26772c: 0x34058264  ori         $a1, $zero, 0x8264
    ctx->pc = 0x26772cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33380);
    // 0x267730: 0x27a40854  addiu       $a0, $sp, 0x854
    ctx->pc = 0x267730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2132));
    // 0x267734: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x267734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x267738: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x267738u;
    SET_GPR_U32(ctx, 31, 0x267740u);
    ctx->pc = 0x26773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267738u;
    // 0x26773c: 0x24060418  addiu       $a2, $zero, 0x418 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x267738u, 0x267740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267740u;
label_267740:
    // 0x267740: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x267740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267744: 0x34058c6c  ori         $a1, $zero, 0x8C6C
    ctx->pc = 0x267744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35948);
    // 0x267748: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x267748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26774c: 0x34a5697a  ori         $a1, $a1, 0x697A
    ctx->pc = 0x26774cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27002);
    // 0x267750: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x267750u;
    SET_GPR_U32(ctx, 31, 0x267758u);
    ctx->pc = 0x267754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267750u;
    // 0x267754: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x267750u, 0x267758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267758u;
label_267758:
    // 0x267758: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267758u;
    {
        const bool branch_taken_0x267758 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267758u;
        // 0x26775c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267758) {
            ctx->pc = 0x267774u;
            goto label_267774;
        }
    }
    ctx->pc = 0x267760u;
    // 0x267760: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x267760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x267764: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x267764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x267768: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x267768u;
    SET_GPR_U32(ctx, 31, 0x267770u);
    ctx->pc = 0x26776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267768u;
    // 0x26776c: 0x24a57948  addiu       $a1, $a1, 0x7948 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x267768u, 0x267770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267770u;
label_267770:
    // 0x267770: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x267770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_267774:
    // 0x267774: 0xdfbf0ca0  ld          $ra, 0xCA0($sp)
    ctx->pc = 0x267774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3232)));
label_267778:
    // 0x267778: 0xdfb20c90  ld          $s2, 0xC90($sp)
    ctx->pc = 0x267778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 3216)));
    // 0x26777c: 0xdfb10c80  ld          $s1, 0xC80($sp)
    ctx->pc = 0x26777cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 3200)));
    // 0x267780: 0xdfb00c70  ld          $s0, 0xC70($sp)
    ctx->pc = 0x267780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 3184)));
    // 0x267784: 0x3e00008  jr          $ra
    ctx->pc = 0x267784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267784u;
        // 0x267788: 0x27bd0cb0  addiu       $sp, $sp, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26778Cu;
    // 0x26778c: 0x0  nop
    ctx->pc = 0x26778cu;
    // NOP
    if (ctx->pc == 0x26778cu) { ctx->pc = 0x267790u; }
}
