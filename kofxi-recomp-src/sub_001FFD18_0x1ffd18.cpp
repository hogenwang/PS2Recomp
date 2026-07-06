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

// Function: sub_001FFD18
// Address: 0x1ffd18 - 0x1ffd88
void sub_001FFD18_0x1ffd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFD18_0x1ffd18");
#endif

    switch (ctx->pc) {
        case 0x1ffd40u: goto label_1ffd40;
        case 0x1ffd54u: goto label_1ffd54;
        default: break;
    }

    ctx->pc = 0x1ffd18u;

    // 0x1ffd18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ffd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ffd1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ffd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ffd20: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ffd20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ffd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ffd28: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1ffd28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffd2c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1ffd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1ffd30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ffd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ffd34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ffd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ffd38: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x1FFD38u;
    SET_GPR_U32(ctx, 31, 0x1FFD40u);
    ctx->pc = 0x1FFD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD38u;
    // 0x1ffd3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x1FFD38u, 0x1FFD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD40u;
label_1ffd40:
    // 0x1ffd40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ffd40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd44: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FFD44u;
    {
        const bool branch_taken_0x1ffd44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD44u;
        // 0x1ffd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd44) {
            ctx->pc = 0x1FFD6Cu;
            goto label_1ffd6c;
        }
    }
    ctx->pc = 0x1FFD4Cu;
    // 0x1ffd4c: 0xc080132  jal         func_2004C8
    ctx->pc = 0x1FFD4Cu;
    SET_GPR_U32(ctx, 31, 0x1FFD54u);
    ctx->pc = 0x2004C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2004C8u, 0x1FFD4Cu, 0x1FFD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD54u;
label_1ffd54:
    // 0x1ffd54: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1ffd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1ffd58: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFD58u;
    {
        const bool branch_taken_0x1ffd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FFD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD58u;
        // 0x1ffd5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd58) {
            ctx->pc = 0x1FFD6Cu;
            goto label_1ffd6c;
        }
    }
    ctx->pc = 0x1FFD60u;
    // 0x1ffd60: 0x9223001b  lbu         $v1, 0x1B($s1)
    ctx->pc = 0x1ffd60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27)));
    // 0x1ffd64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffd68: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1ffd68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1ffd6c:
    // 0x1ffd6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ffd6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffd70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ffd70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ffd74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ffd74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffd78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ffd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ffd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD7Cu;
        // 0x1ffd80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFD84u;
    // 0x1ffd84: 0x0  nop
    ctx->pc = 0x1ffd84u;
    // NOP
}
