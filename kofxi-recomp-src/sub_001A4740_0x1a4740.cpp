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

// Function: sub_001A4740
// Address: 0x1a4740 - 0x1a47c0
void sub_001A4740_0x1a4740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4740_0x1a4740");
#endif

    switch (ctx->pc) {
        case 0x1a4764u: goto label_1a4764;
        case 0x1a4788u: goto label_1a4788;
        case 0x1a47a0u: goto label_1a47a0;
        case 0x1a47b0u: goto label_1a47b0;
        default: break;
    }

    ctx->pc = 0x1a4740u;

    // 0x1a4740: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1a4740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1a4744: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a4744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4748: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1a4748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1a474c: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A474Cu;
    {
        const bool branch_taken_0x1a474c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A474Cu;
        // 0x1a4750: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a474c) {
            ctx->pc = 0x1A476Cu;
            goto label_1a476c;
        }
    }
    ctx->pc = 0x1A4754u;
    // 0x1a4754: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a4754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a4758: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a4758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a475c: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1A475Cu;
    SET_GPR_U32(ctx, 31, 0x1A4764u);
    ctx->pc = 0x1A4760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A475Cu;
    // 0x1a4760: 0x24a568b8  addiu       $a1, $a1, 0x68B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1A475Cu, 0x1A4764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4764u;
label_1a4764:
    // 0x1a4764: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A4764u;
    {
        const bool branch_taken_0x1a4764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4764) {
            ctx->pc = 0x1A47A0u;
            goto label_1a47a0;
        }
    }
    ctx->pc = 0x1A476Cu;
label_1a476c:
    // 0x1a476c: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x1a476cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x1a4770: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4770u;
    {
        const bool branch_taken_0x1a4770 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a4770) {
            ctx->pc = 0x1A4790u;
            goto label_1a4790;
        }
    }
    ctx->pc = 0x1A4778u;
    // 0x1a4778: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a4778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a477c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a4780: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1A4780u;
    SET_GPR_U32(ctx, 31, 0x1A4788u);
    ctx->pc = 0x1A4784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4780u;
    // 0x1a4784: 0x24a568c8  addiu       $a1, $a1, 0x68C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1A4780u, 0x1A4788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4788u;
label_1a4788:
    // 0x1a4788: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4788u;
    {
        const bool branch_taken_0x1a4788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4788) {
            ctx->pc = 0x1A47A0u;
            goto label_1a47a0;
        }
    }
    ctx->pc = 0x1A4790u;
label_1a4790:
    // 0x1a4790: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a4790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a4794: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a4794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a4798: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1A4798u;
    SET_GPR_U32(ctx, 31, 0x1A47A0u);
    ctx->pc = 0x1A479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4798u;
    // 0x1a479c: 0x24a568d8  addiu       $a1, $a1, 0x68D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1A4798u, 0x1A47A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A47A0u;
label_1a47a0:
    // 0x1a47a0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a47a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a47a4: 0x8c45b7d8  lw          $a1, -0x4828($v0)
    ctx->pc = 0x1a47a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948824)));
    // 0x1a47a8: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x1A47A8u;
    SET_GPR_U32(ctx, 31, 0x1A47B0u);
    ctx->pc = 0x1A47ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A47A8u;
    // 0x1a47ac: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB0u, 0x1A47A8u, 0x1A47B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A47B0u;
label_1a47b0:
    // 0x1a47b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a47b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a47b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A47B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A47B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47B4u;
        // 0x1a47b8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A47B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A47BCu;
    // 0x1a47bc: 0x0  nop
    ctx->pc = 0x1a47bcu;
    // NOP
    if (ctx->pc == 0x1a47bcu) { ctx->pc = 0x1a47c0u; }
}
