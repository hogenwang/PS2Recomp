#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020E370
// Address: 0x20e370 - 0x20e440
void sub_0020E370_0x20e370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E370_0x20e370");
#endif

    switch (ctx->pc) {
        case 0x20e3b8u: goto label_20e3b8;
        case 0x20e3c8u: goto label_20e3c8;
        case 0x20e3dcu: goto label_20e3dc;
        default: break;
    }

    ctx->pc = 0x20e370u;

    // 0x20e370: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20e370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20e374: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20e374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20e378: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x20e378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x20e37c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x20e37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x20e380: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x20e380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x20e384: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x20e384u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e388: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20e388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20e38c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x20e38cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e390: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20e390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20e394: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x20e394u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e398: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20e398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20e39c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x20e39cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e3a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20e3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20e3a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20e3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20e3a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20e3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e3ac: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x20e3acu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20e3b0: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x20E3B0u;
    {
        const bool branch_taken_0x20e3b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20E3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E3B0u;
            // 0x20e3b4: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3b0) {
            ctx->pc = 0x20E408u;
            goto label_20e408;
        }
    }
    ctx->pc = 0x20E3B8u;
label_20e3b8:
    // 0x20e3b8: 0x1aa0000d  blez        $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x20E3B8u;
    {
        const bool branch_taken_0x20e3b8 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x20E3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E3B8u;
            // 0x20e3bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3b8) {
            ctx->pc = 0x20E3F0u;
            goto label_20e3f0;
        }
    }
    ctx->pc = 0x20E3C0u;
    // 0x20e3c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20e3c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e3c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20e3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e3c8:
    // 0x20e3c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x20e3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e3cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20e3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e3d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20e3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e3d4: 0xc083814  jal         func_20E050
    ctx->pc = 0x20E3D4u;
    SET_GPR_U32(ctx, 31, 0x20E3DCu);
    ctx->pc = 0x20E3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E3D4u;
            // 0x20e3d8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E050u;
    if (runtime->hasFunction(0x20E050u)) {
        auto targetFn = runtime->lookupFunction(0x20E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3DCu; }
        if (ctx->pc != 0x20E3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E050_0x20e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3DCu; }
        if (ctx->pc != 0x20E3DCu) { return; }
    }
    ctx->pc = 0x20E3DCu;
label_20e3dc:
    // 0x20e3dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20e3dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20e3e0: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x20e3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x20e3e4: 0x255182a  slt         $v1, $s2, $s5
    ctx->pc = 0x20e3e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x20e3e8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x20E3E8u;
    {
        const bool branch_taken_0x20e3e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E3E8u;
            // 0x20e3ec: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3e8) {
            ctx->pc = 0x20E3C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20e3c8;
        }
    }
    ctx->pc = 0x20E3F0u;
label_20e3f0:
    // 0x20e3f0: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x20e3f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x20e3f4: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x20e3f4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20e3f8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20e3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20e3fc: 0x1483ffee  bne         $a0, $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x20E3FCu;
    {
        const bool branch_taken_0x20e3fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20e3fc) {
            ctx->pc = 0x20E3B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20e3b8;
        }
    }
    ctx->pc = 0x20E404u;
    // 0x20e404: 0x0  nop
    ctx->pc = 0x20e404u;
    // NOP
label_20e408:
    // 0x20e408: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x20e408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20e40c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x20e40cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20e410: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x20e410u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e414: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20e414u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e418: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20e418u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e41c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20e41cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e420: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20e420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20e424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e42c: 0x3e00008  jr          $ra
    ctx->pc = 0x20E42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E42Cu;
            // 0x20e430: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20E434u;
    // 0x20e434: 0x0  nop
    ctx->pc = 0x20e434u;
    // NOP
    // 0x20e438: 0x0  nop
    ctx->pc = 0x20e438u;
    // NOP
    // 0x20e43c: 0x0  nop
    ctx->pc = 0x20e43cu;
    // NOP
    ctx->pc = 0x20e440u;
}
