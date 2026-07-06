#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B0818
// Address: 0x2b0818 - 0x2b09f0
void sub_002B0818_0x2b0818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0818_0x2b0818");
#endif

    switch (ctx->pc) {
        case 0x2b0818u: goto label_2b0818;
        case 0x2b081cu: goto label_2b081c;
        case 0x2b0820u: goto label_2b0820;
        case 0x2b0824u: goto label_2b0824;
        case 0x2b0828u: goto label_2b0828;
        case 0x2b082cu: goto label_2b082c;
        case 0x2b0830u: goto label_2b0830;
        case 0x2b0834u: goto label_2b0834;
        case 0x2b0838u: goto label_2b0838;
        case 0x2b083cu: goto label_2b083c;
        case 0x2b0840u: goto label_2b0840;
        case 0x2b0844u: goto label_2b0844;
        case 0x2b0848u: goto label_2b0848;
        case 0x2b084cu: goto label_2b084c;
        case 0x2b0850u: goto label_2b0850;
        case 0x2b0854u: goto label_2b0854;
        case 0x2b0858u: goto label_2b0858;
        case 0x2b085cu: goto label_2b085c;
        case 0x2b0860u: goto label_2b0860;
        case 0x2b0864u: goto label_2b0864;
        case 0x2b0868u: goto label_2b0868;
        case 0x2b086cu: goto label_2b086c;
        case 0x2b0870u: goto label_2b0870;
        case 0x2b0874u: goto label_2b0874;
        case 0x2b0878u: goto label_2b0878;
        case 0x2b087cu: goto label_2b087c;
        case 0x2b0880u: goto label_2b0880;
        case 0x2b0884u: goto label_2b0884;
        case 0x2b0888u: goto label_2b0888;
        case 0x2b088cu: goto label_2b088c;
        case 0x2b0890u: goto label_2b0890;
        case 0x2b0894u: goto label_2b0894;
        case 0x2b0898u: goto label_2b0898;
        case 0x2b089cu: goto label_2b089c;
        case 0x2b08a0u: goto label_2b08a0;
        case 0x2b08a4u: goto label_2b08a4;
        case 0x2b08a8u: goto label_2b08a8;
        case 0x2b08acu: goto label_2b08ac;
        case 0x2b08b0u: goto label_2b08b0;
        case 0x2b08b4u: goto label_2b08b4;
        case 0x2b08b8u: goto label_2b08b8;
        case 0x2b08bcu: goto label_2b08bc;
        case 0x2b08c0u: goto label_2b08c0;
        case 0x2b08c4u: goto label_2b08c4;
        case 0x2b08c8u: goto label_2b08c8;
        case 0x2b08ccu: goto label_2b08cc;
        case 0x2b08d0u: goto label_2b08d0;
        case 0x2b08d4u: goto label_2b08d4;
        case 0x2b08d8u: goto label_2b08d8;
        case 0x2b08dcu: goto label_2b08dc;
        case 0x2b08e0u: goto label_2b08e0;
        case 0x2b08e4u: goto label_2b08e4;
        case 0x2b08e8u: goto label_2b08e8;
        case 0x2b08ecu: goto label_2b08ec;
        case 0x2b08f0u: goto label_2b08f0;
        case 0x2b08f4u: goto label_2b08f4;
        case 0x2b08f8u: goto label_2b08f8;
        case 0x2b08fcu: goto label_2b08fc;
        case 0x2b0900u: goto label_2b0900;
        case 0x2b0904u: goto label_2b0904;
        case 0x2b0908u: goto label_2b0908;
        case 0x2b090cu: goto label_2b090c;
        case 0x2b0910u: goto label_2b0910;
        case 0x2b0914u: goto label_2b0914;
        case 0x2b0918u: goto label_2b0918;
        case 0x2b091cu: goto label_2b091c;
        case 0x2b0920u: goto label_2b0920;
        case 0x2b0924u: goto label_2b0924;
        case 0x2b0928u: goto label_2b0928;
        case 0x2b092cu: goto label_2b092c;
        case 0x2b0930u: goto label_2b0930;
        case 0x2b0934u: goto label_2b0934;
        case 0x2b0938u: goto label_2b0938;
        case 0x2b093cu: goto label_2b093c;
        case 0x2b0940u: goto label_2b0940;
        case 0x2b0944u: goto label_2b0944;
        case 0x2b0948u: goto label_2b0948;
        case 0x2b094cu: goto label_2b094c;
        case 0x2b0950u: goto label_2b0950;
        case 0x2b0954u: goto label_2b0954;
        case 0x2b0958u: goto label_2b0958;
        case 0x2b095cu: goto label_2b095c;
        case 0x2b0960u: goto label_2b0960;
        case 0x2b0964u: goto label_2b0964;
        case 0x2b0968u: goto label_2b0968;
        case 0x2b096cu: goto label_2b096c;
        case 0x2b0970u: goto label_2b0970;
        case 0x2b0974u: goto label_2b0974;
        case 0x2b0978u: goto label_2b0978;
        case 0x2b097cu: goto label_2b097c;
        case 0x2b0980u: goto label_2b0980;
        case 0x2b0984u: goto label_2b0984;
        case 0x2b0988u: goto label_2b0988;
        case 0x2b098cu: goto label_2b098c;
        case 0x2b0990u: goto label_2b0990;
        case 0x2b0994u: goto label_2b0994;
        case 0x2b0998u: goto label_2b0998;
        case 0x2b099cu: goto label_2b099c;
        case 0x2b09a0u: goto label_2b09a0;
        case 0x2b09a4u: goto label_2b09a4;
        case 0x2b09a8u: goto label_2b09a8;
        case 0x2b09acu: goto label_2b09ac;
        case 0x2b09b0u: goto label_2b09b0;
        case 0x2b09b4u: goto label_2b09b4;
        case 0x2b09b8u: goto label_2b09b8;
        case 0x2b09bcu: goto label_2b09bc;
        case 0x2b09c0u: goto label_2b09c0;
        case 0x2b09c4u: goto label_2b09c4;
        case 0x2b09c8u: goto label_2b09c8;
        case 0x2b09ccu: goto label_2b09cc;
        case 0x2b09d0u: goto label_2b09d0;
        case 0x2b09d4u: goto label_2b09d4;
        case 0x2b09d8u: goto label_2b09d8;
        case 0x2b09dcu: goto label_2b09dc;
        case 0x2b09e0u: goto label_2b09e0;
        case 0x2b09e4u: goto label_2b09e4;
        case 0x2b09e8u: goto label_2b09e8;
        case 0x2b09ecu: goto label_2b09ec;
        default: break;
    }

    ctx->pc = 0x2b0818u;

