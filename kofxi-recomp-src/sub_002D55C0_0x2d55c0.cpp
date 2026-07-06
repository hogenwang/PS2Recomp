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

// Function: sub_002D55C0
// Address: 0x2d55c0 - 0x2d56a0
void sub_002D55C0_0x2d55c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D55C0_0x2d55c0");
#endif

    switch (ctx->pc) {
        case 0x2d560cu: goto label_2d560c;
        case 0x2d561cu: goto label_2d561c;
        default: break;
    }

    ctx->pc = 0x2d55c0u;

    // 0x2d55c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d55c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d55c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d55c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d55c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d55c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d55ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d55d0: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x2d55d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d55d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d55d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d55d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d55dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d55e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d55e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d55e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d55e8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d55e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55ec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d55ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d55f0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2d55f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55f4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d55f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2d55f8: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2d55f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55fc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d55fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2d5600: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d5600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d5604: 0xc0b22ec  jal         func_2C8BB0
    ctx->pc = 0x2D5604u;
    SET_GPR_U32(ctx, 31, 0x2D560Cu);
    ctx->pc = 0x2D5608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5604u;
    // 0x2d5608: 0x160b82d  daddu       $s7, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8BB0u, 0x2D5604u, 0x2D560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D560Cu;
label_2d560c:
    // 0x2d560c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D560Cu;
    {
        const bool branch_taken_0x2d560c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D560Cu;
        // 0x2d5610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d560c) {
            ctx->pc = 0x2D5670u;
            goto label_2d5670;
        }
    }
    ctx->pc = 0x2D5614u;
    // 0x2d5614: 0xc0b22fa  jal         func_2C8BE8
    ctx->pc = 0x2D5614u;
    SET_GPR_U32(ctx, 31, 0x2D561Cu);
    ctx->pc = 0x2C8BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8BE8u, 0x2D5614u, 0x2D561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D561Cu;
label_2d561c:
    // 0x2d561c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D561Cu;
    {
        const bool branch_taken_0x2d561c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d561c) {
            ctx->pc = 0x2D5620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D561Cu;
            // 0x2d5620: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5674u;
            goto label_2d5674;
        }
    }
    ctx->pc = 0x2D5624u;
    // 0x2d5624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d562c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d562cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5630: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d5630u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5634: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d5634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5638: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d5638u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d563c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2d563cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5640: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d5640u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5644: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2d5644u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5648: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d5648u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d564c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2d564cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5650: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d5650u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5654: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2d5654u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5658: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d5658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d565c: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x2d565cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5660: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d5660u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d5664: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d5664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5668: 0x80b1b7a  j           func_2C6DE8
    ctx->pc = 0x2D5668u;
    ctx->pc = 0x2D566Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5668u;
    // 0x2d566c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6DE8u, 0x2D5668u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2D5670u;
label_2d5670:
    // 0x2d5670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5674:
    // 0x2d5674: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d5674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5678: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d5678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d567c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d567cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5680: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d5680u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5684: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d5684u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5688: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d5688u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d568c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d568cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d5690: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d5690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5694: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5694u;
        // 0x2d5698: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D569Cu;
    // 0x2d569c: 0x0  nop
    ctx->pc = 0x2d569cu;
    // NOP
    if (ctx->pc == 0x2d569cu) { ctx->pc = 0x2d56a0u; }
}
