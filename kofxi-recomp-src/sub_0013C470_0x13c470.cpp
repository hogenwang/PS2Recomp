#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013C470
// Address: 0x13c470 - 0x13c4d0
void sub_0013C470_0x13c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C470_0x13c470");
#endif

    switch (ctx->pc) {
        case 0x13c488u: goto label_13c488;
        case 0x13c4b4u: goto label_13c4b4;
        default: break;
    }

    ctx->pc = 0x13c470u;

    // 0x13c470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c47c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c480: 0xc062804  jal         func_18A010
    ctx->pc = 0x13C480u;
    SET_GPR_U32(ctx, 31, 0x13C488u);
    ctx->pc = 0x13C484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C480u;
            // 0x13c484: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C488u; }
        if (ctx->pc != 0x13C488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C488u; }
        if (ctx->pc != 0x13C488u) { return; }
    }
    ctx->pc = 0x13C488u;
label_13c488:
    // 0x13c488: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C488u;
    {
        const bool branch_taken_0x13c488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c488) {
            ctx->pc = 0x13C48Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C488u;
            // 0x13c48c: 0x8e02023c  lw          $v0, 0x23C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C498u;
            goto label_13c498;
        }
    }
    ctx->pc = 0x13C490u;
    // 0x13c490: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13C490u;
    {
        const bool branch_taken_0x13c490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C490u;
            // 0x13c494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c490) {
            ctx->pc = 0x13C4B8u;
            goto label_13c4b8;
        }
    }
    ctx->pc = 0x13C498u;
label_13c498:
    // 0x13c498: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x13c498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x13c49c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C49Cu;
    {
        const bool branch_taken_0x13c49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c49c) {
            ctx->pc = 0x13C4A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C49Cu;
            // 0x13c4a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C4ACu;
            goto label_13c4ac;
        }
    }
    ctx->pc = 0x13C4A4u;
    // 0x13c4a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13C4A4u;
    {
        const bool branch_taken_0x13c4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C4A4u;
            // 0x13c4a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c4a4) {
            ctx->pc = 0x13C4B8u;
            goto label_13c4b8;
        }
    }
    ctx->pc = 0x13C4ACu;
label_13c4ac:
    // 0x13c4ac: 0xc04f880  jal         func_13E200
    ctx->pc = 0x13C4ACu;
    SET_GPR_U32(ctx, 31, 0x13C4B4u);
    ctx->pc = 0x13E200u;
    if (runtime->hasFunction(0x13E200u)) {
        auto targetFn = runtime->lookupFunction(0x13E200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C4B4u; }
        if (ctx->pc != 0x13C4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E200_0x13e200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C4B4u; }
        if (ctx->pc != 0x13C4B4u) { return; }
    }
    ctx->pc = 0x13C4B4u;
label_13c4b4:
    // 0x13c4b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13c4b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13c4b8:
    // 0x13c4b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c4bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c4bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x13C4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C4C0u;
            // 0x13c4c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13C4C8u;
    // 0x13c4c8: 0x0  nop
    ctx->pc = 0x13c4c8u;
    // NOP
    // 0x13c4cc: 0x0  nop
    ctx->pc = 0x13c4ccu;
    // NOP
    ctx->pc = 0x13c4d0u;
}
