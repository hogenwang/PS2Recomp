#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020E440
// Address: 0x20e440 - 0x20e4c0
void sub_0020E440_0x20e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E440_0x20e440");
#endif

    switch (ctx->pc) {
        case 0x20e478u: goto label_20e478;
        case 0x20e488u: goto label_20e488;
        default: break;
    }

    ctx->pc = 0x20e440u;

    // 0x20e440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20e440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20e444: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20e444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20e448: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20e448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20e44c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20e44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20e450: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20e450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20e454: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20e454u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20e458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20e45c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20e45cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20e460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e464: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20e464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e468: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x20e468u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20e46c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x20E46Cu;
    {
        const bool branch_taken_0x20e46c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20E470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E46Cu;
            // 0x20e470: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e46c) {
            ctx->pc = 0x20E4A0u;
            goto label_20e4a0;
        }
    }
    ctx->pc = 0x20E474u;
    // 0x20e474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20e478:
    // 0x20e478: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20e478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e47c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x20e47cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e480: 0xc083814  jal         func_20E050
    ctx->pc = 0x20E480u;
    SET_GPR_U32(ctx, 31, 0x20E488u);
    ctx->pc = 0x20E484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E480u;
            // 0x20e484: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E050u;
    if (runtime->hasFunction(0x20E050u)) {
        auto targetFn = runtime->lookupFunction(0x20E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E488u; }
        if (ctx->pc != 0x20E488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E050_0x20e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E488u; }
        if (ctx->pc != 0x20E488u) { return; }
    }
    ctx->pc = 0x20E488u;
label_20e488:
    // 0x20e488: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x20e488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x20e48c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20e48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20e490: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x20e490u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20e494: 0x5483fff8  bnel        $a0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20E494u;
    {
        const bool branch_taken_0x20e494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20e494) {
            ctx->pc = 0x20E498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20E494u;
            // 0x20e498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20E478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20e478;
        }
    }
    ctx->pc = 0x20E49Cu;
    // 0x20e49c: 0x0  nop
    ctx->pc = 0x20e49cu;
    // NOP
label_20e4a0:
    // 0x20e4a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20e4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e4a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20e4a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e4a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20e4a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e4ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20e4acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e4b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e4b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x20E4B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E4B4u;
            // 0x20e4b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20E4BCu;
    // 0x20e4bc: 0x0  nop
    ctx->pc = 0x20e4bcu;
    // NOP
    ctx->pc = 0x20e4c0u;
}
