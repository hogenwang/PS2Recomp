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

// Function: sub_0020E820
// Address: 0x20e820 - 0x20e910
void sub_0020E820_0x20e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E820_0x20e820");
#endif

    switch (ctx->pc) {
        case 0x20e87cu: goto label_20e87c;
        case 0x20e8c8u: goto label_20e8c8;
        case 0x20e8f4u: goto label_20e8f4;
        default: break;
    }

    ctx->pc = 0x20e820u;

    // 0x20e820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20e824: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20e824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20e828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20e828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20e82c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20e82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20e830: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20e830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e834: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20e834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e838: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x20E838u;
    {
        const bool branch_taken_0x20e838 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E838u;
        // 0x20e83c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e838) {
            ctx->pc = 0x20E84Cu;
            goto label_20e84c;
        }
    }
    ctx->pc = 0x20E840u;
    // 0x20e840: 0x96260010  lhu         $a2, 0x10($s1)
    ctx->pc = 0x20e840u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x20e844: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20E844u;
    {
        const bool branch_taken_0x20e844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E844u;
        // 0x20e848: 0x96300000  lhu         $s0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e844) {
            ctx->pc = 0x20E854u;
            goto label_20e854;
        }
    }
    ctx->pc = 0x20E84Cu;
label_20e84c:
    // 0x20e84c: 0x96300002  lhu         $s0, 0x2($s1)
    ctx->pc = 0x20e84cu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x20e850: 0x96260012  lhu         $a2, 0x12($s1)
    ctx->pc = 0x20e850u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_20e854:
    // 0x20e854: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x20e854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x20e858: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x20e858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x20e85c: 0x50830026  beql        $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x20E85Cu;
    {
        const bool branch_taken_0x20e85c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20e85c) {
            ctx->pc = 0x20E860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E85Cu;
            // 0x20e860: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E8F8u;
            goto label_20e8f8;
        }
    }
    ctx->pc = 0x20E864u;
    // 0x20e864: 0x9624000c  lhu         $a0, 0xC($s1)
    ctx->pc = 0x20e864u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x20e868: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x20e868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x20e86c: 0x9625000e  lhu         $a1, 0xE($s1)
    ctx->pc = 0x20e86cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x20e870: 0x27a80044  addiu       $t0, $sp, 0x44
    ctx->pc = 0x20e870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x20e874: 0xc082944  jal         func_20A510
    ctx->pc = 0x20E874u;
    SET_GPR_U32(ctx, 31, 0x20E87Cu);
    ctx->pc = 0x20E878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E874u;
    // 0x20e878: 0x27a9004c  addiu       $t1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A510u, 0x20E874u, 0x20E87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E87Cu;
label_20e87c:
    // 0x20e87c: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x20e87cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x20e880: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x20E880u;
    {
        const bool branch_taken_0x20e880 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e880) {
            ctx->pc = 0x20E8F4u;
            goto label_20e8f4;
        }
    }
    ctx->pc = 0x20E888u;
    // 0x20e888: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x20e888u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20e88c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20e890: 0x96250006  lhu         $a1, 0x6($s1)
    ctx->pc = 0x20e890u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x20e894: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x20e894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x20e898: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20e898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20e89c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x20e89cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20e8a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20E8A0u;
    {
        const bool branch_taken_0x20e8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8A0u;
        // 0x20e8a4: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8a0) {
            ctx->pc = 0x20E8D0u;
            goto label_20e8d0;
        }
    }
    ctx->pc = 0x20E8A8u;
    // 0x20e8a8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x20e8a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20e8ac: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x20e8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x20e8b0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20e8b4: 0x9628000a  lhu         $t0, 0xA($s1)
    ctx->pc = 0x20e8b4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x20e8b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e8bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20e8c0: 0xc082df4  jal         func_20B7D0
    ctx->pc = 0x20E8C0u;
    SET_GPR_U32(ctx, 31, 0x20E8C8u);
    ctx->pc = 0x20E8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E8C0u;
    // 0x20e8c4: 0x2424821  addu        $t1, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B7D0u, 0x20E8C0u, 0x20E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E8C8u;
label_20e8c8:
    // 0x20e8c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20E8C8u;
    {
        const bool branch_taken_0x20e8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e8c8) {
            ctx->pc = 0x20E8F4u;
            goto label_20e8f4;
        }
    }
    ctx->pc = 0x20E8D0u;
label_20e8d0:
    // 0x20e8d0: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x20e8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x20e8d4: 0x9628000a  lhu         $t0, 0xA($s1)
    ctx->pc = 0x20e8d4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x20e8d8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20e8dc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x20e8dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e8e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e8e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20e8e8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x20e8e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e8ec: 0xc082ea4  jal         func_20BA90
    ctx->pc = 0x20E8ECu;
    SET_GPR_U32(ctx, 31, 0x20E8F4u);
    ctx->pc = 0x20E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E8ECu;
    // 0x20e8f0: 0x2424021  addu        $t0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BA90u, 0x20E8ECu, 0x20E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E8F4u;
label_20e8f4:
    // 0x20e8f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20e8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20e8f8:
    // 0x20e8f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20e8f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e8fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20e8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e904: 0x3e00008  jr          $ra
    ctx->pc = 0x20E904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E904u;
        // 0x20e908: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E90Cu;
    // 0x20e90c: 0x0  nop
    ctx->pc = 0x20e90cu;
    // NOP
}
