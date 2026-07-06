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

// Function: sub_001F6988
// Address: 0x1f6988 - 0x1f6a38
void sub_001F6988_0x1f6988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6988_0x1f6988");
#endif

    switch (ctx->pc) {
        case 0x1f69a0u: goto label_1f69a0;
        case 0x1f69b4u: goto label_1f69b4;
        case 0x1f69bcu: goto label_1f69bc;
        case 0x1f69e8u: goto label_1f69e8;
        default: break;
    }

    ctx->pc = 0x1f6988u;

    // 0x1f6988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f6988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f698c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f698cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f6990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f6994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f6998: 0xc07d928  jal         func_1F64A0
    ctx->pc = 0x1F6998u;
    SET_GPR_U32(ctx, 31, 0x1F69A0u);
    ctx->pc = 0x1F699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6998u;
    // 0x1f699c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F64A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F64A0u, 0x1F6998u, 0x1F69A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69A0u;
label_1f69a0:
    // 0x1f69a0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F69A0u;
    {
        const bool branch_taken_0x1f69a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F69A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F69A0u;
        // 0x1f69a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f69a0) {
            ctx->pc = 0x1F6A00u;
            goto label_1f6a00;
        }
    }
    ctx->pc = 0x1F69A8u;
    // 0x1f69a8: 0x8e302018  lw          $s0, 0x2018($s1)
    ctx->pc = 0x1f69a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8216)));
    // 0x1f69ac: 0xc07d8fa  jal         func_1F63E8
    ctx->pc = 0x1F69ACu;
    SET_GPR_U32(ctx, 31, 0x1F69B4u);
    ctx->pc = 0x1F69B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F69ACu;
    // 0x1f69b0: 0x26041198  addiu       $a0, $s0, 0x1198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F63E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F63E8u, 0x1F69ACu, 0x1F69B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69B4u;
label_1f69b4:
    // 0x1f69b4: 0xc07e368  jal         func_1F8DA0
    ctx->pc = 0x1F69B4u;
    SET_GPR_U32(ctx, 31, 0x1F69BCu);
    ctx->pc = 0x1F8DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8DA0u, 0x1F69B4u, 0x1F69BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69BCu;
label_1f69bc:
    // 0x1f69bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f69bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f69c0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F69C0u;
    {
        const bool branch_taken_0x1f69c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F69C0u;
        // 0x1f69c4: 0x26041150  addiu       $a0, $s0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f69c0) {
            ctx->pc = 0x1F69E0u;
            goto label_1f69e0;
        }
    }
    ctx->pc = 0x1F69C8u;
    // 0x1f69c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f69c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f69cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f69ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f69d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f69d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f69d4: 0x8042974  j           func_10A5D0
    ctx->pc = 0x1F69D4u;
    ctx->pc = 0x1F69D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F69D4u;
    // 0x1f69d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A5D0u, 0x1F69D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1F69DCu;
    // 0x1f69dc: 0x0  nop
    ctx->pc = 0x1f69dcu;
    // NOP
label_1f69e0:
    // 0x1f69e0: 0xc0429ae  jal         func_10A6B8
    ctx->pc = 0x1F69E0u;
    SET_GPR_U32(ctx, 31, 0x1F69E8u);
    ctx->pc = 0x10A6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A6B8u, 0x1F69E0u, 0x1F69E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69E8u;
label_1f69e8:
    // 0x1f69e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f69e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f69ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f69ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f69f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f69f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f69f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f69f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f69f8: 0x807da84  j           func_1F6A10
    ctx->pc = 0x1F69F8u;
    ctx->pc = 0x1F69FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F69F8u;
    // 0x1f69fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6A10u;
    goto label_1f6a10;
    ctx->pc = 0x1F6A00u;
label_1f6a00:
    // 0x1f6a00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6a00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6a04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f6a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6a08: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A08u;
        // 0x1f6a0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6A10u;
label_1f6a10:
    // 0x1f6a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6a14: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1f6a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1f6a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6a1c: 0x8c852018  lw          $a1, 0x2018($a0)
    ctx->pc = 0x1f6a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f6a20: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x1f6a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x1f6a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6a28: 0x24849b30  addiu       $a0, $a0, -0x64D0
    ctx->pc = 0x1f6a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941488));
    // 0x1f6a2c: 0x24a51150  addiu       $a1, $a1, 0x1150
    ctx->pc = 0x1f6a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4432));
    // 0x1f6a30: 0x807580e  j           func_1D6038
    ctx->pc = 0x1F6A30u;
    ctx->pc = 0x1F6A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A30u;
    // 0x1f6a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6038u, 0x1F6A30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1F6A38u;
}
