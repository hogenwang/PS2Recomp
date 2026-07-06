#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FE0D0
// Address: 0x2fe0d0 - 0x2fe150
void sub_002FE0D0_0x2fe0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE0D0_0x2fe0d0");
#endif

    switch (ctx->pc) {
        case 0x2fe0e8u: goto label_2fe0e8;
        case 0x2fe12cu: goto label_2fe12c;
        case 0x2fe140u: goto label_2fe140;
        default: break;
    }

    ctx->pc = 0x2fe0d0u;

    // 0x2fe0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fe0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fe0d4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2fe0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2fe0d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fe0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fe0dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe0e0: 0xc0691d0  jal         func_1A4740
    ctx->pc = 0x2FE0E0u;
    SET_GPR_U32(ctx, 31, 0x2FE0E8u);
    ctx->pc = 0x2FE0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE0E0u;
            // 0x2fe0e4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4740u;
    if (runtime->hasFunction(0x1A4740u)) {
        auto targetFn = runtime->lookupFunction(0x1A4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE0E8u; }
        if (ctx->pc != 0x2FE0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4740_0x1a4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE0E8u; }
        if (ctx->pc != 0x2FE0E8u) { return; }
    }
    ctx->pc = 0x2FE0E8u;
label_2fe0e8:
    // 0x2fe0e8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE0E8u;
    {
        const bool branch_taken_0x2fe0e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe0e8) {
            ctx->pc = 0x2FE0FCu;
            goto label_2fe0fc;
        }
    }
    ctx->pc = 0x2FE0F0u;
    // 0x2fe0f0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe0f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE0F4u;
    {
        const bool branch_taken_0x2fe0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE0F4u;
            // 0x2fe0f8: 0xac50be80  sw          $s0, -0x4180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe0f4) {
            ctx->pc = 0x2FE10Cu;
            goto label_2fe10c;
        }
    }
    ctx->pc = 0x2FE0FCu;
label_2fe0fc:
    // 0x2fe0fc: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2fe0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2fe100: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe104: 0x2463da10  addiu       $v1, $v1, -0x25F0
    ctx->pc = 0x2fe104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957584));
    // 0x2fe108: 0xac43be80  sw          $v1, -0x4180($v0)
    ctx->pc = 0x2fe108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
label_2fe10c:
    // 0x2fe10c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2fe10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2fe110: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2fe110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2fe114: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x2fe114u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x2fe118: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE118u;
    {
        const bool branch_taken_0x2fe118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fe118) {
            ctx->pc = 0x2FE134u;
            goto label_2fe134;
        }
    }
    ctx->pc = 0x2FE120u;
    // 0x2fe120: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fe120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fe124: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FE124u;
    SET_GPR_U32(ctx, 31, 0x2FE12Cu);
    ctx->pc = 0x2FE128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE124u;
            // 0x2fe128: 0x2484db40  addiu       $a0, $a0, -0x24C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE12Cu; }
        if (ctx->pc != 0x2FE12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE12Cu; }
        if (ctx->pc != 0x2FE12Cu) { return; }
    }
    ctx->pc = 0x2FE12Cu;
label_2fe12c:
    // 0x2fe12c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE12Cu;
    {
        const bool branch_taken_0x2fe12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE12Cu;
            // 0x2fe130: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe12c) {
            ctx->pc = 0x2FE144u;
            goto label_2fe144;
        }
    }
    ctx->pc = 0x2FE134u;
label_2fe134:
    // 0x2fe134: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fe134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fe138: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FE138u;
    SET_GPR_U32(ctx, 31, 0x2FE140u);
    ctx->pc = 0x2FE13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE138u;
            // 0x2fe13c: 0x2484dca0  addiu       $a0, $a0, -0x2360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE140u; }
        if (ctx->pc != 0x2FE140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE140u; }
        if (ctx->pc != 0x2FE140u) { return; }
    }
    ctx->pc = 0x2FE140u;
label_2fe140:
    // 0x2fe140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fe140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fe144:
    // 0x2fe144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe148: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE148u;
            // 0x2fe14c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE150u;
    ctx->pc = 0x2fe150u;
}
