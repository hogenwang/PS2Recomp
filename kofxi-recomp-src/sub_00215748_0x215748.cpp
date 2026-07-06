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

// Function: sub_00215748
// Address: 0x215748 - 0x2157d8
void sub_00215748_0x215748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215748_0x215748");
#endif

    switch (ctx->pc) {
        case 0x215780u: goto label_215780;
        case 0x2157b8u: goto label_2157b8;
        default: break;
    }

    ctx->pc = 0x215748u;

label_215748:
    // 0x215748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21574c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21574cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215754: 0x24840ad8  addiu       $a0, $a0, 0xAD8
    ctx->pc = 0x215754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2776));
    // 0x215758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21575c: 0x8043e52  j           func_10F948
    ctx->pc = 0x21575Cu;
    ctx->pc = 0x215760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21575Cu;
    // 0x215760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x215764u;
    // 0x215764: 0x0  nop
    ctx->pc = 0x215764u;
    // NOP
    // 0x215768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21576c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21576cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x215770: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x215770u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x215774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215778: 0xc0855d2  jal         func_215748
    ctx->pc = 0x215778u;
    SET_GPR_U32(ctx, 31, 0x215780u);
    ctx->pc = 0x21577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215778u;
    // 0x21577c: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215748u;
    goto label_215748;
    ctx->pc = 0x215780u;
label_215780:
    // 0x215780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x215784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215788: 0x3e00008  jr          $ra
    ctx->pc = 0x215788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215788u;
        // 0x21578c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215790u;
    // 0x215790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215794: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x215794u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x215798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21579c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21579cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2157a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2157a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2157a4: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x2157a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2157a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2157a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157ac: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2157acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2157b0: 0xc0855d2  jal         func_215748
    ctx->pc = 0x2157B0u;
    SET_GPR_U32(ctx, 31, 0x2157B8u);
    ctx->pc = 0x2157B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2157B0u;
    // 0x2157b4: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215748u;
    goto label_215748;
    ctx->pc = 0x2157B8u;
label_2157b8:
    // 0x2157b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2157b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2157bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2157bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2157c0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2157c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2157c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2157c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2157c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2157c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2157cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2157CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2157D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157CCu;
        // 0x2157d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2157CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2157D4u;
    // 0x2157d4: 0x0  nop
    ctx->pc = 0x2157d4u;
    // NOP
}
