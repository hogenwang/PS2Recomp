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

// Function: sub_001A6B08
// Address: 0x1a6b08 - 0x1a6ba8
void sub_001A6B08_0x1a6b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6B08_0x1a6b08");
#endif

    switch (ctx->pc) {
        case 0x1a6b18u: goto label_1a6b18;
        default: break;
    }

    ctx->pc = 0x1a6b08u;

    // 0x1a6b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6b0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6b10: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1A6B10u;
    SET_GPR_U32(ctx, 31, 0x1A6B18u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1A6B10u, 0x1A6B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B18u;
label_1a6b18:
    // 0x1a6b18: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1a6b18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b1c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a6b20: 0x2447e118  addiu       $a3, $v0, -0x1EE8
    ctx->pc = 0x1a6b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959384));
    // 0x1a6b24: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x1a6b24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1a6b28: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6B28u;
    {
        const bool branch_taken_0x1a6b28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6b28) {
            ctx->pc = 0x1A6B3Cu;
            goto label_1a6b3c;
        }
    }
    ctx->pc = 0x1A6B30u;
    // 0x1a6b30: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a6b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a6b34: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A6B34u;
    {
        const bool branch_taken_0x1a6b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B34u;
        // 0x1a6b38: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b34) {
            ctx->pc = 0x1A6B88u;
            goto label_1a6b88;
        }
    }
    ctx->pc = 0x1A6B3Cu;
label_1a6b3c:
    // 0x1a6b3c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1a6b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1a6b40: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x1a6b40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a6b44: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1a6b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a6b48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a6b4c: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x1a6b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x1a6b50: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x1a6b50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x1a6b54: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1a6b54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1a6b58: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x1a6b58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x1a6b5c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x1a6b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1a6b60: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x1a6b60u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x1a6b64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a6b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a6b68: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1a6b68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x1a6b6c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1a6b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1a6b70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a6b74: 0x304203fe  andi        $v0, $v0, 0x3FE
    ctx->pc = 0x1a6b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1022);
    // 0x1a6b78: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a6b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a6b7c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1a6b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1a6b80: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1a6b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a6b84: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x1a6b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1a6b88:
    // 0x1a6b88: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6B88u;
    {
        const bool branch_taken_0x1a6b88 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B88u;
        // 0x1a6b8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b88) {
            ctx->pc = 0x1A6B9Cu;
            goto label_1a6b9c;
        }
    }
    ctx->pc = 0x1A6B90u;
    // 0x1a6b90: 0xf  sync
    ctx->pc = 0x1a6b90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a6b94: 0x42000038  ei
    ctx->pc = 0x1a6b94u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1a6b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6b9c:
    // 0x1a6b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B9Cu;
        // 0x1a6ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6BA4u;
    // 0x1a6ba4: 0x0  nop
    ctx->pc = 0x1a6ba4u;
    // NOP
    if (ctx->pc == 0x1a6ba4u) { ctx->pc = 0x1a6ba8u; }
}
