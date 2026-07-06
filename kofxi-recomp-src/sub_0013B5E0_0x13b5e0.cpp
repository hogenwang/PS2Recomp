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

// Function: sub_0013B5E0
// Address: 0x13b5e0 - 0x13b720
void sub_0013B5E0_0x13b5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B5E0_0x13b5e0");
#endif

    switch (ctx->pc) {
        case 0x13b5fcu: goto label_13b5fc;
        case 0x13b650u: goto label_13b650;
        case 0x13b674u: goto label_13b674;
        case 0x13b680u: goto label_13b680;
        case 0x13b68cu: goto label_13b68c;
        case 0x13b698u: goto label_13b698;
        case 0x13b6d8u: goto label_13b6d8;
        case 0x13b6e4u: goto label_13b6e4;
        case 0x13b6f0u: goto label_13b6f0;
        case 0x13b6f8u: goto label_13b6f8;
        default: break;
    }

    ctx->pc = 0x13b5e0u;

    // 0x13b5e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13b5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13b5e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13b5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13b5e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13b5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13b5ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b5f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b5f4: 0xc062870  jal         func_18A1C0
    ctx->pc = 0x13B5F4u;
    SET_GPR_U32(ctx, 31, 0x13B5FCu);
    ctx->pc = 0x13B5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B5F4u;
    // 0x13b5f8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1C0u, 0x13B5F4u, 0x13B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B5FCu;
label_13b5fc:
    // 0x13b5fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13b5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13b600: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13b600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13b604: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B604u;
    {
        const bool branch_taken_0x13b604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b604) {
            ctx->pc = 0x13B618u;
            goto label_13b618;
        }
    }
    ctx->pc = 0x13B60Cu;
    // 0x13b60c: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x13b60cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x13b610: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13B610u;
    {
        const bool branch_taken_0x13b610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B610u;
        // 0x13b614: 0x2610db50  addiu       $s0, $s0, -0x24B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b610) {
            ctx->pc = 0x13B620u;
            goto label_13b620;
        }
    }
    ctx->pc = 0x13B618u;
label_13b618:
    // 0x13b618: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x13b618u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x13b61c: 0x2610dd98  addiu       $s0, $s0, -0x2268
    ctx->pc = 0x13b61cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958488));
label_13b620:
    // 0x13b620: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B620u;
    {
        const bool branch_taken_0x13b620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b620) {
            ctx->pc = 0x13B634u;
            goto label_13b634;
        }
    }
    ctx->pc = 0x13B628u;
    // 0x13b628: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x13b628u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x13b62c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13B62Cu;
    {
        const bool branch_taken_0x13b62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B62Cu;
        // 0x13b630: 0x2652dd98  addiu       $s2, $s2, -0x2268 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b62c) {
            ctx->pc = 0x13B63Cu;
            goto label_13b63c;
        }
    }
    ctx->pc = 0x13B634u;
label_13b634:
    // 0x13b634: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x13b634u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x13b638: 0x2652db50  addiu       $s2, $s2, -0x24B0
    ctx->pc = 0x13b638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294957904));
label_13b63c:
    // 0x13b63c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x13B63Cu;
    {
        const bool branch_taken_0x13b63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b63c) {
            ctx->pc = 0x13B640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B63Cu;
            // 0x13b640: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B648u;
            goto label_13b648;
        }
    }
    ctx->pc = 0x13B644u;
    // 0x13b644: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13b644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13b648:
    // 0x13b648: 0xc04ecd8  jal         func_13B360
    ctx->pc = 0x13B648u;
    SET_GPR_U32(ctx, 31, 0x13B650u);
    ctx->pc = 0x13B64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B648u;
    // 0x13b64c: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B360u, 0x13B648u, 0x13B650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B650u;
label_13b650:
    // 0x13b650: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x13b650u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13b654: 0x9243014d  lbu         $v1, 0x14D($s2)
    ctx->pc = 0x13b654u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 333)));
    // 0x13b658: 0x9202014d  lbu         $v0, 0x14D($s0)
    ctx->pc = 0x13b658u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 333)));
    // 0x13b65c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13B65Cu;
    {
        const bool branch_taken_0x13b65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13b65c) {
            ctx->pc = 0x13B660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B65Cu;
            // 0x13b660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B690u;
            goto label_13b690;
        }
    }
    ctx->pc = 0x13B664u;
    // 0x13b664: 0x327200ff  andi        $s2, $s3, 0xFF
    ctx->pc = 0x13b664u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x13b668: 0x2604014c  addiu       $a0, $s0, 0x14C
    ctx->pc = 0x13b668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 332));
    // 0x13b66c: 0xc0c449c  jal         func_311270
    ctx->pc = 0x13B66Cu;
    SET_GPR_U32(ctx, 31, 0x13B674u);
    ctx->pc = 0x13B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B66Cu;
    // 0x13b670: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311270u, 0x13B66Cu, 0x13B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B674u;
label_13b674:
    // 0x13b674: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x13b674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13b678: 0xc0c449c  jal         func_311270
    ctx->pc = 0x13B678u;
    SET_GPR_U32(ctx, 31, 0x13B680u);
    ctx->pc = 0x13B67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B678u;
    // 0x13b67c: 0x2604016c  addiu       $a0, $s0, 0x16C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311270u, 0x13B678u, 0x13B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B680u;
