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

// Function: sub_001CE130
// Address: 0x1ce130 - 0x1ce1e0
void sub_001CE130_0x1ce130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE130_0x1ce130");
#endif

    switch (ctx->pc) {
        case 0x1ce1c8u: goto label_1ce1c8;
        default: break;
    }

    ctx->pc = 0x1ce130u;

    // 0x1ce130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce134: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ce134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce138: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x1ce138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ce13c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce140: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE140u;
    {
        const bool branch_taken_0x1ce140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE140u;
        // 0x1ce144: 0x2cc30008  sltiu       $v1, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce140) {
            ctx->pc = 0x1CE160u;
            goto label_1ce160;
        }
    }
    ctx->pc = 0x1CE148u;
    // 0x1ce148: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ce148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ce14c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce150: 0x2484bec0  addiu       $a0, $a0, -0x4140
    ctx->pc = 0x1ce150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950592));
    // 0x1ce154: 0x8073748  j           func_1CDD20
    ctx->pc = 0x1CE154u;
    ctx->pc = 0x1CE158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE154u;
    // 0x1ce158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD20u;
    sub_001CDD20_0x1cdd20(rdram, ctx, runtime); return;
    ctx->pc = 0x1CE15Cu;
    // 0x1ce15c: 0x0  nop
    ctx->pc = 0x1ce15cu;
    // NOP
label_1ce160:
    // 0x1ce160: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE160u;
    {
        const bool branch_taken_0x1ce160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE160u;
        // 0x1ce164: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce160) {
            ctx->pc = 0x1CE180u;
            goto label_1ce180;
        }
    }
    ctx->pc = 0x1CE168u;
    // 0x1ce168: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ce168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ce16c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce170: 0x2484bee0  addiu       $a0, $a0, -0x4120
    ctx->pc = 0x1ce170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950624));
    // 0x1ce174: 0x8073748  j           func_1CDD20
    ctx->pc = 0x1CE174u;
    ctx->pc = 0x1CE178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE174u;
    // 0x1ce178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD20u;
    sub_001CDD20_0x1cdd20(rdram, ctx, runtime); return;
    ctx->pc = 0x1CE17Cu;
    // 0x1ce17c: 0x0  nop
    ctx->pc = 0x1ce17cu;
    // NOP
label_1ce180:
    // 0x1ce180: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1ce180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1ce184: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ce184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ce188: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1ce188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1ce18c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1ce18cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1ce190: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ce190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ce194: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1ce194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1ce198: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ce198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ce19c: 0x24427d60  addiu       $v0, $v0, 0x7D60
    ctx->pc = 0x1ce19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32096));
    // 0x1ce1a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce1a4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1ce1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ce1a8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1ce1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ce1ac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ce1acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1ce1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1ce1b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ce1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ce1b8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1ce1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1ce1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1BCu;
        // 0x1ce1c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE1C4u;
    // 0x1ce1c4: 0x0  nop
    ctx->pc = 0x1ce1c4u;
    // NOP
label_1ce1c8:
    // 0x1ce1c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce1cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ce1ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce1d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce1d8: 0x8073878  j           func_1CE1E0
    ctx->pc = 0x1CE1D8u;
    ctx->pc = 0x1CE1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE1D8u;
    // 0x1ce1dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E0u;
    sub_001CE1E0_0x1ce1e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CE1E0u;
}