label_2b0818:
    // 0x2b0818: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b0818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2b081c:
    // 0x2b081c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2b081cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2b0820:
    // 0x2b0820: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b0820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2b0824:
    // 0x2b0824: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2b0824u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b0828:
    // 0x2b0828: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b0828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2b082c:
    // 0x2b082c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2b082cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b0830:
    // 0x2b0830: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b0830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2b0834:
    // 0x2b0834: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2b0834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b0838:
    // 0x2b0838: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b0838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b083c:
    // 0x2b083c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2b083cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b0840:
    // 0x2b0840: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2b0840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2b0844:
    // 0x2b0844: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b0844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0848:
    // 0x2b0848: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b0848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b084c:
    // 0x2b084c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b084cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b0850:
    // 0x2b0850: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x2b0850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2b0854:
    // 0x2b0854: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2b0854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_2b0858:
    // 0x2b0858: 0x40f809  jalr        $v0
label_2b085c:
    if (ctx->pc == 0x2B085Cu) {
        ctx->pc = 0x2B085Cu;
            // 0x2b085c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0860u;
        goto label_2b0860;
    }
    ctx->pc = 0x2B0858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B0860u);
        ctx->pc = 0x2B085Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0858u;
            // 0x2b085c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B0860u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B0860u; }
            if (ctx->pc != 0x2B0860u) { return; }
        }
        }
    }
    ctx->pc = 0x2B0860u;
