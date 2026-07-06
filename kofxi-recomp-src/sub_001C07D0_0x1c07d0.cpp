#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C07D0
// Address: 0x1c07d0 - 0x1c0834
void sub_001C07D0_0x1c07d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C07D0_0x1c07d0");
#endif

    switch (ctx->pc) {
        case 0x1c07f8u: goto label_1c07f8;
        case 0x1c0814u: goto label_1c0814;
        case 0x1c0830u: goto label_1c0830;
        default: break;
    }

    ctx->pc = 0x1c07d0u;

    // 0x1c07d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c07d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c07d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c07d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c07d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c07d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c07dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c07dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c07e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c07e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c07e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c07e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c07e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c07e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c07ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c07ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c07f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C07F0u;
    {
        const bool branch_taken_0x1c07f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C07F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C07F0u;
            // 0x1c07f4: 0x3c130038  lui         $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c07f0) {
            ctx->pc = 0x1C0800u;
            goto label_1c0800;
        }
    }
    ctx->pc = 0x1C07F8u;
label_1c07f8:
    // 0x1c07f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1c07fc: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x1c07fcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_1c0800:
    // 0x1c0800: 0x2a0203e8  slti        $v0, $s0, 0x3E8
    ctx->pc = 0x1c0800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1c0804: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C0804u;
    {
        const bool branch_taken_0x1c0804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0804) {
            ctx->pc = 0x1C0808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0804u;
            // 0x1c0808: 0x82320002  lb          $s2, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C084Cu;
            return;
        }
    }
    ctx->pc = 0x1C080Cu;
    // 0x1c080c: 0xc0736d2  jal         func_1CDB48
    ctx->pc = 0x1C080Cu;
    SET_GPR_U32(ctx, 31, 0x1C0814u);
    ctx->pc = 0x1CDB48u;
    if (runtime->hasFunction(0x1CDB48u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0814u; }
        if (ctx->pc != 0x1C0814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDB48_0x1cdb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0814u; }
        if (ctx->pc != 0x1C0814u) { return; }
    }
    ctx->pc = 0x1C0814u;
label_1c0814:
    // 0x1c0814: 0x2664c80c  addiu       $a0, $s3, -0x37F4
    ctx->pc = 0x1c0814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952972));
    // 0x1c0818: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c0818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c081c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c081cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0820: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0820u;
    {
        const bool branch_taken_0x1c0820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c0820) {
            ctx->pc = 0x1C0840u;
            return;
        }
    }
    ctx->pc = 0x1C0828u;
    // 0x1c0828: 0xc0736d8  jal         func_1CDB60
    ctx->pc = 0x1C0828u;
    SET_GPR_U32(ctx, 31, 0x1C0830u);
    ctx->pc = 0x1CDB60u;
    if (runtime->hasFunction(0x1CDB60u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0830u; }
        if (ctx->pc != 0x1C0830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDB60_0x1cdb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0830u; }
        if (ctx->pc != 0x1C0830u) { return; }
    }
    ctx->pc = 0x1C0830u;
label_1c0830:
    // 0x1c0830: 0xc070180  jal         func_1C0600
    ctx->pc = 0x1C0830u;
    SET_GPR_U32(ctx, 31, 0x1C0838u);
    ctx->pc = 0x1C0600u;
    if (runtime->hasFunction(0x1C0600u)) {
        auto targetFn = runtime->lookupFunction(0x1C0600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0838u; }
        if (ctx->pc != 0x1C0838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0600_0x1c0600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0838u; }
        if (ctx->pc != 0x1C0838u) { return; }
    }
    ctx->pc = 0x1C0838u;
    ctx->pc = 0x1c0834u;
}
