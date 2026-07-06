#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002027E8
// Address: 0x2027e8 - 0x202888
void sub_002027E8_0x2027e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002027E8_0x2027e8");
#endif

    switch (ctx->pc) {
        case 0x202810u: goto label_202810;
        case 0x202838u: goto label_202838;
        case 0x202860u: goto label_202860;
        default: break;
    }

    ctx->pc = 0x2027e8u;

    // 0x2027e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2027e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2027ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2027ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2027f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2027f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027f4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2027f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2027f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2027f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2027fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2027fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x202800: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x202800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202804: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x202804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x202808: 0xc080b34  jal         func_202CD0
    ctx->pc = 0x202808u;
    SET_GPR_U32(ctx, 31, 0x202810u);
    ctx->pc = 0x20280Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202808u;
            // 0x20280c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202CD0u;
    if (runtime->hasFunction(0x202CD0u)) {
        auto targetFn = runtime->lookupFunction(0x202CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202810u; }
        if (ctx->pc != 0x202810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202CD0_0x202cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202810u; }
        if (ctx->pc != 0x202810u) { return; }
    }
    ctx->pc = 0x202810u;
label_202810:
    // 0x202810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202814: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202818: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x202818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20281c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x20281cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202820: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x202820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202824: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202828: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x202828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20282c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20282cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x202830: 0x8080a36  j           func_2028D8
    ctx->pc = 0x202830u;
    ctx->pc = 0x202834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202830u;
            // 0x202834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2028D8u;
    {
        auto targetFn = runtime->lookupFunction(0x2028D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x202838u;
label_202838:
    // 0x202838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20283c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20283cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x202840: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x202840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202844: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x202844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x202848: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x202848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20284c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20284cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x202850: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x202850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202854: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x202854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x202858: 0xc080b34  jal         func_202CD0
    ctx->pc = 0x202858u;
    SET_GPR_U32(ctx, 31, 0x202860u);
    ctx->pc = 0x20285Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202858u;
            // 0x20285c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202CD0u;
    if (runtime->hasFunction(0x202CD0u)) {
        auto targetFn = runtime->lookupFunction(0x202CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202860u; }
        if (ctx->pc != 0x202860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202CD0_0x202cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202860u; }
        if (ctx->pc != 0x202860u) { return; }
    }
    ctx->pc = 0x202860u;
label_202860:
    // 0x202860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202864: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202868: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x202868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20286c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x20286cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202870: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x202870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202878: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x202878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x20287c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20287cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x202880: 0x8080a36  j           func_2028D8
    ctx->pc = 0x202880u;
    ctx->pc = 0x202884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202880u;
            // 0x202884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2028D8u;
    {
        auto targetFn = runtime->lookupFunction(0x2028D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x202888u;
    ctx->pc = 0x202888u;
}
