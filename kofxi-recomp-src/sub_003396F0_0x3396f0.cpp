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

// Function: sub_003396F0
// Address: 0x3396f0 - 0x3397f0
void sub_003396F0_0x3396f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003396F0_0x3396f0");
#endif

    switch (ctx->pc) {
        case 0x339748u: goto label_339748;
        case 0x3397c0u: goto label_3397c0;
        default: break;
    }

    ctx->pc = 0x3396f0u;

    // 0x3396f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3396f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3396f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3396f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3396f8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3396f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3396fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3396fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339700: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x339700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x339704: 0x7263c  dsll32      $a0, $a3, 24
    ctx->pc = 0x339704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 24));
    // 0x339708: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x339708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x33970c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x33970cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x339710: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x339710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x339714: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x339714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339718: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x339718u;
    {
        const bool branch_taken_0x339718 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339718u;
        // 0x33971c: 0x24110180  addiu       $s1, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339718) {
            ctx->pc = 0x339728u;
            goto label_339728;
        }
    }
    ctx->pc = 0x339720u;
    // 0x339720: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x339720u;
    {
        const bool branch_taken_0x339720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339720u;
        // 0x339724: 0x24110140  addiu       $s1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339720) {
            ctx->pc = 0x339738u;
            goto label_339738;
        }
    }
    ctx->pc = 0x339728u;
label_339728:
    // 0x339728: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x339728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33972c: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33972Cu;
    {
        const bool branch_taken_0x33972c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33972c) {
            ctx->pc = 0x339730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33972Cu;
            // 0x339730: 0x82430000  lb          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33973Cu;
            goto label_33973c;
        }
    }
    ctx->pc = 0x339734u;
    // 0x339734: 0x241101c0  addiu       $s1, $zero, 0x1C0
    ctx->pc = 0x339734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_339738:
    // 0x339738: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x339738u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_33973c:
    // 0x33973c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x33973Cu;
    {
        const bool branch_taken_0x33973c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33973c) {
            ctx->pc = 0x3397D0u;
            goto label_3397d0;
        }
    }
    ctx->pc = 0x339744u;
    // 0x339744: 0x24b0fff0  addiu       $s0, $a1, -0x10
    ctx->pc = 0x339744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_339748:
    // 0x339748: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x339748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33974c: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x33974cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x339750: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x339750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x339754: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x339754u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x339758: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x339758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33975c: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x33975cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x339760: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x339760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x339764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x339764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339768: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x339768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x33976c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x33976cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x339770: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339770u;
    {
        const bool branch_taken_0x339770 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x339774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339770u;
        // 0x339774: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x339770) {
            ctx->pc = 0x339784u;
            goto label_339784;
        }
    }
    ctx->pc = 0x339778u;
    // 0x339778: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x339778u;
    {
        const bool branch_taken_0x339778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339778) {
            ctx->pc = 0x33977Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339778u;
            // 0x33977c: 0x24900  sll         $t1, $v0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339788u;
            goto label_339788;
        }
    }
    ctx->pc = 0x339780u;
    // 0x339780: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x339780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_339784:
    // 0x339784: 0x24900  sll         $t1, $v0, 4
    ctx->pc = 0x339784u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_339788:
    // 0x339788: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x339788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x33978c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33978Cu;
    {
        const bool branch_taken_0x33978c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x339790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33978Cu;
        // 0x339790: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33978c) {
            ctx->pc = 0x33979Cu;
            goto label_33979c;
        }
    }
    ctx->pc = 0x339794u;
    // 0x339794: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x339794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x339798: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x339798u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_33979c:
    // 0x33979c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x33979cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3397a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3397a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3397a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3397a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3397a8: 0x2225021  addu        $t2, $s1, $v0
    ctx->pc = 0x3397a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3397ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3397acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3397b0: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x3397b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x3397b4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3397b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3397b8: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x3397B8u;
    SET_GPR_U32(ctx, 31, 0x3397C0u);
    ctx->pc = 0x3397BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3397B8u;
    // 0x3397bc: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x3397B8u, 0x3397C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3397C0u;
label_3397c0:
    // 0x3397c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3397c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3397c4: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x3397c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3397c8: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3397C8u;
    {
        const bool branch_taken_0x3397c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3397CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3397C8u;
        // 0x3397cc: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3397c8) {
            ctx->pc = 0x339748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_339748;
        }
    }
    ctx->pc = 0x3397D0u;
label_3397d0:
    // 0x3397d0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3397d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3397d4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3397d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3397d8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3397d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3397dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3397dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3397e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3397e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3397e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3397E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3397E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3397E4u;
        // 0x3397e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3397E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3397ECu;
    // 0x3397ec: 0x0  nop
    ctx->pc = 0x3397ecu;
    // NOP
}
