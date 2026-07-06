#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028F258
// Address: 0x28f258 - 0x28f2a0
void sub_0028F258_0x28f258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F258_0x28f258");
#endif

    switch (ctx->pc) {
        case 0x28f258u: goto label_28f258;
        case 0x28f25cu: goto label_28f25c;
        case 0x28f260u: goto label_28f260;
        case 0x28f264u: goto label_28f264;
        case 0x28f268u: goto label_28f268;
        case 0x28f26cu: goto label_28f26c;
        case 0x28f270u: goto label_28f270;
        case 0x28f274u: goto label_28f274;
        case 0x28f278u: goto label_28f278;
        case 0x28f27cu: goto label_28f27c;
        case 0x28f280u: goto label_28f280;
        case 0x28f284u: goto label_28f284;
        case 0x28f288u: goto label_28f288;
        case 0x28f28cu: goto label_28f28c;
        case 0x28f290u: goto label_28f290;
        case 0x28f294u: goto label_28f294;
        case 0x28f298u: goto label_28f298;
        case 0x28f29cu: goto label_28f29c;
        default: break;
    }

    ctx->pc = 0x28f258u;

label_28f258:
    // 0x28f258: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f25c:
    // 0x28f25c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f25cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f260:
    // 0x28f260: 0x8c424674  lw          $v0, 0x4674($v0)
    ctx->pc = 0x28f260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18036)));
label_28f264:
    // 0x28f264: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f268:
    if (ctx->pc == 0x28F268u) {
        ctx->pc = 0x28F268u;
            // 0x28f268: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28F26Cu;
        goto label_28f26c;
    }
    ctx->pc = 0x28F264u;
    {
        const bool branch_taken_0x28f264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F264u;
            // 0x28f268: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f264) {
            ctx->pc = 0x28F28Cu;
            goto label_28f28c;
        }
    }
    ctx->pc = 0x28F26Cu;
label_28f26c:
    // 0x28f26c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f270:
    // 0x28f270: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x28f270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_28f274:
    // 0x28f274: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f278:
    // 0x28f278: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f27c:
    // 0x28f27c: 0xc0a5648  jal         func_295920
label_28f280:
    if (ctx->pc == 0x28F280u) {
        ctx->pc = 0x28F280u;
            // 0x28f280: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F284u;
        goto label_28f284;
    }
    ctx->pc = 0x28F27Cu;
    SET_GPR_U32(ctx, 31, 0x28F284u);
    ctx->pc = 0x28F280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F27Cu;
            // 0x28f280: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F284u; }
        if (ctx->pc != 0x28F284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F284u; }
        if (ctx->pc != 0x28F284u) { return; }
    }
    ctx->pc = 0x28F284u;
label_28f284:
    // 0x28f284: 0x10000003  b           . + 4 + (0x3 << 2)
label_28f288:
    if (ctx->pc == 0x28F288u) {
        ctx->pc = 0x28F288u;
            // 0x28f288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F28Cu;
        goto label_28f28c;
    }
    ctx->pc = 0x28F284u;
    {
        const bool branch_taken_0x28f284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F284u;
            // 0x28f288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f284) {
            ctx->pc = 0x28F294u;
            goto label_28f294;
        }
    }
    ctx->pc = 0x28F28Cu;
label_28f28c:
    // 0x28f28c: 0x40f809  jalr        $v0
label_28f290:
    if (ctx->pc == 0x28F290u) {
        ctx->pc = 0x28F294u;
        goto label_28f294;
    }
    ctx->pc = 0x28F28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F294u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28F294u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28F294u; }
            if (ctx->pc != 0x28F294u) { return; }
        }
        }
    }
    ctx->pc = 0x28F294u;
label_28f294:
    // 0x28f294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f298:
    // 0x28f298: 0x3e00008  jr          $ra
label_28f29c:
    if (ctx->pc == 0x28F29Cu) {
        ctx->pc = 0x28F29Cu;
            // 0x28f29c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28F2A0u;
        goto label_fallthrough_0x28f298;
    }
    ctx->pc = 0x28F298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F298u;
            // 0x28f29c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28f298:
    ctx->pc = 0x28F2A0u;
    ctx->pc = 0x28f2a0u;
}
