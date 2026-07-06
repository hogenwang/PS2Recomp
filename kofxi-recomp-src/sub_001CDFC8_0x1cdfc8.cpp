#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CDFC8
// Address: 0x1cdfc8 - 0x1ce030
void sub_001CDFC8_0x1cdfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDFC8_0x1cdfc8");
#endif

    switch (ctx->pc) {
        case 0x1cdff4u: goto label_1cdff4;
        case 0x1ce008u: goto label_1ce008;
        case 0x1ce010u: goto label_1ce010;
        default: break;
    }

    ctx->pc = 0x1cdfc8u;

    // 0x1cdfc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cdfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cdfcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdfd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdfd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdfd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdfd8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cdfd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdfdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cdfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cdfe0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cdfe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdfe4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cdfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cdfe8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cdfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cdfec: 0xc0736d2  jal         func_1CDB48
    ctx->pc = 0x1CDFECu;
    SET_GPR_U32(ctx, 31, 0x1CDFF4u);
    ctx->pc = 0x1CDFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFECu;
            // 0x1cdff0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB48u;
    if (runtime->hasFunction(0x1CDB48u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFF4u; }
        if (ctx->pc != 0x1CDFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDB48_0x1cdb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFF4u; }
        if (ctx->pc != 0x1CDFF4u) { return; }
    }
    ctx->pc = 0x1CDFF4u;
label_1cdff4:
    // 0x1cdff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdff8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cdff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdffc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cdffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce000: 0xc07380c  jal         func_1CE030
    ctx->pc = 0x1CE000u;
    SET_GPR_U32(ctx, 31, 0x1CE008u);
    ctx->pc = 0x1CE004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE000u;
            // 0x1ce004: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE030u;
    if (runtime->hasFunction(0x1CE030u)) {
        auto targetFn = runtime->lookupFunction(0x1CE030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE008u; }
        if (ctx->pc != 0x1CE008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE030_0x1ce030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE008u; }
        if (ctx->pc != 0x1CE008u) { return; }
    }
    ctx->pc = 0x1CE008u;
label_1ce008:
    // 0x1ce008: 0xc0736d8  jal         func_1CDB60
    ctx->pc = 0x1CE008u;
    SET_GPR_U32(ctx, 31, 0x1CE010u);
    ctx->pc = 0x1CE00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE008u;
            // 0x1ce00c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB60u;
    if (runtime->hasFunction(0x1CDB60u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE010u; }
        if (ctx->pc != 0x1CE010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDB60_0x1cdb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE010u; }
        if (ctx->pc != 0x1CE010u) { return; }
    }
    ctx->pc = 0x1CE010u;
label_1ce010:
    // 0x1ce010: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ce010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ce014: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ce014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce018: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ce018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce01c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce01cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce020: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ce020u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ce024: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ce024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce028: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE028u;
            // 0x1ce02c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE030u;
    ctx->pc = 0x1ce030u;
}
