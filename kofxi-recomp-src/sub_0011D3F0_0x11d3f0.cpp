#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011D3F0
// Address: 0x11d3f0 - 0x11d4a0
void sub_0011D3F0_0x11d3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D3F0_0x11d3f0");
#endif

    switch (ctx->pc) {
        case 0x11d438u: goto label_11d438;
        case 0x11d468u: goto label_11d468;
        case 0x11d490u: goto label_11d490;
        default: break;
    }

    ctx->pc = 0x11d3f0u;

    // 0x11d3f0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11d3f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3f4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x11d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11d3f8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x11d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11d3fc: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x11d3fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11d400: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x11d400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11d404: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11d404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11d408: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11d408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11d40c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11d40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11d410: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11d410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11d414: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11d414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d418: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11d418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11d41c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x11d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11d420: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D420u;
    {
        const bool branch_taken_0x11d420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D420u;
            // 0x11d424: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d420) {
            ctx->pc = 0x11D430u;
            goto label_11d430;
        }
    }
    ctx->pc = 0x11D428u;
    // 0x11d428: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11D428u;
    {
        const bool branch_taken_0x11d428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D428u;
            // 0x11d42c: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d428) {
            ctx->pc = 0x11D45Cu;
            goto label_11d45c;
        }
    }
    ctx->pc = 0x11D430u;
label_11d430:
    // 0x11d430: 0xc047472  jal         func_11D1C8
    ctx->pc = 0x11D430u;
    SET_GPR_U32(ctx, 31, 0x11D438u);
    ctx->pc = 0x11D434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D430u;
            // 0x11d434: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D1C8u;
    if (runtime->hasFunction(0x11D1C8u)) {
        auto targetFn = runtime->lookupFunction(0x11D1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D438u; }
        if (ctx->pc != 0x11D438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D1C8_0x11d1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D438u; }
        if (ctx->pc != 0x11D438u) { return; }
    }
    ctx->pc = 0x11D438u;
label_11d438:
    // 0x11d438: 0x93a30070  lbu         $v1, 0x70($sp)
    ctx->pc = 0x11d438u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11d43c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x11d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11d440: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D440u;
    {
        const bool branch_taken_0x11d440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D440u;
            // 0x11d444: 0x93a20070  lbu         $v0, 0x70($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d440) {
            ctx->pc = 0x11D45Cu;
            goto label_11d45c;
        }
    }
    ctx->pc = 0x11D448u;
    // 0x11d448: 0x93a30071  lbu         $v1, 0x71($sp)
    ctx->pc = 0x11d448u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 113)));
    // 0x11d44c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d450: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11D450u;
    {
        const bool branch_taken_0x11d450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D450u;
            // 0x11d454: 0x93a20070  lbu         $v0, 0x70($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d450) {
            ctx->pc = 0x11D45Cu;
            goto label_11d45c;
        }
    }
    ctx->pc = 0x11D458u;
    // 0x11d458: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x11d458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_11d45c:
    // 0x11d45c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11d45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11d460: 0x3e00008  jr          $ra
    ctx->pc = 0x11D460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D460u;
            // 0x11d464: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D468u;
label_11d468:
    // 0x11d468: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x11d468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x11d46c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D46Cu;
    {
        const bool branch_taken_0x11d46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D46Cu;
            // 0x11d470: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d46c) {
            ctx->pc = 0x11D490u;
            goto label_11d490;
        }
    }
    ctx->pc = 0x11D474u;
    // 0x11d474: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11d474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11d478: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11d478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11d47c: 0x2442b998  addiu       $v0, $v0, -0x4668
    ctx->pc = 0x11d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949272));
    // 0x11d480: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11d480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d484: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11d484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11d488: 0x804a7dc  j           func_129F70
    ctx->pc = 0x11D488u;
    ctx->pc = 0x11D48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D488u;
            // 0x11d48c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129F70_0x129f70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11D490u;
label_11d490:
    // 0x11d490: 0x9043b510  lbu         $v1, -0x4AF0($v0)
    ctx->pc = 0x11d490u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948112)));
    // 0x11d494: 0x3e00008  jr          $ra
    ctx->pc = 0x11D494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D494u;
            // 0x11d498: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D49Cu;
    // 0x11d49c: 0x0  nop
    ctx->pc = 0x11d49cu;
    // NOP
    ctx->pc = 0x11d4a0u;
}
