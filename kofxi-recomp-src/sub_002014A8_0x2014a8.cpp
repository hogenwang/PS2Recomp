#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002014A8
// Address: 0x2014a8 - 0x201550
void sub_002014A8_0x2014a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002014A8_0x2014a8");
#endif

    switch (ctx->pc) {
        case 0x2014e8u: goto label_2014e8;
        default: break;
    }

    ctx->pc = 0x2014a8u;

    // 0x2014a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2014a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2014ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2014acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2014b0: 0x88100  sll         $s0, $t0, 4
    ctx->pc = 0x2014b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2014b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2014b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2014b8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2014b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2014bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2014c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2014c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2014c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2014c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2014c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2014ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2014d0: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2014d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2014d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2014d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014d8: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x2014d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x2014dc: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x2014dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2014e0: 0xc080218  jal         func_200860
    ctx->pc = 0x2014E0u;
    SET_GPR_U32(ctx, 31, 0x2014E8u);
    ctx->pc = 0x2014E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2014E0u;
            // 0x2014e4: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200860u;
    if (runtime->hasFunction(0x200860u)) {
        auto targetFn = runtime->lookupFunction(0x200860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2014E8u; }
        if (ctx->pc != 0x2014E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200860_0x200860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2014E8u; }
        if (ctx->pc != 0x2014E8u) { return; }
    }
    ctx->pc = 0x2014E8u;
label_2014e8:
    // 0x2014e8: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x2014e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2014ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2014ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2014f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2014f4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2014F4u;
    {
        const bool branch_taken_0x2014f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2014F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2014F4u;
            // 0x2014f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014f4) {
            ctx->pc = 0x201518u;
            goto label_201518;
        }
    }
    ctx->pc = 0x2014FCu;
    // 0x2014fc: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x2014fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x201500: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x201500u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x201504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201508: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x201508u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20150c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20150Cu;
    {
        const bool branch_taken_0x20150c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20150Cu;
            // 0x201510: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20150c) {
            ctx->pc = 0x201520u;
            goto label_201520;
        }
    }
    ctx->pc = 0x201514u;
    // 0x201514: 0x0  nop
    ctx->pc = 0x201514u;
    // NOP
label_201518:
    // 0x201518: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x201518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x20151c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x20151cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_201520:
    // 0x201520: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x201520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x201524: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x201524u;
    {
        const bool branch_taken_0x201524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201524u;
            // 0x201528: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201524) {
            ctx->pc = 0x201530u;
            goto label_201530;
        }
    }
    ctx->pc = 0x20152Cu;
    // 0x20152c: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x20152cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_201530:
    // 0x201530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201534: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201538: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x201538u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20153c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20153cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x201540: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x201540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201544: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x201544u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x201548: 0x3e00008  jr          $ra
    ctx->pc = 0x201548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20154Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201548u;
            // 0x20154c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201550u;
    ctx->pc = 0x201550u;
}