label_2b0860:
    // 0x2b0860: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b0860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0864:
    // 0x2b0864: 0x2b1001a  div         $zero, $s5, $s1
    ctx->pc = 0x2b0864u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2b0868:
    // 0x2b0868: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
label_2b086c:
    if (ctx->pc == 0x2B086Cu) {
        ctx->pc = 0x2B086Cu;
            // 0x2b086c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x2B0870u;
        goto label_2b0870;
    }
    ctx->pc = 0x2B0868u;
    {
        const bool branch_taken_0x2b0868 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0868) {
            ctx->pc = 0x2B086Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0868u;
            // 0x2b086c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B0870u;
            goto label_2b0870;
        }
    }
    ctx->pc = 0x2B0870u;
label_2b0870:
    // 0x2b0870: 0x1010  mfhi        $v0
    ctx->pc = 0x2b0870u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2b0874:
    // 0x2b0874: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b0878:
    if (ctx->pc == 0x2B0878u) {
        ctx->pc = 0x2B0878u;
            // 0x2b0878: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2B087Cu;
        goto label_2b087c;
    }
    ctx->pc = 0x2B0874u;
    {
        const bool branch_taken_0x2b0874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0874u;
            // 0x2b0878: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0874) {
            ctx->pc = 0x2B0898u;
            goto label_2b0898;
        }
    }
    ctx->pc = 0x2B087Cu;
label_2b087c:
    // 0x2b087c: 0x240500a2  addiu       $a1, $zero, 0xA2
    ctx->pc = 0x2b087cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
label_2b0880:
    // 0x2b0880: 0x24060097  addiu       $a2, $zero, 0x97
    ctx->pc = 0x2b0880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
label_2b0884:
    // 0x2b0884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b0884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0888:
    // 0x2b0888: 0xc0a5648  jal         func_295920
label_2b088c:
    if (ctx->pc == 0x2B088Cu) {
        ctx->pc = 0x2B088Cu;
            // 0x2b088c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0890u;
        goto label_2b0890;
    }
    ctx->pc = 0x2B0888u;
    SET_GPR_U32(ctx, 31, 0x2B0890u);
    ctx->pc = 0x2B088Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0888u;
            // 0x2b088c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0890u; }
        if (ctx->pc != 0x2B0890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0890u; }
        if (ctx->pc != 0x2B0890u) { return; }
    }
    ctx->pc = 0x2B0890u;
label_2b0890:
    // 0x2b0890: 0x10000031  b           . + 4 + (0x31 << 2)
label_2b0894:
    if (ctx->pc == 0x2B0894u) {
        ctx->pc = 0x2B0894u;
            // 0x2b0894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0898u;
        goto label_2b0898;
    }
    ctx->pc = 0x2B0890u;
    {
        const bool branch_taken_0x2b0890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0890u;
            // 0x2b0894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0890) {
            ctx->pc = 0x2B0958u;
            goto label_2b0958;
        }
    }
    ctx->pc = 0x2B0898u;
label_2b0898:
    // 0x2b0898: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2b089c:
    if (ctx->pc == 0x2B089Cu) {
        ctx->pc = 0x2B08A0u;
        goto label_2b08a0;
    }
    ctx->pc = 0x2B0898u;
    {
        const bool branch_taken_0x2b0898 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0898) {
            ctx->pc = 0x2B08ACu;
            goto label_2b08ac;
        }
    }
    ctx->pc = 0x2B08A0u;
label_2b08a0:
    // 0x2b08a0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b08a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b08a4:
    // 0x2b08a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b08a8:
    if (ctx->pc == 0x2B08A8u) {
        ctx->pc = 0x2B08A8u;
            // 0x2b08a8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B08ACu;
        goto label_2b08ac;
    }
    ctx->pc = 0x2B08A4u;
    {
        const bool branch_taken_0x2b08a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B08A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B08A4u;
            // 0x2b08a8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b08a4) {
            ctx->pc = 0x2B08BCu;
            goto label_2b08bc;
        }
    }
    ctx->pc = 0x2B08ACu;
