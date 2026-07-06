#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028F330
// Address: 0x28f330 - 0x28f378
void sub_0028F330_0x28f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F330_0x28f330");
#endif

    switch (ctx->pc) {
        case 0x28f330u: goto label_28f330;
        case 0x28f334u: goto label_28f334;
        case 0x28f338u: goto label_28f338;
        case 0x28f33cu: goto label_28f33c;
        case 0x28f340u: goto label_28f340;
        case 0x28f344u: goto label_28f344;
        case 0x28f348u: goto label_28f348;
        case 0x28f34cu: goto label_28f34c;
        case 0x28f350u: goto label_28f350;
        case 0x28f354u: goto label_28f354;
        case 0x28f358u: goto label_28f358;
        case 0x28f35cu: goto label_28f35c;
        case 0x28f360u: goto label_28f360;
        case 0x28f364u: goto label_28f364;
        case 0x28f368u: goto label_28f368;
        case 0x28f36cu: goto label_28f36c;
        case 0x28f370u: goto label_28f370;
        case 0x28f374u: goto label_28f374;
        default: break;
    }

    ctx->pc = 0x28f330u;

label_28f330:
    // 0x28f330: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f334:
    // 0x28f334: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f338:
    // 0x28f338: 0x8c424680  lw          $v0, 0x4680($v0)
    ctx->pc = 0x28f338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18048)));
label_28f33c:
    // 0x28f33c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f340:
    if (ctx->pc == 0x28F340u) {
        ctx->pc = 0x28F340u;
            // 0x28f340: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28F344u;
        goto label_28f344;
    }
    ctx->pc = 0x28F33Cu;
    {
        const bool branch_taken_0x28f33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F33Cu;
            // 0x28f340: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f33c) {
            ctx->pc = 0x28F364u;
            goto label_28f364;
        }
    }
    ctx->pc = 0x28F344u;
label_28f344:
    // 0x28f344: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f348:
    // 0x28f348: 0x24050085  addiu       $a1, $zero, 0x85
    ctx->pc = 0x28f348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_28f34c:
    // 0x28f34c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f350:
    // 0x28f350: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f354:
    // 0x28f354: 0xc0a5648  jal         func_295920
label_28f358:
    if (ctx->pc == 0x28F358u) {
        ctx->pc = 0x28F358u;
            // 0x28f358: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F35Cu;
        goto label_28f35c;
    }
    ctx->pc = 0x28F354u;
    SET_GPR_U32(ctx, 31, 0x28F35Cu);
    ctx->pc = 0x28F358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F354u;
            // 0x28f358: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F35Cu; }
        if (ctx->pc != 0x28F35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F35Cu; }
        if (ctx->pc != 0x28F35Cu) { return; }
    }
    ctx->pc = 0x28F35Cu;
label_28f35c:
    // 0x28f35c: 0x10000003  b           . + 4 + (0x3 << 2)
label_28f360:
    if (ctx->pc == 0x28F360u) {
        ctx->pc = 0x28F360u;
            // 0x28f360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F364u;
        goto label_28f364;
    }
    ctx->pc = 0x28F35Cu;
    {
        const bool branch_taken_0x28f35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F35Cu;
            // 0x28f360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f35c) {
            ctx->pc = 0x28F36Cu;
            goto label_28f36c;
        }
    }
    ctx->pc = 0x28F364u;
label_28f364:
    // 0x28f364: 0x40f809  jalr        $v0
label_28f368:
    if (ctx->pc == 0x28F368u) {
        ctx->pc = 0x28F36Cu;
        goto label_28f36c;
    }
    ctx->pc = 0x28F364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F36Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28F36Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28F36Cu; }
            if (ctx->pc != 0x28F36Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28F36Cu;
label_28f36c:
    // 0x28f36c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f370:
    // 0x28f370: 0x3e00008  jr          $ra
label_28f374:
    if (ctx->pc == 0x28F374u) {
        ctx->pc = 0x28F374u;
            // 0x28f374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28F378u;
        goto label_fallthrough_0x28f370;
    }
    ctx->pc = 0x28F370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F370u;
            // 0x28f374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28f370:
    ctx->pc = 0x28F378u;
    ctx->pc = 0x28f378u;
}
