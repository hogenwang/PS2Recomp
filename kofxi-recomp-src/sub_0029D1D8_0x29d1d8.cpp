#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029D1D8
// Address: 0x29d1d8 - 0x29d2c8
void sub_0029D1D8_0x29d1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D1D8_0x29d1d8");
#endif

    switch (ctx->pc) {
        case 0x29d208u: goto label_29d208;
        case 0x29d228u: goto label_29d228;
        case 0x29d238u: goto label_29d238;
        case 0x29d254u: goto label_29d254;
        case 0x29d264u: goto label_29d264;
        case 0x29d274u: goto label_29d274;
        case 0x29d294u: goto label_29d294;
        default: break;
    }

    ctx->pc = 0x29d1d8u;

    // 0x29d1d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29d1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29d1dc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29d1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29d1e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29d1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29d1e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x29d1e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29d1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29d1ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29d1ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29d1f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29d1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29d1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29d1fc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x29d1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29d200: 0xc0a5a52  jal         func_296948
    ctx->pc = 0x29D200u;
    SET_GPR_U32(ctx, 31, 0x29D208u);
    ctx->pc = 0x29D204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D200u;
            // 0x29d204: 0xffb40040  sd          $s4, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296948u;
    if (runtime->hasFunction(0x296948u)) {
        auto targetFn = runtime->lookupFunction(0x296948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D208u; }
        if (ctx->pc != 0x29D208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296948_0x296948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D208u; }
        if (ctx->pc != 0x29D208u) { return; }
    }
    ctx->pc = 0x29D208u;
label_29d208:
    // 0x29d208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d20c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D20Cu;
    {
        const bool branch_taken_0x29d20c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D20Cu;
            // 0x29d210: 0x3c150036  lui         $s5, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d20c) {
            ctx->pc = 0x29D21Cu;
            goto label_29d21c;
        }
    }
    ctx->pc = 0x29D214u;
    // 0x29d214: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29d214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29d218: 0x2450c598  addiu       $s0, $v0, -0x3A68
    ctx->pc = 0x29d218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952344));
label_29d21c:
    // 0x29d21c: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x29d21cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x29d220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d224: 0x0  nop
    ctx->pc = 0x29d224u;
    // NOP
label_29d228:
    // 0x29d228: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29d228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d22c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29d22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d230: 0xc0a5a58  jal         func_296960
    ctx->pc = 0x29D230u;
    SET_GPR_U32(ctx, 31, 0x29D238u);
    ctx->pc = 0x29D234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D230u;
            // 0x29d234: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296960u;
    if (runtime->hasFunction(0x296960u)) {
        auto targetFn = runtime->lookupFunction(0x296960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D238u; }
        if (ctx->pc != 0x29D238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296960_0x296960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D238u; }
        if (ctx->pc != 0x29D238u) { return; }
    }
    ctx->pc = 0x29D238u;
label_29d238:
    // 0x29d238: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29D238u;
    {
        const bool branch_taken_0x29d238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D238u;
            // 0x29d23c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d238) {
            ctx->pc = 0x29D26Cu;
            goto label_29d26c;
        }
    }
    ctx->pc = 0x29D240u;
    // 0x29d240: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x29d240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x29d244: 0x2406006d  addiu       $a2, $zero, 0x6D
    ctx->pc = 0x29d244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x29d248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29d248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d24c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29D24Cu;
    SET_GPR_U32(ctx, 31, 0x29D254u);
    ctx->pc = 0x29D250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D24Cu;
            // 0x29d250: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D254u; }
        if (ctx->pc != 0x29D254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D254u; }
        if (ctx->pc != 0x29D254u) { return; }
    }
    ctx->pc = 0x29D254u;
label_29d254:
    // 0x29d254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d258: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29d258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d25c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x29D25Cu;
    SET_GPR_U32(ctx, 31, 0x29D264u);
    ctx->pc = 0x29D260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D25Cu;
            // 0x29d260: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D264u; }
        if (ctx->pc != 0x29D264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D264u; }
        if (ctx->pc != 0x29D264u) { return; }
    }
    ctx->pc = 0x29D264u;
label_29d264:
    // 0x29d264: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x29D264u;
    {
        const bool branch_taken_0x29d264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D264u;
            // 0x29d268: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d264) {
            ctx->pc = 0x29D2A0u;
            goto label_29d2a0;
        }
    }
    ctx->pc = 0x29D26Cu;
label_29d26c:
    // 0x29d26c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x29D26Cu;
    SET_GPR_U32(ctx, 31, 0x29D274u);
    ctx->pc = 0x29D270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D26Cu;
            // 0x29d270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D274u; }
        if (ctx->pc != 0x29D274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D274u; }
        if (ctx->pc != 0x29D274u) { return; }
    }
    ctx->pc = 0x29D274u;
label_29d274:
    // 0x29d274: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29d274u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d278: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x29d278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x29d27c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29D27Cu;
    {
        const bool branch_taken_0x29d27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D27Cu;
            // 0x29d280: 0x8ea2bde8  lw          $v0, -0x4218($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d27c) {
            ctx->pc = 0x29D29Cu;
            goto label_29d29c;
        }
    }
    ctx->pc = 0x29D284u;
    // 0x29d284: 0x2685c5b0  addiu       $a1, $s4, -0x3A50
    ctx->pc = 0x29d284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952368));
    // 0x29d288: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x29d288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29d28c: 0xc0493ea  jal         func_124FA8
    ctx->pc = 0x29D28Cu;
    SET_GPR_U32(ctx, 31, 0x29D294u);
    ctx->pc = 0x29D290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D28Cu;
            // 0x29d290: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124FA8u;
    if (runtime->hasFunction(0x124FA8u)) {
        auto targetFn = runtime->lookupFunction(0x124FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D294u; }
        if (ctx->pc != 0x29D294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124FA8_0x124fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D294u; }
        if (ctx->pc != 0x29D294u) { return; }
    }
    ctx->pc = 0x29D294u;
label_29d294:
    // 0x29d294: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x29D294u;
    {
        const bool branch_taken_0x29d294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D294u;
            // 0x29d298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d294) {
            ctx->pc = 0x29D228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d228;
        }
    }
    ctx->pc = 0x29D29Cu;
label_29d29c:
    // 0x29d29c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x29d29cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_29d2a0:
    // 0x29d2a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29d2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d2a4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x29d2a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29d2a8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29d2a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d2ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29d2acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d2b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29d2b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d2b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29d2b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d2b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d2b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x29D2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D2BCu;
            // 0x29d2c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D2C4u;
    // 0x29d2c4: 0x0  nop
    ctx->pc = 0x29d2c4u;
    // NOP
    ctx->pc = 0x29d2c8u;
}
