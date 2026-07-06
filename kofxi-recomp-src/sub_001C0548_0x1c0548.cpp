#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0548
// Address: 0x1c0548 - 0x1c05f8
void sub_001C0548_0x1c0548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0548_0x1c0548");
#endif

    switch (ctx->pc) {
        case 0x1c0584u: goto label_1c0584;
        case 0x1c05d0u: goto label_1c05d0;
        default: break;
    }

    ctx->pc = 0x1c0548u;

    // 0x1c0548: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c0548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c054c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c054cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c0554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c0558: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1c0558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c055c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c055cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c0560: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c0560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0564: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c0564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c0568: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1c0568u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c056c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c056cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c0570: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c0570u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0574: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c0574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c0578: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c0578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c057c: 0xc0736de  jal         func_1CDB78
    ctx->pc = 0x1C057Cu;
    SET_GPR_U32(ctx, 31, 0x1C0584u);
    ctx->pc = 0x1C0580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C057Cu;
            // 0x1c0580: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB78u;
    if (runtime->hasFunction(0x1CDB78u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0584u; }
        if (ctx->pc != 0x1C0584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDB78_0x1cdb78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0584u; }
        if (ctx->pc != 0x1C0584u) { return; }
    }
    ctx->pc = 0x1C0584u;
label_1c0584:
    // 0x1c0584: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x1c0584u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c0588: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0588u;
    {
        const bool branch_taken_0x1c0588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C058Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0588u;
            // 0x1c058c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0588) {
            ctx->pc = 0x1C05A0u;
            goto label_1c05a0;
        }
    }
    ctx->pc = 0x1C0590u;
    // 0x1c0590: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0590u;
    {
        const bool branch_taken_0x1c0590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0590u;
            // 0x1c0594: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0590) {
            ctx->pc = 0x1C05A0u;
            goto label_1c05a0;
        }
    }
    ctx->pc = 0x1C0598u;
    // 0x1c0598: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C0598u;
    {
        const bool branch_taken_0x1c0598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0598) {
            ctx->pc = 0x1C05C8u;
            goto label_1c05c8;
        }
    }
    ctx->pc = 0x1C05A0u;
label_1c05a0:
    // 0x1c05a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c05a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c05a4: 0xae120030  sw          $s2, 0x30($s0)
    ctx->pc = 0x1c05a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
    // 0x1c05a8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1c05a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c05ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c05acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c05b0: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1c05b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c05b4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1c05b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c05b8: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x1c05b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x1c05bc: 0xfe130020  sd          $s3, 0x20($s0)
    ctx->pc = 0x1c05bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 19));
    // 0x1c05c0: 0xfe150028  sd          $s5, 0x28($s0)
    ctx->pc = 0x1c05c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 21));
    // 0x1c05c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c05c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1c05c8:
    // 0x1c05c8: 0xc0736fc  jal         func_1CDBF0
    ctx->pc = 0x1C05C8u;
    SET_GPR_U32(ctx, 31, 0x1C05D0u);
    ctx->pc = 0x1CDBF0u;
    if (runtime->hasFunction(0x1CDBF0u)) {
        auto targetFn = runtime->lookupFunction(0x1CDBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C05D0u; }
        if (ctx->pc != 0x1C05D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDBF0_0x1cdbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C05D0u; }
        if (ctx->pc != 0x1C05D0u) { return; }
    }
    ctx->pc = 0x1C05D0u;
label_1c05d0:
    // 0x1c05d0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1c05d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c05d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c05d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c05d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c05d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c05dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c05dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c05e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c05e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c05e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c05e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c05e8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c05e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c05ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c05ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c05f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C05F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C05F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C05F0u;
            // 0x1c05f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C05F8u;
    ctx->pc = 0x1c05f8u;
}
