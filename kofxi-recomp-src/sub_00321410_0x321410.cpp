#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00321410
// Address: 0x321410 - 0x321490
void sub_00321410_0x321410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321410_0x321410");
#endif

    switch (ctx->pc) {
        case 0x321448u: goto label_321448;
        case 0x321454u: goto label_321454;
        case 0x321460u: goto label_321460;
        case 0x32146cu: goto label_32146c;
        default: break;
    }

    ctx->pc = 0x321410u;

    // 0x321410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x321410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x321414: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x321414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x321418: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x321418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32141c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32141cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x321420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x321420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x321424: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x321424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x321428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32142c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x32142cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x321430: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x321430u;
    {
        const bool branch_taken_0x321430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x321434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321430u;
            // 0x321434: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321430) {
            ctx->pc = 0x32143Cu;
            goto label_32143c;
        }
    }
    ctx->pc = 0x321438u;
    // 0x321438: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x321438u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
label_32143c:
    // 0x32143c: 0x92500001  lbu         $s0, 0x1($s2)
    ctx->pc = 0x32143cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x321440: 0xc063a98  jal         func_18EA60
    ctx->pc = 0x321440u;
    SET_GPR_U32(ctx, 31, 0x321448u);
    ctx->pc = 0x321444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321440u;
            // 0x321444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EA60u;
    if (runtime->hasFunction(0x18EA60u)) {
        auto targetFn = runtime->lookupFunction(0x18EA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321448u; }
        if (ctx->pc != 0x321448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018EA60_0x18ea60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321448u; }
        if (ctx->pc != 0x321448u) { return; }
    }
    ctx->pc = 0x321448u;
label_321448:
    // 0x321448: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x321448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x32144c: 0xc04bb40  jal         func_12ED00
    ctx->pc = 0x32144Cu;
    SET_GPR_U32(ctx, 31, 0x321454u);
    ctx->pc = 0x321450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32144Cu;
            // 0x321450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ED00u;
    if (runtime->hasFunction(0x12ED00u)) {
        auto targetFn = runtime->lookupFunction(0x12ED00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321454u; }
        if (ctx->pc != 0x321454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012ED00_0x12ed00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321454u; }
        if (ctx->pc != 0x321454u) { return; }
    }
    ctx->pc = 0x321454u;
label_321454:
    // 0x321454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321458: 0xc058c54  jal         func_163150
    ctx->pc = 0x321458u;
    SET_GPR_U32(ctx, 31, 0x321460u);
    ctx->pc = 0x32145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321458u;
            // 0x32145c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x163150u;
    if (runtime->hasFunction(0x163150u)) {
        auto targetFn = runtime->lookupFunction(0x163150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321460u; }
        if (ctx->pc != 0x321460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00163150_0x163150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321460u; }
        if (ctx->pc != 0x321460u) { return; }
    }
    ctx->pc = 0x321460u;
label_321460:
    // 0x321460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321464: 0xc058c54  jal         func_163150
    ctx->pc = 0x321464u;
    SET_GPR_U32(ctx, 31, 0x32146Cu);
    ctx->pc = 0x321468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321464u;
            // 0x321468: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x163150u;
    if (runtime->hasFunction(0x163150u)) {
        auto targetFn = runtime->lookupFunction(0x163150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32146Cu; }
        if (ctx->pc != 0x32146Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00163150_0x163150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32146Cu; }
        if (ctx->pc != 0x32146Cu) { return; }
    }
    ctx->pc = 0x32146Cu;
label_32146c:
    // 0x32146c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32146cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321470: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321474: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x321474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321478: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x321478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32147c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32147cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321480: 0x3e00008  jr          $ra
    ctx->pc = 0x321480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321480u;
            // 0x321484: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x321488u;
    // 0x321488: 0x0  nop
    ctx->pc = 0x321488u;
    // NOP
    // 0x32148c: 0x0  nop
    ctx->pc = 0x32148cu;
    // NOP
    ctx->pc = 0x321490u;
}
