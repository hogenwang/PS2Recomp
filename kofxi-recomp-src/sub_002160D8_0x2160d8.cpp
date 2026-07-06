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

// Function: sub_002160D8
// Address: 0x2160d8 - 0x216168
void sub_002160D8_0x2160d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002160D8_0x2160d8");
#endif

    switch (ctx->pc) {
        case 0x216110u: goto label_216110;
        case 0x216148u: goto label_216148;
        default: break;
    }

    ctx->pc = 0x2160d8u;

label_2160d8:
    // 0x2160d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2160d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2160dc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2160dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2160e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2160e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2160e4: 0x24840c38  addiu       $a0, $a0, 0xC38
    ctx->pc = 0x2160e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3128));
    // 0x2160e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2160e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2160ec: 0x8043e52  j           func_10F948
    ctx->pc = 0x2160ECu;
    ctx->pc = 0x2160F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2160ECu;
    // 0x2160f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x2160F4u;
    // 0x2160f4: 0x0  nop
    ctx->pc = 0x2160f4u;
    // NOP
    // 0x2160f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2160f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2160fc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2160fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216100: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x216100u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216108: 0xc085836  jal         func_2160D8
    ctx->pc = 0x216108u;
    SET_GPR_U32(ctx, 31, 0x216110u);
    ctx->pc = 0x21610Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216108u;
    // 0x21610c: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2160D8u;
    goto label_2160d8;
    ctx->pc = 0x216110u;
label_216110:
    // 0x216110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216114: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x216114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216118: 0x3e00008  jr          $ra
    ctx->pc = 0x216118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216118u;
        // 0x21611c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216120u;
    // 0x216120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216124: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x216124u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216128: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21612c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21612cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216130: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x216130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x216134: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x216134u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216138: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x216138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21613c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x21613cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216140: 0xc085836  jal         func_2160D8
    ctx->pc = 0x216140u;
    SET_GPR_U32(ctx, 31, 0x216148u);
    ctx->pc = 0x216144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216140u;
    // 0x216144: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2160D8u;
    goto label_2160d8;
    ctx->pc = 0x216148u;
label_216148:
    // 0x216148: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x216148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21614c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21614cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216150: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x216150u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x216154: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21615c: 0x3e00008  jr          $ra
    ctx->pc = 0x21615Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21615Cu;
        // 0x216160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21615Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216164u;
    // 0x216164: 0x0  nop
    ctx->pc = 0x216164u;
    // NOP
    if (ctx->pc == 0x216164u) { ctx->pc = 0x216168u; }
}
