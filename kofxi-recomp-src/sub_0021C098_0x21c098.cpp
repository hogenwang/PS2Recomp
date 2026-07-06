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

// Function: sub_0021C098
// Address: 0x21c098 - 0x21c128
void sub_0021C098_0x21c098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C098_0x21c098");
#endif

    switch (ctx->pc) {
        case 0x21c0d0u: goto label_21c0d0;
        case 0x21c108u: goto label_21c108;
        default: break;
    }

    ctx->pc = 0x21c098u;

label_21c098:
    // 0x21c098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c09c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c0a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c0a4: 0x248416d0  addiu       $a0, $a0, 0x16D0
    ctx->pc = 0x21c0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5840));
    // 0x21c0a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c0ac: 0x8043e52  j           func_10F948
    ctx->pc = 0x21C0ACu;
    ctx->pc = 0x21C0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C0ACu;
    // 0x21c0b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21C0B4u;
    // 0x21c0b4: 0x0  nop
    ctx->pc = 0x21c0b4u;
    // NOP
    // 0x21c0b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c0bc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c0c0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21c0c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21c0c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c0c8: 0xc087026  jal         func_21C098
    ctx->pc = 0x21C0C8u;
    SET_GPR_U32(ctx, 31, 0x21C0D0u);
    ctx->pc = 0x21C0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C0C8u;
    // 0x21c0cc: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C098u;
    goto label_21c098;
    ctx->pc = 0x21C0D0u;
label_21c0d0:
    // 0x21c0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c0d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21c0d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x21C0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C0D8u;
        // 0x21c0dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C0E0u;
    // 0x21c0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c0e4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21c0e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21c0e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c0ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c0f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21c0f4: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x21c0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c0f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21c0f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c0fc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x21c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21c100: 0xc087026  jal         func_21C098
    ctx->pc = 0x21C100u;
    SET_GPR_U32(ctx, 31, 0x21C108u);
    ctx->pc = 0x21C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C100u;
    // 0x21c104: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C098u;
    goto label_21c098;
    ctx->pc = 0x21C108u;
label_21c108:
    // 0x21c108: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21c108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21c10c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c110: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x21c110u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21c114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c11c: 0x3e00008  jr          $ra
    ctx->pc = 0x21C11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C11Cu;
        // 0x21c120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C124u;
    // 0x21c124: 0x0  nop
    ctx->pc = 0x21c124u;
    // NOP
    if (ctx->pc == 0x21c124u) { ctx->pc = 0x21c128u; }
}
