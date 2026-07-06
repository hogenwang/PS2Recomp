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

// Function: sub_002CF7E8
// Address: 0x2cf7e8 - 0x2cf860
void sub_002CF7E8_0x2cf7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF7E8_0x2cf7e8");
#endif

    switch (ctx->pc) {
        case 0x2cf810u: goto label_2cf810;
        default: break;
    }

    ctx->pc = 0x2cf7e8u;

    // 0x2cf7e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf7ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cf7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cf7f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2cf7f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf7f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cf7f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cf7f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf7fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cf7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf804: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2cf804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2cf808: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2CF808u;
    SET_GPR_U32(ctx, 31, 0x2CF810u);
    ctx->pc = 0x2CF80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF808u;
    // 0x2cf80c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82E0u, 0x2CF808u, 0x2CF810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF810u;
label_2cf810:
    // 0x2cf810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cf810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf814: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2cf814u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf818: 0x24020206  addiu       $v0, $zero, 0x206
    ctx->pc = 0x2cf818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    // 0x2cf81c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cf81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf820: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cf820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf824: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CF824u;
    {
        const bool branch_taken_0x2cf824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF824u;
        // 0x2cf828: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf824) {
            ctx->pc = 0x2CF848u;
            goto label_2cf848;
        }
    }
    ctx->pc = 0x2CF82Cu;
    // 0x2cf82c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf82cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf830: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf830u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf834: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cf834u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf838: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cf838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cf83c: 0x80b3e2e  j           func_2CF8B8
    ctx->pc = 0x2CF83Cu;
    ctx->pc = 0x2CF840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF83Cu;
    // 0x2cf840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF8B8u;
    sub_002CF8B8_0x2cf8b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2CF844u;
    // 0x2cf844: 0x0  nop
    ctx->pc = 0x2cf844u;
    // NOP
label_2cf848:
    // 0x2cf848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf84c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf84cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf850: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cf850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf854: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cf854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cf858: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF858u;
        // 0x2cf85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF860u;
}
