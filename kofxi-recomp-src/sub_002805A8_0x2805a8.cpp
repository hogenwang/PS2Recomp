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

// Function: sub_002805A8
// Address: 0x2805a8 - 0x280650
void sub_002805A8_0x2805a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002805A8_0x2805a8");
#endif

    switch (ctx->pc) {
        case 0x2805f0u: goto label_2805f0;
        case 0x280614u: goto label_280614;
        case 0x280624u: goto label_280624;
        default: break;
    }

    ctx->pc = 0x2805a8u;

    // 0x2805a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2805a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2805ac: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2805acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2805b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2805b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2805b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2805b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2805b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805bc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2805BCu;
    {
        const bool branch_taken_0x2805bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2805C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805BCu;
        // 0x2805c0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2805bc) {
            ctx->pc = 0x2805D0u;
            goto label_2805d0;
        }
    }
    ctx->pc = 0x2805C4u;
    // 0x2805c4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2805c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2805c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2805C8u;
    {
        const bool branch_taken_0x2805c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2805c8) {
            ctx->pc = 0x2805D8u;
            goto label_2805d8;
        }
    }
    ctx->pc = 0x2805D0u;
label_2805d0:
    // 0x2805d0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2805D0u;
    {
        const bool branch_taken_0x2805d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2805D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805D0u;
        // 0x2805d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2805d0) {
            ctx->pc = 0x28063Cu;
            goto label_28063c;
        }
    }
    ctx->pc = 0x2805D8u;
label_2805d8:
    // 0x2805d8: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2805D8u;
    {
        const bool branch_taken_0x2805d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2805d8) {
            ctx->pc = 0x2805DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2805D8u;
            // 0x2805dc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2805F8u;
            goto label_2805f8;
        }
    }
    ctx->pc = 0x2805E0u;
    // 0x2805e0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2805e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2805e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2805e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805e8: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x2805E8u;
    SET_GPR_U32(ctx, 31, 0x2805F0u);
    ctx->pc = 0x2805ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2805E8u;
    // 0x2805ec: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x2805E8u, 0x2805F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2805F0u;
label_2805f0:
    // 0x2805f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2805F0u;
    {
        const bool branch_taken_0x2805f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2805F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805F0u;
        // 0x2805f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2805f0) {
            ctx->pc = 0x280640u;
            goto label_280640;
        }
    }
    ctx->pc = 0x2805F8u;
label_2805f8:
    // 0x2805f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2805f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805fc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2805fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x280600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280604: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x280604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x280608: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x280608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28060c: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x28060Cu;
    SET_GPR_U32(ctx, 31, 0x280614u);
    ctx->pc = 0x280610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28060Cu;
    // 0x280610: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281740u, 0x28060Cu, 0x280614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280614u;
label_280614:
    // 0x280614: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x280614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280618: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x280618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28061c: 0xc049c48  jal         func_127120
    ctx->pc = 0x28061Cu;
    SET_GPR_U32(ctx, 31, 0x280624u);
    ctx->pc = 0x280620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28061Cu;
    // 0x280620: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x28061Cu, 0x280624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280624u;
label_280624:
    // 0x280624: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x280624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x280628: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x280628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28062c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28062cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x280630: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x280630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x280634: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x280634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x280638: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x280638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_28063c:
    // 0x28063c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28063cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_280640:
    // 0x280640: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x280640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280644: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x280644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280648: 0x3e00008  jr          $ra
    ctx->pc = 0x280648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280648u;
        // 0x28064c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280650u;
}
