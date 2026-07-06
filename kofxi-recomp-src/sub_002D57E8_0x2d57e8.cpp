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

// Function: sub_002D57E8
// Address: 0x2d57e8 - 0x2d58c8
void sub_002D57E8_0x2d57e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D57E8_0x2d57e8");
#endif

    switch (ctx->pc) {
        case 0x2d5834u: goto label_2d5834;
        case 0x2d5844u: goto label_2d5844;
        default: break;
    }

    ctx->pc = 0x2d57e8u;

    // 0x2d57e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d57e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d57ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d57ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d57f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d57f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d57f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d57f8: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x2d57f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d57fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d5800: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d5800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5804: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d5804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d5808: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d5808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d580c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d580cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d5810: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d5810u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5814: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d5814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d5818: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2d5818u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d581c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d581cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2d5820: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2d5820u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5824: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d5824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2d5828: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d5828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d582c: 0xc0b22ec  jal         func_2C8BB0
    ctx->pc = 0x2D582Cu;
    SET_GPR_U32(ctx, 31, 0x2D5834u);
    ctx->pc = 0x2D5830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D582Cu;
    // 0x2d5830: 0x160b82d  daddu       $s7, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8BB0u, 0x2D582Cu, 0x2D5834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5834u;
label_2d5834:
    // 0x2d5834: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D5834u;
    {
        const bool branch_taken_0x2d5834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5834u;
        // 0x2d5838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5834) {
            ctx->pc = 0x2D5898u;
            goto label_2d5898;
        }
    }
    ctx->pc = 0x2D583Cu;
    // 0x2d583c: 0xc0b22fa  jal         func_2C8BE8
    ctx->pc = 0x2D583Cu;
    SET_GPR_U32(ctx, 31, 0x2D5844u);
    ctx->pc = 0x2C8BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8BE8u, 0x2D583Cu, 0x2D5844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5844u;
label_2d5844:
    // 0x2d5844: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D5844u;
    {
        const bool branch_taken_0x2d5844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5844) {
            ctx->pc = 0x2D5848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5844u;
            // 0x2d5848: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D589Cu;
            goto label_2d589c;
        }
    }
    ctx->pc = 0x2D584Cu;
    // 0x2d584c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d584cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5850: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5854: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d5854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5858: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d5858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d585c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d585cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5860: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d5860u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5864: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2d5864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5868: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d5868u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d586c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2d586cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5870: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d5870u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5874: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2d5874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5878: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d5878u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d587c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2d587cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d5880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5884: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x2d5884u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5888: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d5888u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d588c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d588cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5890: 0x80b1ba8  j           func_2C6EA0
    ctx->pc = 0x2D5890u;
    ctx->pc = 0x2D5894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5890u;
    // 0x2d5894: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6EA0u, 0x2D5890u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2D5898u;
label_2d5898:
    // 0x2d5898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d589c:
    // 0x2d589c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d589cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d58a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d58a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d58a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d58a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d58a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d58a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d58ac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d58acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d58b0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d58b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d58b4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d58b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d58b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d58b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d58bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D58BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D58C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D58BCu;
        // 0x2d58c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D58BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D58C4u;
    // 0x2d58c4: 0x0  nop
    ctx->pc = 0x2d58c4u;
    // NOP
    if (ctx->pc == 0x2d58c4u) { ctx->pc = 0x2d58c8u; }
}
