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

// Function: sub_00237118
// Address: 0x237118 - 0x237190
void sub_00237118_0x237118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237118_0x237118");
#endif

    switch (ctx->pc) {
        case 0x23713cu: goto label_23713c;
        case 0x237164u: goto label_237164;
        case 0x237170u: goto label_237170;
        default: break;
    }

    ctx->pc = 0x237118u;

    // 0x237118: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x237118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23711c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23711cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x237120: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x237120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x237124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237128: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x237128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23712c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23712cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x237130: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237134: 0xc08dcf0  jal         func_2373C0
    ctx->pc = 0x237134u;
    SET_GPR_U32(ctx, 31, 0x23713Cu);
    ctx->pc = 0x237138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237134u;
    // 0x237138: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2373C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2373C0u, 0x237134u, 0x23713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23713Cu;
label_23713c:
    // 0x23713c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23713cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237140: 0x5640000c  bnel        $s2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x237140u;
    {
        const bool branch_taken_0x237140 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x237140) {
            ctx->pc = 0x237144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237140u;
            // 0x237144: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237174u;
            goto label_237174;
        }
    }
    ctx->pc = 0x237148u;
    // 0x237148: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x237148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23714c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23714cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x237150: 0x24a54be8  addiu       $a1, $a1, 0x4BE8
    ctx->pc = 0x237150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19432));
    // 0x237154: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x237154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237158: 0x73827  nor         $a3, $zero, $a3
    ctx->pc = 0x237158u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x23715c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x23715Cu;
    SET_GPR_U32(ctx, 31, 0x237164u);
    ctx->pc = 0x237160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23715Cu;
    // 0x237160: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23715Cu, 0x237164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237164u;
label_237164:
    // 0x237164: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x237164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x237168: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x237168u;
    SET_GPR_U32(ctx, 31, 0x237170u);
    ctx->pc = 0x23716Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237168u;
    // 0x23716c: 0x24844c10  addiu       $a0, $a0, 0x4C10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x237168u, 0x237170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237170u;
label_237170:
    // 0x237170: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x237170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_237174:
    // 0x237174: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x237174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237178: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x237178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23717c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23717cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237184: 0x3e00008  jr          $ra
    ctx->pc = 0x237184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237184u;
        // 0x237188: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23718Cu;
    // 0x23718c: 0x0  nop
    ctx->pc = 0x23718cu;
    // NOP
}