label_2b08ac:
    // 0x2b08ac: 0xc0af004  jal         func_2BC010
label_2b08b0:
    if (ctx->pc == 0x2B08B0u) {
        ctx->pc = 0x2B08B0u;
            // 0x2b08b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B08B4u;
        goto label_2b08b4;
    }
    ctx->pc = 0x2B08ACu;
    SET_GPR_U32(ctx, 31, 0x2B08B4u);
    ctx->pc = 0x2B08B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B08ACu;
            // 0x2b08b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (runtime->hasFunction(0x2BC010u)) {
        auto targetFn = runtime->lookupFunction(0x2BC010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B08B4u; }
        if (ctx->pc != 0x2B08B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC010_0x2bc010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B08B4u; }
        if (ctx->pc != 0x2B08B4u) { return; }
    }
    ctx->pc = 0x2B08B4u;
label_2b08b4:
    // 0x2b08b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2b08b8:
    if (ctx->pc == 0x2B08B8u) {
        ctx->pc = 0x2B08B8u;
            // 0x2b08b8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B08BCu;
        goto label_2b08bc;
    }
    ctx->pc = 0x2B08B4u;
    {
        const bool branch_taken_0x2b08b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B08B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B08B4u;
            // 0x2b08b8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b08b4) {
            ctx->pc = 0x2B08C4u;
            goto label_2b08c4;
        }
    }
    ctx->pc = 0x2B08BCu;
label_2b08bc:
    // 0x2b08bc: 0xc0af138  jal         func_2BC4E0
label_2b08c0:
    if (ctx->pc == 0x2B08C0u) {
        ctx->pc = 0x2B08C0u;
            // 0x2b08c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B08C4u;
        goto label_2b08c4;
    }
    ctx->pc = 0x2B08BCu;
    SET_GPR_U32(ctx, 31, 0x2B08C4u);
    ctx->pc = 0x2B08C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B08BCu;
            // 0x2b08c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC4E0u;
    if (runtime->hasFunction(0x2BC4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B08C4u; }
        if (ctx->pc != 0x2B08C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC4E0_0x2bc4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B08C4u; }
        if (ctx->pc != 0x2B08C4u) { return; }
    }
    ctx->pc = 0x2B08C4u;
label_2b08c4:
    // 0x2b08c4: 0x1aa0001d  blez        $s5, . + 4 + (0x1D << 2)
label_2b08c8:
    if (ctx->pc == 0x2B08C8u) {
        ctx->pc = 0x2B08C8u;
            // 0x2b08c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B08CCu;
        goto label_2b08cc;
    }
    ctx->pc = 0x2B08C4u;
    {
        const bool branch_taken_0x2b08c4 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2B08C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B08C4u;
            // 0x2b08c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b08c4) {
            ctx->pc = 0x2B093Cu;
            goto label_2b093c;
        }
    }
    ctx->pc = 0x2B08CCu;
label_2b08cc:
    // 0x2b08cc: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x2b08ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2b08d0:
    // 0x2b08d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b08d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b08d4:
    // 0x2b08d4: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2b08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2b08d8:
    // 0x2b08d8: 0x40f809  jalr        $v0
label_2b08dc:
    if (ctx->pc == 0x2B08DCu) {
        ctx->pc = 0x2B08DCu;
            // 0x2b08dc: 0x291a021  addu        $s4, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->pc = 0x2B08E0u;
        goto label_2b08e0;
    }
    ctx->pc = 0x2B08D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B08E0u);
        ctx->pc = 0x2B08DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B08D8u;
            // 0x2b08dc: 0x291a021  addu        $s4, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B08E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B08E0u; }
            if (ctx->pc != 0x2B08E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2B08E0u;
label_2b08e0:
    // 0x2b08e0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2b08e4:
    if (ctx->pc == 0x2B08E4u) {
        ctx->pc = 0x2B08E4u;
            // 0x2b08e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B08E8u;
        goto label_2b08e8;
    }
    ctx->pc = 0x2B08E0u;
    {
        const bool branch_taken_0x2b08e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B08E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B08E0u;
            // 0x2b08e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b08e0) {
            ctx->pc = 0x2B092Cu;
            goto label_2b092c;
        }
    }
    ctx->pc = 0x2B08E8u;
