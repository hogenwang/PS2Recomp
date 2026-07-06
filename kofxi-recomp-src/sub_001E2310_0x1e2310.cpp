#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2310
// Address: 0x1e2310 - 0x1e2398
void sub_001E2310_0x1e2310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2310_0x1e2310");
#endif

    switch (ctx->pc) {
        case 0x1e2318u: goto label_1e2318;
        case 0x1e2334u: goto label_1e2334;
        case 0x1e2360u: goto label_1e2360;
        case 0x1e2378u: goto label_1e2378;
        default: break;
    }

    ctx->pc = 0x1e2310u;

    // 0x1e2310: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2318u;
label_1e2318:
    // 0x1e2318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e231c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e231cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e2320: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e2320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2324: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e2324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e2328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e232c: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E232Cu;
    SET_GPR_U32(ctx, 31, 0x1E2334u);
    ctx->pc = 0x1E2330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E232Cu;
            // 0x1e2330: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2334u; }
        if (ctx->pc != 0x1E2334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2334u; }
        if (ctx->pc != 0x1E2334u) { return; }
    }
    ctx->pc = 0x1E2334u;
label_1e2334:
    // 0x1e2334: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e2334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e2338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e233c: 0x2484d478  addiu       $a0, $a0, -0x2B88
    ctx->pc = 0x1e233cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956152));
    // 0x1e2340: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e2340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2344: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2344u;
    {
        const bool branch_taken_0x1e2344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E2348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2344u;
            // 0x1e2348: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2344) {
            ctx->pc = 0x1E2360u;
            goto label_1e2360;
        }
    }
    ctx->pc = 0x1E234Cu;
    // 0x1e234c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e234cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2354: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2358: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E2358u;
    ctx->pc = 0x1E235Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2358u;
            // 0x1e235c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E2360u;
label_1e2360:
    // 0x1e2360: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x1e2360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1e2364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e236c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e236cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2370: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E2370u;
    ctx->pc = 0x1E2374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2370u;
            // 0x1e2374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    if (runtime->hasFunction(0x1FAD00u)) {
        auto targetFn = runtime->lookupFunction(0x1FAD00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E2378u;
label_1e2378:
    // 0x1e2378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e237c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e237cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2384: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1e2384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e2388: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1e2388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e238c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e238cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2390: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E2390u;
    ctx->pc = 0x1E2394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2390u;
            // 0x1e2394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    if (runtime->hasFunction(0x1FAD00u)) {
        auto targetFn = runtime->lookupFunction(0x1FAD00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E2398u;
    ctx->pc = 0x1e2398u;
}
