#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E0498
// Address: 0x2e0498 - 0x2e0520
void sub_002E0498_0x2e0498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0498_0x2e0498");
#endif

    switch (ctx->pc) {
        case 0x2e04c4u: goto label_2e04c4;
        case 0x2e04c8u: goto label_2e04c8;
        case 0x2e04dcu: goto label_2e04dc;
        case 0x2e04f8u: goto label_2e04f8;
        default: break;
    }

    ctx->pc = 0x2e0498u;

    // 0x2e0498: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e049c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e049cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e04a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e04a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e04a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e04a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e04acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e04b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e04b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e04b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e04b8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2e04b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2e04bc: 0xc0b7f7e  jal         func_2DFDF8
    ctx->pc = 0x2E04BCu;
    SET_GPR_U32(ctx, 31, 0x2E04C4u);
    ctx->pc = 0x2E04C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04BCu;
            // 0x2e04c0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFDF8u;
    if (runtime->hasFunction(0x2DFDF8u)) {
        auto targetFn = runtime->lookupFunction(0x2DFDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04C4u; }
        if (ctx->pc != 0x2E04C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DFDF8_0x2dfdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04C4u; }
        if (ctx->pc != 0x2E04C4u) { return; }
    }
    ctx->pc = 0x2E04C4u;
label_2e04c4:
    // 0x2e04c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e04c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e04c8:
    // 0x2e04c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e04c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E04CCu;
    {
        const bool branch_taken_0x2e04cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E04D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04CCu;
            // 0x2e04d0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e04cc) {
            ctx->pc = 0x2E04E4u;
            goto label_2e04e4;
        }
    }
    ctx->pc = 0x2E04D4u;
    // 0x2e04d4: 0xc0b80be  jal         func_2E02F8
    ctx->pc = 0x2E04D4u;
    SET_GPR_U32(ctx, 31, 0x2E04DCu);
    ctx->pc = 0x2E04D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04D4u;
            // 0x2e04d8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E02F8u;
    if (runtime->hasFunction(0x2E02F8u)) {
        auto targetFn = runtime->lookupFunction(0x2E02F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04DCu; }
        if (ctx->pc != 0x2E04DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E02F8_0x2e02f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04DCu; }
        if (ctx->pc != 0x2E04DCu) { return; }
    }
    ctx->pc = 0x2E04DCu;
label_2e04dc:
    // 0x2e04dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E04DCu;
    {
        const bool branch_taken_0x2e04dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e04dc) {
            ctx->pc = 0x2E04F0u;
            goto label_2e04f0;
        }
    }
    ctx->pc = 0x2E04E4u;
label_2e04e4:
    // 0x2e04e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E04E4u;
    {
        const bool branch_taken_0x2e04e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E04E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04E4u;
            // 0x2e04e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e04e4) {
            ctx->pc = 0x2E0504u;
            goto label_2e0504;
        }
    }
    ctx->pc = 0x2E04ECu;
    // 0x2e04ec: 0x0  nop
    ctx->pc = 0x2e04ecu;
    // NOP
label_2e04f0:
    // 0x2e04f0: 0xc0b80ec  jal         func_2E03B0
    ctx->pc = 0x2E04F0u;
    SET_GPR_U32(ctx, 31, 0x2E04F8u);
    ctx->pc = 0x2E04F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04F0u;
            // 0x2e04f4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E03B0u;
    if (runtime->hasFunction(0x2E03B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E03B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04F8u; }
        if (ctx->pc != 0x2E04F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E03B0_0x2e03b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04F8u; }
        if (ctx->pc != 0x2E04F8u) { return; }
    }
    ctx->pc = 0x2E04F8u;
label_2e04f8:
    // 0x2e04f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e04f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e04fc: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2e04fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2e0500: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e0500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e0504:
    // 0x2e0504: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e0504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0508: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e0508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e050c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e050cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0510: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2e0510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0514: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0514u;
            // 0x2e0518: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E051Cu;
    // 0x2e051c: 0x0  nop
    ctx->pc = 0x2e051cu;
    // NOP
    ctx->pc = 0x2e0520u;
}
