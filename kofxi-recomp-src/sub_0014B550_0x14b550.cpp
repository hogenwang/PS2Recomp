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

// Function: sub_0014B550
// Address: 0x14b550 - 0x14b730
void sub_0014B550_0x14b550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B550_0x14b550");
#endif

    switch (ctx->pc) {
        case 0x14b594u: goto label_14b594;
        case 0x14b5acu: goto label_14b5ac;
        case 0x14b5f8u: goto label_14b5f8;
        case 0x14b644u: goto label_14b644;
        case 0x14b66cu: goto label_14b66c;
        case 0x14b694u: goto label_14b694;
        case 0x14b6bcu: goto label_14b6bc;
        default: break;
    }

    ctx->pc = 0x14b550u;

    // 0x14b550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14b550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14b554: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14b558: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14b558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14b55c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14b55cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b560: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14b560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14b564: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x14b564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x14b568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14b568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14b56c: 0x3053003f  andi        $s3, $v0, 0x3F
    ctx->pc = 0x14b56cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x14b570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b574: 0x2a620030  slti        $v0, $s3, 0x30
    ctx->pc = 0x14b574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x14b578: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14b578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b57c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B57Cu;
    {
        const bool branch_taken_0x14b57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B57Cu;
        // 0x14b580: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b57c) {
            ctx->pc = 0x14B598u;
            goto label_14b598;
        }
    }
    ctx->pc = 0x14B584u;
    // 0x14b584: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14b584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14b588: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14b588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b58c: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14B58Cu;
    SET_GPR_U32(ctx, 31, 0x14B594u);
    ctx->pc = 0x14B590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B58Cu;
    // 0x14b590: 0x2484ce00  addiu       $a0, $a0, -0x3200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14B58Cu, 0x14B594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B594u;
label_14b594:
    // 0x14b594: 0x64130030  daddiu      $s3, $zero, 0x30
    ctx->pc = 0x14b594u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)48);
label_14b598:
    // 0x14b598: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14b598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x14b59c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5a0: 0x3271ffff  andi        $s1, $s3, 0xFFFF
    ctx->pc = 0x14b5a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x14b5a4: 0x24845d80  addiu       $a0, $a0, 0x5D80
    ctx->pc = 0x14b5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23936));
    // 0x14b5a8: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x14b5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_14b5ac:
    // 0x14b5ac: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x14b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14b5b0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x14b5b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b5b4: 0x54510012  bnel        $v0, $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14B5B4u;
    {
        const bool branch_taken_0x14b5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x14b5b4) {
            ctx->pc = 0x14B5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B5B4u;
            // 0x14b5b8: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B600u;
            goto label_14b600;
        }
    }
    ctx->pc = 0x14B5BCu;
    // 0x14b5bc: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x14b5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x14b5c0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x14b5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x14b5c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x14b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x14b5c8: 0x24c65d50  addiu       $a2, $a2, 0x5D50
    ctx->pc = 0x14b5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23888));
    // 0x14b5cc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14b5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14b5d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14b5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14b5d4: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x14b5d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b5d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x14b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14b5dc: 0xa0930000  sb          $s3, 0x0($a0)
    ctx->pc = 0x14b5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x14b5e0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x14b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14b5e4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14b5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14b5e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14b5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5ec: 0x2484ce50  addiu       $a0, $a0, -0x31B0
    ctx->pc = 0x14b5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954576));
    // 0x14b5f0: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14B5F0u;
    SET_GPR_U32(ctx, 31, 0x14B5F8u);
    ctx->pc = 0x14B5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5F0u;
    // 0x14b5f4: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14B5F0u, 0x14B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5F8u;
label_14b5f8:
    // 0x14b5f8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x14B5F8u;
    {
        const bool branch_taken_0x14b5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B5F8u;
        // 0x14b5fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b5f8) {
            ctx->pc = 0x14B70Cu;
            goto label_14b70c;
        }
    }
    ctx->pc = 0x14B600u;
label_14b600:
    // 0x14b600: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x14b600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14b604: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x14b604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14b608: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x14B608u;
    {
        const bool branch_taken_0x14b608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b608) {
            ctx->pc = 0x14B60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B608u;
            // 0x14b60c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B5ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14b5ac;
        }
    }
    ctx->pc = 0x14B610u;
    // 0x14b610: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14b610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14b614: 0x8c425d08  lw          $v0, 0x5D08($v0)
    ctx->pc = 0x14b614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23816)));
    // 0x14b618: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x14B618u;
    {
        const bool branch_taken_0x14b618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b618) {
            ctx->pc = 0x14B61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B618u;
            // 0x14b61c: 0x3262ffff  andi        $v0, $s3, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B674u;
            goto label_14b674;
        }
    }
    ctx->pc = 0x14B620u;
    // 0x14b620: 0x3270ffff  andi        $s0, $s3, 0xFFFF
    ctx->pc = 0x14b620u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x14b624: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14b624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14b628: 0x2463e110  addiu       $v1, $v1, -0x1EF0
    ctx->pc = 0x14b628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959376));
    // 0x14b62c: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x14b62cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14b630: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14b630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14b634: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b638: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x14b638u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b63c: 0xc052b2c  jal         func_14ACB0
    ctx->pc = 0x14B63Cu;
    SET_GPR_U32(ctx, 31, 0x14B644u);
    ctx->pc = 0x14B640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B63Cu;
    // 0x14b640: 0x8c455d48  lw          $a1, 0x5D48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23880)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACB0u, 0x14B63Cu, 0x14B644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B644u;
