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

// Function: sub_001E6468
// Address: 0x1e6468 - 0x1e64c8
void sub_001E6468_0x1e6468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6468_0x1e6468");
#endif

    switch (ctx->pc) {
        case 0x1e6468u: goto label_1e6468;
        case 0x1e646cu: goto label_1e646c;
        case 0x1e6470u: goto label_1e6470;
        case 0x1e6474u: goto label_1e6474;
        case 0x1e6478u: goto label_1e6478;
        case 0x1e647cu: goto label_1e647c;
        case 0x1e6480u: goto label_1e6480;
        case 0x1e6484u: goto label_1e6484;
        case 0x1e6488u: goto label_1e6488;
        case 0x1e648cu: goto label_1e648c;
        case 0x1e6490u: goto label_1e6490;
        case 0x1e6494u: goto label_1e6494;
        case 0x1e6498u: goto label_1e6498;
        case 0x1e649cu: goto label_1e649c;
        case 0x1e64a0u: goto label_1e64a0;
        case 0x1e64a4u: goto label_1e64a4;
        case 0x1e64a8u: goto label_1e64a8;
        case 0x1e64acu: goto label_1e64ac;
        case 0x1e64b0u: goto label_1e64b0;
        case 0x1e64b4u: goto label_1e64b4;
        case 0x1e64b8u: goto label_1e64b8;
        case 0x1e64bcu: goto label_1e64bc;
        case 0x1e64c0u: goto label_1e64c0;
        case 0x1e64c4u: goto label_1e64c4;
        default: break;
    }

    ctx->pc = 0x1e6468u;

label_1e6468:
    // 0x1e6468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e646c:
    // 0x1e646c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e646cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e6470:
    // 0x1e6470: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e6470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1e6474:
    // 0x1e6474: 0xc079a08  jal         func_1E6820
label_1e6478:
    if (ctx->pc == 0x1E6478u) {
        ctx->pc = 0x1E6478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6474u;
        // 0x1e6478: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E647Cu;
        goto label_1e647c;
    }
    ctx->pc = 0x1E6474u;
    SET_GPR_U32(ctx, 31, 0x1E647Cu);
    ctx->pc = 0x1E6478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6474u;
    // 0x1e6478: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6820u, 0x1E6474u, 0x1E647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E647Cu;
label_1e647c:
    // 0x1e647c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e647cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6480:
    // 0x1e6480: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1e6484:
    if (ctx->pc == 0x1E6484u) {
        ctx->pc = 0x1E6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6480u;
        // 0x1e6484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6488u;
        goto label_1e6488;
    }
    ctx->pc = 0x1E6480u;
    {
        const bool branch_taken_0x1e6480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6480u;
        // 0x1e6484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6480) {
            ctx->pc = 0x1E6490u;
            goto label_1e6490;
        }
    }
    ctx->pc = 0x1E6488u;
label_1e6488:
    // 0x1e6488: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e648c:
    if (ctx->pc == 0x1E648Cu) {
        ctx->pc = 0x1E648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6488u;
        // 0x1e648c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6490u;
        goto label_1e6490;
    }
    ctx->pc = 0x1E6488u;
    {
        const bool branch_taken_0x1e6488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6488u;
        // 0x1e648c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6488) {
            ctx->pc = 0x1E64B8u;
            goto label_1e64b8;
        }
    }
    ctx->pc = 0x1E6490u;
label_1e6490:
    // 0x1e6490: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e6490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e6494:
    // 0x1e6494: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e6498:
    if (ctx->pc == 0x1E6498u) {
        ctx->pc = 0x1E6498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6494u;
        // 0x1e6498: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E649Cu;
        goto label_1e649c;
    }
    ctx->pc = 0x1E6494u;
    {
        const bool branch_taken_0x1e6494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6494u;
        // 0x1e6498: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6494) {
            ctx->pc = 0x1E64B4u;
            goto label_1e64b4;
        }
    }
    ctx->pc = 0x1E649Cu;
label_1e649c:
    // 0x1e649c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1e649cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1e64a0:
    // 0x1e64a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1e64a4:
    if (ctx->pc == 0x1E64A4u) {
        ctx->pc = 0x1E64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64A0u;
        // 0x1e64a4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E64A8u;
        goto label_1e64a8;
    }
    ctx->pc = 0x1E64A0u;
    {
        const bool branch_taken_0x1e64a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e64a0) {
            ctx->pc = 0x1E64A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E64A0u;
            // 0x1e64a4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E64B8u;
            goto label_1e64b8;
        }
    }
    ctx->pc = 0x1E64A8u;
label_1e64a8:
    // 0x1e64a8: 0x40f809  jalr        $v0
label_1e64ac:
    if (ctx->pc == 0x1E64ACu) {
        ctx->pc = 0x1E64B0u;
        goto label_1e64b0;
    }
    ctx->pc = 0x1E64A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E64B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E64A8u, 0x1E64B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E64B0u;
label_1e64b0:
    // 0x1e64b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e64b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e64b4:
    // 0x1e64b4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e64b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e64b8:
    // 0x1e64b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e64b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e64bc:
    // 0x1e64bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e64bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e64c0:
    // 0x1e64c0: 0x3e00008  jr          $ra
label_1e64c4:
    if (ctx->pc == 0x1E64C4u) {
        ctx->pc = 0x1E64C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64C0u;
        // 0x1e64c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E64C8u;
        goto label_fallthrough_0x1e64c0;
    }
    ctx->pc = 0x1E64C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E64C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64C0u;
        // 0x1e64c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E64C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e64c0:
    ctx->pc = 0x1E64C8u;
}
