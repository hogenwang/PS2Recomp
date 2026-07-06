#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F0430
// Address: 0x1f0430 - 0x1f04a0
void sub_001F0430_0x1f0430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0430_0x1f0430");
#endif

    switch (ctx->pc) {
        case 0x1f0448u: goto label_1f0448;
        case 0x1f0458u: goto label_1f0458;
        case 0x1f0490u: goto label_1f0490;
        default: break;
    }

    ctx->pc = 0x1f0430u;

    // 0x1f0430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0434: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1f0434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f0438: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f0438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f043c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f043cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f0440: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F0440u;
    SET_GPR_U32(ctx, 31, 0x1F0448u);
    ctx->pc = 0x1F0444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0440u;
            // 0x1f0444: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0448u; }
        if (ctx->pc != 0x1F0448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0448u; }
        if (ctx->pc != 0x1F0448u) { return; }
    }
    ctx->pc = 0x1F0448u;
label_1f0448:
    // 0x1f0448: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F0448u;
    {
        const bool branch_taken_0x1f0448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F044Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0448u;
            // 0x1f044c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0448) {
            ctx->pc = 0x1F0490u;
            goto label_1f0490;
        }
    }
    ctx->pc = 0x1F0450u;
    // 0x1f0450: 0xc07b52a  jal         func_1ED4A8
    ctx->pc = 0x1F0450u;
    SET_GPR_U32(ctx, 31, 0x1F0458u);
    ctx->pc = 0x1ED4A8u;
    if (runtime->hasFunction(0x1ED4A8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED4A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0458u; }
        if (ctx->pc != 0x1F0458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED4A8_0x1ed4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0458u; }
        if (ctx->pc != 0x1F0458u) { return; }
    }
    ctx->pc = 0x1F0458u;
label_1f0458:
    // 0x1f0458: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f0458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f045c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f045cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0464: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0464u;
    {
        const bool branch_taken_0x1f0464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0464u;
            // 0x1f0468: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0464) {
            ctx->pc = 0x1F0480u;
            goto label_1f0480;
        }
    }
    ctx->pc = 0x1F046Cu;
    // 0x1f046c: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F046Cu;
    {
        const bool branch_taken_0x1f046c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1F0470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F046Cu;
            // 0x1f0470: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f046c) {
            ctx->pc = 0x1F0480u;
            goto label_1f0480;
        }
    }
    ctx->pc = 0x1F0474u;
    // 0x1f0474: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f0474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0478: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0478u;
    {
        const bool branch_taken_0x1f0478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F047Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0478u;
            // 0x1f047c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0478) {
            ctx->pc = 0x1F0494u;
            goto label_1f0494;
        }
    }
    ctx->pc = 0x1F0480u;
label_1f0480:
    // 0x1f0480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0484: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f0484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0488: 0x807bf88  j           func_1EFE20
    ctx->pc = 0x1F0488u;
    ctx->pc = 0x1F048Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0488u;
            // 0x1f048c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE20u;
    {
        auto targetFn = runtime->lookupFunction(0x1EFE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1F0490u;
label_1f0490:
    // 0x1f0490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0494:
    // 0x1f0494: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f0494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0498: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F049Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0498u;
            // 0x1f049c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F04A0u;
    ctx->pc = 0x1f04a0u;
}
