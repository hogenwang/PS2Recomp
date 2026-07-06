#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00198140
// Address: 0x198140 - 0x198200
void sub_00198140_0x198140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198140_0x198140");
#endif

    switch (ctx->pc) {
        case 0x198184u: goto label_198184;
        case 0x1981b0u: goto label_1981b0;
        case 0x1981bcu: goto label_1981bc;
        default: break;
    }

    ctx->pc = 0x198140u;

    // 0x198140: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x198140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x198144: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x198144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x198148: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x198148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19814c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19814cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198150: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x198150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x198154: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x198154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x198158: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x198158u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19815c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19815cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x198160: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x198160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198164: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x198164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198168: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x198168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19816c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x19816cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x198170: 0x2484ca40  addiu       $a0, $a0, -0x35C0
    ctx->pc = 0x198170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953536));
    // 0x198174: 0x24a5e910  addiu       $a1, $a1, -0x16F0
    ctx->pc = 0x198174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961424));
    // 0x198178: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x198178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x19817c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x19817Cu;
    SET_GPR_U32(ctx, 31, 0x198184u);
    ctx->pc = 0x198180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19817Cu;
            // 0x198180: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198184u; }
        if (ctx->pc != 0x198184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198184u; }
        if (ctx->pc != 0x198184u) { return; }
    }
    ctx->pc = 0x198184u;
label_198184:
    // 0x198184: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x198184u;
    {
        const bool branch_taken_0x198184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198184) {
            ctx->pc = 0x198188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198184u;
            // 0x198188: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198198u;
            goto label_198198;
        }
    }
    ctx->pc = 0x19818Cu;
    // 0x19818c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x19818cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x198190: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x198190u;
    {
        const bool branch_taken_0x198190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198190u;
            // 0x198194: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198190) {
            ctx->pc = 0x1981D8u;
            goto label_1981d8;
        }
    }
    ctx->pc = 0x198198u;
label_198198:
    // 0x198198: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19819c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x19819cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1981a0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1981a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1981a4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1981a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1981a8: 0xc067d64  jal         func_19F590
    ctx->pc = 0x1981A8u;
    SET_GPR_U32(ctx, 31, 0x1981B0u);
    ctx->pc = 0x1981ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1981A8u;
            // 0x1981ac: 0xa200002c  sb          $zero, 0x2C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F590u;
    if (runtime->hasFunction(0x19F590u)) {
        auto targetFn = runtime->lookupFunction(0x19F590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1981B0u; }
        if (ctx->pc != 0x1981B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F590_0x19f590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1981B0u; }
        if (ctx->pc != 0x1981B0u) { return; }
    }
    ctx->pc = 0x1981B0u;
label_1981b0:
    // 0x1981b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1981b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1981b4: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1981B4u;
    SET_GPR_U32(ctx, 31, 0x1981BCu);
    ctx->pc = 0x1981B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1981B4u;
            // 0x1981b8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1981BCu; }
        if (ctx->pc != 0x1981BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1981BCu; }
        if (ctx->pc != 0x1981BCu) { return; }
    }
    ctx->pc = 0x1981BCu;
label_1981bc:
    // 0x1981bc: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1981BCu;
    {
        const bool branch_taken_0x1981bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1981BCu;
            // 0x1981c0: 0xae110024  sw          $s1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981bc) {
            ctx->pc = 0x1981D4u;
            goto label_1981d4;
        }
    }
    ctx->pc = 0x1981C4u;
    // 0x1981c4: 0xae120028  sw          $s2, 0x28($s0)
    ctx->pc = 0x1981c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
    // 0x1981c8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1981c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1981cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1981CCu;
    {
        const bool branch_taken_0x1981cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1981CCu;
            // 0x1981d0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981cc) {
            ctx->pc = 0x1981D8u;
            goto label_1981d8;
        }
    }
    ctx->pc = 0x1981D4u;
label_1981d4:
    // 0x1981d4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1981d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1981d8:
    // 0x1981d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1981d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1981dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1981dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1981e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1981e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1981e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1981e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1981e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1981e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1981ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1981ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1981F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1981ECu;
            // 0x1981f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1981F4u;
    // 0x1981f4: 0x0  nop
    ctx->pc = 0x1981f4u;
    // NOP
    // 0x1981f8: 0x0  nop
    ctx->pc = 0x1981f8u;
    // NOP
    // 0x1981fc: 0x0  nop
    ctx->pc = 0x1981fcu;
    // NOP
    ctx->pc = 0x198200u;
}
