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

// Function: sub_00127520
// Address: 0x127520 - 0x127628
void sub_00127520_0x127520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127520_0x127520");
#endif

    switch (ctx->pc) {
        case 0x127554u: goto label_127554;
        case 0x1275c0u: goto label_1275c0;
        case 0x1275dcu: goto label_1275dc;
        case 0x1275e8u: goto label_1275e8;
        default: break;
    }

    ctx->pc = 0x127520u;

    // 0x127520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x127520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x127524: 0x24aa0014  addiu       $t2, $a1, 0x14
    ctx->pc = 0x127524u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x127528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x127528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12752c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12752cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127530: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x127530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x127534: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x127534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x127538: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x127538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12753c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12753cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127540: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x127540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127544: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x127544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x127548: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x127548u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12754c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x127550: 0x8cb20010  lw          $s2, 0x10($a1)
    ctx->pc = 0x127550u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_127554:
    // 0x127554: 0x8d4d0000  lw          $t5, 0x0($t2)
    ctx->pc = 0x127554u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x127558: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x127558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x12755c: 0x132582a  slt         $t3, $t1, $s2
    ctx->pc = 0x12755cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x127560: 0x31afffff  andi        $t7, $t5, 0xFFFF
    ctx->pc = 0x127560u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x127564: 0x1e67818  mult        $t7, $t7, $a2
    ctx->pc = 0x127564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x127568: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x127568u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x12756c: 0x71a66818  mult1       $t5, $t5, $a2
    ctx->pc = 0x12756cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x127570: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x127570u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x127574: 0xf6402  srl         $t4, $t7, 16
    ctx->pc = 0x127574u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x127578: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x127578u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x12757c: 0x31efffff  andi        $t7, $t7, 0xFFFF
    ctx->pc = 0x12757cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x127580: 0xd7400  sll         $t6, $t5, 16
    ctx->pc = 0x127580u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x127584: 0xd8c02  srl         $s1, $t5, 16
    ctx->pc = 0x127584u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x127588: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x127588u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12758c: 0xad4e0000  sw          $t6, 0x0($t2)
    ctx->pc = 0x12758cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 14));
    // 0x127590: 0x1560fff0  bnez        $t3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x127590u;
    {
        const bool branch_taken_0x127590 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x127594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127590u;
        // 0x127594: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127590) {
            ctx->pc = 0x127554u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127554;
        }
    }
    ctx->pc = 0x127598u;
    // 0x127598: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x127598u;
    {
        const bool branch_taken_0x127598 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127598u;
        // 0x12759c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127598) {
            ctx->pc = 0x127604u;
            goto label_127604;
        }
    }
    ctx->pc = 0x1275A0u;
    // 0x1275a0: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1275a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1275a4: 0x24f782a  slt         $t7, $s2, $t7
    ctx->pc = 0x1275a4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1275a8: 0x15e00011  bnez        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x1275A8u;
    {
        const bool branch_taken_0x1275a8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1275ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275A8u;
        // 0x1275ac: 0x127880  sll         $t7, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275a8) {
            ctx->pc = 0x1275F0u;
            goto label_1275f0;
        }
    }
    ctx->pc = 0x1275B0u;
    // 0x1275b0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1275b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1275b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1275b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275b8: 0xc049d12  jal         func_127448
    ctx->pc = 0x1275B8u;
    SET_GPR_U32(ctx, 31, 0x1275C0u);
    ctx->pc = 0x1275BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1275B8u;
    // 0x1275bc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127448u, 0x1275B8u, 0x1275C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1275C0u;
label_1275c0:
    // 0x1275c0: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x1275c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1275c4: 0x2665000c  addiu       $a1, $s3, 0xC
    ctx->pc = 0x1275c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1275c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1275c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275cc: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1275ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1275d0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1275d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1275d4: 0xc049c48  jal         func_127120
    ctx->pc = 0x1275D4u;
    SET_GPR_U32(ctx, 31, 0x1275DCu);
    ctx->pc = 0x1275D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1275D4u;
    // 0x1275d8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1275D4u, 0x1275DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1275DCu;
label_1275dc:
    // 0x1275dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1275dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275e0: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x1275E0u;
    SET_GPR_U32(ctx, 31, 0x1275E8u);
    ctx->pc = 0x1275E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1275E0u;
    // 0x1275e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x1275E0u, 0x1275E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1275E8u;
label_1275e8:
    // 0x1275e8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1275e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275ec: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x1275ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1275f0:
    // 0x1275f0: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x1275f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x1275f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1275f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1275f8: 0xadf10014  sw          $s1, 0x14($t7)
    ctx->pc = 0x1275f8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 17));
    // 0x1275fc: 0xae720010  sw          $s2, 0x10($s3)
    ctx->pc = 0x1275fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 18));
    // 0x127600: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x127600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_127604:
    // 0x127604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127608: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12760c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12760cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127610: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x127610u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127614: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x127614u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127618: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x127618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12761c: 0x3e00008  jr          $ra
    ctx->pc = 0x12761Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12761Cu;
        // 0x127620: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12761Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127624u;
    // 0x127624: 0x0  nop
    ctx->pc = 0x127624u;
    // NOP
    if (ctx->pc == 0x127624u) { ctx->pc = 0x127628u; }
}