label_2b08e8:
    // 0x2b08e8: 0xc0af10e  jal         func_2BC438
label_2b08ec:
    if (ctx->pc == 0x2B08ECu) {
        ctx->pc = 0x2B08ECu;
            // 0x2b08ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B08F0u;
        goto label_2b08f0;
    }
    ctx->pc = 0x2B08E8u;
    SET_GPR_U32(ctx, 31, 0x2B08F0u);
    ctx->pc = 0x2B08ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B08E8u;
            // 0x2b08ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (runtime->hasFunction(0x2BC438u)) {
        auto targetFn = runtime->lookupFunction(0x2BC438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B08F0u; }
        if (ctx->pc != 0x2B08F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC438_0x2bc438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B08F0u; }
        if (ctx->pc != 0x2B08F0u) { return; }
    }
    ctx->pc = 0x2B08F0u;
label_2b08f0:
    // 0x2b08f0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_2b08f4:
    if (ctx->pc == 0x2B08F4u) {
        ctx->pc = 0x2B08F4u;
            // 0x2b08f4: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->pc = 0x2B08F8u;
        goto label_2b08f8;
    }
    ctx->pc = 0x2B08F0u;
    {
        const bool branch_taken_0x2b08f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b08f0) {
            ctx->pc = 0x2B08F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B08F0u;
            // 0x2b08f4: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B0930u;
            goto label_2b0930;
        }
    }
    ctx->pc = 0x2B08F8u;
label_2b08f8:
    // 0x2b08f8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b08f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b08fc:
    // 0x2b08fc: 0x240500a2  addiu       $a1, $zero, 0xA2
    ctx->pc = 0x2b08fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
label_2b0900:
    // 0x2b0900: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2b0900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2b0904:
    // 0x2b0904: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b0904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0908:
    // 0x2b0908: 0xc0a5648  jal         func_295920
label_2b090c:
    if (ctx->pc == 0x2B090Cu) {
        ctx->pc = 0x2B090Cu;
            // 0x2b090c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0910u;
        goto label_2b0910;
    }
    ctx->pc = 0x2B0908u;
    SET_GPR_U32(ctx, 31, 0x2B0910u);
    ctx->pc = 0x2B090Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0908u;
            // 0x2b090c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0910u; }
        if (ctx->pc != 0x2B0910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0910u; }
        if (ctx->pc != 0x2B0910u) { return; }
    }
    ctx->pc = 0x2B0910u;
label_2b0910:
    // 0x2b0910: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_2b0914:
    if (ctx->pc == 0x2B0914u) {
        ctx->pc = 0x2B0918u;
        goto label_2b0918;
    }
    ctx->pc = 0x2B0910u;
    {
        const bool branch_taken_0x2b0910 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0910) {
            ctx->pc = 0x2B094Cu;
            goto label_2b094c;
        }
    }
    ctx->pc = 0x2B0918u;
label_2b0918:
    // 0x2b0918: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b0918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b091c:
    // 0x2b091c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2b0920:
    if (ctx->pc == 0x2B0920u) {
        ctx->pc = 0x2B0920u;
            // 0x2b0920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0924u;
        goto label_2b0924;
    }
    ctx->pc = 0x2B091Cu;
    {
        const bool branch_taken_0x2b091c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B091Cu;
            // 0x2b0920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b091c) {
            ctx->pc = 0x2B0958u;
            goto label_2b0958;
        }
    }
    ctx->pc = 0x2B0924u;
label_2b0924:
    // 0x2b0924: 0x10000009  b           . + 4 + (0x9 << 2)
label_2b0928:
    if (ctx->pc == 0x2B0928u) {
        ctx->pc = 0x2B092Cu;
        goto label_2b092c;
    }
    ctx->pc = 0x2B0924u;
    {
        const bool branch_taken_0x2b0924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0924) {
            ctx->pc = 0x2B094Cu;
            goto label_2b094c;
        }
    }
    ctx->pc = 0x2B092Cu;