label_14b644:
    // 0x14b644: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x14b644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x14b648: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14b648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14b64c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14b650: 0x24422090  addiu       $v0, $v0, 0x2090
    ctx->pc = 0x14b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8336));
    // 0x14b654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14b654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b658: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x14b658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x14b65c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x14b65cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b660: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14b660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b664: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14B664u;
    SET_GPR_U32(ctx, 31, 0x14B66Cu);
    ctx->pc = 0x14B668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B664u;
    // 0x14b668: 0x2484ce20  addiu       $a0, $a0, -0x31E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14B664u, 0x14B66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B66Cu;
label_14b66c:
    // 0x14b66c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x14B66Cu;
    {
        const bool branch_taken_0x14b66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B66Cu;
        // 0x14b670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b66c) {
            ctx->pc = 0x14B70Cu;
            goto label_14b70c;
        }
    }
    ctx->pc = 0x14B674u;
label_14b674:
    // 0x14b674: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14b674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14b678: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x14b678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14b67c: 0x2463e110  addiu       $v1, $v1, -0x1EF0
    ctx->pc = 0x14b67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959376));
    // 0x14b680: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14b680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14b684: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b688: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x14b688u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b68c: 0xc052b48  jal         func_14AD20
    ctx->pc = 0x14B68Cu;
    SET_GPR_U32(ctx, 31, 0x14B694u);
    ctx->pc = 0x14B690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B68Cu;
    // 0x14b690: 0x8c455d48  lw          $a1, 0x5D48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23880)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AD20u, 0x14B68Cu, 0x14B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B694u;
label_14b694:
    // 0x14b694: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B694u;
    {
        const bool branch_taken_0x14b694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b694) {
            ctx->pc = 0x14B6A4u;
            goto label_14b6a4;
        }
    }
    ctx->pc = 0x14B69Cu;
    // 0x14b69c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x14B69Cu;
    {
        const bool branch_taken_0x14b69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B69Cu;
        // 0x14b6a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b69c) {
            ctx->pc = 0x14B70Cu;
            goto label_14b70c;
        }
    }
    ctx->pc = 0x14B6A4u;
label_14b6a4:
    // 0x14b6a4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14b6a8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14b6ac: 0x8c425d00  lw          $v0, 0x5D00($v0)
    ctx->pc = 0x14b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23808)));
    // 0x14b6b0: 0x2484ce38  addiu       $a0, $a0, -0x31C8
    ctx->pc = 0x14b6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954552));
    // 0x14b6b4: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14B6B4u;
    SET_GPR_U32(ctx, 31, 0x14B6BCu);
    ctx->pc = 0x14B6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B6B4u;
    // 0x14b6b8: 0x28ac0  sll         $s1, $v0, 11 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14B6B4u, 0x14B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B6BCu;
label_14b6bc:
    // 0x14b6bc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14b6c0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x14b6c4: 0x8c465d48  lw          $a2, 0x5D48($v0)
    ctx->pc = 0x14b6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23880)));
    // 0x14b6c8: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x14b6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x14b6cc: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x14b6ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x14b6d0: 0x24845d80  addiu       $a0, $a0, 0x5D80
    ctx->pc = 0x14b6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23936));
    // 0x14b6d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14b6d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x14b6d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x14b6dc: 0xa0930000  sb          $s3, 0x0($a0)
    ctx->pc = 0x14b6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x14b6e0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14b6e4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14b6e8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14b6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x14b6ec: 0xac435d48  sw          $v1, 0x5D48($v0)
    ctx->pc = 0x14b6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23880), GPR_U32(ctx, 3));
    // 0x14b6f0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x14b6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14b6f4: 0x24845d50  addiu       $a0, $a0, 0x5D50
    ctx->pc = 0x14b6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23888));
    // 0x14b6f8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x14b6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x14b6fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14b6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14b700: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x14b700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x14b704: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x14b704u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x14b708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14b708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b70c:
    // 0x14b70c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14b70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b710: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14b710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b714: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14b714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14b718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b71c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b71cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b720: 0x3e00008  jr          $ra
    ctx->pc = 0x14B720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B720u;
        // 0x14b724: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B728u;
    // 0x14b728: 0x0  nop
    ctx->pc = 0x14b728u;
    // NOP
    // 0x14b72c: 0x0  nop
    ctx->pc = 0x14b72cu;
    // NOP
    if (ctx->pc == 0x14b72cu) { ctx->pc = 0x14b730u; }
}