label_13b680:
    // 0x13b680: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x13b680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x13b684: 0xc0c449c  jal         func_311270
    ctx->pc = 0x13B684u;
    SET_GPR_U32(ctx, 31, 0x13B68Cu);
    ctx->pc = 0x13B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B684u;
    // 0x13b688: 0x2604018c  addiu       $a0, $s0, 0x18C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 396));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311270u, 0x13B684u, 0x13B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B68Cu;
label_13b68c:
    // 0x13b68c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13b68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13b690:
    // 0x13b690: 0xc04ec04  jal         func_13B010
    ctx->pc = 0x13B690u;
    SET_GPR_U32(ctx, 31, 0x13B698u);
    ctx->pc = 0x13B694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B690u;
    // 0x13b694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B010u, 0x13B690u, 0x13B698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B698u;
label_13b698:
    // 0x13b698: 0xa2110150  sb          $s1, 0x150($s0)
    ctx->pc = 0x13b698u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 336), (uint8_t)GPR_U32(ctx, 17));
    // 0x13b69c: 0x327200ff  andi        $s2, $s3, 0xFF
    ctx->pc = 0x13b69cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x13b6a0: 0xa211014d  sb          $s1, 0x14D($s0)
    ctx->pc = 0x13b6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 333), (uint8_t)GPR_U32(ctx, 17));
    // 0x13b6a4: 0x2604014c  addiu       $a0, $s0, 0x14C
    ctx->pc = 0x13b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 332));
    // 0x13b6a8: 0xa2110170  sb          $s1, 0x170($s0)
    ctx->pc = 0x13b6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 17));
    // 0x13b6ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13b6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b6b0: 0xa211016d  sb          $s1, 0x16D($s0)
    ctx->pc = 0x13b6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 365), (uint8_t)GPR_U32(ctx, 17));
    // 0x13b6b4: 0xa2110190  sb          $s1, 0x190($s0)
    ctx->pc = 0x13b6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 400), (uint8_t)GPR_U32(ctx, 17));
    // 0x13b6b8: 0xa211018d  sb          $s1, 0x18D($s0)
    ctx->pc = 0x13b6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 397), (uint8_t)GPR_U32(ctx, 17));
    // 0x13b6bc: 0xa2020151  sb          $v0, 0x151($s0)
    ctx->pc = 0x13b6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 337), (uint8_t)GPR_U32(ctx, 2));
    // 0x13b6c0: 0xa202014e  sb          $v0, 0x14E($s0)
    ctx->pc = 0x13b6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 334), (uint8_t)GPR_U32(ctx, 2));
    // 0x13b6c4: 0xa2020171  sb          $v0, 0x171($s0)
    ctx->pc = 0x13b6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 369), (uint8_t)GPR_U32(ctx, 2));
    // 0x13b6c8: 0xa202016e  sb          $v0, 0x16E($s0)
    ctx->pc = 0x13b6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 366), (uint8_t)GPR_U32(ctx, 2));
    // 0x13b6cc: 0xa2020191  sb          $v0, 0x191($s0)
    ctx->pc = 0x13b6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 401), (uint8_t)GPR_U32(ctx, 2));
    // 0x13b6d0: 0xc0c8504  jal         func_321410
    ctx->pc = 0x13B6D0u;
    SET_GPR_U32(ctx, 31, 0x13B6D8u);
    ctx->pc = 0x13B6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B6D0u;
    // 0x13b6d4: 0xa202018e  sb          $v0, 0x18E($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 398), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321410u, 0x13B6D0u, 0x13B6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6D8u;
label_13b6d8:
    // 0x13b6d8: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x13b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13b6dc: 0xc0c8504  jal         func_321410
    ctx->pc = 0x13B6DCu;
    SET_GPR_U32(ctx, 31, 0x13B6E4u);
    ctx->pc = 0x13B6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B6DCu;
    // 0x13b6e0: 0x2604016c  addiu       $a0, $s0, 0x16C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321410u, 0x13B6DCu, 0x13B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6E4u;
label_13b6e4:
    // 0x13b6e4: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x13b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x13b6e8: 0xc0c8504  jal         func_321410
    ctx->pc = 0x13B6E8u;
    SET_GPR_U32(ctx, 31, 0x13B6F0u);
    ctx->pc = 0x13B6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B6E8u;
    // 0x13b6ec: 0x2604018c  addiu       $a0, $s0, 0x18C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 396));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321410u, 0x13B6E8u, 0x13B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6F0u;
label_13b6f0:
    // 0x13b6f0: 0xc052c90  jal         func_14B240
    ctx->pc = 0x13B6F0u;
    SET_GPR_U32(ctx, 31, 0x13B6F8u);
    ctx->pc = 0x14B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B240u, 0x13B6F0u, 0x13B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6F8u;
label_13b6f8:
    // 0x13b6f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13b6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b6fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13b6fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13b700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b70c: 0x3e00008  jr          $ra
    ctx->pc = 0x13B70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B70Cu;
        // 0x13b710: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B714u;
    // 0x13b714: 0x0  nop
    ctx->pc = 0x13b714u;
    // NOP
    // 0x13b718: 0x0  nop
    ctx->pc = 0x13b718u;
    // NOP
    // 0x13b71c: 0x0  nop
    ctx->pc = 0x13b71cu;
    // NOP
}
