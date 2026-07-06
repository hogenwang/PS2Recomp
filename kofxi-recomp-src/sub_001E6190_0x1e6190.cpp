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

// Function: sub_001E6190
// Address: 0x1e6190 - 0x1e61e8
void sub_001E6190_0x1e6190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6190_0x1e6190");
#endif

    switch (ctx->pc) {
        case 0x1e6190u: goto label_1e6190;
        case 0x1e6194u: goto label_1e6194;
        case 0x1e6198u: goto label_1e6198;
        case 0x1e619cu: goto label_1e619c;
        case 0x1e61a0u: goto label_1e61a0;
        case 0x1e61a4u: goto label_1e61a4;
        case 0x1e61a8u: goto label_1e61a8;
        case 0x1e61acu: goto label_1e61ac;
        case 0x1e61b0u: goto label_1e61b0;
        case 0x1e61b4u: goto label_1e61b4;
        case 0x1e61b8u: goto label_1e61b8;
        case 0x1e61bcu: goto label_1e61bc;
        case 0x1e61c0u: goto label_1e61c0;
        case 0x1e61c4u: goto label_1e61c4;
        case 0x1e61c8u: goto label_1e61c8;
        case 0x1e61ccu: goto label_1e61cc;
        case 0x1e61d0u: goto label_1e61d0;
        case 0x1e61d4u: goto label_1e61d4;
        case 0x1e61d8u: goto label_1e61d8;
        case 0x1e61dcu: goto label_1e61dc;
        case 0x1e61e0u: goto label_1e61e0;
        case 0x1e61e4u: goto label_1e61e4;
        default: break;
    }

    ctx->pc = 0x1e6190u;

label_1e6190:
    // 0x1e6190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e6194:
    // 0x1e6194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e6194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e6198:
    // 0x1e6198: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e6198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e619c:
    // 0x1e619c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e619cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e61a0:
    // 0x1e61a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e61a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e61a4:
    // 0x1e61a4: 0xc0799fc  jal         func_1E67F0
label_1e61a8:
    if (ctx->pc == 0x1E61A8u) {
        ctx->pc = 0x1E61A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61A4u;
        // 0x1e61a8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E61ACu;
        goto label_1e61ac;
    }
    ctx->pc = 0x1E61A4u;
    SET_GPR_U32(ctx, 31, 0x1E61ACu);
    ctx->pc = 0x1E61A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E61A4u;
    // 0x1e61a8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E67F0u, 0x1E61A4u, 0x1E61ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E61ACu;
label_1e61ac:
    // 0x1e61ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e61b0:
    if (ctx->pc == 0x1E61B0u) {
        ctx->pc = 0x1E61B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61ACu;
        // 0x1e61b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E61B4u;
        goto label_1e61b4;
    }
    ctx->pc = 0x1E61ACu;
    {
        const bool branch_taken_0x1e61ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E61B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61ACu;
        // 0x1e61b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e61ac) {
            ctx->pc = 0x1E61CCu;
            goto label_1e61cc;
        }
    }
    ctx->pc = 0x1E61B4u;
label_1e61b4:
    // 0x1e61b4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1e61b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e61b8:
    // 0x1e61b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e61bc:
    if (ctx->pc == 0x1E61BCu) {
        ctx->pc = 0x1E61BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61B8u;
        // 0x1e61bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E61C0u;
        goto label_1e61c0;
    }
    ctx->pc = 0x1E61B8u;
    {
        const bool branch_taken_0x1e61b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E61BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61B8u;
        // 0x1e61bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e61b8) {
            ctx->pc = 0x1E61CCu;
            goto label_1e61cc;
        }
    }
    ctx->pc = 0x1E61C0u;
label_1e61c0:
    // 0x1e61c0: 0x40f809  jalr        $v0
label_1e61c4:
    if (ctx->pc == 0x1E61C4u) {
        ctx->pc = 0x1E61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61C0u;
        // 0x1e61c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E61C8u;
        goto label_1e61c8;
    }
    ctx->pc = 0x1E61C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E61C8u);
        ctx->pc = 0x1E61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61C0u;
        // 0x1e61c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E61C0u, 0x1E61C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E61C8u;
label_1e61c8:
    // 0x1e61c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e61c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e61cc:
    // 0x1e61cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e61ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e61d0:
    // 0x1e61d0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1e61d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e61d4:
    // 0x1e61d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e61d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e61d8:
    // 0x1e61d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e61d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e61dc:
    // 0x1e61dc: 0x3e00008  jr          $ra
label_1e61e0:
    if (ctx->pc == 0x1E61E0u) {
        ctx->pc = 0x1E61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61DCu;
        // 0x1e61e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E61E4u;
        goto label_1e61e4;
    }
    ctx->pc = 0x1E61DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61DCu;
        // 0x1e61e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E61DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E61E4u;
label_1e61e4:
    // 0x1e61e4: 0x0  nop
    ctx->pc = 0x1e61e4u;
    // NOP
    if (ctx->pc == 0x1e61e4u) { ctx->pc = 0x1e61e8u; }
}
