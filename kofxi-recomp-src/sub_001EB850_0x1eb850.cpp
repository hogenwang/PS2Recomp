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

// Function: sub_001EB850
// Address: 0x1eb850 - 0x1eb8b0
void sub_001EB850_0x1eb850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB850_0x1eb850");
#endif

    switch (ctx->pc) {
        case 0x1eb864u: goto label_1eb864;
        case 0x1eb898u: goto label_1eb898;
        default: break;
    }

    ctx->pc = 0x1eb850u;

    // 0x1eb850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eb854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eb854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eb858: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1eb858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1eb85c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1EB85Cu;
    SET_GPR_U32(ctx, 31, 0x1EB864u);
    ctx->pc = 0x1EB860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB85Cu;
    // 0x1eb860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1EB85Cu, 0x1EB864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB864u;
label_1eb864:
    // 0x1eb864: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1eb864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1eb868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb86c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1eb86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb870: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB870u;
    {
        const bool branch_taken_0x1eb870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB870u;
        // 0x1eb874: 0x34a50161  ori         $a1, $a1, 0x161 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)353);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb870) {
            ctx->pc = 0x1EB890u;
            goto label_1eb890;
        }
    }
    ctx->pc = 0x1EB878u;
    // 0x1eb878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eb878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb87c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1eb87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb880: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1eb880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eb884: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EB884u;
    ctx->pc = 0x1EB888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB884u;
    // 0x1eb888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1EB88Cu;
    // 0x1eb88c: 0x0  nop
    ctx->pc = 0x1eb88cu;
    // NOP
label_1eb890:
    // 0x1eb890: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1EB890u;
    SET_GPR_U32(ctx, 31, 0x1EB898u);
    ctx->pc = 0x1EB894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB890u;
    // 0x1eb894: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE40u, 0x1EB890u, 0x1EB898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB898u;
label_1eb898:
    // 0x1eb898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eb898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb89c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eb89cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb8a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1eb8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eb8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8A4u;
        // 0x1eb8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB8ACu;
    // 0x1eb8ac: 0x0  nop
    ctx->pc = 0x1eb8acu;
    // NOP
    if (ctx->pc == 0x1eb8acu) { ctx->pc = 0x1eb8b0u; }
}