label_2b092c:
    // 0x2b092c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2b092cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2b0930:
    // 0x2b0930: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x2b0930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_2b0934:
    // 0x2b0934: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
label_2b0938:
    if (ctx->pc == 0x2B0938u) {
        ctx->pc = 0x2B0938u;
            // 0x2b0938: 0x8ec30008  lw          $v1, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->pc = 0x2B093Cu;
        goto label_2b093c;
    }
    ctx->pc = 0x2B0934u;
    {
        const bool branch_taken_0x2b0934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0934) {
            ctx->pc = 0x2B0938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0934u;
            // 0x2b0938: 0x8ec30008  lw          $v1, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B08D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b08d0;
        }
    }
    ctx->pc = 0x2B093Cu;
label_2b093c:
    // 0x2b093c: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
label_2b0940:
    if (ctx->pc == 0x2B0940u) {
        ctx->pc = 0x2B0940u;
            // 0x2b0940: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->pc = 0x2B0944u;
        goto label_2b0944;
    }
    ctx->pc = 0x2B093Cu;
    {
        const bool branch_taken_0x2b093c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b093c) {
            ctx->pc = 0x2B0940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B093Cu;
            // 0x2b0940: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B0944u;
            goto label_2b0944;
        }
    }
    ctx->pc = 0x2B0944u;
label_2b0944:
    // 0x2b0944: 0x10000004  b           . + 4 + (0x4 << 2)
label_2b0948:
    if (ctx->pc == 0x2B0948u) {
        ctx->pc = 0x2B0948u;
            // 0x2b0948: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B094Cu;
        goto label_2b094c;
    }
    ctx->pc = 0x2B0944u;
    {
        const bool branch_taken_0x2b0944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0944u;
            // 0x2b0948: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0944) {
            ctx->pc = 0x2B0958u;
            goto label_2b0958;
        }
    }
    ctx->pc = 0x2B094Cu;
label_2b094c:
    // 0x2b094c: 0xc0af176  jal         func_2BC5D8
label_2b0950:
    if (ctx->pc == 0x2B0950u) {
        ctx->pc = 0x2B0950u;
            // 0x2b0950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0954u;
        goto label_2b0954;
    }
    ctx->pc = 0x2B094Cu;
    SET_GPR_U32(ctx, 31, 0x2B0954u);
    ctx->pc = 0x2B0950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B094Cu;
            // 0x2b0950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D8u;
    if (runtime->hasFunction(0x2BC5D8u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0954u; }
        if (ctx->pc != 0x2B0954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5D8_0x2bc5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0954u; }
        if (ctx->pc != 0x2B0954u) { return; }
    }
    ctx->pc = 0x2B0954u;
label_2b0954:
    // 0x2b0954: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b0954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0958:
    // 0x2b0958: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2b0958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b095c:
    // 0x2b095c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2b095cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b0960:
    // 0x2b0960: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b0960u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b0964:
    // 0x2b0964: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b0964u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b0968:
    // 0x2b0968: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b0968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b096c:
    // 0x2b096c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b096cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b0970:
    // 0x2b0970: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b0970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b0974:
    // 0x2b0974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b0974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b0978:
    // 0x2b0978: 0x3e00008  jr          $ra
label_2b097c:
    if (ctx->pc == 0x2B097Cu) {
        ctx->pc = 0x2B097Cu;
            // 0x2b097c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2B0980u;
        goto label_2b0980;
    }
    ctx->pc = 0x2B0978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B097Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0978u;
            // 0x2b097c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B0980u;
label_2b0980:
    // 0x2b0980: 0x90860049  lbu         $a2, 0x49($a0)
    ctx->pc = 0x2b0980u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 73)));
label_2b0984:
    // 0x2b0984: 0x9085004b  lbu         $a1, 0x4B($a0)
    ctx->pc = 0x2b0984u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 75)));
