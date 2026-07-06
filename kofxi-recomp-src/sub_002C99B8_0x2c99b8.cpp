#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C99B8
// Address: 0x2c99b8 - 0x2c9a48
void sub_002C99B8_0x2c99b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C99B8_0x2c99b8");
#endif

    switch (ctx->pc) {
        case 0x2c9a08u: goto label_2c9a08;
        case 0x2c9a28u: goto label_2c9a28;
        default: break;
    }

    ctx->pc = 0x2c99b8u;

    // 0x2c99b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c99b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c99bc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2c99bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c99c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c99c4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2c99c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c99c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c99cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c99ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c99d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c99d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c99d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99d8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c99d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2c99dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c99dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99e0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c99e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c99e4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2c99e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c99e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99ec: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C99ECu;
    {
        const bool branch_taken_0x2c99ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C99F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C99ECu;
            // 0x2c99f0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99ec) {
            ctx->pc = 0x2C9A00u;
            goto label_2c9a00;
        }
    }
    ctx->pc = 0x2C99F4u;
    // 0x2c99f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C99F4u;
    {
        const bool branch_taken_0x2c99f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C99F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C99F4u;
            // 0x2c99f8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99f4) {
            ctx->pc = 0x2C9A10u;
            goto label_2c9a10;
        }
    }
    ctx->pc = 0x2C99FCu;
    // 0x2c99fc: 0x0  nop
    ctx->pc = 0x2c99fcu;
    // NOP
label_2c9a00:
    // 0x2c9a00: 0xc0b5d24  jal         func_2D7490
    ctx->pc = 0x2C9A00u;
    SET_GPR_U32(ctx, 31, 0x2C9A08u);
    ctx->pc = 0x2C9A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A00u;
            // 0x2c9a04: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7490u;
    if (runtime->hasFunction(0x2D7490u)) {
        auto targetFn = runtime->lookupFunction(0x2D7490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A08u; }
        if (ctx->pc != 0x2C9A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D7490_0x2d7490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A08u; }
        if (ctx->pc != 0x2C9A08u) { return; }
    }
    ctx->pc = 0x2C9A08u;
label_2c9a08:
    // 0x2c9a08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9A08u;
    {
        const bool branch_taken_0x2c9a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A08u;
            // 0x2c9a0c: 0x24020803  addiu       $v0, $zero, 0x803 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a08) {
            ctx->pc = 0x2C9A28u;
            goto label_2c9a28;
        }
    }
    ctx->pc = 0x2C9A10u;
label_2c9a10:
    // 0x2c9a10: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2c9a10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9a14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c9a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c9a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a20: 0xc0b2692  jal         func_2C9A48
    ctx->pc = 0x2C9A20u;
    SET_GPR_U32(ctx, 31, 0x2C9A28u);
    ctx->pc = 0x2C9A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A20u;
            // 0x2c9a24: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9A48u;
    if (runtime->hasFunction(0x2C9A48u)) {
        auto targetFn = runtime->lookupFunction(0x2C9A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A28u; }
        if (ctx->pc != 0x2C9A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C9A48_0x2c9a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A28u; }
        if (ctx->pc != 0x2C9A28u) { return; }
    }
    ctx->pc = 0x2C9A28u;
label_2c9a28:
    // 0x2c9a28: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c9a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9a2c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c9a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c9a30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c9a30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9a34: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c9a34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c9a38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c9a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A3Cu;
            // 0x2c9a40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9A44u;
    // 0x2c9a44: 0x0  nop
    ctx->pc = 0x2c9a44u;
    // NOP
    ctx->pc = 0x2c9a48u;
}
