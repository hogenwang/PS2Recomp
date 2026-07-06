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

// Function: sub_002D5758
// Address: 0x2d5758 - 0x2d57e8
void sub_002D5758_0x2d5758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5758_0x2d5758");
#endif

    switch (ctx->pc) {
        case 0x2d5784u: goto label_2d5784;
        case 0x2d5794u: goto label_2d5794;
        default: break;
    }

    ctx->pc = 0x2d5758u;

    // 0x2d5758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d575c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d575cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d5760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d5760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5764: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d5764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d5768: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d5768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d576c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d576cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d5770: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d5770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5774: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d5774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d5778: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d5778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d577c: 0xc0b22ec  jal         func_2C8BB0
    ctx->pc = 0x2D577Cu;
    SET_GPR_U32(ctx, 31, 0x2D5784u);
    ctx->pc = 0x2D5780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D577Cu;
    // 0x2d5780: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8BB0u, 0x2D577Cu, 0x2D5784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5784u;
label_2d5784:
    // 0x2d5784: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D5784u;
    {
        const bool branch_taken_0x2d5784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5784u;
        // 0x2d5788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5784) {
            ctx->pc = 0x2D57C8u;
            goto label_2d57c8;
        }
    }
    ctx->pc = 0x2D578Cu;
    // 0x2d578c: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x2D578Cu;
    SET_GPR_U32(ctx, 31, 0x2D5794u);
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x2D578Cu, 0x2D5794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5794u;
label_2d5794:
    // 0x2d5794: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2D5794u;
    {
        const bool branch_taken_0x2d5794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5794) {
            ctx->pc = 0x2D5798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5794u;
            // 0x2d5798: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D57CCu;
            goto label_2d57cc;
        }
    }
    ctx->pc = 0x2D579Cu;
    // 0x2d579c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d579cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d57a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d57a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d57a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d57a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d57ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d57acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d57b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d57b4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d57b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d57b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d57bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d57bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d57c0: 0x80b1b4a  j           func_2C6D28
    ctx->pc = 0x2D57C0u;
    ctx->pc = 0x2D57C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D57C0u;
    // 0x2d57c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6D28u, 0x2D57C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2D57C8u;
label_2d57c8:
    // 0x2d57c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d57c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d57cc:
    // 0x2d57cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d57ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d57d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d57d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d57d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d57d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d57d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d57d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d57dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D57DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D57DCu;
        // 0x2d57e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D57DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D57E4u;
    // 0x2d57e4: 0x0  nop
    ctx->pc = 0x2d57e4u;
    // NOP
}
