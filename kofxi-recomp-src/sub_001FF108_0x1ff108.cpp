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

// Function: sub_001FF108
// Address: 0x1ff108 - 0x1ff178
void sub_001FF108_0x1ff108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF108_0x1ff108");
#endif

    switch (ctx->pc) {
        case 0x1ff130u: goto label_1ff130;
        case 0x1ff144u: goto label_1ff144;
        default: break;
    }

    ctx->pc = 0x1ff108u;

    // 0x1ff108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff10c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff110: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1ff110u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff114: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ff114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ff118: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ff118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff11c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff120: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ff120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ff124: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1ff124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1ff128: 0xc07fbea  jal         func_1FEFA8
    ctx->pc = 0x1FF128u;
    SET_GPR_U32(ctx, 31, 0x1FF130u);
    ctx->pc = 0x1FF12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF128u;
    // 0x1ff12c: 0x8c900004  lw          $s0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEFA8u, 0x1FF128u, 0x1FF130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF130u;
label_1ff130:
    // 0x1ff130: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ff130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff134: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FF134u;
    {
        const bool branch_taken_0x1ff134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF134u;
        // 0x1ff138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff134) {
            ctx->pc = 0x1FF15Cu;
            goto label_1ff15c;
        }
    }
    ctx->pc = 0x1FF13Cu;
    // 0x1ff13c: 0xc07fc92  jal         func_1FF248
    ctx->pc = 0x1FF13Cu;
    SET_GPR_U32(ctx, 31, 0x1FF144u);
    ctx->pc = 0x1FF248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF248u, 0x1FF13Cu, 0x1FF144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF144u;
label_1ff144:
    // 0x1ff144: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF144u;
    {
        const bool branch_taken_0x1ff144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF144u;
        // 0x1ff148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff144) {
            ctx->pc = 0x1FF158u;
            goto label_1ff158;
        }
    }
    ctx->pc = 0x1FF14Cu;
    // 0x1ff14c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF14Cu;
    {
        const bool branch_taken_0x1ff14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF14Cu;
        // 0x1ff150: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff14c) {
            ctx->pc = 0x1FF15Cu;
            goto label_1ff15c;
        }
    }
    ctx->pc = 0x1FF154u;
    // 0x1ff154: 0x0  nop
    ctx->pc = 0x1ff154u;
    // NOP
label_1ff158:
    // 0x1ff158: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1ff158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1ff15c:
    // 0x1ff15c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff15cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff164: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ff164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff168: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ff168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ff16c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF16Cu;
        // 0x1ff170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF174u;
    // 0x1ff174: 0x0  nop
    ctx->pc = 0x1ff174u;
    // NOP
    if (ctx->pc == 0x1ff174u) { ctx->pc = 0x1ff178u; }
}
