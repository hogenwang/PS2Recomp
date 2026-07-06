#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028E508
// Address: 0x28e508 - 0x28e550
void sub_0028E508_0x28e508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E508_0x28e508");
#endif

    switch (ctx->pc) {
        case 0x28e508u: goto label_28e508;
        case 0x28e50cu: goto label_28e50c;
        case 0x28e510u: goto label_28e510;
        case 0x28e514u: goto label_28e514;
        case 0x28e518u: goto label_28e518;
        case 0x28e51cu: goto label_28e51c;
        case 0x28e520u: goto label_28e520;
        case 0x28e524u: goto label_28e524;
        case 0x28e528u: goto label_28e528;
        case 0x28e52cu: goto label_28e52c;
        case 0x28e530u: goto label_28e530;
        case 0x28e534u: goto label_28e534;
        case 0x28e538u: goto label_28e538;
        case 0x28e53cu: goto label_28e53c;
        case 0x28e540u: goto label_28e540;
        case 0x28e544u: goto label_28e544;
        case 0x28e548u: goto label_28e548;
        case 0x28e54cu: goto label_28e54c;
        default: break;
    }

    ctx->pc = 0x28e508u;

label_28e508:
    // 0x28e508: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e50c:
    // 0x28e50c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e50cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28e510:
    // 0x28e510: 0x8c4245d0  lw          $v0, 0x45D0($v0)
    ctx->pc = 0x28e510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17872)));
label_28e514:
    // 0x28e514: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e518:
    if (ctx->pc == 0x28E518u) {
        ctx->pc = 0x28E518u;
            // 0x28e518: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28E51Cu;
        goto label_28e51c;
    }
    ctx->pc = 0x28E514u;
    {
        const bool branch_taken_0x28e514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E514u;
            // 0x28e518: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e514) {
            ctx->pc = 0x28E53Cu;
            goto label_28e53c;
        }
    }
    ctx->pc = 0x28E51Cu;
label_28e51c:
    // 0x28e51c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e520:
    // 0x28e520: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x28e520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_28e524:
    // 0x28e524: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e528:
    // 0x28e528: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e52c:
    // 0x28e52c: 0xc0a5648  jal         func_295920
label_28e530:
    if (ctx->pc == 0x28E530u) {
        ctx->pc = 0x28E530u;
            // 0x28e530: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E534u;
        goto label_28e534;
    }
    ctx->pc = 0x28E52Cu;
    SET_GPR_U32(ctx, 31, 0x28E534u);
    ctx->pc = 0x28E530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E52Cu;
            // 0x28e530: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E534u; }
        if (ctx->pc != 0x28E534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E534u; }
        if (ctx->pc != 0x28E534u) { return; }
    }
    ctx->pc = 0x28E534u;
label_28e534:
    // 0x28e534: 0x10000003  b           . + 4 + (0x3 << 2)
label_28e538:
    if (ctx->pc == 0x28E538u) {
        ctx->pc = 0x28E538u;
            // 0x28e538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E53Cu;
        goto label_28e53c;
    }
    ctx->pc = 0x28E534u;
    {
        const bool branch_taken_0x28e534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E534u;
            // 0x28e538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e534) {
            ctx->pc = 0x28E544u;
            goto label_28e544;
        }
    }
    ctx->pc = 0x28E53Cu;
label_28e53c:
    // 0x28e53c: 0x40f809  jalr        $v0
label_28e540:
    if (ctx->pc == 0x28E540u) {
        ctx->pc = 0x28E544u;
        goto label_28e544;
    }
    ctx->pc = 0x28E53Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E544u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28E544u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28E544u; }
            if (ctx->pc != 0x28E544u) { return; }
        }
        }
    }
    ctx->pc = 0x28E544u;
label_28e544:
    // 0x28e544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e548:
    // 0x28e548: 0x3e00008  jr          $ra
label_28e54c:
    if (ctx->pc == 0x28E54Cu) {
        ctx->pc = 0x28E54Cu;
            // 0x28e54c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28E550u;
        goto label_fallthrough_0x28e548;
    }
    ctx->pc = 0x28E548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E548u;
            // 0x28e54c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28e548:
    ctx->pc = 0x28E550u;
    ctx->pc = 0x28e550u;
}
