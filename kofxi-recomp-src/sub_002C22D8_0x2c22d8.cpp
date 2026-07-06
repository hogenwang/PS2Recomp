#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C22D8
// Address: 0x2c22d8 - 0x2c2348
void sub_002C22D8_0x2c22d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C22D8_0x2c22d8");
#endif

    switch (ctx->pc) {
        case 0x2c2314u: goto label_2c2314;
        case 0x2c2324u: goto label_2c2324;
        case 0x2c232cu: goto label_2c232c;
        default: break;
    }

    ctx->pc = 0x2c22d8u;

    // 0x2c22d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c22d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c22dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c22dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c22e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c22e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c22e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c22e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c22e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c22e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c22ec: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C22ECu;
    {
        const bool branch_taken_0x2c22ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C22F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C22ECu;
            // 0x2c22f0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22ec) {
            ctx->pc = 0x2C22FCu;
            goto label_2c22fc;
        }
    }
    ctx->pc = 0x2C22F4u;
    // 0x2c22f4: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C22F4u;
    {
        const bool branch_taken_0x2c22f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c22f4) {
            ctx->pc = 0x2C231Cu;
            goto label_2c231c;
        }
    }
    ctx->pc = 0x2C22FCu;
label_2c22fc:
    // 0x2c22fc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c22fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c2300: 0x240500e5  addiu       $a1, $zero, 0xE5
    ctx->pc = 0x2c2300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    // 0x2c2304: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2c2304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2c2308: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c2308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c230c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C230Cu;
    SET_GPR_U32(ctx, 31, 0x2C2314u);
    ctx->pc = 0x2C2310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C230Cu;
            // 0x2c2310: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2314u; }
        if (ctx->pc != 0x2C2314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2314u; }
        if (ctx->pc != 0x2C2314u) { return; }
    }
    ctx->pc = 0x2C2314u;
label_2c2314:
    // 0x2c2314: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2314u;
    {
        const bool branch_taken_0x2c2314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2314u;
            // 0x2c2318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2314) {
            ctx->pc = 0x2C2334u;
            goto label_2c2334;
        }
    }
    ctx->pc = 0x2C231Cu;
label_2c231c:
    // 0x2c231c: 0xc0a03b6  jal         func_280ED8
    ctx->pc = 0x2C231Cu;
    SET_GPR_U32(ctx, 31, 0x2C2324u);
    ctx->pc = 0x2C2320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C231Cu;
            // 0x2c2320: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280ED8u;
    if (runtime->hasFunction(0x280ED8u)) {
        auto targetFn = runtime->lookupFunction(0x280ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2324u; }
        if (ctx->pc != 0x2C2324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280ED8_0x280ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2324u; }
        if (ctx->pc != 0x2C2324u) { return; }
    }
    ctx->pc = 0x2C2324u;
label_2c2324:
    // 0x2c2324: 0xc0a6bda  jal         func_29AF68
    ctx->pc = 0x2C2324u;
    SET_GPR_U32(ctx, 31, 0x2C232Cu);
    ctx->pc = 0x2C2328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2324u;
            // 0x2c2328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AF68u;
    if (runtime->hasFunction(0x29AF68u)) {
        auto targetFn = runtime->lookupFunction(0x29AF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C232Cu; }
        if (ctx->pc != 0x2C232Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029AF68_0x29af68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C232Cu; }
        if (ctx->pc != 0x2C232Cu) { return; }
    }
    ctx->pc = 0x2C232Cu;
label_2c232c:
    // 0x2c232c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2c232cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2c2330: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c2330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c2334:
    // 0x2c2334: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c2334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2338: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c2338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c233c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c233cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2340: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2340u;
            // 0x2c2344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2348u;
    ctx->pc = 0x2c2348u;
}
