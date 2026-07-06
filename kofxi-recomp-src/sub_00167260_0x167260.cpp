#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167260
// Address: 0x167260 - 0x1672c0
void sub_00167260_0x167260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167260_0x167260");
#endif

    switch (ctx->pc) {
        case 0x167298u: goto label_167298;
        case 0x1672b0u: goto label_1672b0;
        default: break;
    }

    ctx->pc = 0x167260u;

    // 0x167260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167264: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x167264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x167268: 0x28410023  slti        $at, $v0, 0x23
    ctx->pc = 0x167268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)35) ? 1 : 0);
    // 0x16726c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16726cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167270: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x167270u;
    {
        const bool branch_taken_0x167270 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x167274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167270u;
            // 0x167274: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167270) {
            ctx->pc = 0x1672A8u;
            goto label_1672a8;
        }
    }
    ctx->pc = 0x167278u;
    // 0x167278: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x167278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x16727c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x16727cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x167280: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x167280u;
    {
        const bool branch_taken_0x167280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167280) {
            ctx->pc = 0x167284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167280u;
            // 0x167284: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x167290u;
            goto label_167290;
        }
    }
    ctx->pc = 0x167288u;
    // 0x167288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x167288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16728c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x16728cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_167290:
    // 0x167290: 0xc059bac  jal         func_166EB0
    ctx->pc = 0x167290u;
    SET_GPR_U32(ctx, 31, 0x167298u);
    ctx->pc = 0x167294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167290u;
            // 0x167294: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x166EB0u;
    if (runtime->hasFunction(0x166EB0u)) {
        auto targetFn = runtime->lookupFunction(0x166EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167298u; }
        if (ctx->pc != 0x167298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166EB0_0x166eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167298u; }
        if (ctx->pc != 0x167298u) { return; }
    }
    ctx->pc = 0x167298u;
label_167298:
    // 0x167298: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x167298u;
    {
        const bool branch_taken_0x167298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167298) {
            ctx->pc = 0x16729Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167298u;
            // 0x16729c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1672B4u;
            goto label_1672b4;
        }
    }
    ctx->pc = 0x1672A0u;
    // 0x1672a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1672A0u;
    {
        const bool branch_taken_0x1672a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1672A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1672A0u;
            // 0x1672a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672a0) {
            ctx->pc = 0x1672B4u;
            goto label_1672b4;
        }
    }
    ctx->pc = 0x1672A8u;
label_1672a8:
    // 0x1672a8: 0xc059cb0  jal         func_1672C0
    ctx->pc = 0x1672A8u;
    SET_GPR_U32(ctx, 31, 0x1672B0u);
    ctx->pc = 0x1672ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1672A8u;
            // 0x1672ac: 0x2445ffdd  addiu       $a1, $v0, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1672C0u;
    if (runtime->hasFunction(0x1672C0u)) {
        auto targetFn = runtime->lookupFunction(0x1672C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1672B0u; }
        if (ctx->pc != 0x1672B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001672C0_0x1672c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1672B0u; }
        if (ctx->pc != 0x1672B0u) { return; }
    }
    ctx->pc = 0x1672B0u;
label_1672b0:
    // 0x1672b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1672b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1672b4:
    // 0x1672b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1672b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1672b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1672B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1672BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1672B8u;
            // 0x1672bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1672C0u;
    ctx->pc = 0x1672c0u;
}
