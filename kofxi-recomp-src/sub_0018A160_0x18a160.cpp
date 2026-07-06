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

// Function: sub_0018A160
// Address: 0x18a160 - 0x18a1c0
void sub_0018A160_0x18a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A160_0x18a160");
#endif

    switch (ctx->pc) {
        case 0x18a174u: goto label_18a174;
        default: break;
    }

    ctx->pc = 0x18a160u;

    // 0x18a160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18a168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a16c: 0xc0628bc  jal         func_18A2F0
    ctx->pc = 0x18A16Cu;
    SET_GPR_U32(ctx, 31, 0x18A174u);
    ctx->pc = 0x18A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A16Cu;
    // 0x18a170: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A2F0u, 0x18A16Cu, 0x18A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A174u;
label_18a174:
    // 0x18a174: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a178: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18a178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18a17c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A17Cu;
    {
        const bool branch_taken_0x18a17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a17c) {
            ctx->pc = 0x18A180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A17Cu;
            // 0x18a180: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A18Cu;
            goto label_18a18c;
        }
    }
    ctx->pc = 0x18A184u;
    // 0x18a184: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18a184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a188: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x18a188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_18a18c:
    // 0x18a18c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18a190: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18a190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18a194: 0x2442db54  addiu       $v0, $v0, -0x24AC
    ctx->pc = 0x18a194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957908));
    // 0x18a198: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18a198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18a19c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a1a0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18a1a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18a1a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a1ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a1b0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18a1b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x18A1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1B4u;
        // 0x18a1b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A1BCu;
    // 0x18a1bc: 0x0  nop
    ctx->pc = 0x18a1bcu;
    // NOP
}
