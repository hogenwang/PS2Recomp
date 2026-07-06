#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C6520
// Address: 0x2c6520 - 0x2c65d8
void sub_002C6520_0x2c6520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6520_0x2c6520");
#endif

    switch (ctx->pc) {
        case 0x2c6558u: goto label_2c6558;
        case 0x2c6570u: goto label_2c6570;
        case 0x2c6578u: goto label_2c6578;
        case 0x2c65c0u: goto label_2c65c0;
        default: break;
    }

    ctx->pc = 0x2c6520u;

    // 0x2c6520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c6520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c6524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c6524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c6528: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c6528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c652c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c652cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c6530: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c6530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6534: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c6534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c6538: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c6538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c653c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c653cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c6540: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2c6540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c6544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c6548: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6548u;
    {
        const bool branch_taken_0x2c6548 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C654Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6548u;
            // 0x2c654c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6548) {
            ctx->pc = 0x2C6564u;
            goto label_2c6564;
        }
    }
    ctx->pc = 0x2C6550u;
    // 0x2c6550: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2C6550u;
    SET_GPR_U32(ctx, 31, 0x2C6558u);
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6558u; }
        if (ctx->pc != 0x2C6558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6558u; }
        if (ctx->pc != 0x2C6558u) { return; }
    }
    ctx->pc = 0x2C6558u;
label_2c6558:
    // 0x2c6558: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c6558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c655c: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C655Cu;
    {
        const bool branch_taken_0x2c655c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c655c) {
            ctx->pc = 0x2C6560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C655Cu;
            // 0x2c6560: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C65A4u;
            goto label_2c65a4;
        }
    }
    ctx->pc = 0x2C6564u;
label_2c6564:
    // 0x2c6564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c6564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6568: 0xc0b1b14  jal         func_2C6C50
    ctx->pc = 0x2C6568u;
    SET_GPR_U32(ctx, 31, 0x2C6570u);
    ctx->pc = 0x2C656Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6568u;
            // 0x2c656c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6C50u;
    if (runtime->hasFunction(0x2C6C50u)) {
        auto targetFn = runtime->lookupFunction(0x2C6C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6570u; }
        if (ctx->pc != 0x2C6570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6C50_0x2c6c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6570u; }
        if (ctx->pc != 0x2C6570u) { return; }
    }
    ctx->pc = 0x2C6570u;
label_2c6570:
    // 0x2c6570: 0xc0b5f28  jal         func_2D7CA0
    ctx->pc = 0x2C6570u;
    SET_GPR_U32(ctx, 31, 0x2C6578u);
    ctx->pc = 0x2C6574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6570u;
            // 0x2c6574: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CA0u;
    if (runtime->hasFunction(0x2D7CA0u)) {
        auto targetFn = runtime->lookupFunction(0x2D7CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6578u; }
        if (ctx->pc != 0x2C6578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D7CA0_0x2d7ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6578u; }
        if (ctx->pc != 0x2C6578u) { return; }
    }
    ctx->pc = 0x2C6578u;
label_2c6578:
    // 0x2c6578: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2c6578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2c657c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c657cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2c6580: 0x244267d8  addiu       $v0, $v0, 0x67D8
    ctx->pc = 0x2c6580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26584));
    // 0x2c6584: 0x24637e98  addiu       $v1, $v1, 0x7E98
    ctx->pc = 0x2c6584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32408));
    // 0x2c6588: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x2c6588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x2c658c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2c658cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2c6590: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x2c6590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x2c6594: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2c6594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2c6598: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2c6598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2c659c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c659cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c65a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c65a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c65a4:
    // 0x2c65a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c65a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c65a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c65a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c65ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c65acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c65b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c65b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c65b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C65B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C65B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C65B4u;
            // 0x2c65b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C65BCu;
    // 0x2c65bc: 0x0  nop
    ctx->pc = 0x2c65bcu;
    // NOP
label_2c65c0:
    // 0x2c65c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c65c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c65c4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2c65c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2c65c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c65c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c65cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c65ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c65d0: 0x80b5f30  j           func_2D7CC0
    ctx->pc = 0x2C65D0u;
    ctx->pc = 0x2C65D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C65D0u;
            // 0x2c65d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CC0u;
    {
        auto targetFn = runtime->lookupFunction(0x2D7CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2C65D8u;
    ctx->pc = 0x2c65d8u;
}
