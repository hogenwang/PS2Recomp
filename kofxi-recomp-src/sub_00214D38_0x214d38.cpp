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

// Function: sub_00214D38
// Address: 0x214d38 - 0x214dc8
void sub_00214D38_0x214d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214D38_0x214d38");
#endif

    switch (ctx->pc) {
        case 0x214d70u: goto label_214d70;
        case 0x214da8u: goto label_214da8;
        default: break;
    }

    ctx->pc = 0x214d38u;

label_214d38:
    // 0x214d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214d3c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214d40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214d44: 0x248409a8  addiu       $a0, $a0, 0x9A8
    ctx->pc = 0x214d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2472));
    // 0x214d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214d4c: 0x8043e52  j           func_10F948
    ctx->pc = 0x214D4Cu;
    ctx->pc = 0x214D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D4Cu;
    // 0x214d50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x214D54u;
    // 0x214d54: 0x0  nop
    ctx->pc = 0x214d54u;
    // NOP
    // 0x214d58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214d5c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x214d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214d60: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x214d60u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x214d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214d68: 0xc08534e  jal         func_214D38
    ctx->pc = 0x214D68u;
    SET_GPR_U32(ctx, 31, 0x214D70u);
    ctx->pc = 0x214D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D68u;
    // 0x214d6c: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D38u;
    goto label_214d38;
    ctx->pc = 0x214D70u;
label_214d70:
    // 0x214d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214d74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x214d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d78: 0x3e00008  jr          $ra
    ctx->pc = 0x214D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D78u;
        // 0x214d7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214D80u;
    // 0x214d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214d84: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x214d84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x214d88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214d8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214d90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x214d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x214d94: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x214d94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214d98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x214d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d9c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x214d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x214da0: 0xc08534e  jal         func_214D38
    ctx->pc = 0x214DA0u;
    SET_GPR_U32(ctx, 31, 0x214DA8u);
    ctx->pc = 0x214DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214DA0u;
    // 0x214da4: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D38u;
    goto label_214d38;
    ctx->pc = 0x214DA8u;
label_214da8:
    // 0x214da8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x214da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x214dac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214db0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x214db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x214db4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x214DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DBCu;
        // 0x214dc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214DC4u;
    // 0x214dc4: 0x0  nop
    ctx->pc = 0x214dc4u;
    // NOP
    if (ctx->pc == 0x214dc4u) { ctx->pc = 0x214dc8u; }
}
