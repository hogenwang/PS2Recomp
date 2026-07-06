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

// Function: sub_002162F0
// Address: 0x2162f0 - 0x216380
void sub_002162F0_0x2162f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002162F0_0x2162f0");
#endif

    switch (ctx->pc) {
        case 0x216328u: goto label_216328;
        case 0x216360u: goto label_216360;
        default: break;
    }

    ctx->pc = 0x2162f0u;

label_2162f0:
    // 0x2162f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2162f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2162f4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2162f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2162f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2162f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2162fc: 0x24840c98  addiu       $a0, $a0, 0xC98
    ctx->pc = 0x2162fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3224));
    // 0x216300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216304: 0x8043e52  j           func_10F948
    ctx->pc = 0x216304u;
    ctx->pc = 0x216308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216304u;
    // 0x216308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21630Cu;
    // 0x21630c: 0x0  nop
    ctx->pc = 0x21630cu;
    // NOP
    // 0x216310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216314: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x216314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216318: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x216318u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21631c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21631cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216320: 0xc0858bc  jal         func_2162F0
    ctx->pc = 0x216320u;
    SET_GPR_U32(ctx, 31, 0x216328u);
    ctx->pc = 0x216324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216320u;
    // 0x216324: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2162F0u;
    goto label_2162f0;
    ctx->pc = 0x216328u;
label_216328:
    // 0x216328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21632c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21632cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216330: 0x3e00008  jr          $ra
    ctx->pc = 0x216330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216330u;
        // 0x216334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216338u;
    // 0x216338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21633c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21633cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216344: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x216348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21634c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x21634cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216350: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x216350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216354: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x216354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216358: 0xc0858bc  jal         func_2162F0
    ctx->pc = 0x216358u;
    SET_GPR_U32(ctx, 31, 0x216360u);
    ctx->pc = 0x21635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216358u;
    // 0x21635c: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2162F0u;
    goto label_2162f0;
    ctx->pc = 0x216360u;
label_216360:
    // 0x216360: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x216360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x216364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x216364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216368: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x216368u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21636c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21636cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216374: 0x3e00008  jr          $ra
    ctx->pc = 0x216374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216374u;
        // 0x216378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21637Cu;
    // 0x21637c: 0x0  nop
    ctx->pc = 0x21637cu;
    // NOP
}
