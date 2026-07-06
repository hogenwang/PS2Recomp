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

// Function: sub_00215010
// Address: 0x215010 - 0x2150a0
void sub_00215010_0x215010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215010_0x215010");
#endif

    switch (ctx->pc) {
        case 0x215048u: goto label_215048;
        case 0x215080u: goto label_215080;
        default: break;
    }

    ctx->pc = 0x215010u;

label_215010:
    // 0x215010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215014: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21501c: 0x24840a08  addiu       $a0, $a0, 0xA08
    ctx->pc = 0x21501cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2568));
    // 0x215020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215024: 0x8043e52  j           func_10F948
    ctx->pc = 0x215024u;
    ctx->pc = 0x215028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215024u;
    // 0x215028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21502Cu;
    // 0x21502c: 0x0  nop
    ctx->pc = 0x21502cu;
    // NOP
    // 0x215030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215034: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x215034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x215038: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x215038u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21503c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21503cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215040: 0xc085404  jal         func_215010
    ctx->pc = 0x215040u;
    SET_GPR_U32(ctx, 31, 0x215048u);
    ctx->pc = 0x215044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215040u;
    // 0x215044: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215010u;
    goto label_215010;
    ctx->pc = 0x215048u;
label_215048:
    // 0x215048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21504c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21504cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215050: 0x3e00008  jr          $ra
    ctx->pc = 0x215050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215050u;
        // 0x215054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215058u;
    // 0x215058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21505c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21505cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x215060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215064: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215068: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x215068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21506c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x21506cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x215070: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x215070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215074: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x215074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x215078: 0xc085404  jal         func_215010
    ctx->pc = 0x215078u;
    SET_GPR_U32(ctx, 31, 0x215080u);
    ctx->pc = 0x21507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215078u;
    // 0x21507c: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215010u;
    goto label_215010;
    ctx->pc = 0x215080u;
label_215080:
    // 0x215080: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x215080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215084: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x215084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215088: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x215088u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21508c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21508cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215094: 0x3e00008  jr          $ra
    ctx->pc = 0x215094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215094u;
        // 0x215098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21509Cu;
    // 0x21509c: 0x0  nop
    ctx->pc = 0x21509cu;
    // NOP
}
