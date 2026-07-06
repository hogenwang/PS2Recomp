#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F8290
// Address: 0x1f8290 - 0x1f8348
void sub_001F8290_0x1f8290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8290_0x1f8290");
#endif

    switch (ctx->pc) {
        case 0x1f82c4u: goto label_1f82c4;
        case 0x1f82d4u: goto label_1f82d4;
        case 0x1f82e4u: goto label_1f82e4;
        default: break;
    }

    ctx->pc = 0x1f8290u;

    // 0x1f8290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f8290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f8294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f8298: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f8298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f829c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f829cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f82a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f82a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f82a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f82a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f82a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f82a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f82ac: 0xde030a20  ld          $v1, 0xA20($s0)
    ctx->pc = 0x1f82acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 2592)));
    // 0x1f82b0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F82B0u;
    {
        const bool branch_taken_0x1f82b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F82B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F82B0u;
            // 0x1f82b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f82b0) {
            ctx->pc = 0x1F8328u;
            goto label_1f8328;
        }
    }
    ctx->pc = 0x1F82B8u;
    // 0x1f82b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1f82b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f82bc: 0xc07f688  jal         func_1FDA20
    ctx->pc = 0x1F82BCu;
    SET_GPR_U32(ctx, 31, 0x1F82C4u);
    ctx->pc = 0x1F82C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F82BCu;
            // 0x1f82c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA20u;
    if (runtime->hasFunction(0x1FDA20u)) {
        auto targetFn = runtime->lookupFunction(0x1FDA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82C4u; }
        if (ctx->pc != 0x1F82C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDA20_0x1fda20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82C4u; }
        if (ctx->pc != 0x1F82C4u) { return; }
    }
    ctx->pc = 0x1F82C4u;
label_1f82c4:
    // 0x1f82c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f82c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f82c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f82c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f82cc: 0xc07f688  jal         func_1FDA20
    ctx->pc = 0x1F82CCu;
    SET_GPR_U32(ctx, 31, 0x1F82D4u);
    ctx->pc = 0x1F82D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F82CCu;
            // 0x1f82d0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA20u;
    if (runtime->hasFunction(0x1FDA20u)) {
        auto targetFn = runtime->lookupFunction(0x1FDA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82D4u; }
        if (ctx->pc != 0x1F82D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDA20_0x1fda20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82D4u; }
        if (ctx->pc != 0x1F82D4u) { return; }
    }
    ctx->pc = 0x1F82D4u;
label_1f82d4:
    // 0x1f82d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f82d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f82d8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1f82d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1f82dc: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F82DCu;
    SET_GPR_U32(ctx, 31, 0x1F82E4u);
    ctx->pc = 0x1F82E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F82DCu;
            // 0x1f82e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82E4u; }
        if (ctx->pc != 0x1F82E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82E4u; }
        if (ctx->pc != 0x1F82E4u) { return; }
    }
    ctx->pc = 0x1F82E4u;
label_1f82e4:
    // 0x1f82e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f82e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f82e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f82ec: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F82ECu;
    {
        const bool branch_taken_0x1f82ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f82ec) {
            ctx->pc = 0x1F82F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F82ECu;
            // 0x1f82f0: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8324u;
            goto label_1f8324;
        }
    }
    ctx->pc = 0x1F82F4u;
    // 0x1f82f4: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1F82F4u;
    {
        const bool branch_taken_0x1f82f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f82f4) {
            ctx->pc = 0x1F82F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F82F4u;
            // 0x1f82f8: 0x2329824  and         $s3, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8324u;
            goto label_1f8324;
        }
    }
    ctx->pc = 0x1F82FCu;
    // 0x1f82fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f82fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8300: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8300u;
    {
        const bool branch_taken_0x1f8300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F8304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8300u;
            // 0x1f8304: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8300) {
            ctx->pc = 0x1F8318u;
            goto label_1f8318;
        }
    }
    ctx->pc = 0x1F8308u;
    // 0x1f8308: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8308u;
    {
        const bool branch_taken_0x1f8308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F830Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8308u;
            // 0x1f830c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8308) {
            ctx->pc = 0x1F8320u;
            goto label_1f8320;
        }
    }
    ctx->pc = 0x1F8310u;
    // 0x1f8310: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8310u;
    {
        const bool branch_taken_0x1f8310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8310u;
            // 0x1f8314: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8310) {
            ctx->pc = 0x1F832Cu;
            goto label_1f832c;
        }
    }
    ctx->pc = 0x1F8318u;
label_1f8318:
    // 0x1f8318: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8318u;
    {
        const bool branch_taken_0x1f8318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F831Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8318u;
            // 0x1f831c: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8318) {
            ctx->pc = 0x1F8324u;
            goto label_1f8324;
        }
    }
    ctx->pc = 0x1F8320u;
label_1f8320:
    // 0x1f8320: 0x2329825  or          $s3, $s1, $s2
    ctx->pc = 0x1f8320u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
label_1f8324:
    // 0x1f8324: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1f8324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f8328:
    // 0x1f8328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f832c:
    // 0x1f832c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f832cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8330: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f8330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8334: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f8334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8338: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f8338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f833c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F833Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F833Cu;
            // 0x1f8340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F8344u;
    // 0x1f8344: 0x0  nop
    ctx->pc = 0x1f8344u;
    // NOP
    ctx->pc = 0x1f8348u;
}
