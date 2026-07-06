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

// Function: sub_001F73E8
// Address: 0x1f73e8 - 0x1f7458
void sub_001F73E8_0x1f73e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F73E8_0x1f73e8");
#endif

    switch (ctx->pc) {
        case 0x1f7404u: goto label_1f7404;
        case 0x1f743cu: goto label_1f743c;
        default: break;
    }

    ctx->pc = 0x1f73e8u;

    // 0x1f73e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f73e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f73ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f73ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f73f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f73f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f73f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f73f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f73f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f73fc: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F73FCu;
    SET_GPR_U32(ctx, 31, 0x1F7404u);
    ctx->pc = 0x1F7400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F73FCu;
    // 0x1f7400: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F73FCu, 0x1F7404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7404u;
label_1f7404:
    // 0x1f7404: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f7404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f7408: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f7408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f740c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f740cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7410: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7410u;
    {
        const bool branch_taken_0x1f7410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7410u;
        // 0x1f7414: 0x34a50146  ori         $a1, $a1, 0x146 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)326);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7410) {
            ctx->pc = 0x1F7430u;
            goto label_1f7430;
        }
    }
    ctx->pc = 0x1F7418u;
    // 0x1f7418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f741c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f741cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f7420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7424: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F7424u;
    ctx->pc = 0x1F7428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7424u;
    // 0x1f7428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F742Cu;
    // 0x1f742c: 0x0  nop
    ctx->pc = 0x1f742cu;
    // NOP
label_1f7430:
    // 0x1f7430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7434: 0xc07eb40  jal         func_1FAD00
    ctx->pc = 0x1F7434u;
    SET_GPR_U32(ctx, 31, 0x1F743Cu);
    ctx->pc = 0x1F7438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7434u;
    // 0x1f7438: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD00u, 0x1F7434u, 0x1F743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F743Cu;
label_1f743c:
    // 0x1f743c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f743cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7444: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f7444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7448: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f7448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f744c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F744Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F744Cu;
        // 0x1f7450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F744Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7454u;
    // 0x1f7454: 0x0  nop
    ctx->pc = 0x1f7454u;
    // NOP
    if (ctx->pc == 0x1f7454u) { ctx->pc = 0x1f7458u; }
}