label_2b0988:
    // 0x2b0988: 0x9082004a  lbu         $v0, 0x4A($a0)
    ctx->pc = 0x2b0988u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 74)));
label_2b098c:
    // 0x2b098c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x2b098cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_2b0990:
    // 0x2b0990: 0x90830048  lbu         $v1, 0x48($a0)
    ctx->pc = 0x2b0990u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
label_2b0994:
    // 0x2b0994: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x2b0994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
label_2b0998:
    // 0x2b0998: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b0998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b099c:
    // 0x2b099c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2b099cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2b09a0:
    // 0x2b09a0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2b09a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2b09a4:
    // 0x2b09a4: 0x3e00008  jr          $ra
label_2b09a8:
    if (ctx->pc == 0x2B09A8u) {
        ctx->pc = 0x2B09A8u;
            // 0x2b09a8: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->pc = 0x2B09ACu;
        goto label_2b09ac;
    }
    ctx->pc = 0x2B09A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B09A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B09A4u;
            // 0x2b09a8: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B09ACu;
label_2b09ac:
    // 0x2b09ac: 0x0  nop
    ctx->pc = 0x2b09acu;
    // NOP
label_2b09b0:
    // 0x2b09b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b09b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2b09b4:
    // 0x2b09b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b09b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b09b8:
    // 0x2b09b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b09bc:
    // 0x2b09bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b09c0:
    // 0x2b09c0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_2b09c4:
    if (ctx->pc == 0x2B09C4u) {
        ctx->pc = 0x2B09C4u;
            // 0x2b09c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B09C8u;
        goto label_2b09c8;
    }
    ctx->pc = 0x2B09C0u;
    {
        const bool branch_taken_0x2b09c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B09C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B09C0u;
            // 0x2b09c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b09c0) {
            ctx->pc = 0x2B09E4u;
            goto label_2b09e4;
        }
    }
    ctx->pc = 0x2B09C8u;
label_2b09c8:
    // 0x2b09c8: 0x8c860044  lw          $a2, 0x44($a0)
    ctx->pc = 0x2b09c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_2b09cc:
    // 0x2b09cc: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x2b09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_2b09d0:
    // 0x2b09d0: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_2b09d4:
    if (ctx->pc == 0x2B09D4u) {
        ctx->pc = 0x2B09D4u;
            // 0x2b09d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B09D8u;
        goto label_2b09d8;
    }
    ctx->pc = 0x2B09D0u;
    {
        const bool branch_taken_0x2b09d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B09D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B09D0u;
            // 0x2b09d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b09d0) {
            ctx->pc = 0x2B09E4u;
            goto label_2b09e4;
        }
    }
    ctx->pc = 0x2B09D8u;
label_2b09d8:
    // 0x2b09d8: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x2b09d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_2b09dc:
    // 0x2b09dc: 0xc049c22  jal         func_127088
label_2b09e0:
    if (ctx->pc == 0x2B09E0u) {
        ctx->pc = 0x2B09E0u;
            // 0x2b09e0: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->pc = 0x2B09E4u;
        goto label_2b09e4;
    }
    ctx->pc = 0x2B09DCu;
    SET_GPR_U32(ctx, 31, 0x2B09E4u);
    ctx->pc = 0x2B09E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B09DCu;
            // 0x2b09e0: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B09E4u; }
        if (ctx->pc != 0x2B09E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B09E4u; }
        if (ctx->pc != 0x2B09E4u) { return; }
    }
    ctx->pc = 0x2B09E4u;
label_2b09e4:
    // 0x2b09e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b09e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b09e8:
    // 0x2b09e8: 0x3e00008  jr          $ra
label_2b09ec:
    if (ctx->pc == 0x2B09ECu) {
        ctx->pc = 0x2B09ECu;
            // 0x2b09ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2B09F0u;
        goto label_fallthrough_0x2b09e8;
    }
    ctx->pc = 0x2B09E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B09ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B09E8u;
            // 0x2b09ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b09e8:
    ctx->pc = 0x2B09F0u;
    ctx->pc = 0x2b09f0u;
}
