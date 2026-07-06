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

// Function: sub_001F7378
// Address: 0x1f7378 - 0x1f73e8
void sub_001F7378_0x1f7378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7378_0x1f7378");
#endif

    switch (ctx->pc) {
        case 0x1f7394u: goto label_1f7394;
        case 0x1f73ccu: goto label_1f73cc;
        default: break;
    }

    ctx->pc = 0x1f7378u;

    // 0x1f7378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f737c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f737cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f7380: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f7380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7384: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f7384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f7388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f7388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f738c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F738Cu;
    SET_GPR_U32(ctx, 31, 0x1F7394u);
    ctx->pc = 0x1F7390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F738Cu;
    // 0x1f7390: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F738Cu, 0x1F7394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7394u;
label_1f7394:
    // 0x1f7394: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f7394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f7398: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f7398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f739c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f739cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F73A0u;
    {
        const bool branch_taken_0x1f73a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F73A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73A0u;
        // 0x1f73a4: 0x34a50145  ori         $a1, $a1, 0x145 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)325);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73a0) {
            ctx->pc = 0x1F73C0u;
            goto label_1f73c0;
        }
    }
    ctx->pc = 0x1F73A8u;
    // 0x1f73a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f73a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f73ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f73acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f73b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f73b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f73b4: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F73B4u;
    ctx->pc = 0x1F73B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F73B4u;
    // 0x1f73b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F73BCu;
    // 0x1f73bc: 0x0  nop
    ctx->pc = 0x1f73bcu;
    // NOP
label_1f73c0:
    // 0x1f73c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f73c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73c4: 0xc07eb40  jal         func_1FAD00
    ctx->pc = 0x1F73C4u;
    SET_GPR_U32(ctx, 31, 0x1F73CCu);
    ctx->pc = 0x1F73C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F73C4u;
    // 0x1f73c8: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD00u, 0x1F73C4u, 0x1F73CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F73CCu;
label_1f73cc:
    // 0x1f73cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f73ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f73d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f73d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f73d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f73d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f73d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f73dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F73DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F73E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73DCu;
        // 0x1f73e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F73DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F73E4u;
    // 0x1f73e4: 0x0  nop
    ctx->pc = 0x1f73e4u;
    // NOP
}
