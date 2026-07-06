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

// Function: sub_00216168
// Address: 0x216168 - 0x2161f8
void sub_00216168_0x216168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216168_0x216168");
#endif

    switch (ctx->pc) {
        case 0x2161a0u: goto label_2161a0;
        case 0x2161d8u: goto label_2161d8;
        default: break;
    }

    ctx->pc = 0x216168u;

label_216168:
    // 0x216168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21616c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21616cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216174: 0x24840c58  addiu       $a0, $a0, 0xC58
    ctx->pc = 0x216174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3160));
    // 0x216178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21617c: 0x8043e52  j           func_10F948
    ctx->pc = 0x21617Cu;
    ctx->pc = 0x216180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21617Cu;
    // 0x216180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x216184u;
    // 0x216184: 0x0  nop
    ctx->pc = 0x216184u;
    // NOP
    // 0x216188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21618c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21618cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216190: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x216190u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216198: 0xc08585a  jal         func_216168
    ctx->pc = 0x216198u;
    SET_GPR_U32(ctx, 31, 0x2161A0u);
    ctx->pc = 0x21619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216198u;
    // 0x21619c: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216168u;
    goto label_216168;
    ctx->pc = 0x2161A0u;
label_2161a0:
    // 0x2161a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2161a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2161a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2161a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2161a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2161A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2161ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2161A8u;
        // 0x2161ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2161A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2161B0u;
    // 0x2161b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2161b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2161b4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2161b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2161b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2161b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2161bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2161bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2161c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2161c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2161c4: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x2161c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2161c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2161c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2161cc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2161ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2161d0: 0xc08585a  jal         func_216168
    ctx->pc = 0x2161D0u;
    SET_GPR_U32(ctx, 31, 0x2161D8u);
    ctx->pc = 0x2161D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2161D0u;
    // 0x2161d4: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216168u;
    goto label_216168;
    ctx->pc = 0x2161D8u;
label_2161d8:
    // 0x2161d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2161d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2161dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2161dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2161e0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2161e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2161e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2161e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2161e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2161e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2161ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2161ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2161F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2161ECu;
        // 0x2161f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2161ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2161F4u;
    // 0x2161f4: 0x0  nop
    ctx->pc = 0x2161f4u;
    // NOP
    if (ctx->pc == 0x2161f4u) { ctx->pc = 0x2161f8u; }
}
