#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00269428
// Address: 0x269428 - 0x2694d8
void sub_00269428_0x269428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269428_0x269428");
#endif

    switch (ctx->pc) {
        case 0x269450u: goto label_269450;
        case 0x269458u: goto label_269458;
        case 0x269464u: goto label_269464;
        case 0x269478u: goto label_269478;
        case 0x26948cu: goto label_26948c;
        case 0x2694a0u: goto label_2694a0;
        case 0x2694b4u: goto label_2694b4;
        case 0x2694c8u: goto label_2694c8;
        default: break;
    }

    ctx->pc = 0x269428u;

    // 0x269428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26942c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x269430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x269430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269434: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x269434u;
    {
        const bool branch_taken_0x269434 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x269438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269434u;
            // 0x269438: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269434) {
            ctx->pc = 0x2694C8u;
            goto label_2694c8;
        }
    }
    ctx->pc = 0x26943Cu;
    // 0x26943c: 0x8e0401b0  lw          $a0, 0x1B0($s0)
    ctx->pc = 0x26943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x269440: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269440u;
    {
        const bool branch_taken_0x269440 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x269440) {
            ctx->pc = 0x269444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269440u;
            // 0x269444: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x269454u;
            goto label_269454;
        }
    }
    ctx->pc = 0x269448u;
    // 0x269448: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x269448u;
    SET_GPR_U32(ctx, 31, 0x269450u);
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269450u; }
        if (ctx->pc != 0x269450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269450u; }
        if (ctx->pc != 0x269450u) { return; }
    }
    ctx->pc = 0x269450u;
label_269450:
    // 0x269450: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x269450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_269454:
    // 0x269454: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_269458:
    if (ctx->pc == 0x269458u) {
        ctx->pc = 0x269458u;
            // 0x269458: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x26945Cu;
        goto label_fallthrough_0x269454;
    }
    ctx->pc = 0x269454u;
    {
        const bool branch_taken_0x269454 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x269454) {
            ctx->pc = 0x269458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269454u;
            // 0x269458: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x269468u;
            goto label_269468;
        }
    }
label_fallthrough_0x269454:
    ctx->pc = 0x26945Cu;
    // 0x26945c: 0xc09807e  jal         func_2601F8
    ctx->pc = 0x26945Cu;
    SET_GPR_U32(ctx, 31, 0x269464u);
    ctx->pc = 0x2601F8u;
    if (runtime->hasFunction(0x2601F8u)) {
        auto targetFn = runtime->lookupFunction(0x2601F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269464u; }
        if (ctx->pc != 0x269464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002601F8_0x2601f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269464u; }
        if (ctx->pc != 0x269464u) { return; }
    }
    ctx->pc = 0x269464u;
label_269464:
    // 0x269464: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x269464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_269468:
    // 0x269468: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269468u;
    {
        const bool branch_taken_0x269468 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x269468) {
            ctx->pc = 0x26946Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269468u;
            // 0x26946c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26947Cu;
            goto label_26947c;
        }
    }
    ctx->pc = 0x269470u;
    // 0x269470: 0xc09807e  jal         func_2601F8
    ctx->pc = 0x269470u;
    SET_GPR_U32(ctx, 31, 0x269478u);
    ctx->pc = 0x2601F8u;
    if (runtime->hasFunction(0x2601F8u)) {
        auto targetFn = runtime->lookupFunction(0x2601F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269478u; }
        if (ctx->pc != 0x269478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002601F8_0x2601f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269478u; }
        if (ctx->pc != 0x269478u) { return; }
    }
    ctx->pc = 0x269478u;
label_269478:
    // 0x269478: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x269478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_26947c:
    // 0x26947c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26947Cu;
    {
        const bool branch_taken_0x26947c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26947c) {
            ctx->pc = 0x269480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26947Cu;
            // 0x269480: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x269490u;
            goto label_269490;
        }
    }
    ctx->pc = 0x269484u;
    // 0x269484: 0xc098560  jal         func_261580
    ctx->pc = 0x269484u;
    SET_GPR_U32(ctx, 31, 0x26948Cu);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26948Cu; }
        if (ctx->pc != 0x26948Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26948Cu; }
        if (ctx->pc != 0x26948Cu) { return; }
    }
    ctx->pc = 0x26948Cu;
label_26948c:
    // 0x26948c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x26948cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_269490:
    // 0x269490: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x269490u;
    {
        const bool branch_taken_0x269490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269490) {
            ctx->pc = 0x269494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x269490u;
            // 0x269494: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2694A4u;
            goto label_2694a4;
        }
    }
    ctx->pc = 0x269498u;
    // 0x269498: 0xc098560  jal         func_261580
    ctx->pc = 0x269498u;
    SET_GPR_U32(ctx, 31, 0x2694A0u);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2694A0u; }
        if (ctx->pc != 0x2694A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2694A0u; }
        if (ctx->pc != 0x2694A0u) { return; }
    }
    ctx->pc = 0x2694A0u;
label_2694a0:
    // 0x2694a0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2694a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2694a4:
    // 0x2694a4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2694A4u;
    {
        const bool branch_taken_0x2694a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2694a4) {
            ctx->pc = 0x2694A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2694A4u;
            // 0x2694a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2694B8u;
            goto label_2694b8;
        }
    }
    ctx->pc = 0x2694ACu;
    // 0x2694ac: 0xc098560  jal         func_261580
    ctx->pc = 0x2694ACu;
    SET_GPR_U32(ctx, 31, 0x2694B4u);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2694B4u; }
        if (ctx->pc != 0x2694B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2694B4u; }
        if (ctx->pc != 0x2694B4u) { return; }
    }
    ctx->pc = 0x2694B4u;
label_2694b4:
    // 0x2694b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2694b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2694b8:
    // 0x2694b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2694b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2694bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2694bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2694c0: 0x8098560  j           func_261580
    ctx->pc = 0x2694C0u;
    ctx->pc = 0x2694C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2694C0u;
            // 0x2694c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00261580_0x261580(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2694C8u;
label_2694c8:
    // 0x2694c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2694c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2694cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2694ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2694d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2694D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2694D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2694D0u;
            // 0x2694d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2694D8u;
    ctx->pc = 0x2694d8u;
}
