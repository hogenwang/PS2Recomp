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

// Function: sub_0010F9C8
// Address: 0x10f9c8 - 0x10fa78
void sub_0010F9C8_0x10f9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F9C8_0x10f9c8");
#endif

    switch (ctx->pc) {
        case 0x10fa00u: goto label_10fa00;
        case 0x10fa24u: goto label_10fa24;
        case 0x10fa34u: goto label_10fa34;
        default: break;
    }

    ctx->pc = 0x10f9c8u;

    // 0x10f9c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x10f9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x10f9cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10f9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10f9d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10f9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10f9d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f9d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10f9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10f9dc: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x10f9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x10f9e0: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x10f9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x10f9e4: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x10f9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x10f9e8: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x10f9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x10f9ec: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x10f9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x10f9f0: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x10f9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x10f9f4: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x10f9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x10f9f8: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10F9F8u;
    SET_GPR_U32(ctx, 31, 0x10FA00u);
    ctx->pc = 0x10F9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F9F8u;
    // 0x10f9fc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10F9F8u, 0x10FA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA00u;
label_10fa00:
    // 0x10fa00: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x10fa00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x10fa04: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x10fa04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x10fa08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10fa08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa0c: 0x2484f7e0  addiu       $a0, $a0, -0x820
    ctx->pc = 0x10fa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965216));
    // 0x10fa10: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10fa10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10fa14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa18: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x10fa18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x10fa1c: 0xc043a92  jal         func_10EA48
    ctx->pc = 0x10FA1Cu;
    SET_GPR_U32(ctx, 31, 0x10FA24u);
    ctx->pc = 0x10FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FA1Cu;
    // 0x10fa20: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EA48u, 0x10FA1Cu, 0x10FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA24u;
label_10fa24:
    // 0x10fa24: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FA24u;
    {
        const bool branch_taken_0x10fa24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA24u;
        // 0x10fa28: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa24) {
            ctx->pc = 0x10FA38u;
            goto label_10fa38;
        }
    }
    ctx->pc = 0x10FA2Cu;
    // 0x10fa2c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10FA2Cu;
    SET_GPR_U32(ctx, 31, 0x10FA34u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x10FA2Cu, 0x10FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA34u;
label_10fa34:
    // 0x10fa34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10fa34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10fa38:
    // 0x10fa38: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10fa38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fa3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10fa3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fa40: 0x3e00008  jr          $ra
    ctx->pc = 0x10FA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA40u;
        // 0x10fa44: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FA48u;
    // 0x10fa48: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x10fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10fa4c: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x10fa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x10fa50: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x10fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10fa54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10fa58: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x10fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10fa5c: 0x3e00008  jr          $ra
    ctx->pc = 0x10FA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA5Cu;
        // 0x10fa60: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FA64u;
    // 0x10fa64: 0x0  nop
    ctx->pc = 0x10fa64u;
    // NOP
    // 0x10fa68: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x10fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10fa6c: 0x3e00008  jr          $ra
    ctx->pc = 0x10FA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA6Cu;
        // 0x10fa70: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FA74u;
    // 0x10fa74: 0x0  nop
    ctx->pc = 0x10fa74u;
    // NOP
}
